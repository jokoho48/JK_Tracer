
// define Global Variables
JK_Tracer_allTracer = [];

JK_Tracer_configCache = call CBA_fnc_createNamespace;

JK_Tracer_colorData = call CBA_fnc_createNamespace;

// Compile Functions
JK_Tracer_fnc_fired = compile preprocessFileLineNumbers "fn_fired.sqf";
JK_Tracer_fnc_isTracer = compile preprocessFileLineNumbers "fn_isTracer.sqf";
JK_Tracer_fnc_getTracerData = compile preprocessFileLineNumbers "fn_getTracerData.sqf";
JK_Tracer_fnc_deleteLight = compile preprocessFileLineNumbers "fn_deleteLight.sqf";
JK_Tracer_fnc_cachedIsTracer = compile preprocessFileLineNumbers "fn_cachedIsTracer.sqf";
JK_Tracer_fnc_getAmbientData = {
    JK_AmbientData = (sunOrMoon * sunOrMoon * (1 - overcast * 0.25) + (moonIntensity / 5) * (1 - overcast)) min 1;
    [{call JK_Tracer_fnc_getAmbientData;}, [], 10] call CBA_fnc_waitAndExecute;
};

JK_Tracer_fnc_find = {
    scopeName "JK_Tracer_find_Scope";
    params ["_name"];
    _name = toLower (_name);
    {
        if (_name find _x) then {
             (JK_Tracer_colorData getVariable _x) breakOut "JK_Tracer_find_Scope";
        };
        nil
    } count (allVariables JK_Tracer_colorData);
};
// Loop for
[{
    if ((count JK_Tracer_allTracer) > 100) then {
        private _entry = JK_Tracer_allTracer deleteAt 0;
        deleteVehicle (_entry select 0);
    };
}] call CBA_fnc_addPerFrameHandler;
call JK_Tracer_fnc_getAmbientData;
{
    {
        JK_Tracer_colorData setVariable [toLower (configName _x), getArray (_x >> "color")];
    } count configProperties [configFile >> "CfgAdvancedTracerColor", "isClass _x", true];
} count [configFile, campaignConfigFile, missionConfigFile];
["All", "fired", {_this call JK_Tracer_fnc_fired}] call CBA_fnc_addClassEventHandler;


