
"use strict";

let IsRunningTrajectory = require('./IsRunningTrajectory.js')
let SwitchToAutomatic = require('./SwitchToAutomatic.js')
let InitWaypointSet = require('./InitWaypointSet.js')
let GetWaypoints = require('./GetWaypoints.js')
let GoTo = require('./GoTo.js')
let GetMBSMControllerParams = require('./GetMBSMControllerParams.js')
let ResetController = require('./ResetController.js')
let GetSMControllerParams = require('./GetSMControllerParams.js')
let AddWaypoint = require('./AddWaypoint.js')
let GoToIncremental = require('./GoToIncremental.js')
let SetSMControllerParams = require('./SetSMControllerParams.js')
let InitRectTrajectory = require('./InitRectTrajectory.js')
let Hold = require('./Hold.js')
let GetPIDParams = require('./GetPIDParams.js')
let SetMBSMControllerParams = require('./SetMBSMControllerParams.js')
let ClearWaypoints = require('./ClearWaypoints.js')
let InitWaypointsFromFile = require('./InitWaypointsFromFile.js')
let SetPIDParams = require('./SetPIDParams.js')
let SwitchToManual = require('./SwitchToManual.js')
let InitCircularTrajectory = require('./InitCircularTrajectory.js')
let InitHelicalTrajectory = require('./InitHelicalTrajectory.js')
let StartTrajectory = require('./StartTrajectory.js')

module.exports = {
  IsRunningTrajectory: IsRunningTrajectory,
  SwitchToAutomatic: SwitchToAutomatic,
  InitWaypointSet: InitWaypointSet,
  GetWaypoints: GetWaypoints,
  GoTo: GoTo,
  GetMBSMControllerParams: GetMBSMControllerParams,
  ResetController: ResetController,
  GetSMControllerParams: GetSMControllerParams,
  AddWaypoint: AddWaypoint,
  GoToIncremental: GoToIncremental,
  SetSMControllerParams: SetSMControllerParams,
  InitRectTrajectory: InitRectTrajectory,
  Hold: Hold,
  GetPIDParams: GetPIDParams,
  SetMBSMControllerParams: SetMBSMControllerParams,
  ClearWaypoints: ClearWaypoints,
  InitWaypointsFromFile: InitWaypointsFromFile,
  SetPIDParams: SetPIDParams,
  SwitchToManual: SwitchToManual,
  InitCircularTrajectory: InitCircularTrajectory,
  InitHelicalTrajectory: InitHelicalTrajectory,
  StartTrajectory: StartTrajectory,
};
