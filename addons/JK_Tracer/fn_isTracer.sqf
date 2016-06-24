scopeName "isTracerMain";

params ["_veh", "_weap", "_muzzle", "_mode", "", "_magazine"];

private _gunner = gunner _veh;

{
    if (((assignedVehicleRole _x) select 0) != "CARGO") then {
        if (currentMuzzle _X == _muzzle) then {
            _gunner = _X
        };
    };
    nil
} count (crew _veh);

private _ammoC = _gunner ammo _muzzle;

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

_ammoC = _ammoC + _mult;

if(_tracersEvery > 0) then {
    private _mod = _ammoC mod _tracersEvery;
    if(_mod == (_lastRoundsTracer mod _tracersEvery) || _ammoC <= _lastRoundsTracer)then{
        true breakOut "isTracerMain";
    };
};
false
