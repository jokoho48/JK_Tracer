
private _ammoConfig = (configFile >> "CfgAmmo" >> _this);
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
private _tracerColor = [0, 1, 0, 1];
if (isArray (_ammoConfig >> "tracerColor")) then {
    _tracerColor = getArray (_ammoConfig >> "tracerColor");
};
private _nvgOnly = 0;
if (isNumber (_ammoConfig >> "nvgOnly")) then {
    _nvgOnly = getNumber (_ammoConfig >> "nvgOnly");
};

[_tracerScale, _tracerStartTime, _tracerEndTime, _tracerColor, _nvgOnly]
