class CfgPatches {
    class JK_Tracer {
        units[] = {};
        weapons[] = {};
        requiredVersion = 1.72;
        requiredAddons[] = {"CBA_common"}; // TODO add CBA as Require Addon
        author = "joko // Jonas && Mega";
    };
};

class CfgFunctions {
    class JK_Tracer {
        class tracer {
            file = "JK\JK_Tracer";
            class postInit { postInit = 1; };
        };
    };
};

#define RED tracerColor[] = {0.8,0.1,0.15,0.95}
#define GREEN tracerColor[] = {0.1,0.7,0.1,0.9}
#define YELLOW tracerColor[] = {0.3,0.9,0.2,0.95}
class CfgAmmo {
    class BulletBase;
    class ShellBase;
    class SubmunitionBullet;

    //No idea
    class B_56x15_dual: BulletBase { RED; };

    //Pistol
    class B_9x21_Ball: BulletBase { RED; };
    class B_9x21_Ball_Tracer_Green: B_9x21_Ball { GREEN; }; 

    class B_45ACP_Ball: BulletBase { RED; }; 
    class B_45ACP_Ball_Green: B_45ACP_Ball { GREEN; }; 
    class B_45ACP_Ball_Yellow: B_45ACP_Ball { YELLOW; }; 

    //Assault rifle
    class B_556x45_Ball: BulletBase { RED; }; 
    class B_556x45_Ball_Tracer_Red: B_556x45_Ball { RED; }; 
    class B_556x45_Ball_Tracer_Green: B_556x45_Ball { GREEN; }; 
    class B_556x45_Ball_Tracer_Yellow: B_556x45_Ball { YELLOW; }; 

    class B_65x39_Caseless: BulletBase { RED; }; 
    class B_65x39_Caseless_green: B_65x39_Caseless { GREEN; }; 
    class B_65x39_Caseless_yellow: B_65x39_Caseless { YELLOW; }; 

    class B_65x39_Case;
    class B_65x39_Case_green: B_65x39_Case { GREEN; }; 
    class B_65x39_Case_yellow: B_65x39_Case { YELLOW; }; 

    class B_65x39_Minigun_Caseless: SubmunitionBullet { RED; }; 
    class B_65x39_Minigun_Caseless_Red_splash;
    class B_65x39_Minigun_Caseless_Yellow_splash: B_65x39_Minigun_Caseless_Red_splash { YELLOW; }; 
    class B_65x39_Minigun_Caseless_Green_splash: B_65x39_Minigun_Caseless_Red_splash { GREEN; }; 

    //Battle rifle
    class B_762x51_Ball: BulletBase { RED; };
    class B_762x51_Tracer_Red: B_762x51_Ball { RED; }; 
    class B_762x51_Tracer_Green: B_762x51_Ball { GREEN; }; 
    class B_762x51_Tracer_Yellow: B_762x51_Ball { YELLOW; }; 

    class B_762x51_Minigun_Tracer_Red: SubmunitionBullet { RED; }; 
    class B_762x51_Minigun_Tracer_Red_splash: B_762x51_Ball { RED; }; 

    class B_762x51_Minigun_Tracer_Yellow: B_762x51_Minigun_Tracer_Red { YELLOW; }; 
    class B_762x51_Minigun_Tracer_Yellow_splash: B_762x51_Minigun_Tracer_Red_splash { YELLOW; }; 

    class B_762x54_Ball;
    class B_762x54_Tracer_Red: B_762x54_Ball { RED; }; 
    class B_762x54_Tracer_Green: B_762x54_Ball { GREEN; }; 
    class B_762x54_Tracer_Yellow: B_762x54_Ball { YELLOW; }; 

    //Sniper rifle
    class B_127x99_Ball: BulletBase { RED; };
    class B_127x99_Ball_Tracer_Red: B_127x99_Ball { RED; }; 
    class B_127x99_Ball_Tracer_Green: B_127x99_Ball { GREEN; }; 
    class B_127x99_Ball_Tracer_Yellow: B_127x99_Ball { YELLOW; }; 

    class B_127x99_SLAP;
    class B_127x99_SLAP_Tracer_Red: B_127x99_SLAP { RED; }; 
    class B_127x99_SLAP_Tracer_Green: B_127x99_SLAP { GREEN; }; 
    class B_127x99_SLAP_Tracer_Yellow: B_127x99_SLAP { YELLOW; }; 

    class B_408_Ball: BulletBase { GREEN; }; 
    class B_127x33_Ball: BulletBase { GREEN; }; 

    class B_127x108_Ball: BulletBase { GREEN; }; 

    class B_338_Ball: BulletBase { RED; }; 

    class B_338_NM_Ball: BulletBase { RED; }; 

    class B_127x54_Ball: BulletBase { GREEN; }; 

    class B_93x64_Ball: BulletBase { GREEN; }; 

    //Autocannon
    class B_19mm_HE: BulletBase { RED; };

    class B_30mm_HE;
    class B_30mm_HE_Tracer_Red: B_30mm_HE { RED; }; 
    class B_30mm_HE_Tracer_Green: B_30mm_HE { GREEN; }; 
    class B_30mm_HE_Tracer_Yellow: B_30mm_HE { YELLOW; }; 

