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


    private _tracerCfg = (_ammoConfig >> "tracerColor");
    private _tracerColor = switch (true) do {
        case (isArray _tracerCfg): {
            getArray (_tracerCfg);
        };
        case (isText _tracerCfg): {
            JK_Tracer_colorData getVariable (getText (_tracerCfg));
        };
        default {
            private _temp = _ammo call JK_Tracer_fnc_find;
            if !(isNil "_temp") exitWith { _temp; };
            private _modelName = getText (_ammoConfig >> "model");
            _modelName = toLower(_modelName) splitString "\.";
            private _modelcount = (count _modelName) - 1;
            _modelName = _modelName select _modelcount;
            if (_modelName == "p3d") then {
                _modelName = _modelName select (_modelcount - 1);
            };
            _temp = _ammo call JK_Tracer_fnc_find;
            if !(isNil "_temp") exitWith { _temp; };
            [0, 1, 0, 0];
        };
    };

    if (isArray (_ammoConfig >> "tracerColor")) then {
        _tracerColor = getArray (_ammoConfig >> "tracerColor");
    } else {
        if () then {}
    };
    private _nvgOnly = 0;
    if (isNumber (_ammoConfig >> "nvgOnly")) then {
        _nvgOnly = getNumber (_ammoConfig >> "nvgOnly");
    };
    _return = [_tracerScale, _tracerStartTime, _tracerEndTime, _tracerColor, _nvgOnly];
    JK_Tracer_configCache setVariable [_varName, _return];
};
_return
