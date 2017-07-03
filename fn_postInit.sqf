if (!hasInterface) exitWith {};
// define Global Variables
JK_Tracer_allTracer = [];

JK_Tracer_configCache = call CBA_fnc_createNamespace;

// Compile Functions
JK_Tracer_fnc_fired = compile preprocessFileLineNumbers "\JK\JK_Tracer\fn_fired.sqf";
JK_Tracer_fnc_isTracer = compile preprocessFileLineNumbers "\JK\JK_Tracer\fn_isTracer.sqf";
JK_Tracer_fnc_getTracerData = compile preprocessFileLineNumbers "\JK\JK_Tracer\fn_getTracerData.sqf";
JK_Tracer_fnc_deleteLight = compile preprocessFileLineNumbers "\JK\JK_Tracer\fn_deleteLight.sqf";
JK_Tracer_fnc_cachedIsTracer = compile preprocessFileLineNumbers "\JK\JK_Tracer\fn_cachedIsTracer.sqf";

// Loop for
[{

    if ((count JK_Tracer_allTracer) > 100) then {
        private _entry = JK_Tracer_allTracer deleteAt 0;
        deleteVehicle (_entry select 0);
    };
}] call CBA_fnc_addPerFrameHandler;

JK_Tracer_fnc_getAmbientData = {
    JK_AmbientData = (sunOrMoon * sunOrMoon * (1 - overcast * 0.25) + (moonIntensity / 5) * (1 - overcast)) min 1;
    [{call JK_Tracer_fnc_getAmbientData;}, [], 10] call CBA_fnc_waitAndExecute;
};
call JK_Tracer_fnc_getAmbientData;

["All", "fired", {_this call JK_Tracer_fnc_fired}] call CBA_fnc_addClassEventHandler;
