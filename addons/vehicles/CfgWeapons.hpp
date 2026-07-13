// =====================================================================
//  futureAmmo compat: shared vanilla vehicle secondary weapons
//  The QAV/VVE compat addons cover the mod-specific (vve_ / qav_) weapon
//  subclasses; this addon covers the VANILLA base weapons those vehicles (and
//  every other A3 vehicle) mount directly:
//    - 7.62 coax / RCWS      -> LMG_coax, LMG_RCWS
//    - .338 coax (SPMG)      -> MMG_02_coax, MMG_02_coax_amv  (Marshall ATGM)
//    - .50 commander / APC   -> HMG_127_MBT, HMG_127_APC, HMG_127_AFV  (Rhino commander)
//  These weapons hold their magazine list directly (no CBA wells), so every
//  append is `+=` on the existing shared class - same rule as ghostfa_missiles.
//  The belts already exist in ghostfa_ammo; this only wires them.
// =====================================================================

#define FA_MAGS_762 \
    "FA_200Rnd_762_M80A2_HV", \
    "FA_200Rnd_762_M80A2_HV_T_Red", "FA_200Rnd_762_M80A2_HV_T_Yellow", "FA_200Rnd_762_M80A2_HV_T_Green", \
    "FA_200Rnd_762_M80A2_HV_T_White", "FA_200Rnd_762_M80A2_HV_T_Blue", "FA_200Rnd_762_M80A2_HV_T_Orange", "FA_200Rnd_762_M80A2_HV_T_IR", \
    "FA_200Rnd_762_XM751_CTEP", \
    "FA_200Rnd_762_XM751_CTEP_T_Red", "FA_200Rnd_762_XM751_CTEP_T_Yellow", "FA_200Rnd_762_XM751_CTEP_T_Green", \
    "FA_200Rnd_762_XM751_CTEP_T_White", "FA_200Rnd_762_XM751_CTEP_T_Blue", "FA_200Rnd_762_XM751_CTEP_T_Orange", "FA_200Rnd_762_XM751_CTEP_T_IR"

#define FA_MAGS_338 \
    "FA_200Rnd_338_Mk372", \
    "FA_200Rnd_338_Mk372_T_Red", "FA_200Rnd_338_Mk372_T_Yellow", "FA_200Rnd_338_Mk372_T_Green", \
    "FA_200Rnd_338_Mk372_T_White", "FA_200Rnd_338_Mk372_T_Blue", "FA_200Rnd_338_Mk372_T_Orange", "FA_200Rnd_338_Mk372_T_IR"

#define FA_MAGS_50CAL \
    "FA_200Rnd_127_Mk211Mod0", \
    "FA_200Rnd_127_Mk211Mod0_T_Red", "FA_200Rnd_127_Mk211Mod0_T_Yellow", "FA_200Rnd_127_Mk211Mod0_T_Green", \
    "FA_200Rnd_127_Mk211Mod0_T_White", "FA_200Rnd_127_Mk211Mod0_T_Blue", "FA_200Rnd_127_Mk211Mod0_T_Orange", "FA_200Rnd_127_Mk211Mod0_T_IR", \
    "FA_200Rnd_127_Mk258", \
    "FA_200Rnd_127_Mk258_T_Red", "FA_200Rnd_127_Mk258_T_Yellow", "FA_200Rnd_127_Mk258_T_Green", \
    "FA_200Rnd_127_Mk258_T_White", "FA_200Rnd_127_Mk258_T_Blue", "FA_200Rnd_127_Mk258_T_Orange", "FA_200Rnd_127_Mk258_T_IR"

// Each shared weapon is reopened WITH its real parent named (and that parent
// forward-declared). A parentless reopen (`class LMG_coax { ... };`) makes HEMTT
// emit the class with no base, and when other mods (ACE / EF / Aegis) also reopen
// these same coax/HMG classes with undefined load order, the parentless one can
// win the bind and STRIP the vanilla parent link — collapsing the weapon, and
// everything that inherits it (LMG_coax_ext, ACE_/EF_ coax variants), to an empty
// scope=private stub. Naming the parent keeps the inheritance intact regardless
// of load order. Parents per vanilla: LMG_coax:LMG_RCWS:MGun, MMG_02_coax:
// MMG_02_vehicle, MMG_02_coax_amv:MMG_02_coax, HMG_127_APC/AFV:HMG_127,
// HMG_127_MBT:HMG_127_APC.
class CfgWeapons {
    // 7.62 coax + RCWS
    class MGun;
    class LMG_RCWS: MGun     { magazines[] += { FA_MAGS_762 }; };
    class LMG_coax: LMG_RCWS { magazines[] += { FA_MAGS_762 }; };

