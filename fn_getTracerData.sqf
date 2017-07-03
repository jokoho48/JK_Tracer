params ["_ammo"];

private _varName = "JK_Tracer_TracerData_" + _ammo;

private _return = JK_Tracer_configCache getVariable _varName;

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
    if (isArray (_ammoConfig >> "tracerColor")) then {
        _tracerColor = getArray (_ammoConfig >> "tracerColor");
    };
    private _nvgOnly = 0;
    if (isNumber (_ammoConfig >> "nvgOnly")) then {
        _nvgOnly = getNumber (_ammoConfig >> "nvgOnly");
    };
    _return = [_tracerScale, _tracerStartTime, _tracerEndTime, _tracerColor, _nvgOnly];
    JK_Tracer_configCache setVariable [_varName, _return];
};
_return
