// Reaction Forces 120mm Twin Mortar — 2040 side-named magazines. Each inherits
// the confirmed RF magazine body (so it chambers and, for the guided / laser /
// mine / AT-mine / cluster natures, inherits RF's own working mechanics). One
// body per nature; three side variants (_B West / _O East / _I Ind) with the
// West/East/Ind naming convention. Fed to Twin_Mortar_120mm_RF in CfgWeapons.hpp.
//
// Natures still pending (need the RF ammo classnames to author distinct 2040
// ammo, since they share a body with another nature or have no RF body):
//   STRIX terminal-AT, thermobaric, and 120mm IR illum (no illum body in the
//   Twin loadout). The 60mm Commando family is likewise pending its classnames.
class CfgMagazines {
    class 6Rnd_120mm_HE_shells_RF;
    class 2Rnd_120mm_Mo_guided_RF;
    class 2Rnd_120mm_Mo_LG_RF;
    class 4Rnd_120mm_Mo_smoke_RF;
    class 2Rnd_120mm_Mo_mine_RF;
    class 4Rnd_120mm_Mo_AT_mine_RF;
    class 2Rnd_120mm_Mo_Cluster_RF;
    class 8Rnd_82mm_Mo_Flare_white;  // vanilla flare body for the IR illum (no RF illum body)

    // HE-ER — extended-range HE
    class FA_6Rnd_120mm_heer_B: 6Rnd_120mm_HE_shells_RF { author = QAUTHOR; ammo = "FA_120_heer"; displayName = "[Ghost] 6Rnd 120mm M934E1 HE-ER"; descriptionShort = "HE-ER — general-purpose HE<br/>120mm extended-range HE (2040)<br/>Prefragmented, ~30 m lethal, ~9 km"; };
    class FA_6Rnd_120mm_heer_O: 6Rnd_120mm_HE_shells_RF { author = QAUTHOR; ammo = "FA_120_heer_O"; displayName = "[Ghost] 6Rnd 120mm Type 120-1 HE"; descriptionShort = "HE-ER — general-purpose HE<br/>120mm extended-range HE (2040)<br/>Prefragmented, ~30 m lethal, ~9 km"; };
    class FA_6Rnd_120mm_heer_I: 6Rnd_120mm_HE_shells_RF { author = QAUTHOR; ammo = "FA_120_heer_I"; displayName = "[Ghost] 6Rnd 120mm AF-120E"; descriptionShort = "HE-ER — general-purpose HE<br/>120mm extended-range HE (2040)<br/>Prefragmented, ~30 m lethal, ~9 km"; };

    // GPS precision
    class FA_2Rnd_120mm_apmi_B: 2Rnd_120mm_Mo_guided_RF { author = QAUTHOR; ammo = "FA_120_gps"; displayName = "[Ghost] 2Rnd 120mm XM1113-P"; descriptionShort = "GPS precision<br/>120mm GPS precision HE (2040)<br/>GPS/GLONASS to a fixed grid, first-round precision"; };
    class FA_2Rnd_120mm_apmi_O: 2Rnd_120mm_Mo_guided_RF { author = QAUTHOR; ammo = "FA_120_gps_O"; displayName = "[Ghost] 2Rnd 120mm Type 120-GN"; descriptionShort = "GPS precision<br/>120mm GPS precision HE (2040)<br/>GPS/GLONASS to a fixed grid, first-round precision"; };
    class FA_2Rnd_120mm_apmi_I: 2Rnd_120mm_Mo_guided_RF { author = QAUTHOR; ammo = "FA_120_gps_I"; displayName = "[Ghost] 2Rnd 120mm AF-120P"; descriptionShort = "GPS precision<br/>120mm GPS precision HE (2040)<br/>GPS/GLONASS to a fixed grid, first-round precision"; };

    // LGM — laser-guided HE
    class FA_2Rnd_120mm_lgm_B: 2Rnd_120mm_Mo_LG_RF { author = QAUTHOR; ammo = "FA_120_lgm"; displayName = "[Ghost] 2Rnd 120mm M-LGM120"; descriptionShort = "Laser-guided<br/>120mm laser-guided HE (2040)<br/>Homes on a designated laser spot - movers or points"; };
    class FA_2Rnd_120mm_lgm_O: 2Rnd_120mm_Mo_LG_RF { author = QAUTHOR; ammo = "FA_120_lgm_O"; displayName = "[Ghost] 2Rnd 120mm Type 120G Gran"; descriptionShort = "Laser-guided<br/>120mm laser-guided HE (2040)<br/>Homes on a designated laser spot - movers or points"; };
    class FA_2Rnd_120mm_lgm_I: 2Rnd_120mm_Mo_LG_RF { author = QAUTHOR; ammo = "FA_120_lgm_I"; displayName = "[Ghost] 2Rnd 120mm AF-120L"; descriptionShort = "Laser-guided<br/>120mm laser-guided HE (2040)<br/>Homes on a designated laser spot - movers or points"; };

    // MS — multispectral smoke
    class FA_4Rnd_120mm_smk_B: 4Rnd_120mm_Mo_smoke_RF { author = QAUTHOR; ammo = "FA_120_smk"; displayName = "[Ghost] 4Rnd 120mm M-SMK 120"; descriptionShort = "Multispectral smoke<br/>120mm multispectral smoke (2040)<br/>Visual + thermal screen, larger and longer"; };
    class FA_4Rnd_120mm_smk_O: 4Rnd_120mm_Mo_smoke_RF { author = QAUTHOR; ammo = "FA_120_smk_O"; displayName = "[Ghost] 4Rnd 120mm Type 120D"; descriptionShort = "Multispectral smoke<br/>120mm multispectral smoke (2040)<br/>Visual + thermal screen, larger and longer"; };
    class FA_4Rnd_120mm_smk_I: 4Rnd_120mm_Mo_smoke_RF { author = QAUTHOR; ammo = "FA_120_smk_I"; displayName = "[Ghost] 4Rnd 120mm AF-120S"; descriptionShort = "Multispectral smoke<br/>120mm multispectral smoke (2040)<br/>Visual + thermal screen, larger and longer"; };

