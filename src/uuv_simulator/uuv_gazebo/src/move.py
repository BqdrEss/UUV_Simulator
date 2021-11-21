#!/usr/bin/env python

from __future__ import print_function

import threading

import roslib;
import rospy

from geometry_msgs.msg import Wrench, WrenchStamped, Vector3

import sys, select, termios, tty

msg = """
Reading from the keyboard  and Publishing to Wrench!
---------------------------
Moving around:
   u    i    o
   j    k    l
   m    ,    .
For Holonomic mode (strafing), hold down the shift key:
---------------------------
   U    I    O
   J    K    L
   M    <    >
t : up (+z)
b : down (-z)
anything else : stop
q/z : increase/decrease max speeds by 10%
w/x : increase/decrease only linear speed by 10%
e/c : increase/decrease only angular speed by 10%
CTRL-C to quit
"""

moveBindings = {
        'i':(1,0,0,0),
        'o':(1,0,0,-1),
        'j':(0,0,0,1),
        'l':(0,0,0,-1),
        'u':(1,0,0,1),
        ',':(-1,0,0,0),
        '.':(-1,0,0,1),
        'm':(-1,0,0,-1),
        'O':(1,-1,0,0),
        'I':(1,0,0,0),
        'J':(0,1,0,0),
        'L':(0,-1,0,0),
        'U':(1,1,0,0),
        '<':(-1,0,0,0),
        '>':(-1,-1,0,0),
        'M':(-1,1,0,0),
        't':(0,0,1,0),
        'b':(0,0,-1,0),
    }

speedBindings={
        'q':(1.1,1.1),
        'z':(.9,.9),
        'w':(1.1,1),
        'x':(.9,1),
        'e':(1,1.1),
        'c':(1,.9),
    }

class PublishThread(threading.Thread):
    def __init__(self, rate):
        super(PublishThread, self).__init__()
        #rospy.init_node('Control', anonymous=True)
        self.publisher = rospy.Publisher('/rexrov/thruster_manager/input', Wrench, queue_size = 1)
        self.x = 0.0
        self.y = 0.0
        self.z = 0.0
        self.th = 0.0
        self.speed = 0.0
        self.turn = 0.0
        self.condition = threading.Condition()
        self.done = False

        # Set timeout to None if rate is 0 (causes new_message to wait forever
        # for new data to publish)
        if rate != 0.0:
            self.timeout = 1.0 / rate
        else:
            self.timeout = None

        self.start()

##    def wait_for_subscribers(self):
##        i = 0
##        while not rospy.is_shutdown() and self.publisher.get_num_connections() == 0:
##            if i == 4:
##                print("Waiting for subscriber to connect to {}".format(self.publisher.name))
##            rospy.sleep(0.5)
##            i += 1
##            i = i % 5
##        if rospy.is_shutdown():
##            raise Exception("Got shutdown request before subscribers connected")

    def update(self, x, y, z, th, speed, turn):
        self.condition.acquire()
        self.x = x
        self.y = y
        self.z = z
        self.th = th
        self.speed = speed
        self.turn = turn
        # Notify publish thread that we have a new message.
        self.condition.notify()
        self.condition.release()

    def stop(self):
        self.done = True
        self.update(0, 0, 0, 0, 0, 0)
        self.join()

    def run(self):
        wrench = WrenchStamped()
        wrench.wrench = Wrench()
        wrench.wrench.force = Vector3()
        wrench.wrench.torque = Vector3()

        while not self.done:
            self.condition.acquire()
            # Wait for a new message or timeout.
            self.condition.wait(self.timeout)


            
            # Copy state into twist message.
            wrench.wrench.force.x = float(self.x)
            wrench.wrench.force.y = float(self.y)
            wrench.wrench.force.z = float(0)
            wrench.wrench.torque.x = 0
            wrench.wrench.torque.y = 0
            wrench.wrench.torque.z = float(self.th * self.turn)
            
            rospy.loginfo
            wrench.header.seq = 0
            #wrench.header.frame_id = '/base_link'
            wrench.header.stamp = rospy.Time.now()

            rospy.loginfo("Debug output: %f \n", wrench.wrench.force.x)
            rospy.loginfo("Debug output: %f \n", wrench.wrench.force.y)
            rospy.loginfo("Debug output: %f \n", wrench.wrench.force.z)

            # Publish.
            self.publisher.publish(wrench.wrench)

        # Publish stop message when thread exits.
        wrench.wrench.force.x  =0
        wrench.wrench.force.y =0
        wrench.wrench.force.z =0
        wrench.wrench.torque =0
        wrench.wrench.torque =0
        wrench.wrench.torque =0
        self.publisher.publish(wrench.wrench)


def getKey(key_timeout):
    tty.setraw(sys.stdin.fileno())
    rlist, _, _ = select.select([sys.stdin], [], [], key_timeout)
    if rlist:
        key = sys.stdin.read(1)
    else:
        key = ''
    termios.tcsetattr(sys.stdin, termios.TCSADRAIN, settings)
    return key


def vels(speed, turn):
    return "currently:\tspeed %s\tturn %s " % (speed,turn)

if __name__=="__main__":
    settings = termios.tcgetattr(sys.stdin)

    rospy.init_node('teleop_twist_keyboard')

    speed = rospy.get_param("~speed", 0.5)
    turn = rospy.get_param("~turn", 1.0)
    repeat = rospy.get_param("~repeat_rate", 0.0)
    key_timeout = rospy.get_param("~key_timeout", 0.0)
    if key_timeout == 0.0:
        key_timeout = None

    pub_thread = PublishThread(repeat)

    x = 0
    y = 0
    z = 0
    th = 0
    status = 0

    try:
        #pub_thread.wait_for_subscribers()
        pub_thread.update(x, y, z, th, speed, turn)

        print(msg)
        print(vels(speed,turn))
        while(1):
            key = getKey(key_timeout)
            if key in moveBindings.keys():
                x = moveBindings[key][0]
                y = moveBindings[key][1]
                z = moveBindings[key][2]
                th = moveBindings[key][3]
            elif key in speedBindings.keys():
                speed = speed * speedBindings[key][0]
                turn = turn * speedBindings[key][1]

                print(vels(speed,turn))
                if (status == 14):
                    print(msg)
                status = (status + 1) % 15
            else:
                # Skip updating cmd_vel if key timeout and robot already
                # stopped.
                if key == '' and x == 0 and y == 0 and z == 0 and th == 0:
                    continue
                x = 0
                y = 0
                z = 0
                th = 0
                if (key == '\x03'):
                    break
 
            pub_thread.update(x, y, z, th, speed, turn)

    except Exception as e:
        print(e)

    finally:
        pub_thread.stop()

        termios.tcsetattr(sys.stdin, termios.TCSADRAIN, settings)
