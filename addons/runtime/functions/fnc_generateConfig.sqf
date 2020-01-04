#include "script_component.hpp"

GVAR(Input) = [];
{
    private _name = toLower (configName _x);
    private _isBullet = _name isKindOf "BulletCore" || _name isKindOf "ShellCore" || _name isKindOf "SubmunitionCore";
    private _isTracer = _name find "tracer" != -1 || _name find "green" != -1 || _name find "red" != -1 || _name find "yellow" != -1;
    if (_isBullet && _isTracer) then {
        GVAR(Input) pushBackUnique _name;
    };
    nil
} count configProperties [configFile >> "CfgAmmo", "isClass _x", true];
GVAR(Output) = "";
GVAR(existingConfigClasses) = [];
{
    private _baseClass = toLower (configName (inheritsFrom (configFile >> "CfgAmmo" >> _x)));
    if !(_baseClass in GVAR(existingConfigClasses)) then {
        GVAR(existingConfigClasses) pushback _baseClass;
        GVAR(Output) = GVAR(Output) + format ["class %1;", _baseClass] + endl;
    };
    GVAR(existingConfigClasses) pushback _x;
    private _autoDetectedColor = "YELLOW";
    if (_x find "red" != -1) then {
        _autoDetectedColor = "RED";
    };
    if (_x find "green" != -1) then {
        _autoDetectedColor = "GREEN";
    };
    if (_x find "yellow" != -1) then {
        _autoDetectedColor = "YELLOW";
    };
    GVAR(Output) = GVAR(Output) + format ["class %1: %2 {%3;};", _x, _baseClass, _autoDetectedColor] + endl;
    nil
} count GVAR(Input);
GVAR(Output);