    // Scatterable AP mines
    class FA_2Rnd_120mm_apmine_B: 2Rnd_120mm_Mo_mine_RF { author = QAUTHOR; ammo = "FA_120_apmine"; displayName = "[Ghost] 2Rnd 120mm RAAM-P"; descriptionShort = "Scatterable AP mines<br/>120mm scatterable AP mines (2040)<br/>Self-destruct minefield over the impact area"; };
    class FA_2Rnd_120mm_apmine_O: 2Rnd_120mm_Mo_mine_RF { author = QAUTHOR; ammo = "FA_120_apmine_O"; displayName = "[Ghost] 2Rnd 120mm Type 120-PP"; descriptionShort = "Scatterable AP mines<br/>120mm scatterable AP mines (2040)<br/>Self-destruct minefield over the impact area"; };
    class FA_2Rnd_120mm_apmine_I: 2Rnd_120mm_Mo_mine_RF { author = QAUTHOR; ammo = "FA_120_apmine_I"; displayName = "[Ghost] 2Rnd 120mm AF-120MP"; descriptionShort = "Scatterable AP mines<br/>120mm scatterable AP mines (2040)<br/>Self-destruct minefield over the impact area"; };

    // Scatterable AT mines
    class FA_4Rnd_120mm_atmine_B: 4Rnd_120mm_Mo_AT_mine_RF { author = QAUTHOR; ammo = "FA_120_atmine"; displayName = "[Ghost] 4Rnd 120mm RAAM-AT"; descriptionShort = "Scatterable AT mines<br/>120mm scatterable AT mines (2040)<br/>Self-destruct minefield over the impact area"; };
    class FA_4Rnd_120mm_atmine_O: 4Rnd_120mm_Mo_AT_mine_RF { author = QAUTHOR; ammo = "FA_120_atmine_O"; displayName = "[Ghost] 4Rnd 120mm Type 120-PT"; descriptionShort = "Scatterable AT mines<br/>120mm scatterable AT mines (2040)<br/>Self-destruct minefield over the impact area"; };
    class FA_4Rnd_120mm_atmine_I: 4Rnd_120mm_Mo_AT_mine_RF { author = QAUTHOR; ammo = "FA_120_atmine_I"; displayName = "[Ghost] 4Rnd 120mm AF-120MT"; descriptionShort = "Scatterable AT mines<br/>120mm scatterable AT mines (2040)<br/>Self-destruct minefield over the impact area"; };

    // Sensor-fuzed submunition (CCM-compliant successor to the cluster round)
    class FA_2Rnd_120mm_sfm_B: 2Rnd_120mm_Mo_Cluster_RF { author = QAUTHOR; ammo = "FA_120_sfm"; displayName = "[Ghost] 2Rnd 120mm M-SFM"; descriptionShort = "Sensor-fuzed submunition<br/>120mm sensor-fuzed submunition (2040)<br/>Top-attack self-destructing submunitions over armor"; };
    class FA_2Rnd_120mm_sfm_O: 2Rnd_120mm_Mo_Cluster_RF { author = QAUTHOR; ammo = "FA_120_sfm_O"; displayName = "[Ghost] 2Rnd 120mm Type 120-SF"; descriptionShort = "Sensor-fuzed submunition<br/>120mm sensor-fuzed submunition (2040)<br/>Top-attack self-destructing submunitions over armor"; };
    class FA_2Rnd_120mm_sfm_I: 2Rnd_120mm_Mo_Cluster_RF { author = QAUTHOR; ammo = "FA_120_sfm_I"; displayName = "[Ghost] 2Rnd 120mm AF-120SF"; descriptionShort = "Sensor-fuzed submunition<br/>120mm sensor-fuzed submunition (2040)<br/>Top-attack self-destructing submunitions over armor"; };

    // STRIX — terminal top-attack AT (on the guided body, with a HEAT penetrator)
    class FA_2Rnd_120mm_strix_B: 2Rnd_120mm_Mo_guided_RF { author = QAUTHOR; ammo = "FA_120_strix"; displayName = "[Ghost] 2Rnd 120mm M-STRIX 120"; descriptionShort = "STRIX top-attack AT<br/>120mm top-attack AT (2040)<br/>Fire-and-forget IR seeker, dives on top armor - 650mm RHA"; };
    class FA_2Rnd_120mm_strix_O: 2Rnd_120mm_Mo_guided_RF { author = QAUTHOR; ammo = "FA_120_strix_O"; displayName = "[Ghost] 2Rnd 120mm Type 120K Kitolov"; descriptionShort = "STRIX top-attack AT<br/>120mm top-attack AT (2040)<br/>Fire-and-forget IR seeker, dives on top armor - 650mm RHA"; };
    class FA_2Rnd_120mm_strix_I: 2Rnd_120mm_Mo_guided_RF { author = QAUTHOR; ammo = "FA_120_strix_I"; displayName = "[Ghost] 2Rnd 120mm AF-120K"; descriptionShort = "STRIX top-attack AT<br/>120mm top-attack AT (2040)<br/>Fire-and-forget IR seeker, dives on top armor - 650mm RHA"; };