    // .338 coax (SPMG-based; _amv is the Aegis Marshall ATGM variant)
    class MMG_02_vehicle;
    class MMG_02_coax: MMG_02_vehicle  { magazines[] += { FA_MAGS_338 }; };
    class MMG_02_coax_amv: MMG_02_coax { magazines[] += { FA_MAGS_338 }; };

    // .50 commander / APC HMG
    class HMG_127;
    class HMG_127_APC: HMG_127     { magazines[] += { FA_MAGS_50CAL }; };
    class HMG_127_AFV: HMG_127     { magazines[] += { FA_MAGS_50CAL }; };
    class HMG_127_MBT: HMG_127_APC { magazines[] += { FA_MAGS_50CAL }; };  // Rhino commander HMG

    // -------------------------------------------------------------------
    // Heavy fires — vanilla artillery weapons, one parentless-merge append each.
    // mortar_155mm_AMOS is shared by the Sholef / 2S9 Sochor / Scorcher SPGs;
    // rockets_230mm_GAT by the Seara / Zamak MLRS.
    // -------------------------------------------------------------------
    class mortar_155mm_AMOS {
        magazines[] += {
            "FA_32Rnd_155mm_heer_B", "FA_32Rnd_155mm_heer_O", "FA_32Rnd_155mm_heer_I",
            "FA_4Rnd_155mm_apmi_B", "FA_4Rnd_155mm_apmi_O", "FA_4Rnd_155mm_apmi_I",
            "FA_4Rnd_155mm_lgm_B", "FA_4Rnd_155mm_lgm_O", "FA_4Rnd_155mm_lgm_I",
            "FA_6Rnd_155mm_smk_B", "FA_6Rnd_155mm_smk_O", "FA_6Rnd_155mm_smk_I",
            "FA_6Rnd_155mm_apmine_B", "FA_6Rnd_155mm_apmine_O", "FA_6Rnd_155mm_apmine_I",
            "FA_6Rnd_155mm_atmine_B", "FA_6Rnd_155mm_atmine_O", "FA_6Rnd_155mm_atmine_I",
            "FA_2Rnd_155mm_sfm_B", "FA_2Rnd_155mm_sfm_O", "FA_2Rnd_155mm_sfm_I",
            "FA_32Rnd_155mm_tb_B", "FA_32Rnd_155mm_tb_O", "FA_32Rnd_155mm_tb_I",
            "FA_8Rnd_155mm_ir_B"
        };
    };
    // CSAT 12.7x108 heavy MG (HMG_NSVT / Kord)
    class HMG_NSVT {
        magazines[] += {
            "FA_450Rnd_127x108_7N40",
            "FA_450Rnd_127x108_7N41",
            "FA_450Rnd_127x108_7N42"
        };
    };
    class rockets_230mm_GAT {
        magazines[] += {
            "FA_12Rnd_230mm_gmlrsu_B", "FA_12Rnd_230mm_gmlrsu_O", "FA_12Rnd_230mm_gmlrsu_I",
            "FA_12Rnd_230mm_gmlrser_B", "FA_12Rnd_230mm_gmlrser_O", "FA_12Rnd_230mm_gmlrser_I",
            "FA_12Rnd_230mm_aw_B", "FA_12Rnd_230mm_aw_O", "FA_12Rnd_230mm_aw_I"
        };
    };
    // 82mm Mk6 mortar (vanilla) — shared by B/O/I_Mortar_01_F.
    class mortar_82mm {
        magazines[] += {
            "FA_8Rnd_82mm_apmi_B", "FA_8Rnd_82mm_apmi_O", "FA_8Rnd_82mm_apmi_I",
            "FA_8Rnd_82mm_lgm_B", "FA_8Rnd_82mm_lgm_O", "FA_8Rnd_82mm_lgm_I",
            "FA_8Rnd_82mm_heer_B", "FA_8Rnd_82mm_heer_O", "FA_8Rnd_82mm_heer_I",
            "FA_8Rnd_82mm_strix_B", "FA_8Rnd_82mm_strix_O", "FA_8Rnd_82mm_strix_I",
            "FA_8Rnd_82mm_smk_B", "FA_8Rnd_82mm_smk_O", "FA_8Rnd_82mm_smk_I",
            "FA_8Rnd_82mm_tb_B", "FA_8Rnd_82mm_tb_O", "FA_8Rnd_82mm_tb_I",
            "FA_8Rnd_82mm_ir_B"
        };
    };
    // Mk45 Hammer naval gun (vanilla) — West-only. weapon_ShipCannon_120mm
    // overrides magazines[] with =, so this parentless merge appends onto its
    // existing ship magazines rather than reaching it via mortar_155mm_AMOS.
    class weapon_ShipCannon_120mm {
        magazines[] += {
            "FA_2Rnd_120N_glr",
            "FA_32Rnd_120N_he",
            "FA_2Rnd_120N_lg",
            "FA_2Rnd_120N_sfm",
            "FA_6Rnd_120N_smk"
        };
    };
};
