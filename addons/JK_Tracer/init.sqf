JK_Tracer_fnc_tracer = compile preprocessFileLineNumbers "fn_tracer.sqf";
JK_Tracer_fnc_isTracer = compile preprocessFileLineNumbers "fn_isTracer.sqf";
JK_Tracer_fnc_getTracerData = compile preprocessFileLineNumbers "fn_getTracerData.sqf";
JK_Tracer_fnc_deleteLight = compile preprocessFileLineNumbers "fn_deleteLight.sqf";
player addEventHandler ["Fired", JK_Tracer_fnc_tracer];
