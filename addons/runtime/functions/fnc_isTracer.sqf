#include "script_component.hpp"

scopeName QGVAR(isTracer);

params ["_veh", "_weap", "_muzzle", "_mode", "", "_magazine", "_projectile"];

private _gunner = (getShotParents _projectile) select 1;

private _ammoCount = _gunner ammo _muzzle;

private _ammoParams = [_magazine, _muzzle, _weap, _mode, _projectile] call FUNC(cachedIsTracer);

_ammoParams params ["_mult", "_lastRoundsTracer", "_tracersEvery"];

_ammoCount = _ammoCount + _mult;

if (_tracersEvery > 0) then {
    private _mod = _ammoCount mod _tracersEvery;
    if(_mod == (_lastRoundsTracer mod _tracersEvery) || _ammoCount <= _lastRoundsTracer) then {
        true breakOut QGVAR(isTracer);
    };
};
false
