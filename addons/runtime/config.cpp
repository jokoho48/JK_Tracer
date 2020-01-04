#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = QUOTE(COMPONENT);
        units[] = {};
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {"CBA_common"};
        author = "AUTHOR";
        VERSION_CONFIG;
    };
};


#include "CfgEventHandlers.hpp"

#define RED tracerLightColor[] = {0.8,0.1,0.15,0.25}
#define GREEN tracerLightColor[] = {0.1,0.8,0.1,0.25}
#define YELLOW tracerLightColor[] = {0.8,0.8,0.2,0.25}

class CfgAmmo {
    class b_556x45_ball;
    class b_556x45_ball_tracer_red: b_556x45_ball {RED;};
    class b_556x45_ball_tracer_green: b_556x45_ball {GREEN;};
    class b_556x45_ball_tracer_yellow: b_556x45_ball {YELLOW;};
    class b_65x39_caseless;
    class b_65x39_caseless_green: b_65x39_caseless {GREEN;};
    class b_65x39_caseless_yellow: b_65x39_caseless {YELLOW;};
    class b_65x39_case;
    class b_65x39_case_green: b_65x39_case {GREEN;};
    class b_65x39_case_yellow: b_65x39_case {YELLOW;};
    class b_65x39_minigun_caseless_red_splash: b_65x39_caseless {RED;};
    class b_65x39_minigun_caseless_yellow_splash: b_65x39_minigun_caseless_red_splash {YELLOW;};
    class b_65x39_minigun_caseless_green_splash: b_65x39_minigun_caseless_red_splash {GREEN;};
    class b_762x51_ball;
    class b_762x51_tracer_red: b_762x51_ball {RED;};
    class b_762x51_tracer_green: b_762x51_ball {GREEN;};
    class b_762x51_tracer_yellow: b_762x51_ball {YELLOW;};
    class b_762x54_ball;
    class b_762x54_tracer_red: b_762x54_ball {RED;};
    class b_762x54_tracer_green: b_762x54_ball {GREEN;};
    class b_762x54_tracer_yellow: b_762x54_ball {YELLOW;};
    class submunitionbullet;
    class b_762x51_minigun_tracer_red: submunitionbullet {RED;};
    class b_762x51_minigun_tracer_red_splash: b_762x51_ball {RED;};
    class b_9x21_ball;
    class b_9x21_ball_tracer_green: b_9x21_ball {GREEN;};
    class b_9x21_ball_tracer_red: b_9x21_ball_tracer_green {RED;};
    class b_9x21_ball_tracer_yellow: b_9x21_ball_tracer_green {YELLOW;};
    class b_127x99_ball;
    class b_127x99_ball_tracer_red: b_127x99_ball {RED;};
    class b_127x99_ball_tracer_green: b_127x99_ball {GREEN;};
    class b_127x99_ball_tracer_yellow: b_127x99_ball {YELLOW;};
    class b_127x99_slap;
    class b_127x99_slap_tracer_red: b_127x99_slap {RED;};
    class b_127x99_slap_tracer_green: b_127x99_slap {GREEN;};
    class b_127x99_slap_tracer_yellow: b_127x99_slap {YELLOW;};
    class b_30mm_he;
    class b_30mm_he_tracer_red: b_30mm_he {RED;};
    class b_30mm_he_tracer_green: b_30mm_he {GREEN;};
    class b_30mm_he_tracer_yellow: b_30mm_he {YELLOW;};
    class b_30mm_mp;
    class b_30mm_mp_tracer_red: b_30mm_mp {RED;};
    class b_30mm_mp_tracer_green: b_30mm_mp {GREEN;};
    class b_30mm_mp_tracer_yellow: b_30mm_mp {YELLOW;};
    class b_40mm_gpr;
    class b_40mm_gpr_tracer_red: b_40mm_gpr {RED;};
    class b_40mm_gpr_tracer_green: b_40mm_gpr {GREEN;};
    class b_40mm_gpr_tracer_yellow: b_40mm_gpr {YELLOW;};
    class b_20mm;
    class b_20mm_tracer_red: b_20mm {RED;};
    class b_30mm_ap;
    class b_30mm_ap_tracer_red: b_30mm_ap {RED;};
    class b_30mm_ap_tracer_green: b_30mm_ap {GREEN;};
    class b_30mm_ap_tracer_yellow: b_30mm_ap {YELLOW;};
    class b_30mm_apfsds;
    class b_30mm_apfsds_tracer_red: b_30mm_apfsds {RED;};
    class b_30mm_apfsds_tracer_green: b_30mm_apfsds {GREEN;};
    class b_30mm_apfsds_tracer_yellow: b_30mm_apfsds {YELLOW;};
    class b_40mm_apfsds;
    class b_40mm_apfsds_tracer_red: b_40mm_apfsds {RED;};
    class b_40mm_apfsds_tracer_green: b_40mm_apfsds {GREEN;};
    class b_40mm_apfsds_tracer_yellow: b_40mm_apfsds {YELLOW;};
    class b_35mm_aa;
    class b_35mm_aa_tracer_red: b_35mm_aa {RED;};
    class b_35mm_aa_tracer_green: b_35mm_aa {GREEN;};
    class b_35mm_aa_tracer_yellow: b_35mm_aa {YELLOW;};
    class sh_120mm_he;
    class sh_120mm_he_tracer_red: sh_120mm_he {RED;};
    class sh_120mm_he_tracer_green: sh_120mm_he {GREEN;};
    class sh_120mm_he_tracer_yellow: sh_120mm_he {YELLOW;};
    class sh_120mm_apfsds;
    class sh_120mm_apfsds_tracer_red: sh_120mm_apfsds {RED;};
    class sh_120mm_apfsds_tracer_green: sh_120mm_apfsds {GREEN;};
    class sh_120mm_apfsds_tracer_yellow: sh_120mm_apfsds {YELLOW;};
    class sh_120mm_heat_mp;
    class sh_120mm_heat_mp_t_red: sh_120mm_heat_mp {RED;};
    class sh_120mm_heat_mp_t_green: sh_120mm_heat_mp {GREEN;};
    class sh_120mm_heat_mp_t_yellow: sh_120mm_heat_mp {YELLOW;};
    class b_45acp_ball;
    class b_45acp_ball_green: b_45acp_ball {GREEN;};
    class b_45acp_ball_yellow: b_45acp_ball {YELLOW;};
    class b_762x51_minigun_tracer_yellow: b_762x51_minigun_tracer_red {YELLOW;};
    class b_762x51_minigun_tracer_yellow_splash: b_762x51_minigun_tracer_red_splash {YELLOW;};
    class sh_125mm_apfsds;
    class sh_125mm_apfsds_t_red: sh_125mm_apfsds {RED;};
    class sh_125mm_apfsds_t_green: sh_125mm_apfsds {GREEN;};
    class sh_125mm_apfsds_t_yellow: sh_125mm_apfsds {YELLOW;};
    class sh_125mm_he;
    class sh_125mm_he_t_red: sh_125mm_he {RED;};
    class sh_125mm_he_t_green: sh_125mm_he {GREEN;};
    class sh_125mm_he_t_yellow: sh_125mm_he {YELLOW;};
    class sh_125mm_heat;
    class sh_125mm_heat_t_red: sh_125mm_heat {RED;};
    class sh_125mm_heat_t_green: sh_125mm_heat {GREEN;};
    class sh_125mm_heat_t_yellow: sh_125mm_heat {YELLOW;};
    class sh_105mm_apfsds;
    class sh_105mm_apfsds_t_red: sh_105mm_apfsds {RED;};
    class sh_105mm_apfsds_t_green: sh_105mm_apfsds {GREEN;};
    class sh_105mm_apfsds_t_yellow: sh_105mm_apfsds {YELLOW;};
    class sh_105mm_heat_mp;
    class sh_105mm_heat_mp_t_red: sh_105mm_heat_mp {RED;};
    class sh_105mm_heat_mp_t_green: sh_105mm_heat_mp {GREEN;};
    class sh_105mm_heat_mp_t_yellow: sh_105mm_heat_mp {YELLOW;};
    class b_762x39_ball_f;
    class b_762x39_ball_green_f: b_762x39_ball_f {GREEN;};
    class b_545x39_ball_f;
    class b_545x39_ball_green_f: b_545x39_ball_f {GREEN;};
    class sub_f_signal_green: b_9x21_ball {GREEN;};
    class sub_f_signal_red: sub_f_signal_green {RED;};
};
