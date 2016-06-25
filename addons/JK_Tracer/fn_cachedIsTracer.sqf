params ["_magazine", "_muzzle", "_weap", "_mode"];

private _varName = format ["JK_Tracer_isTracer_%1_%2_%3_%4", _magazine, _muzzle, _weap, _mode];
private _return = JK_Tracer_configCache getVariable _varName;
if (isNil "_return") then {
    private _magConfig = (configFile >> "CfgMagazines" >> _magazine);
    private _tracersEvery = 3;
    if (isNumber (_magConfig >> "tracersEvery")) then {
        _tracersEvery = getNumber (_magConfig >> "tracersEvery");
    };
    private _lastRoundsTracer = 0;
    if (isNumber (_magConfig >> "lastRoundsTracer")) then {
        _lastRoundsTracer = getNumber (_magConfig >> "lastRoundsTracer");
    };
    private _mult = 1;
    private _modeCfg = (configFile >> "CfgWeapons" >> _weap);
    if (_muzzle != _weap) then {_modeCfg = (_modeCfg >> _muzzle)};
    if (_mode != _muzzle) then {_modeCfg = (_modeCfg >> _mode)};
    if (isNumber (_modeCfg >> "multiplier")) then {
        _mult = getNumber (_modeCfg >> "multiplier");
    };
    _return = [_mult, _lastRoundsTracer, _tracersEvery];
    JK_Tracer_configCache setVariable [_varName, _return];
};
_return
