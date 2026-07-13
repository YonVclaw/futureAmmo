// Append the 2040 rounds to the RF Twin Mortar weapon (shared by the B/O/I
// TwinMortar vehicles). Reopened with NO parent (bodied parentless merge) so we
// never reparent/strip the RF weapon. Per the RF design, wiring is on the weapon.
class CfgWeapons {
    class Twin_Mortar_120mm_RF {
        magazines[] += {
            "FA_6Rnd_120mm_heer_B", "FA_6Rnd_120mm_heer_O", "FA_6Rnd_120mm_heer_I",
            "FA_2Rnd_120mm_apmi_B", "FA_2Rnd_120mm_apmi_O", "FA_2Rnd_120mm_apmi_I",
            "FA_2Rnd_120mm_lgm_B", "FA_2Rnd_120mm_lgm_O", "FA_2Rnd_120mm_lgm_I",
            "FA_4Rnd_120mm_smk_B", "FA_4Rnd_120mm_smk_O", "FA_4Rnd_120mm_smk_I",
            "FA_2Rnd_120mm_apmine_B", "FA_2Rnd_120mm_apmine_O", "FA_2Rnd_120mm_apmine_I",
            "FA_4Rnd_120mm_atmine_B", "FA_4Rnd_120mm_atmine_O", "FA_4Rnd_120mm_atmine_I",
            "FA_2Rnd_120mm_sfm_B", "FA_2Rnd_120mm_sfm_O", "FA_2Rnd_120mm_sfm_I",
            "FA_2Rnd_120mm_strix_B", "FA_2Rnd_120mm_strix_O", "FA_2Rnd_120mm_strix_I",
            "FA_6Rnd_120mm_tb_B", "FA_6Rnd_120mm_tb_O", "FA_6Rnd_120mm_tb_I",
            "FA_8Rnd_120mm_ir_B"
        };
    };
};
