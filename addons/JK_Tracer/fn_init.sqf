
// define Global Variables
JK_Tracer_allTracer = [];

JK_Tracer_configCache = call CBA_fnc_createNamespace;

// Compile Functions
JK_Tracer_fnc_fired = compile preprocessFileLineNumbers "fn_fired.sqf";
JK_Tracer_fnc_isTracer = compile preprocessFileLineNumbers "fn_isTracer.sqf";
JK_Tracer_fnc_getTracerData = compile preprocessFileLineNumbers "fn_getTracerData.sqf";
JK_Tracer_fnc_deleteLight = compile preprocessFileLineNumbers "fn_deleteLight.sqf";
JK_Tracer_fnc_cachedIsTracer = compile preprocessFileLineNumbers "fn_cachedIsTracer.sqf";

// Loop for
[{
    /*
    {
        if (isNull (_x select 0) || isNull (_x select 1)) then {
            _x = nil;
        } else {
            (_x select 0) setPos (getPos (_x select 1));
        };
        nil
    } count JK_Tracer_allTracer;
    */

    if ((count JK_Tracer_allTracer) > 100) then {
        private _entry = JK_Tracer_allTracer deleteAt 0;
        deleteVehicle (_entry select 0);
    };
}] call CBA_fnc_addPerFrameHandler;


["All", "fired", {_this call JK_Tracer_fnc_fired}] call CBA_fnc_addClassEventHandler;
