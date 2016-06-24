params ["_obj", "", "", "", "_ammo", "", "_proj"];
// dafug what Project Fly over 4 km that use Tracer
if (((positionCameraToWorld [0,0,0]) distance _obj) > 4000) exitWith {};

// fall back if Projectile is Null
if (isNull _proj) then {
    _proj = nearestObject [_obj,_ammo];
    _this set [6, _proj];
};

// check if Projectile is a Tracer Projectile
if !(_this call JK_Tracer_fnc_isTracer) exitWith {};

private _params = _ammo call JK_Tracer_fnc_getTracerData;
diag_log _params;
_params params ["_tracerScale", "_tracerStartTime", "_tracerEndTime", "_tracerColor", "_nvgOnly"];

if (_nvgOnly == 1) then {_tracerColor = [0.05,0.05,0.05,0.9]};

private _tracerAlpha = _tracerColor select 3;
_tracerColor resize 3;

private _amb = _tracerScale * 0.007;

if (_tracerStartTime >= 0) then {

    diag_log "Create Light Source";
    private _light = "#lightpoint" createVehicleLocal (getPos _proj);
    _light lightAttachObject [_proj, [0, 0, 0]];
    _light setLightColor _tracerColor;
    _light setLightAmbient [
        (_tracerColor select 0)*_amb,
        (_tracerColor select 1)*_amb,
        (_tracerColor select 2)*_amb
    ];

    if (_tracerStartTime > 0.05) then {
        _light setLightBrightness 0;
    } else {
        private _tracerBrightness = 0.06 - 0.005 + random(0.01);
        _light setLightBrightness (_tracerScale * _tracerBrightness * _tracerAlpha * 0.65) * 250;
        diag_log (_tracerScale * _tracerBrightness * _tracerAlpha * 0.65) * 250;
    };

    _params set [4, _tracerAlpha];

    [JK_Tracer_fnc_deleteLight, [_proj, _light, _params, time], _startTime] call CBA_fnc_waitAndExecute;

};