    // TB — thermobaric (on the HE body)
    class FA_6Rnd_120mm_tb_B: 6Rnd_120mm_HE_shells_RF { author = QAUTHOR; ammo = "FA_120_tb"; displayName = "[Ghost] 6Rnd 120mm M-TB 120"; descriptionShort = "Thermobaric<br/>120mm thermobaric (2040)<br/>Enhanced-blast overpressure vs structures, trenches, rooms - ~40 m lethal"; };
    class FA_6Rnd_120mm_tb_O: 6Rnd_120mm_HE_shells_RF { author = QAUTHOR; ammo = "FA_120_tb_O"; displayName = "[Ghost] 6Rnd 120mm Type 120TB"; descriptionShort = "Thermobaric<br/>120mm thermobaric (2040)<br/>Enhanced-blast overpressure vs structures, trenches, rooms - ~40 m lethal"; };
    class FA_6Rnd_120mm_tb_I: 6Rnd_120mm_HE_shells_RF { author = QAUTHOR; ammo = "FA_120_tb_I"; displayName = "[Ghost] 6Rnd 120mm AF-120T"; descriptionShort = "Thermobaric<br/>120mm thermobaric (2040)<br/>Enhanced-blast overpressure vs structures, trenches, rooms - ~40 m lethal"; };

    // IR illum — West only. On the vanilla flare body (no RF illum body exists);
    // the IR/NVG-only behaviour uses the vanilla flare and may need FX tuning.
    class FA_8Rnd_120mm_ir_B: 8Rnd_82mm_Mo_Flare_white { author = QAUTHOR; displayName = "[Ghost] 120mm M-IR 120"; descriptionShort = "IR illumination (West-only)<br/>120mm IR illumination (2040)<br/>NVG-only flare - lights the field, dark to the naked eye (West only)"; };

    // ---- CSAT 12.7x55 (ASh-12) magazines ----
    // On the RF standard mag bodies (20Rnd / 10Rnd). Wood/desert cosmetic bodies
    // are skins of the same round, so not duplicated. These need to be added to
    // the ASh-12's magazineWell (name TBD) to appear on the rifle.
    class 20Rnd_127x55_Mag_RF;
    class 10Rnd_127x55_Mag_RF;
    class FA_rf_20Rnd_127x55_7N52: 20Rnd_127x55_Mag_RF { author = QAUTHOR; ammo = "FA_rf_ammo_127x55_7N52"; displayName = "[Ghost] 20Rnd 12.7x55 7N52 Molot"; descriptionShort = "12.7x55 tungsten AP, transonic (2040)"; };
    class FA_rf_20Rnd_127x55_7U13: 20Rnd_127x55_Mag_RF { author = QAUTHOR; ammo = "FA_rf_ammo_127x55_7U13"; displayName = "[Ghost] 20Rnd 12.7x55 7U13 Molot-S"; descriptionShort = "12.7x55 subsonic tungsten AP (2040)"; };
    class FA_rf_20Rnd_127x55_7U14: 20Rnd_127x55_Mag_RF { author = QAUTHOR; ammo = "FA_rf_ammo_127x55_7U14"; displayName = "[Ghost] 20Rnd 12.7x55 7U14 Uragan"; descriptionShort = "12.7x55 subsonic heavy HP (2040)"; };
    class FA_rf_10Rnd_127x55_7N52: 10Rnd_127x55_Mag_RF { author = QAUTHOR; ammo = "FA_rf_ammo_127x55_7N52"; displayName = "[Ghost] 10Rnd 12.7x55 7N52 Molot"; descriptionShort = "12.7x55 tungsten AP, transonic (2040)"; };
    class FA_rf_10Rnd_127x55_7U13: 10Rnd_127x55_Mag_RF { author = QAUTHOR; ammo = "FA_rf_ammo_127x55_7U13"; displayName = "[Ghost] 10Rnd 12.7x55 7U13 Molot-S"; descriptionShort = "12.7x55 subsonic tungsten AP (2040)"; };
    class FA_rf_10Rnd_127x55_7U14: 10Rnd_127x55_Mag_RF { author = QAUTHOR; ammo = "FA_rf_ammo_127x55_7U14"; displayName = "[Ghost] 10Rnd 12.7x55 7U14 Uragan"; descriptionShort = "12.7x55 subsonic heavy HP (2040)"; };

    // ---- CSAT RC40 revolver-GL shells (ASh-12 GL) ----
    // On the RF RC40 shell bodies; registered into the CBA 40mm GL wells (see
    // CfgMagazinewells.hpp), the same wells RF's own RC40 rounds use.
    class 1Rnd_RC40_HE_shell_RF;
    class 1Rnd_RC40_SmokeWhite_shell_RF;
    class FA_1Rnd_RC40_HEP: 1Rnd_RC40_HE_shell_RF { author = QAUTHOR; ammo = "FA_ammo_RC40_HEP"; displayName = "[Ghost] RC40 HE-P"; descriptionShort = "RC40 programmable airburst HE (2040)<br/>Impact / delay / airburst (Mk364 dial)"; };
    class FA_1Rnd_RC40_MS: 1Rnd_RC40_SmokeWhite_shell_RF { author = QAUTHOR; ammo = "FA_ammo_RC40_MS"; displayName = "[Ghost] RC40 MS"; descriptionShort = "RC40 multispectral smoke (2040)<br/>Visual + thermal screen"; };
    class FA_1Rnd_RC40_AD: 1Rnd_RC40_HE_shell_RF { author = QAUTHOR; ammo = "FA_ammo_RC40_AD"; displayName = "[Ghost] RC40 AD"; descriptionShort = "RC40 anti-drone proximity (2040)<br/>C-UAS - bursts near drones (PAB script)"; };
    class FA_1Rnd_RC40_DP: 1Rnd_RC40_HE_shell_RF { author = QAUTHOR; ammo = "FA_ammo_RC40_DP"; displayName = "[Ghost] RC40 DP"; descriptionShort = "RC40 dual-purpose HEDP (2040)<br/>~50mm RHA + fragmentation"; };

    // ============================================================
    // 5.56x45 on RF STANAG-AP mag bodies (black / khaki / tan). Each cosmetic
    // body carries the full FA 5.56 lineup (Mk327 HV / Mk332 AP / XM891 CTEP,
    // each base + 7 tracer colours), fed to the STANAG_556x45 well.
    // ============================================================
    class 30Rnd_556x45_AP_Stanag_RF;
    class 30Rnd_556x45_AP_Stanag_khk_RF;
    class 30Rnd_556x45_AP_Stanag_Tan_RF;

