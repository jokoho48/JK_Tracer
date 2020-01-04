#include "script_component.hpp"
if (!hasInterface) exitWith {};
// define Global Variables
GVAR(allTracer) = [];

GVAR(configCache) = call CBA_fnc_createNamespace;

// Compile Functions

hintSilent "Loaded JK_TRACERS";
// Loop for
[{
    if ((count GVAR(allTracer)) > 100) then {
        private _entry = GVAR(allTracer) deleteAt 0;
        deleteVehicle (_entry select 0);
    };
}] call CBA_fnc_addPerFrameHandler;

DFUNC(getAmbientData) = {
    GVAR(AmbientData) = (sunOrMoon * sunOrMoon * (1 - overcast * 0.25) + (moonIntensity / 5) * (1 - overcast)) min 1;
    [{call FUNC(getAmbientData);}, [], 10] call CBA_fnc_waitAndExecute;
};
call FUNC(getAmbientData);

["All", "Fired", {_this call FUNC(fired)}] call CBA_fnc_addClassEventHandler;
