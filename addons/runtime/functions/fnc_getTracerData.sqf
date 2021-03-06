#include "script_component.hpp"

params ["_ammo"];

private _varName = QGVAR(TracerData_) + _ammo;

private _return = GVAR(configCache) getVariable _varName;

if (isNil "_return") then {
    private _ammoConfig = (configFile >> "CfgAmmo" >> _ammo);
    private _tracerScale = 1;
    if (isNumber (_ammoConfig >> "tracerScale")) then {
        _tracerScale = getNumber (_ammoConfig >> "tracerScale");
    };
    private _tracerStartTime = 0.05;
    if (isNumber (_ammoConfig >> "tracerStartTime")) then {
        _tracerStartTime = getNumber (_ammoConfig >> "tracerStartTime");
    };
    private _tracerEndTime = 1;
    if (isNumber (_ammoConfig >> "tracerEndTime")) then {
        _tracerEndTime = getNumber (_ammoConfig >> "tracerEndTime");
    };
    private _tracerColor = [0, 1, 0, 0];
    if (isArray (_ammoConfig >> "tracerLightColor")) then {
        _tracerColor = getArray (_ammoConfig >> "tracerLightColor");
    };
    private _nvgOnly = 0;
    if (isNumber (_ammoConfig >> "nvgOnly")) then {
        _nvgOnly = getNumber (_ammoConfig >> "nvgOnly");
    };
    _return = [_tracerScale, _tracerStartTime, _tracerEndTime, _tracerColor, _nvgOnly];
    GVAR(configCache) setVariable [_varName, _return];
};
_return