    // ---- 5.56x45 on RF body 30Rnd_556x45_AP_Stanag_RF (black) ----
    class FA_30Rnd_556x45_AP_Stanag_RF: 30Rnd_556x45_AP_Stanag_RF { author = QAUTHOR; displayName = "[Ghost] 30Rnd Mk327 HV"; descriptionShort = "Mk327 HV"; ammo = "FA_b_556_Mk327_HV"; initSpeed = 1000; };
    class FA_30Rnd_556x45_AP_Stanag_RF_T_Red: FA_30Rnd_556x45_AP_Stanag_RF { ammo = "FA_b_556_Mk327_HV_T_Red"; displayName = "[Ghost] 30Rnd Mk327 HV Red Tracer"; descriptionShort = "Mk327 HV"; tracersEvery = 4; };
    class FA_30Rnd_556x45_AP_Stanag_RF_T_Yellow: FA_30Rnd_556x45_AP_Stanag_RF { ammo = "FA_b_556_Mk327_HV_T_Yellow"; displayName = "[Ghost] 30Rnd Mk327 HV Yellow Tracer"; descriptionShort = "Mk327 HV"; tracersEvery = 4; };
    class FA_30Rnd_556x45_AP_Stanag_RF_T_Green: FA_30Rnd_556x45_AP_Stanag_RF { ammo = "FA_b_556_Mk327_HV_T_Green"; displayName = "[Ghost] 30Rnd Mk327 HV Green Tracer"; descriptionShort = "Mk327 HV"; tracersEvery = 4; };
    class FA_30Rnd_556x45_AP_Stanag_RF_T_White: FA_30Rnd_556x45_AP_Stanag_RF { ammo = "FA_b_556_Mk327_HV_T_White"; displayName = "[Ghost] 30Rnd Mk327 HV White Tracer"; descriptionShort = "Mk327 HV"; tracersEvery = 4; };
    class FA_30Rnd_556x45_AP_Stanag_RF_T_Blue: FA_30Rnd_556x45_AP_Stanag_RF { ammo = "FA_b_556_Mk327_HV_T_Blue"; displayName = "[Ghost] 30Rnd Mk327 HV Blue Tracer"; descriptionShort = "Mk327 HV"; tracersEvery = 4; };
    class FA_30Rnd_556x45_AP_Stanag_RF_T_Orange: FA_30Rnd_556x45_AP_Stanag_RF { ammo = "FA_b_556_Mk327_HV_T_Orange"; displayName = "[Ghost] 30Rnd Mk327 HV Orange Tracer"; descriptionShort = "Mk327 HV"; tracersEvery = 4; };
    class FA_30Rnd_556x45_AP_Stanag_RF_T_IR: FA_30Rnd_556x45_AP_Stanag_RF { ammo = "FA_b_556_Mk327_HV_T_IR"; displayName = "[Ghost] 30Rnd Mk327 HV IR Tracer"; descriptionShort = "Mk327 HV"; tracersEvery = 4; };
    class FA_30Rnd_556x45_AP_Stanag_RF_Mk332_AP: 30Rnd_556x45_AP_Stanag_RF { author = QAUTHOR; displayName = "[Ghost] 30Rnd Mk332 AP"; descriptionShort = "Mk332 AP"; ammo = "FA_b_556_Mk332_AP"; initSpeed = 940; };
    class FA_30Rnd_556x45_AP_Stanag_RF_Mk332_AP_T_Red: FA_30Rnd_556x45_AP_Stanag_RF_Mk332_AP { ammo = "FA_b_556_Mk332_AP_T_Red"; displayName = "[Ghost] 30Rnd Mk332 AP Red Tracer"; descriptionShort = "Mk332 AP"; tracersEvery = 4; };
    class FA_30Rnd_556x45_AP_Stanag_RF_Mk332_AP_T_Yellow: FA_30Rnd_556x45_AP_Stanag_RF_Mk332_AP { ammo = "FA_b_556_Mk332_AP_T_Yellow"; displayName = "[Ghost] 30Rnd Mk332 AP Yellow Tracer"; descriptionShort = "Mk332 AP"; tracersEvery = 4; };
    class FA_30Rnd_556x45_AP_Stanag_RF_Mk332_AP_T_Green: FA_30Rnd_556x45_AP_Stanag_RF_Mk332_AP { ammo = "FA_b_556_Mk332_AP_T_Green"; displayName = "[Ghost] 30Rnd Mk332 AP Green Tracer"; descriptionShort = "Mk332 AP"; tracersEvery = 4; };
    class FA_30Rnd_556x45_AP_Stanag_RF_Mk332_AP_T_White: FA_30Rnd_556x45_AP_Stanag_RF_Mk332_AP { ammo = "FA_b_556_Mk332_AP_T_White"; displayName = "[Ghost] 30Rnd Mk332 AP White Tracer"; descriptionShort = "Mk332 AP"; tracersEvery = 4; };
    class FA_30Rnd_556x45_AP_Stanag_RF_Mk332_AP_T_Blue: FA_30Rnd_556x45_AP_Stanag_RF_Mk332_AP { ammo = "FA_b_556_Mk332_AP_T_Blue"; displayName = "[Ghost] 30Rnd Mk332 AP Blue Tracer"; descriptionShort = "Mk332 AP"; tracersEvery = 4; };
    class FA_30Rnd_556x45_AP_Stanag_RF_Mk332_AP_T_Orange: FA_30Rnd_556x45_AP_Stanag_RF_Mk332_AP { ammo = "FA_b_556_Mk332_AP_T_Orange"; displayName = "[Ghost] 30Rnd Mk332 AP Orange Tracer"; descriptionShort = "Mk332 AP"; tracersEvery = 4; };
    class FA_30Rnd_556x45_AP_Stanag_RF_Mk332_AP_T_IR: FA_30Rnd_556x45_AP_Stanag_RF_Mk332_AP { ammo = "FA_b_556_Mk332_AP_T_IR"; displayName = "[Ghost] 30Rnd Mk332 AP IR Tracer"; descriptionShort = "Mk332 AP"; tracersEvery = 4; };
    class FA_30Rnd_556x45_AP_Stanag_RF_XM891_CTEP: 30Rnd_556x45_AP_Stanag_RF { author = QAUTHOR; displayName = "[Ghost] 30Rnd XM891 CTEP"; descriptionShort = "XM891 CTEP"; ammo = "FA_b_556_XM891_CTEP"; initSpeed = 1015; };
    class FA_30Rnd_556x45_AP_Stanag_RF_XM891_CTEP_T_Red: FA_30Rnd_556x45_AP_Stanag_RF_XM891_CTEP { ammo = "FA_b_556_XM891_CTEP_T_Red"; displayName = "[Ghost] 30Rnd XM891 CTEP Red Tracer"; descriptionShort = "XM891 CTEP"; tracersEvery = 4; };
    class FA_30Rnd_556x45_AP_Stanag_RF_XM891_CTEP_T_Yellow: FA_30Rnd_556x45_AP_Stanag_RF_XM891_CTEP { ammo = "FA_b_556_XM891_CTEP_T_Yellow"; displayName = "[Ghost] 30Rnd XM891 CTEP Yellow Tracer"; descriptionShort = "XM891 CTEP"; tracersEvery = 4; };
    class FA_30Rnd_556x45_AP_Stanag_RF_XM891_CTEP_T_Green: FA_30Rnd_556x45_AP_Stanag_RF_XM891_CTEP { ammo = "FA_b_556_XM891_CTEP_T_Green"; displayName = "[Ghost] 30Rnd XM891 CTEP Green Tracer"; descriptionShort = "XM891 CTEP"; tracersEvery = 4; };
    class FA_30Rnd_556x45_AP_Stanag_RF_XM891_CTEP_T_White: FA_30Rnd_556x45_AP_Stanag_RF_XM891_CTEP { ammo = "FA_b_556_XM891_CTEP_T_White"; displayName = "[Ghost] 30Rnd XM891 CTEP White Tracer"; descriptionShort = "XM891 CTEP"; tracersEvery = 4; };
    class FA_30Rnd_556x45_AP_Stanag_RF_XM891_CTEP_T_Blue: FA_30Rnd_556x45_AP_Stanag_RF_XM891_CTEP { ammo = "FA_b_556_XM891_CTEP_T_Blue"; displayName = "[Ghost] 30Rnd XM891 CTEP Blue Tracer"; descriptionShort = "XM891 CTEP"; tracersEvery = 4; };
    class FA_30Rnd_556x45_AP_Stanag_RF_XM891_CTEP_T_Orange: FA_30Rnd_556x45_AP_Stanag_RF_XM891_CTEP { ammo = "FA_b_556_XM891_CTEP_T_Orange"; displayName = "[Ghost] 30Rnd XM891 CTEP Orange Tracer"; descriptionShort = "XM891 CTEP"; tracersEvery = 4; };
    class FA_30Rnd_556x45_AP_Stanag_RF_XM891_CTEP_T_IR: FA_30Rnd_556x45_AP_Stanag_RF_XM891_CTEP { ammo = "FA_b_556_XM891_CTEP_T_IR"; displayName = "[Ghost] 30Rnd XM891 CTEP IR Tracer"; descriptionShort = "XM891 CTEP"; tracersEvery = 4; };