    class B_30mm_MP;
    class B_30mm_MP_Tracer_Red: B_30mm_MP { RED; }; 
    class B_30mm_MP_Tracer_Green: B_30mm_MP { GREEN; }; 
    class B_30mm_MP_Tracer_Yellow: B_30mm_MP { YELLOW; }; 

    class B_40mm_GPR;
    class B_40mm_GPR_Tracer_Red: B_40mm_GPR { RED; }; 
    class B_40mm_GPR_Tracer_Green: B_40mm_GPR { GREEN; }; 
    class B_40mm_GPR_Tracer_Yellow: B_40mm_GPR { YELLOW; }; 

    class B_20mm: BulletBase { RED; }; 
    class B_20mm_Tracer_Red: B_20mm { RED; }; 

    class B_25mm: BulletBase { RED; };

    class B_30mm_AP: BulletBase { RED; };
    class B_30mm_AP_Tracer_Red: B_30mm_AP { RED; }; 
    class B_30mm_AP_Tracer_Green: B_30mm_AP { GREEN; }; 
    class B_30mm_AP_Tracer_Yellow: B_30mm_AP { YELLOW; }; 

    class B_30mm_APFSDS;
    class B_30mm_APFSDS_Tracer_Red: B_30mm_APFSDS { RED; }; 
    class B_30mm_APFSDS_Tracer_Green: B_30mm_APFSDS { GREEN; }; 
    class B_30mm_APFSDS_Tracer_Yellow: B_30mm_APFSDS { YELLOW; }; 

    class B_40mm_APFSDS;
    class B_40mm_APFSDS_Tracer_Red: B_40mm_APFSDS { RED; }; 
    class B_40mm_APFSDS_Tracer_Green: B_40mm_APFSDS { GREEN; }; 
    class B_40mm_APFSDS_Tracer_Yellow: B_40mm_APFSDS { YELLOW; }; 

    class B_35mm_AA: BulletBase { RED; };
    class B_35mm_AA_Tracer_Red: B_35mm_AA { RED; }; 
    class B_35mm_AA_Tracer_Green: B_35mm_AA { GREEN; }; 
    class B_35mm_AA_Tracer_Yellow: B_35mm_AA { YELLOW; }; 

    class Gatling_30mm_HE_Plane_CAS_01_F: BulletBase {};
    class Cannon_30mm_HE_Plane_CAS_02_F: Gatling_30mm_HE_Plane_CAS_01_F {}; 

    //Cannon
    class Sh_120mm_HE: ShellBase { RED; }; 
    class Sh_120mm_HE_Tracer_Red: Sh_120mm_HE { RED; }; 
    class Sh_120mm_HE_Tracer_Green: Sh_120mm_HE { GREEN; }; 
    class Sh_120mm_HE_Tracer_Yellow: Sh_120mm_HE { YELLOW; }; 

    class Sh_120mm_APFSDS: ShellBase { RED; }; 
    class Sh_120mm_APFSDS_Tracer_Red: Sh_120mm_APFSDS { RED; }; 
    class Sh_120mm_APFSDS_Tracer_Green: Sh_120mm_APFSDS { GREEN; }; 
    class Sh_120mm_APFSDS_Tracer_Yellow: Sh_120mm_APFSDS { YELLOW; }; 

    class Sh_125mm_APFSDS;
    class Sh_125mm_APFSDS_T_Red: Sh_125mm_APFSDS { RED; }; 
    class Sh_125mm_APFSDS_T_Green: Sh_125mm_APFSDS { GREEN; }; 
    class Sh_125mm_APFSDS_T_Yellow: Sh_125mm_APFSDS { YELLOW; }; 

    class Sh_125mm_HE;
    class Sh_125mm_HE_T_Red: Sh_125mm_HE { RED; }; 
    class Sh_125mm_HE_T_Green: Sh_125mm_HE { GREEN; }; 
    class Sh_125mm_HE_T_Yellow: Sh_125mm_HE { YELLOW; }; 

    class Sh_125mm_HEAT;
    class Sh_125mm_HEAT_T_Red: Sh_125mm_HEAT { RED; }; 
    class Sh_125mm_HEAT_T_Green: Sh_125mm_HEAT { GREEN; }; 
    class Sh_125mm_HEAT_T_Yellow: Sh_125mm_HEAT { YELLOW; }; 

    class Sh_105mm_APFSDS;
    class Sh_105mm_APFSDS_T_Red: Sh_105mm_APFSDS { RED; }; 
    class Sh_105mm_APFSDS_T_Green: Sh_105mm_APFSDS { GREEN; }; 
    class Sh_105mm_APFSDS_T_Yellow: Sh_105mm_APFSDS { YELLOW; }; 

    class Sh_105mm_HEAT_MP;
    class Sh_105mm_HEAT_MP_T_Red: Sh_105mm_HEAT_MP { RED; }; 
    class Sh_105mm_HEAT_MP_T_Green: Sh_105mm_HEAT_MP { GREEN; }; 
    class Sh_105mm_HEAT_MP_T_Yellow: Sh_105mm_HEAT_MP { YELLOW; }; 
};