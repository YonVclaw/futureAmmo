#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = COMPONENT_NAME;
        units[] = {};
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {
            "ace_ballistics",
            "ghostfa_main",
            "ghostfa_ammo",     // .50 / .338 / 7.62 vehicle belts
            "A3_Weapons_F",     // vanilla vehicle coax / RCWS / HMG + 82/155/230 arty
            "A3_Weapons_F_Destroyer",  // Mk45 Hammer naval gun (weapon_ShipCannon_120mm)
            "ghostfa_antidrone",       // 12.7x108 7N42 HEAB proximity-fuze registry
            "cba_main"
        };
        author = QAUTHOR;
        VERSION_CONFIG;
        skipWhenMissingDependencies = 1;
        // Pure wiring compat: appends existing FA belts onto the shared vanilla
        // vehicle secondary weapons (coax / RCWS / commander HMG). This flows to
        // every A3 vehicle using them - Marshall coax + ATGM .338, Rhino coax +
        // commander HMG, etc. Defines no new magazines/ammo of its own.
        ammo[] = {
            "FA_155_heer", "FA_155_tb",
            "FA_230_gmlrsu", "FA_230_gmlrser", "FA_230_aw",
            "FA_82_apmi", "FA_82_lgm", "FA_82_heer",
            "FA_ammo_Penetrator_82_strix", "FA_82_strix", "FA_82_smk", "FA_82_ir", "FA_82_tb",
            // 82mm per-side (East/Ind)
            "FA_82_apmi_O", "FA_82_apmi_I", "FA_82_lgm_O", "FA_82_lgm_I",
            "FA_82_heer_O", "FA_82_heer_I", "FA_82_strix_O", "FA_82_strix_I",
            "FA_82_smk_O", "FA_82_smk_I", "FA_82_tb_O", "FA_82_tb_I",
            "FA_120N_glr",
            "FA_127x108_7N40", "FA_127x108_7N41", "FA_127x108_7N42"
        };
        magazines[] = {
            "FA_32Rnd_155mm_heer_B", "FA_32Rnd_155mm_heer_O", "FA_32Rnd_155mm_heer_I",
            "FA_4Rnd_155mm_apmi_B", "FA_4Rnd_155mm_apmi_O", "FA_4Rnd_155mm_apmi_I",
            "FA_4Rnd_155mm_lgm_B", "FA_4Rnd_155mm_lgm_O", "FA_4Rnd_155mm_lgm_I",
            "FA_6Rnd_155mm_smk_B", "FA_6Rnd_155mm_smk_O", "FA_6Rnd_155mm_smk_I",
            "FA_6Rnd_155mm_apmine_B", "FA_6Rnd_155mm_apmine_O", "FA_6Rnd_155mm_apmine_I",
            "FA_6Rnd_155mm_atmine_B", "FA_6Rnd_155mm_atmine_O", "FA_6Rnd_155mm_atmine_I",
            "FA_2Rnd_155mm_sfm_B", "FA_2Rnd_155mm_sfm_O", "FA_2Rnd_155mm_sfm_I",
            "FA_32Rnd_155mm_tb_B", "FA_32Rnd_155mm_tb_O", "FA_32Rnd_155mm_tb_I",
            "FA_8Rnd_155mm_ir_B",
            "FA_12Rnd_230mm_gmlrsu_B", "FA_12Rnd_230mm_gmlrsu_O", "FA_12Rnd_230mm_gmlrsu_I",
            "FA_12Rnd_230mm_gmlrser_B", "FA_12Rnd_230mm_gmlrser_O", "FA_12Rnd_230mm_gmlrser_I",
            "FA_12Rnd_230mm_aw_B", "FA_12Rnd_230mm_aw_O", "FA_12Rnd_230mm_aw_I",
            "FA_8Rnd_82mm_apmi_B", "FA_8Rnd_82mm_apmi_O", "FA_8Rnd_82mm_apmi_I",
            "FA_8Rnd_82mm_lgm_B", "FA_8Rnd_82mm_lgm_O", "FA_8Rnd_82mm_lgm_I",
            "FA_8Rnd_82mm_heer_B", "FA_8Rnd_82mm_heer_O", "FA_8Rnd_82mm_heer_I",
            "FA_8Rnd_82mm_strix_B", "FA_8Rnd_82mm_strix_O", "FA_8Rnd_82mm_strix_I",
            "FA_8Rnd_82mm_smk_B", "FA_8Rnd_82mm_smk_O", "FA_8Rnd_82mm_smk_I",
            "FA_8Rnd_82mm_tb_B", "FA_8Rnd_82mm_tb_O", "FA_8Rnd_82mm_tb_I",
            "FA_8Rnd_82mm_ir_B",
            "FA_2Rnd_120N_glr", "FA_32Rnd_120N_he", "FA_2Rnd_120N_lg", "FA_2Rnd_120N_sfm", "FA_6Rnd_120N_smk",
            "FA_450Rnd_127x108_7N40", "FA_450Rnd_127x108_7N41", "FA_450Rnd_127x108_7N42"
        };
    };
};

#include "CfgEventHandlers.hpp"
#include "CfgAmmo.hpp"
#include "CfgMagazines.hpp"
#include "CfgWeapons.hpp"
