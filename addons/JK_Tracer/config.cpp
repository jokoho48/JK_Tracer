////////////////////////////////////////////////////////////////////
//DeRap: Produced from mikero's Dos Tools Dll version 5.24
//Produced on Sat Nov 27 18:04:30 2010 : Created on Sat Nov 27 18:04:30 2010
//http://dev-heaven.net/projects/list_files/mikero-pbodll
////////////////////////////////////////////////////////////////////

#define _ARMA_

//Class bd_tracer : config.bin{
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
            class getTracerData {};
            class isTracer {};
            class tracer {};
            class deleteLight {};
        };
    };
};

/* TODO Megas shit
class CfgAmmo {
    class BulletBase;
    class B_545x39_Ball: BulletBase {
        tracerColor[] = {0.3,0.9,0.2,0.95};
    };
    class B_556x45_Ball: BulletBase {
        tracerColor[] = {0.8,0.1,0.15,0.95};
    };
    class B_762x51_Ball: BulletBase {
        tracerColor[] = {0.8,0.1,0.15,0.95};
    };
    class B_762x54_Ball: BulletBase {
        tracerColor[] = {0.3,0.9,0.2,0.95};
    };
    class B_77x56_Ball: BulletBase {
        tracerColor[] = {0.8,0.65,0.1,0.75};
    };
    class B_127x99_Ball: BulletBase {
        tracerColor[] = {0.8,0.1,0.15,0.95};
    };
    class B_127x107_Ball: BulletBase {
        tracerColor[] = {0.3,0.9,0.2,0.95};
    };
    class B_127x108_APHE: BulletBase {
        tracerColor[] = {0.3,0.9,0.2,0.95};
    };
    class B_145x115_AP: BulletBase {
        tracerColor[] = {0.3,0.9,0.2,0.95};
    };
    class B_20mm_AP: BulletBase {
        tracerColor[] = {0.8,0.1,0.15,0.95};
    };
    class B_20mm_AA: BulletBase {
        tracerColor[] = {0.8,0.1,0.15,0.95};
    };
    class B_23mm_AA: BulletBase {
        tracerColor[] = {0.3,0.9,0.2,0.95};
    };
    class B_23mm_APHE: BulletBase {
        tracerColor[] = {0.1,0.7,0.1,0.9};
    };
    class B_25mm_HE: BulletBase {
        tracerColor[] = {0.8,0.1,0.15,0.95};
    };
    class B_25mm_APDS: BulletBase {
        tracerColor[] = {0.8,0.1,0.15,0.95};
    };
    class B_30mm_AP: BulletBase {
        tracerColor[] = {0.3,0.9,0.2,0.95};
    };
    class B_30mmA10_AP: BulletBase {
        tracerColor[] = {0.8,0.1,0.15,0.95};
    };
    class B_30mm_HE: BulletBase {
        tracerColor[] = {0.3,0.9,0.2,0.95};
    };
    class B_30mm_AA: BulletBase {
        tracerColor[] = {0.1,0.7,0.1,0.9};
    };
    class B_30x113mm_M789_HEDP: B_30mm_HE {
        tracerColor[] = {0.8,0.1,0.15,0.95};
    };
    class Sh_40_HE: BulletBase {
        tracerColor[] = {0.8,0.1,0.15,0.95};
    };
    class ShellBase;
    class Sh_120_HE: ShellBase {
        tracerColor[] = {0.8,0.1,0.15,0.95};
    };
    class Sh_120_SABOT: ShellBase {
        tracerColor[] = {0.8,0.1,0.15,0.95};
    };
    class Sh_125_HE: ShellBase {
        tracerColor[] = {0.3,0.9,0.2,0.95};
    };
    class Sh_125_SABOT: ShellBase {
        tracerColor[] = {0.3,0.9,0.2,0.95};
    };
    class Sh_85_HE: ShellBase {
        tracerColor[] = {0.3,0.9,0.2,0.95};
    };
    class Sh_85_AP: ShellBase {
        tracerColor[] = {0.3,0.9,0.2,0.95};
    };
};
class CfgWeapons {
    class CannonCore;
    class CTWS: CannonCore {
        shotFromTurret = 1;
    };
};
*/
class Extended_FiredBIS_EventHandlers {
    class All {
        class JK_Tracer {
            clientFiredBIS = "_this call JK_Tracer_fnc_tracer;";
        };
    };
};
//};
