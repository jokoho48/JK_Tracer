#include "script_component.hpp"

params ["_proj", "_light", "_params", "_initTime"];

_params params ["_scale", "_startTime", "_endTime", "_color", "_alpha"];

if (alive _proj && !isNull _light) then {

    private _brightness = (0.05 - 0.005) + random 0.01;
    _light setLightBrightness (((_scale * _brightness) * _alpha) * 0.65) * 250;
    [{
        params ["_proj", "", "_params", "_initTime"];

        _params params ["", "", "_endTime", "", ""];
        private _t = time - _initTime;
        !(alive _proj) || (_t >= _endTime)
    }, {
        params ["", "_light"];
        deleteVehicle _light;
    }, _this] call CBA_fnc_waitUntilAndExecute;

} else {
    deleteVehicle _light;
};