    // ---- 5.56x45 on RF body 30Rnd_556x45_AP_Stanag_khk_RF (Khaki) ----
    class FA_30Rnd_556x45_AP_Stanag_khk_RF: 30Rnd_556x45_AP_Stanag_khk_RF { author = QAUTHOR; displayName = "[Ghost] 30Rnd Mk327 HV Khaki"; descriptionShort = "Mk327 HV"; ammo = "FA_b_556_Mk327_HV"; initSpeed = 1000; };
    class FA_30Rnd_556x45_AP_Stanag_khk_RF_T_Red: FA_30Rnd_556x45_AP_Stanag_khk_RF { ammo = "FA_b_556_Mk327_HV_T_Red"; displayName = "[Ghost] 30Rnd Mk327 HV Khaki Red Tracer"; descriptionShort = "Mk327 HV"; tracersEvery = 4; };
    class FA_30Rnd_556x45_AP_Stanag_khk_RF_T_Yellow: FA_30Rnd_556x45_AP_Stanag_khk_RF { ammo = "FA_b_556_Mk327_HV_T_Yellow"; displayName = "[Ghost] 30Rnd Mk327 HV Khaki Yellow Tracer"; descriptionShort = "Mk327 HV"; tracersEvery = 4; };
    class FA_30Rnd_556x45_AP_Stanag_khk_RF_T_Green: FA_30Rnd_556x45_AP_Stanag_khk_RF { ammo = "FA_b_556_Mk327_HV_T_Green"; displayName = "[Ghost] 30Rnd Mk327 HV Khaki Green Tracer"; descriptionShort = "Mk327 HV"; tracersEvery = 4; };
    class FA_30Rnd_556x45_AP_Stanag_khk_RF_T_White: FA_30Rnd_556x45_AP_Stanag_khk_RF { ammo = "FA_b_556_Mk327_HV_T_White"; displayName = "[Ghost] 30Rnd Mk327 HV Khaki White Tracer"; descriptionShort = "Mk327 HV"; tracersEvery = 4; };
    class FA_30Rnd_556x45_AP_Stanag_khk_RF_T_Blue: FA_30Rnd_556x45_AP_Stanag_khk_RF { ammo = "FA_b_556_Mk327_HV_T_Blue"; displayName = "[Ghost] 30Rnd Mk327 HV Khaki Blue Tracer"; descriptionShort = "Mk327 HV"; tracersEvery = 4; };
    class FA_30Rnd_556x45_AP_Stanag_khk_RF_T_Orange: FA_30Rnd_556x45_AP_Stanag_khk_RF { ammo = "FA_b_556_Mk327_HV_T_Orange"; displayName = "[Ghost] 30Rnd Mk327 HV Khaki Orange Tracer"; descriptionShort = "Mk327 HV"; tracersEvery = 4; };
    class FA_30Rnd_556x45_AP_Stanag_khk_RF_T_IR: FA_30Rnd_556x45_AP_Stanag_khk_RF { ammo = "FA_b_556_Mk327_HV_T_IR"; displayName = "[Ghost] 30Rnd Mk327 HV Khaki IR Tracer"; descriptionShort = "Mk327 HV"; tracersEvery = 4; };
    class FA_30Rnd_556x45_AP_Stanag_khk_RF_Mk332_AP: 30Rnd_556x45_AP_Stanag_khk_RF { author = QAUTHOR; displayName = "[Ghost] 30Rnd Mk332 AP Khaki"; descriptionShort = "Mk332 AP"; ammo = "FA_b_556_Mk332_AP"; initSpeed = 940; };
    class FA_30Rnd_556x45_AP_Stanag_khk_RF_Mk332_AP_T_Red: FA_30Rnd_556x45_AP_Stanag_khk_RF_Mk332_AP { ammo = "FA_b_556_Mk332_AP_T_Red"; displayName = "[Ghost] 30Rnd Mk332 AP Khaki Red Tracer"; descriptionShort = "Mk332 AP"; tracersEvery = 4; };
    class FA_30Rnd_556x45_AP_Stanag_khk_RF_Mk332_AP_T_Yellow: FA_30Rnd_556x45_AP_Stanag_khk_RF_Mk332_AP { ammo = "FA_b_556_Mk332_AP_T_Yellow"; displayName = "[Ghost] 30Rnd Mk332 AP Khaki Yellow Tracer"; descriptionShort = "Mk332 AP"; tracersEvery = 4; };
    class FA_30Rnd_556x45_AP_Stanag_khk_RF_Mk332_AP_T_Green: FA_30Rnd_556x45_AP_Stanag_khk_RF_Mk332_AP { ammo = "FA_b_556_Mk332_AP_T_Green"; displayName = "[Ghost] 30Rnd Mk332 AP Khaki Green Tracer"; descriptionShort = "Mk332 AP"; tracersEvery = 4; };
    class FA_30Rnd_556x45_AP_Stanag_khk_RF_Mk332_AP_T_White: FA_30Rnd_556x45_AP_Stanag_khk_RF_Mk332_AP { ammo = "FA_b_556_Mk332_AP_T_White"; displayName = "[Ghost] 30Rnd Mk332 AP Khaki White Tracer"; descriptionShort = "Mk332 AP"; tracersEvery = 4; };
    class FA_30Rnd_556x45_AP_Stanag_khk_RF_Mk332_AP_T_Blue: FA_30Rnd_556x45_AP_Stanag_khk_RF_Mk332_AP { ammo = "FA_b_556_Mk332_AP_T_Blue"; displayName = "[Ghost] 30Rnd Mk332 AP Khaki Blue Tracer"; descriptionShort = "Mk332 AP"; tracersEvery = 4; };
    class FA_30Rnd_556x45_AP_Stanag_khk_RF_Mk332_AP_T_Orange: FA_30Rnd_556x45_AP_Stanag_khk_RF_Mk332_AP { ammo = "FA_b_556_Mk332_AP_T_Orange"; displayName = "[Ghost] 30Rnd Mk332 AP Khaki Orange Tracer"; descriptionShort = "Mk332 AP"; tracersEvery = 4; };
    class FA_30Rnd_556x45_AP_Stanag_khk_RF_Mk332_AP_T_IR: FA_30Rnd_556x45_AP_Stanag_khk_RF_Mk332_AP { ammo = "FA_b_556_Mk332_AP_T_IR"; displayName = "[Ghost] 30Rnd Mk332 AP Khaki IR Tracer"; descriptionShort = "Mk332 AP"; tracersEvery = 4; };
    class FA_30Rnd_556x45_AP_Stanag_khk_RF_XM891_CTEP: 30Rnd_556x45_AP_Stanag_khk_RF { author = QAUTHOR; displayName = "[Ghost] 30Rnd XM891 CTEP Khaki"; descriptionShort = "XM891 CTEP"; ammo = "FA_b_556_XM891_CTEP"; initSpeed = 1015; };
    class FA_30Rnd_556x45_AP_Stanag_khk_RF_XM891_CTEP_T_Red: FA_30Rnd_556x45_AP_Stanag_khk_RF_XM891_CTEP { ammo = "FA_b_556_XM891_CTEP_T_Red"; displayName = "[Ghost] 30Rnd XM891 CTEP Khaki Red Tracer"; descriptionShort = "XM891 CTEP"; tracersEvery = 4; };
    class FA_30Rnd_556x45_AP_Stanag_khk_RF_XM891_CTEP_T_Yellow: FA_30Rnd_556x45_AP_Stanag_khk_RF_XM891_CTEP { ammo = "FA_b_556_XM891_CTEP_T_Yellow"; displayName = "[Ghost] 30Rnd XM891 CTEP Khaki Yellow Tracer"; descriptionShort = "XM891 CTEP"; tracersEvery = 4; };
    class FA_30Rnd_556x45_AP_Stanag_khk_RF_XM891_CTEP_T_Green: FA_30Rnd_556x45_AP_Stanag_khk_RF_XM891_CTEP { ammo = "FA_b_556_XM891_CTEP_T_Green"; displayName = "[Ghost] 30Rnd XM891 CTEP Khaki Green Tracer"; descriptionShort = "XM891 CTEP"; tracersEvery = 4; };
    class FA_30Rnd_556x45_AP_Stanag_khk_RF_XM891_CTEP_T_White: FA_30Rnd_556x45_AP_Stanag_khk_RF_XM891_CTEP { ammo = "FA_b_556_XM891_CTEP_T_White"; displayName = "[Ghost] 30Rnd XM891 CTEP Khaki White Tracer"; descriptionShort = "XM891 CTEP"; tracersEvery = 4; };
    class FA_30Rnd_556x45_AP_Stanag_khk_RF_XM891_CTEP_T_Blue: FA_30Rnd_556x45_AP_Stanag_khk_RF_XM891_CTEP { ammo = "FA_b_556_XM891_CTEP_T_Blue"; displayName = "[Ghost] 30Rnd XM891 CTEP Khaki Blue Tracer"; descriptionShort = "XM891 CTEP"; tracersEvery = 4; };
    class FA_30Rnd_556x45_AP_Stanag_khk_RF_XM891_CTEP_T_Orange: FA_30Rnd_556x45_AP_Stanag_khk_RF_XM891_CTEP { ammo = "FA_b_556_XM891_CTEP_T_Orange"; displayName = "[Ghost] 30Rnd XM891 CTEP Khaki Orange Tracer"; descriptionShort = "XM891 CTEP"; tracersEvery = 4; };
    class FA_30Rnd_556x45_AP_Stanag_khk_RF_XM891_CTEP_T_IR: FA_30Rnd_556x45_AP_Stanag_khk_RF_XM891_CTEP { ammo = "FA_b_556_XM891_CTEP_T_IR"; displayName = "[Ghost] 30Rnd XM891 CTEP Khaki IR Tracer"; descriptionShort = "XM891 CTEP"; tracersEvery = 4; };

