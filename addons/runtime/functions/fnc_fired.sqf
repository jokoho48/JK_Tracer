#include "script_component.hpp"

params ["", "_weapon", "", "", "_ammo", "", "_proj"];
if (toLower(_weapon) in ["put", "throw"]) exitWith {};
if (_name isKindOf "BulletCore" || _name isKindOf "ShellCore" || _name isKindOf "SubmunitionCore") exitWith {};
// dafug what Project Fly over 4 km that use Tracer
if (((positionCameraToWorld [0,0,0]) distance _proj) > 4000) exitWith {};

if (GVAR(AmbientData) >= 0.83) exitWith {};

// fall back if Projectile is Null
if (isNull _proj) then {
    _proj = nearestObject [_proj,_ammo];
    _this set [6, _proj];
};

// check if Projectile is a Tracer Projectile
if !(_this call FUNC(isTracer)) exitWith {};

private _params = _ammo call FUNC(getTracerData);
_params params ["_tracerScale", "_tracerStartTime", "_tracerEndTime", "_tracerColor", "_nvgOnly"];

if (_nvgOnly == 1) then {_tracerColor = [0.05,0.05,0.05,0.45]};

private _tracerAlpha = _tracerColor select 3;
_tracerColor = +_tracerColor;// fuck that i need to find a better method for this
_tracerColor resize 3;

private _amb = _tracerScale * 0.01;
if (_tracerStartTime >= 0) then {

    private _light = "#lightpoint" createVehicleLocal (getPos _proj);
    _light lightAttachObject [_proj, [0, 0, 0]];
    _light setLightColor _tracerColor;
    _light setLightAmbient [
        (_tracerColor select 0) * _amb,
        (_tracerColor select 1) * _amb,
        (_tracerColor select 2) * _amb
    ];

    GVAR(allTracer) pushBack [_light, _proj];
    if (_tracerStartTime > 0.05) then {
        _light setLightBrightness 0;
    } else {
        private _tracerBrightness = 0.06 - 0.005 + random (0.001);
        _light setLightBrightness (_tracerScale * _tracerBrightness * _tracerAlpha * 0.65) * 250;
    };

    _params set [4, _tracerAlpha];

    [FUNC(deleteLight), [_proj, _light, _params, time], _tracerStartTime] call CBA_fnc_waitAndExecute;

};
