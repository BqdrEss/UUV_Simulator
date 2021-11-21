
"use strict";

let GetOriginSphericalCoord = require('./GetOriginSphericalCoord.js')
let GetCurrentModel = require('./GetCurrentModel.js')
let SetOriginSphericalCoord = require('./SetOriginSphericalCoord.js')
let SetCurrentVelocity = require('./SetCurrentVelocity.js')
let SetCurrentDirection = require('./SetCurrentDirection.js')
let TransformToSphericalCoord = require('./TransformToSphericalCoord.js')
let SetCurrentModel = require('./SetCurrentModel.js')
let TransformFromSphericalCoord = require('./TransformFromSphericalCoord.js')

module.exports = {
  GetOriginSphericalCoord: GetOriginSphericalCoord,
  GetCurrentModel: GetCurrentModel,
  SetOriginSphericalCoord: SetOriginSphericalCoord,
  SetCurrentVelocity: SetCurrentVelocity,
  SetCurrentDirection: SetCurrentDirection,
  TransformToSphericalCoord: TransformToSphericalCoord,
  SetCurrentModel: SetCurrentModel,
  TransformFromSphericalCoord: TransformFromSphericalCoord,
};