    // ---- 5.56x45 on RF body 30Rnd_556x45_AP_Stanag_Tan_RF (Tan) ----
    class FA_30Rnd_556x45_AP_Stanag_Tan_RF: 30Rnd_556x45_AP_Stanag_Tan_RF { author = QAUTHOR; displayName = "[Ghost] 30Rnd Mk327 HV Tan"; descriptionShort = "Mk327 HV"; ammo = "FA_b_556_Mk327_HV"; initSpeed = 1000; };
    class FA_30Rnd_556x45_AP_Stanag_Tan_RF_T_Red: FA_30Rnd_556x45_AP_Stanag_Tan_RF { ammo = "FA_b_556_Mk327_HV_T_Red"; displayName = "[Ghost] 30Rnd Mk327 HV Tan Red Tracer"; descriptionShort = "Mk327 HV"; tracersEvery = 4; };
    class FA_30Rnd_556x45_AP_Stanag_Tan_RF_T_Yellow: FA_30Rnd_556x45_AP_Stanag_Tan_RF { ammo = "FA_b_556_Mk327_HV_T_Yellow"; displayName = "[Ghost] 30Rnd Mk327 HV Tan Yellow Tracer"; descriptionShort = "Mk327 HV"; tracersEvery = 4; };
    class FA_30Rnd_556x45_AP_Stanag_Tan_RF_T_Green: FA_30Rnd_556x45_AP_Stanag_Tan_RF { ammo = "FA_b_556_Mk327_HV_T_Green"; displayName = "[Ghost] 30Rnd Mk327 HV Tan Green Tracer"; descriptionShort = "Mk327 HV"; tracersEvery = 4; };
    class FA_30Rnd_556x45_AP_Stanag_Tan_RF_T_White: FA_30Rnd_556x45_AP_Stanag_Tan_RF { ammo = "FA_b_556_Mk327_HV_T_White"; displayName = "[Ghost] 30Rnd Mk327 HV Tan White Tracer"; descriptionShort = "Mk327 HV"; tracersEvery = 4; };
    class FA_30Rnd_556x45_AP_Stanag_Tan_RF_T_Blue: FA_30Rnd_556x45_AP_Stanag_Tan_RF { ammo = "FA_b_556_Mk327_HV_T_Blue"; displayName = "[Ghost] 30Rnd Mk327 HV Tan Blue Tracer"; descriptionShort = "Mk327 HV"; tracersEvery = 4; };
    class FA_30Rnd_556x45_AP_Stanag_Tan_RF_T_Orange: FA_30Rnd_556x45_AP_Stanag_Tan_RF { ammo = "FA_b_556_Mk327_HV_T_Orange"; displayName = "[Ghost] 30Rnd Mk327 HV Tan Orange Tracer"; descriptionShort = "Mk327 HV"; tracersEvery = 4; };
    class FA_30Rnd_556x45_AP_Stanag_Tan_RF_T_IR: FA_30Rnd_556x45_AP_Stanag_Tan_RF { ammo = "FA_b_556_Mk327_HV_T_IR"; displayName = "[Ghost] 30Rnd Mk327 HV Tan IR Tracer"; descriptionShort = "Mk327 HV"; tracersEvery = 4; };
    class FA_30Rnd_556x45_AP_Stanag_Tan_RF_Mk332_AP: 30Rnd_556x45_AP_Stanag_Tan_RF { author = QAUTHOR; displayName = "[Ghost] 30Rnd Mk332 AP Tan"; descriptionShort = "Mk332 AP"; ammo = "FA_b_556_Mk332_AP"; initSpeed = 940; };
    class FA_30Rnd_556x45_AP_Stanag_Tan_RF_Mk332_AP_T_Red: FA_30Rnd_556x45_AP_Stanag_Tan_RF_Mk332_AP { ammo = "FA_b_556_Mk332_AP_T_Red"; displayName = "[Ghost] 30Rnd Mk332 AP Tan Red Tracer"; descriptionShort = "Mk332 AP"; tracersEvery = 4; };
    class FA_30Rnd_556x45_AP_Stanag_Tan_RF_Mk332_AP_T_Yellow: FA_30Rnd_556x45_AP_Stanag_Tan_RF_Mk332_AP { ammo = "FA_b_556_Mk332_AP_T_Yellow"; displayName = "[Ghost] 30Rnd Mk332 AP Tan Yellow Tracer"; descriptionShort = "Mk332 AP"; tracersEvery = 4; };
    class FA_30Rnd_556x45_AP_Stanag_Tan_RF_Mk332_AP_T_Green: FA_30Rnd_556x45_AP_Stanag_Tan_RF_Mk332_AP { ammo = "FA_b_556_Mk332_AP_T_Green"; displayName = "[Ghost] 30Rnd Mk332 AP Tan Green Tracer"; descriptionShort = "Mk332 AP"; tracersEvery = 4; };
    class FA_30Rnd_556x45_AP_Stanag_Tan_RF_Mk332_AP_T_White: FA_30Rnd_556x45_AP_Stanag_Tan_RF_Mk332_AP { ammo = "FA_b_556_Mk332_AP_T_White"; displayName = "[Ghost] 30Rnd Mk332 AP Tan White Tracer"; descriptionShort = "Mk332 AP"; tracersEvery = 4; };
    class FA_30Rnd_556x45_AP_Stanag_Tan_RF_Mk332_AP_T_Blue: FA_30Rnd_556x45_AP_Stanag_Tan_RF_Mk332_AP { ammo = "FA_b_556_Mk332_AP_T_Blue"; displayName = "[Ghost] 30Rnd Mk332 AP Tan Blue Tracer"; descriptionShort = "Mk332 AP"; tracersEvery = 4; };
    class FA_30Rnd_556x45_AP_Stanag_Tan_RF_Mk332_AP_T_Orange: FA_30Rnd_556x45_AP_Stanag_Tan_RF_Mk332_AP { ammo = "FA_b_556_Mk332_AP_T_Orange"; displayName = "[Ghost] 30Rnd Mk332 AP Tan Orange Tracer"; descriptionShort = "Mk332 AP"; tracersEvery = 4; };
    class FA_30Rnd_556x45_AP_Stanag_Tan_RF_Mk332_AP_T_IR: FA_30Rnd_556x45_AP_Stanag_Tan_RF_Mk332_AP { ammo = "FA_b_556_Mk332_AP_T_IR"; displayName = "[Ghost] 30Rnd Mk332 AP Tan IR Tracer"; descriptionShort = "Mk332 AP"; tracersEvery = 4; };
    class FA_30Rnd_556x45_AP_Stanag_Tan_RF_XM891_CTEP: 30Rnd_556x45_AP_Stanag_Tan_RF { author = QAUTHOR; displayName = "[Ghost] 30Rnd XM891 CTEP Tan"; descriptionShort = "XM891 CTEP"; ammo = "FA_b_556_XM891_CTEP"; initSpeed = 1015; };
    class FA_30Rnd_556x45_AP_Stanag_Tan_RF_XM891_CTEP_T_Red: FA_30Rnd_556x45_AP_Stanag_Tan_RF_XM891_CTEP { ammo = "FA_b_556_XM891_CTEP_T_Red"; displayName = "[Ghost] 30Rnd XM891 CTEP Tan Red Tracer"; descriptionShort = "XM891 CTEP"; tracersEvery = 4; };
    class FA_30Rnd_556x45_AP_Stanag_Tan_RF_XM891_CTEP_T_Yellow: FA_30Rnd_556x45_AP_Stanag_Tan_RF_XM891_CTEP { ammo = "FA_b_556_XM891_CTEP_T_Yellow"; displayName = "[Ghost] 30Rnd XM891 CTEP Tan Yellow Tracer"; descriptionShort = "XM891 CTEP"; tracersEvery = 4; };
    class FA_30Rnd_556x45_AP_Stanag_Tan_RF_XM891_CTEP_T_Green: FA_30Rnd_556x45_AP_Stanag_Tan_RF_XM891_CTEP { ammo = "FA_b_556_XM891_CTEP_T_Green"; displayName = "[Ghost] 30Rnd XM891 CTEP Tan Green Tracer"; descriptionShort = "XM891 CTEP"; tracersEvery = 4; };
    class FA_30Rnd_556x45_AP_Stanag_Tan_RF_XM891_CTEP_T_White: FA_30Rnd_556x45_AP_Stanag_Tan_RF_XM891_CTEP { ammo = "FA_b_556_XM891_CTEP_T_White"; displayName = "[Ghost] 30Rnd XM891 CTEP Tan White Tracer"; descriptionShort = "XM891 CTEP"; tracersEvery = 4; };
    class FA_30Rnd_556x45_AP_Stanag_Tan_RF_XM891_CTEP_T_Blue: FA_30Rnd_556x45_AP_Stanag_Tan_RF_XM891_CTEP { ammo = "FA_b_556_XM891_CTEP_T_Blue"; displayName = "[Ghost] 30Rnd XM891 CTEP Tan Blue Tracer"; descriptionShort = "XM891 CTEP"; tracersEvery = 4; };
    class FA_30Rnd_556x45_AP_Stanag_Tan_RF_XM891_CTEP_T_Orange: FA_30Rnd_556x45_AP_Stanag_Tan_RF_XM891_CTEP { ammo = "FA_b_556_XM891_CTEP_T_Orange"; displayName = "[Ghost] 30Rnd XM891 CTEP Tan Orange Tracer"; descriptionShort = "XM891 CTEP"; tracersEvery = 4; };
    class FA_30Rnd_556x45_AP_Stanag_Tan_RF_XM891_CTEP_T_IR: FA_30Rnd_556x45_AP_Stanag_Tan_RF_XM891_CTEP { ammo = "FA_b_556_XM891_CTEP_T_IR"; displayName = "[Ghost] 30Rnd XM891 CTEP Tan IR Tracer"; descriptionShort = "XM891 CTEP"; tracersEvery = 4; };

    #include "CfgMagazines_compat.hpp"
};
