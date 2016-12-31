class CfgPatches {
    class JK_Tracer {
        units[] = {};
        weapons[] = {};
        requiredVersion = 1.60;
        requiredAddons[] = {}; // TODO add CBA as Require Addon
        author = "joko // Jonas && Mega";
    };
};

class CfgFunctions {
    class JK_Tracer {
        class tracer {
            file = "\JK_Tracer";
            class init { postInit = 1; };
        };
    };
};

class CfgAdvancedTracerColor {
    class Red {
        color[] = {0.8,0.1,0.15,0.95};
    };
    class Green {
        color[] = {0.3,0.9,0.2,0.95};
    };
    class Yellow {
        color[] = {0.1,0.7,0.1,0.9};
    };
};