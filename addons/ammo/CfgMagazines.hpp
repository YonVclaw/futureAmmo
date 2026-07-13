class CfgMagazines {
    class 1Rnd_HE_Grenade_shell;
    class 3Rnd_HE_Grenade_shell;
    class 30Rnd_556x45_Stanag;
    class 200Rnd_556x45_Box_F;
    class 20Rnd_762x51_Mag;
    // Vehicle coax / HMG belt bases (Marshall coax, Rhino coax + commander HMG)
    class 200Rnd_762x51_Belt_T_Red;
    class 200Rnd_127x99_mag_Tracer_Red;
    class 200Rnd_338_Mag;
    class 130Rnd_338_Mag;
    class 150Rnd_762x54_Box;
    // ACE 7.62x51 HK417 mags
    class ACE_20Rnd_762x51_M993_AP_Mag;
    class ACE_10Rnd_762x51_Mag_SD;
    // ACE 12 Gauge shotgun mags
    class ACE_2Rnd_12Gauge_Pellets_No0_Buck;
    class ACE_2Rnd_12Gauge_Pellets_No1_Buck;
    class ACE_2Rnd_12Gauge_Pellets_No2_Buck;
    class ACE_2Rnd_12Gauge_Pellets_No3_Buck;
    class ACE_2Rnd_12Gauge_Pellets_No4_Buck;
    class ACE_2Rnd_12Gauge_Pellets_No4_Bird;
    class ACE_6Rnd_12Gauge_Pellets_No0_Buck;
    class ACE_6Rnd_12Gauge_Pellets_No1_Buck;
    class ACE_6Rnd_12Gauge_Pellets_No2_Buck;
    class ACE_6Rnd_12Gauge_Pellets_No3_Buck;
    class ACE_6Rnd_12Gauge_Pellets_No4_Buck;
    class ACE_6Rnd_12Gauge_Pellets_No4_Bird;
    // 7.62x39 — BI vanilla + Enoch
    class 30Rnd_762x39_Mag_F;
    class 30Rnd_762x39_Mag_Green_F;
    class 75Rnd_762x39_Mag_F;
    class 30Rnd_762x39_AK12_Mag_F;
    class 30Rnd_762x39_AK12_Lush_Mag_F;
    class 30Rnd_762x39_AK12_Arid_Mag_F;
    class 75rnd_762x39_AK12_Mag_F;
    class 75rnd_762x39_AK12_Lush_Mag_F;
    class 75rnd_762x39_AK12_Arid_Mag_F;
    class 100Rnd_65x39_caseless_black_mag;
    class 100Rnd_65x39_caseless_khaki_mag;
    class 100Rnd_65x39_caseless_mag;
    class 200Rnd_65x39_cased_Box;
    class 2000Rnd_65x39_Belt;
    class 1000Rnd_65x39_Belt;
    class 200Rnd_65x39_Belt;
    class 500Rnd_65x39_Belt;
    class PylonWeapon_2000Rnd_65x39_belt;
    // .338 LM base mag
    class 10Rnd_338_Mag;
    // Precision large-calibre base mags
    class 10Rnd_93x64_Mag;
    class 5Rnd_127x108_Mag;
    // .45 ACP base mags
    class 30Rnd_45ACP_Mag_SMG_01;
    class 11Rnd_45ACP_Mag;
    // 5.8x42 base mag (Type 115 / CMR-76)
    class 30Rnd_580x42_Mag_F;

    // 6.5x39 Caseless base mags
    class 30Rnd_65x39_caseless_mag;
    class 30Rnd_65x39_caseless_black_mag;
    class 30Rnd_65x39_caseless_khaki_mag;
    class 30Rnd_65x39_caseless_msbs_mag;
    
    // =========================================================
    // 5.56x45mm — Mk327 HV (hybrid case, feeds existing 5.56 wells)
    // =========================================================
    class FA_30Rnd_556_Mk327_HV: 30Rnd_556x45_Stanag {
        author = QAUTHOR;
        displayName = "[Ghost] 30Rnd Mk327 HV";
        descriptionShort = "Mk327 HV";
        ammo = "FA_556_Mk327_HV";
        initSpeed = 1000;
        mass = 8;
    };
    class FA_30Rnd_556_Mk327_HV_T_Red: FA_30Rnd_556_Mk327_HV { ammo = "FA_556_Mk327_HV_T_Red"; displayName = "[Ghost] 30Rnd Mk327 HV Red Tracer"; descriptionShort = "Mk327 HV"; tracersEvery = 4; };
    class FA_30Rnd_556_Mk327_HV_T_Yellow: FA_30Rnd_556_Mk327_HV { ammo = "FA_556_Mk327_HV_T_Yellow"; displayName = "[Ghost] 30Rnd Mk327 HV Yellow Tracer"; descriptionShort = "Mk327 HV"; tracersEvery = 4; };
    class FA_30Rnd_556_Mk327_HV_T_Green: FA_30Rnd_556_Mk327_HV { ammo = "FA_556_Mk327_HV_T_Green"; displayName = "[Ghost] 30Rnd Mk327 HV Green Tracer"; descriptionShort = "Mk327 HV"; tracersEvery = 4; };
    class FA_30Rnd_556_Mk327_HV_T_White: FA_30Rnd_556_Mk327_HV { ammo = "FA_556_Mk327_HV_T_White"; displayName = "[Ghost] 30Rnd Mk327 HV White Tracer"; descriptionShort = "Mk327 HV"; tracersEvery = 4; };
    class FA_30Rnd_556_Mk327_HV_T_Blue: FA_30Rnd_556_Mk327_HV { ammo = "FA_556_Mk327_HV_T_Blue"; displayName = "[Ghost] 30Rnd Mk327 HV Blue Tracer"; descriptionShort = "Mk327 HV"; tracersEvery = 4; };
    class FA_30Rnd_556_Mk327_HV_T_Orange: FA_30Rnd_556_Mk327_HV { ammo = "FA_556_Mk327_HV_T_Orange"; displayName = "[Ghost] 30Rnd Mk327 HV Orange Tracer"; descriptionShort = "Mk327 HV"; tracersEvery = 4; };
    class FA_30Rnd_556_Mk327_HV_T_IR: FA_30Rnd_556_Mk327_HV { ammo = "FA_556_Mk327_HV_T_IR"; displayName = "[Ghost] 30Rnd Mk327 HV IR Tracer"; descriptionShort = "Mk327 HV"; tracersEvery = 4; };

    // =========================================================
    // 5.56x45mm — XM891 CTEP (cased-telescoped, needs rated well)
    // =========================================================
    class FA_30Rnd_556_XM891_CTEP: 30Rnd_556x45_Stanag {
        author = QAUTHOR;
        displayName = "[Ghost] 30Rnd XM891 CTEP";
        descriptionShort = "XM891 CTEP";
        ammo = "FA_556_XM891_CTEP";
        initSpeed = 1015;
        mass = 6;
    };
    class FA_30Rnd_556_XM891_CTEP_T_Red: FA_30Rnd_556_XM891_CTEP { ammo = "FA_556_XM891_CTEP_T_Red"; displayName = "[Ghost] 30Rnd XM891 CTEP Red Tracer"; descriptionShort = "XM891 CTEP"; tracersEvery = 4; };
    class FA_30Rnd_556_XM891_CTEP_T_Yellow: FA_30Rnd_556_XM891_CTEP { ammo = "FA_556_XM891_CTEP_T_Yellow"; displayName = "[Ghost] 30Rnd XM891 CTEP Yellow Tracer"; descriptionShort = "XM891 CTEP"; tracersEvery = 4; };
    class FA_30Rnd_556_XM891_CTEP_T_Green: FA_30Rnd_556_XM891_CTEP { ammo = "FA_556_XM891_CTEP_T_Green"; displayName = "[Ghost] 30Rnd XM891 CTEP Green Tracer"; descriptionShort = "XM891 CTEP"; tracersEvery = 4; };
    class FA_30Rnd_556_XM891_CTEP_T_White: FA_30Rnd_556_XM891_CTEP { ammo = "FA_556_XM891_CTEP_T_White"; displayName = "[Ghost] 30Rnd XM891 CTEP White Tracer"; descriptionShort = "XM891 CTEP"; tracersEvery = 4; };
    class FA_30Rnd_556_XM891_CTEP_T_Blue: FA_30Rnd_556_XM891_CTEP { ammo = "FA_556_XM891_CTEP_T_Blue"; displayName = "[Ghost] 30Rnd XM891 CTEP Blue Tracer"; descriptionShort = "XM891 CTEP"; tracersEvery = 4; };
    class FA_30Rnd_556_XM891_CTEP_T_Orange: FA_30Rnd_556_XM891_CTEP { ammo = "FA_556_XM891_CTEP_T_Orange"; displayName = "[Ghost] 30Rnd XM891 CTEP Orange Tracer"; descriptionShort = "XM891 CTEP"; tracersEvery = 4; };
    class FA_30Rnd_556_XM891_CTEP_T_IR: FA_30Rnd_556_XM891_CTEP { ammo = "FA_556_XM891_CTEP_T_IR"; displayName = "[Ghost] 30Rnd XM891 CTEP IR Tracer"; descriptionShort = "XM891 CTEP"; tracersEvery = 4; };

    // =========================================================
    // 7.62x51mm — M80A2 HV (hybrid case, feeds existing 7.62 wells)
    // =========================================================
    class FA_20Rnd_762_M80A2_HV: 20Rnd_762x51_Mag {
        author = QAUTHOR;
        displayName = "[Ghost] 20Rnd M80A2 HV";
        descriptionShort = "M80A2 HV";
        ammo = "FA_762_M80A2_HV";
        initSpeed = 940;
        mass = 16;
    };
    class FA_20Rnd_762_M80A2_HV_T_Red: FA_20Rnd_762_M80A2_HV { ammo = "FA_762_M80A2_HV_T_Red"; displayName = "[Ghost] 20Rnd M80A2 HV Red Tracer"; descriptionShort = "M80A2 HV"; tracersEvery = 4; };
    class FA_20Rnd_762_M80A2_HV_T_Yellow: FA_20Rnd_762_M80A2_HV { ammo = "FA_762_M80A2_HV_T_Yellow"; displayName = "[Ghost] 20Rnd M80A2 HV Yellow Tracer"; descriptionShort = "M80A2 HV"; tracersEvery = 4; };
    class FA_20Rnd_762_M80A2_HV_T_Green: FA_20Rnd_762_M80A2_HV { ammo = "FA_762_M80A2_HV_T_Green"; displayName = "[Ghost] 20Rnd M80A2 HV Green Tracer"; descriptionShort = "M80A2 HV"; tracersEvery = 4; };
    class FA_20Rnd_762_M80A2_HV_T_White: FA_20Rnd_762_M80A2_HV { ammo = "FA_762_M80A2_HV_T_White"; displayName = "[Ghost] 20Rnd M80A2 HV White Tracer"; descriptionShort = "M80A2 HV"; tracersEvery = 4; };
    class FA_20Rnd_762_M80A2_HV_T_Blue: FA_20Rnd_762_M80A2_HV { ammo = "FA_762_M80A2_HV_T_Blue"; displayName = "[Ghost] 20Rnd M80A2 HV Blue Tracer"; descriptionShort = "M80A2 HV"; tracersEvery = 4; };
    class FA_20Rnd_762_M80A2_HV_T_Orange: FA_20Rnd_762_M80A2_HV { ammo = "FA_762_M80A2_HV_T_Orange"; displayName = "[Ghost] 20Rnd M80A2 HV Orange Tracer"; descriptionShort = "M80A2 HV"; tracersEvery = 4; };
    class FA_20Rnd_762_M80A2_HV_T_IR: FA_20Rnd_762_M80A2_HV { ammo = "FA_762_M80A2_HV_T_IR"; displayName = "[Ghost] 20Rnd M80A2 HV IR Tracer"; descriptionShort = "M80A2 HV"; tracersEvery = 4; };

    // =========================================================
    // 7.62x51mm — XM751 CTEP (cased-telescoped, needs rated well)
    // =========================================================
    class FA_20Rnd_762_XM751_CTEP: 20Rnd_762x51_Mag {
        author = QAUTHOR;
        displayName = "[Ghost] 20Rnd XM751 CTEP";
        descriptionShort = "XM751 CTEP";
        ammo = "FA_762_XM751_CTEP";
        initSpeed = 960;
        mass = 12;
    };
    class FA_20Rnd_762_XM751_CTEP_T_Red: FA_20Rnd_762_XM751_CTEP { ammo = "FA_762_XM751_CTEP_T_Red"; displayName = "[Ghost] 20Rnd XM751 CTEP Red Tracer"; descriptionShort = "XM751 CTEP"; tracersEvery = 4; };
    class FA_20Rnd_762_XM751_CTEP_T_Yellow: FA_20Rnd_762_XM751_CTEP { ammo = "FA_762_XM751_CTEP_T_Yellow"; displayName = "[Ghost] 20Rnd XM751 CTEP Yellow Tracer"; descriptionShort = "XM751 CTEP"; tracersEvery = 4; };
    class FA_20Rnd_762_XM751_CTEP_T_Green: FA_20Rnd_762_XM751_CTEP { ammo = "FA_762_XM751_CTEP_T_Green"; displayName = "[Ghost] 20Rnd XM751 CTEP Green Tracer"; descriptionShort = "XM751 CTEP"; tracersEvery = 4; };
    class FA_20Rnd_762_XM751_CTEP_T_White: FA_20Rnd_762_XM751_CTEP { ammo = "FA_762_XM751_CTEP_T_White"; displayName = "[Ghost] 20Rnd XM751 CTEP White Tracer"; descriptionShort = "XM751 CTEP"; tracersEvery = 4; };
    class FA_20Rnd_762_XM751_CTEP_T_Blue: FA_20Rnd_762_XM751_CTEP { ammo = "FA_762_XM751_CTEP_T_Blue"; displayName = "[Ghost] 20Rnd XM751 CTEP Blue Tracer"; descriptionShort = "XM751 CTEP"; tracersEvery = 4; };
    class FA_20Rnd_762_XM751_CTEP_T_Orange: FA_20Rnd_762_XM751_CTEP { ammo = "FA_762_XM751_CTEP_T_Orange"; displayName = "[Ghost] 20Rnd XM751 CTEP Orange Tracer"; descriptionShort = "XM751 CTEP"; tracersEvery = 4; };
    class FA_20Rnd_762_XM751_CTEP_T_IR: FA_20Rnd_762_XM751_CTEP { ammo = "FA_762_XM751_CTEP_T_IR"; displayName = "[Ghost] 20Rnd XM751 CTEP IR Tracer"; descriptionShort = "XM751 CTEP"; tracersEvery = 4; };

    // =========================================================
    // 7.62x51mm — M80A2 HV — 200Rnd belt (Rhino coax et al.)
    // =========================================================
    class FA_200Rnd_762_M80A2_HV: 200Rnd_762x51_Belt_T_Red {
        author = QAUTHOR;
        displayName = "[Ghost] 200Rnd M80A2 HV";
        descriptionShort = "M80A2 HV";
        ammo = "FA_762_M80A2_HV";
        initSpeed = 940;
        tracersEvery = 0;
    };
    class FA_200Rnd_762_M80A2_HV_T_Red: FA_200Rnd_762_M80A2_HV { ammo = "FA_762_M80A2_HV_T_Red"; displayName = "[Ghost] 200Rnd M80A2 HV Red Tracer"; descriptionShort = "M80A2 HV"; tracersEvery = 4; };
    class FA_200Rnd_762_M80A2_HV_T_Yellow: FA_200Rnd_762_M80A2_HV { ammo = "FA_762_M80A2_HV_T_Yellow"; displayName = "[Ghost] 200Rnd M80A2 HV Yellow Tracer"; descriptionShort = "M80A2 HV"; tracersEvery = 4; };
    class FA_200Rnd_762_M80A2_HV_T_Green: FA_200Rnd_762_M80A2_HV { ammo = "FA_762_M80A2_HV_T_Green"; displayName = "[Ghost] 200Rnd M80A2 HV Green Tracer"; descriptionShort = "M80A2 HV"; tracersEvery = 4; };
    class FA_200Rnd_762_M80A2_HV_T_White: FA_200Rnd_762_M80A2_HV { ammo = "FA_762_M80A2_HV_T_White"; displayName = "[Ghost] 200Rnd M80A2 HV White Tracer"; descriptionShort = "M80A2 HV"; tracersEvery = 4; };
    class FA_200Rnd_762_M80A2_HV_T_Blue: FA_200Rnd_762_M80A2_HV { ammo = "FA_762_M80A2_HV_T_Blue"; displayName = "[Ghost] 200Rnd M80A2 HV Blue Tracer"; descriptionShort = "M80A2 HV"; tracersEvery = 4; };
    class FA_200Rnd_762_M80A2_HV_T_Orange: FA_200Rnd_762_M80A2_HV { ammo = "FA_762_M80A2_HV_T_Orange"; displayName = "[Ghost] 200Rnd M80A2 HV Orange Tracer"; descriptionShort = "M80A2 HV"; tracersEvery = 4; };
    class FA_200Rnd_762_M80A2_HV_T_IR: FA_200Rnd_762_M80A2_HV { ammo = "FA_762_M80A2_HV_T_IR"; displayName = "[Ghost] 200Rnd M80A2 HV IR Tracer"; descriptionShort = "M80A2 HV"; tracersEvery = 4; };

    // =========================================================
    // 7.62x51mm — XM751 CTEP — 200Rnd belt (Rhino coax et al.)
    // =========================================================
    class FA_200Rnd_762_XM751_CTEP: 200Rnd_762x51_Belt_T_Red {
        author = QAUTHOR;
        displayName = "[Ghost] 200Rnd XM751 CTEP";
        descriptionShort = "XM751 CTEP";
        ammo = "FA_762_XM751_CTEP";
        initSpeed = 960;
        tracersEvery = 0;
    };
    class FA_200Rnd_762_XM751_CTEP_T_Red: FA_200Rnd_762_XM751_CTEP { ammo = "FA_762_XM751_CTEP_T_Red"; displayName = "[Ghost] 200Rnd XM751 CTEP Red Tracer"; descriptionShort = "XM751 CTEP"; tracersEvery = 4; };
    class FA_200Rnd_762_XM751_CTEP_T_Yellow: FA_200Rnd_762_XM751_CTEP { ammo = "FA_762_XM751_CTEP_T_Yellow"; displayName = "[Ghost] 200Rnd XM751 CTEP Yellow Tracer"; descriptionShort = "XM751 CTEP"; tracersEvery = 4; };
    class FA_200Rnd_762_XM751_CTEP_T_Green: FA_200Rnd_762_XM751_CTEP { ammo = "FA_762_XM751_CTEP_T_Green"; displayName = "[Ghost] 200Rnd XM751 CTEP Green Tracer"; descriptionShort = "XM751 CTEP"; tracersEvery = 4; };
    class FA_200Rnd_762_XM751_CTEP_T_White: FA_200Rnd_762_XM751_CTEP { ammo = "FA_762_XM751_CTEP_T_White"; displayName = "[Ghost] 200Rnd XM751 CTEP White Tracer"; descriptionShort = "XM751 CTEP"; tracersEvery = 4; };
    class FA_200Rnd_762_XM751_CTEP_T_Blue: FA_200Rnd_762_XM751_CTEP { ammo = "FA_762_XM751_CTEP_T_Blue"; displayName = "[Ghost] 200Rnd XM751 CTEP Blue Tracer"; descriptionShort = "XM751 CTEP"; tracersEvery = 4; };
    class FA_200Rnd_762_XM751_CTEP_T_Orange: FA_200Rnd_762_XM751_CTEP { ammo = "FA_762_XM751_CTEP_T_Orange"; displayName = "[Ghost] 200Rnd XM751 CTEP Orange Tracer"; descriptionShort = "XM751 CTEP"; tracersEvery = 4; };
    class FA_200Rnd_762_XM751_CTEP_T_IR: FA_200Rnd_762_XM751_CTEP { ammo = "FA_762_XM751_CTEP_T_IR"; displayName = "[Ghost] 200Rnd XM751 CTEP IR Tracer"; descriptionShort = "XM751 CTEP"; tracersEvery = 4; };

    // =========================================================
    // 12.7x99 (.50 BMG) — Mk211 Mod 0 HEIAP — 200Rnd belt (M2/RWS, coax .50)
    // =========================================================
    class FA_200Rnd_127_Mk211Mod0: 200Rnd_127x99_mag_Tracer_Red {
        author = QAUTHOR;
        displayName = "[Ghost] 200Rnd Mk211Mod0 AP";
        descriptionShort = "Mk211Mod0 AP";
        ammo = "FA_127x99_Mk211Mod0_AP";
        initSpeed = 890;
        tracersEvery = 0;
    };
    class FA_200Rnd_127_Mk211Mod0_T_Red: FA_200Rnd_127_Mk211Mod0 { ammo = "FA_127x99_Mk211Mod0_AP_T_Red"; displayName = "[Ghost] 200Rnd Mk211Mod0 AP Red Tracer"; descriptionShort = "Mk211Mod0 AP"; tracersEvery = 4; };
    class FA_200Rnd_127_Mk211Mod0_T_Yellow: FA_200Rnd_127_Mk211Mod0 { ammo = "FA_127x99_Mk211Mod0_AP_T_Yellow"; displayName = "[Ghost] 200Rnd Mk211Mod0 AP Yellow Tracer"; descriptionShort = "Mk211Mod0 AP"; tracersEvery = 4; };
    class FA_200Rnd_127_Mk211Mod0_T_Green: FA_200Rnd_127_Mk211Mod0 { ammo = "FA_127x99_Mk211Mod0_AP_T_Green"; displayName = "[Ghost] 200Rnd Mk211Mod0 AP Green Tracer"; descriptionShort = "Mk211Mod0 AP"; tracersEvery = 4; };
    class FA_200Rnd_127_Mk211Mod0_T_White: FA_200Rnd_127_Mk211Mod0 { ammo = "FA_127x99_Mk211Mod0_AP_T_White"; displayName = "[Ghost] 200Rnd Mk211Mod0 AP White Tracer"; descriptionShort = "Mk211Mod0 AP"; tracersEvery = 4; };
    class FA_200Rnd_127_Mk211Mod0_T_Blue: FA_200Rnd_127_Mk211Mod0 { ammo = "FA_127x99_Mk211Mod0_AP_T_Blue"; displayName = "[Ghost] 200Rnd Mk211Mod0 AP Blue Tracer"; descriptionShort = "Mk211Mod0 AP"; tracersEvery = 4; };
    class FA_200Rnd_127_Mk211Mod0_T_Orange: FA_200Rnd_127_Mk211Mod0 { ammo = "FA_127x99_Mk211Mod0_AP_T_Orange"; displayName = "[Ghost] 200Rnd Mk211Mod0 AP Orange Tracer"; descriptionShort = "Mk211Mod0 AP"; tracersEvery = 4; };
    class FA_200Rnd_127_Mk211Mod0_T_IR: FA_200Rnd_127_Mk211Mod0 { ammo = "FA_127x99_Mk211Mod0_AP_T_IR"; displayName = "[Ghost] 200Rnd Mk211Mod0 AP IR Tracer"; descriptionShort = "Mk211Mod0 AP"; tracersEvery = 4; };

    // =========================================================
    // 12.7x99 (.50 BMG) — Mk258 LRP — 200Rnd belt (precision RWS)
    // =========================================================
    class FA_200Rnd_127_Mk258: 200Rnd_127x99_mag_Tracer_Red {
        author = QAUTHOR;
        displayName = "[Ghost] 200Rnd Mk258 LRP";
        descriptionShort = "Mk258 LRP";
        ammo = "FA_127x99_Mk258_LRP";
        initSpeed = 860;
        tracersEvery = 0;
    };
    class FA_200Rnd_127_Mk258_T_Red: FA_200Rnd_127_Mk258 { ammo = "FA_127x99_Mk258_LRP_T_Red"; displayName = "[Ghost] 200Rnd Mk258 LRP Red Tracer"; descriptionShort = "Mk258 LRP"; tracersEvery = 4; };
    class FA_200Rnd_127_Mk258_T_Yellow: FA_200Rnd_127_Mk258 { ammo = "FA_127x99_Mk258_LRP_T_Yellow"; displayName = "[Ghost] 200Rnd Mk258 LRP Yellow Tracer"; descriptionShort = "Mk258 LRP"; tracersEvery = 4; };
    class FA_200Rnd_127_Mk258_T_Green: FA_200Rnd_127_Mk258 { ammo = "FA_127x99_Mk258_LRP_T_Green"; displayName = "[Ghost] 200Rnd Mk258 LRP Green Tracer"; descriptionShort = "Mk258 LRP"; tracersEvery = 4; };
    class FA_200Rnd_127_Mk258_T_White: FA_200Rnd_127_Mk258 { ammo = "FA_127x99_Mk258_LRP_T_White"; displayName = "[Ghost] 200Rnd Mk258 LRP White Tracer"; descriptionShort = "Mk258 LRP"; tracersEvery = 4; };
    class FA_200Rnd_127_Mk258_T_Blue: FA_200Rnd_127_Mk258 { ammo = "FA_127x99_Mk258_LRP_T_Blue"; displayName = "[Ghost] 200Rnd Mk258 LRP Blue Tracer"; descriptionShort = "Mk258 LRP"; tracersEvery = 4; };
    class FA_200Rnd_127_Mk258_T_Orange: FA_200Rnd_127_Mk258 { ammo = "FA_127x99_Mk258_LRP_T_Orange"; displayName = "[Ghost] 200Rnd Mk258 LRP Orange Tracer"; descriptionShort = "Mk258 LRP"; tracersEvery = 4; };
    class FA_200Rnd_127_Mk258_T_IR: FA_200Rnd_127_Mk258 { ammo = "FA_127x99_Mk258_LRP_T_IR"; displayName = "[Ghost] 200Rnd Mk258 LRP IR Tracer"; descriptionShort = "Mk258 LRP"; tracersEvery = 4; };

    // =========================================================
    // .300 BLK (subsonic) — Mk341 SUB-AP
    // =========================================================
    class FA_30Rnd_300_Mk341_SubAP: 30Rnd_556x45_Stanag {
        author = QAUTHOR;
        displayName = "[Ghost] 30Rnd Mk341 SubAP";
        descriptionShort = "Mk341 SubAP";
        ammo = "FA_300_Mk341_SubAP";
        initSpeed = 315;
        mass = 11;
    };
    class FA_30Rnd_300_Mk341_SubAP_T_Red: FA_30Rnd_300_Mk341_SubAP { ammo = "FA_300_Mk341_SubAP_T_Red"; displayName = "[Ghost] 30Rnd Mk341 SubAP Red Tracer"; descriptionShort = "Mk341 SubAP"; tracersEvery = 4; };
    class FA_30Rnd_300_Mk341_SubAP_T_Yellow: FA_30Rnd_300_Mk341_SubAP { ammo = "FA_300_Mk341_SubAP_T_Yellow"; displayName = "[Ghost] 30Rnd Mk341 SubAP Yellow Tracer"; descriptionShort = "Mk341 SubAP"; tracersEvery = 4; };
    class FA_30Rnd_300_Mk341_SubAP_T_Green: FA_30Rnd_300_Mk341_SubAP { ammo = "FA_300_Mk341_SubAP_T_Green"; displayName = "[Ghost] 30Rnd Mk341 SubAP Green Tracer"; descriptionShort = "Mk341 SubAP"; tracersEvery = 4; };
    class FA_30Rnd_300_Mk341_SubAP_T_White: FA_30Rnd_300_Mk341_SubAP { ammo = "FA_300_Mk341_SubAP_T_White"; displayName = "[Ghost] 30Rnd Mk341 SubAP White Tracer"; descriptionShort = "Mk341 SubAP"; tracersEvery = 4; };
    class FA_30Rnd_300_Mk341_SubAP_T_Blue: FA_30Rnd_300_Mk341_SubAP { ammo = "FA_300_Mk341_SubAP_T_Blue"; displayName = "[Ghost] 30Rnd Mk341 SubAP Blue Tracer"; descriptionShort = "Mk341 SubAP"; tracersEvery = 4; };
    class FA_30Rnd_300_Mk341_SubAP_T_Orange: FA_30Rnd_300_Mk341_SubAP { ammo = "FA_300_Mk341_SubAP_T_Orange"; displayName = "[Ghost] 30Rnd Mk341 SubAP Orange Tracer"; descriptionShort = "Mk341 SubAP"; tracersEvery = 4; };
    class FA_30Rnd_300_Mk341_SubAP_T_IR: FA_30Rnd_300_Mk341_SubAP { ammo = "FA_300_Mk341_SubAP_T_IR"; displayName = "[Ghost] 30Rnd Mk341 SubAP IR Tracer"; descriptionShort = "Mk341 SubAP"; tracersEvery = 4; };

    // =========================================================
    // .300 BLK (subsonic) — XM345 SUB-AP2
    // =========================================================
    class FA_30Rnd_300_XM345_SubAP2: 30Rnd_556x45_Stanag {
        author = QAUTHOR;
        displayName = "[Ghost] 30Rnd XM345 SubAP2";
        descriptionShort = "XM345 SubAP2";
        ammo = "FA_300_XM345_SubAP2";
        initSpeed = 312;
        mass = 11;
    };
    class FA_30Rnd_300_XM345_SubAP2_T_Red: FA_30Rnd_300_XM345_SubAP2 { ammo = "FA_300_XM345_SubAP2_T_Red"; displayName = "[Ghost] 30Rnd XM345 SubAP2 Red Tracer"; descriptionShort = "XM345 SubAP2"; tracersEvery = 4; };
    class FA_30Rnd_300_XM345_SubAP2_T_Yellow: FA_30Rnd_300_XM345_SubAP2 { ammo = "FA_300_XM345_SubAP2_T_Yellow"; displayName = "[Ghost] 30Rnd XM345 SubAP2 Yellow Tracer"; descriptionShort = "XM345 SubAP2"; tracersEvery = 4; };
    class FA_30Rnd_300_XM345_SubAP2_T_Green: FA_30Rnd_300_XM345_SubAP2 { ammo = "FA_300_XM345_SubAP2_T_Green"; displayName = "[Ghost] 30Rnd XM345 SubAP2 Green Tracer"; descriptionShort = "XM345 SubAP2"; tracersEvery = 4; };
    class FA_30Rnd_300_XM345_SubAP2_T_White: FA_30Rnd_300_XM345_SubAP2 { ammo = "FA_300_XM345_SubAP2_T_White"; displayName = "[Ghost] 30Rnd XM345 SubAP2 White Tracer"; descriptionShort = "XM345 SubAP2"; tracersEvery = 4; };
    class FA_30Rnd_300_XM345_SubAP2_T_Blue: FA_30Rnd_300_XM345_SubAP2 { ammo = "FA_300_XM345_SubAP2_T_Blue"; displayName = "[Ghost] 30Rnd XM345 SubAP2 Blue Tracer"; descriptionShort = "XM345 SubAP2"; tracersEvery = 4; };
    class FA_30Rnd_300_XM345_SubAP2_T_Orange: FA_30Rnd_300_XM345_SubAP2 { ammo = "FA_300_XM345_SubAP2_T_Orange"; displayName = "[Ghost] 30Rnd XM345 SubAP2 Orange Tracer"; descriptionShort = "XM345 SubAP2"; tracersEvery = 4; };
    class FA_30Rnd_300_XM345_SubAP2_T_IR: FA_30Rnd_300_XM345_SubAP2 { ammo = "FA_300_XM345_SubAP2_T_IR"; displayName = "[Ghost] 30Rnd XM345 SubAP2 IR Tracer"; descriptionShort = "XM345 SubAP2"; tracersEvery = 4; };

    // =========================================================
    // .338 LM — Mk371 LRP Mod 0 (250gr, fast)
    // =========================================================
    class FA_10Rnd_338_Mk371_250gr: 10Rnd_338_Mag {
        author = QAUTHOR;
        displayName = "[Ghost] 10Rnd Mk371 250gr";
        descriptionShort = "Mk371 250gr";
        ammo = "FA_338_Mk371_250gr";
        initSpeed = 905;
        mass = 8;
    };

    // =========================================================
    // .338 LM — Mk371 LRP Mod 1 (285gr, balanced)
    // =========================================================
    class FA_10Rnd_338_Mk371_285gr: 10Rnd_338_Mag {
        author = QAUTHOR;
        displayName = "[Ghost] 10Rnd Mk371 285gr";
        descriptionShort = "Mk371 285gr";
        ammo = "FA_338_Mk371_285gr";
        initSpeed = 870;
        mass = 9;
    };

    // =========================================================
    // .338 LM — Mk371 LRP Mod 2 (300gr, extreme range)
    // =========================================================
    class FA_10Rnd_338_Mk371_300gr: 10Rnd_338_Mag {
        author = QAUTHOR;
        displayName = "[Ghost] 10Rnd Mk371 300gr";
        descriptionShort = "Mk371 300gr";
        ammo = "FA_338_Mk371_300gr";
        initSpeed = 830;
        mass = 10;
    };

    // =========================================================
    // .300 BLK (supersonic) — Mk335 (110gr light)
    // =========================================================
    class FA_30Rnd_300_Mk335: 30Rnd_556x45_Stanag {
        author = QAUTHOR;
        displayName = "[Ghost] 30Rnd Mk335";
        descriptionShort = "Mk335";
        ammo = "FA_300_Mk335";
        initSpeed = 725;
        mass = 7;
    };
    class FA_30Rnd_300_Mk335_T_Red: FA_30Rnd_300_Mk335 { ammo = "FA_300_Mk335_T_Red"; displayName = "[Ghost] 30Rnd Mk335 Red Tracer"; descriptionShort = "Mk335"; tracersEvery = 4; };
    class FA_30Rnd_300_Mk335_T_Yellow: FA_30Rnd_300_Mk335 { ammo = "FA_300_Mk335_T_Yellow"; displayName = "[Ghost] 30Rnd Mk335 Yellow Tracer"; descriptionShort = "Mk335"; tracersEvery = 4; };
    class FA_30Rnd_300_Mk335_T_Green: FA_30Rnd_300_Mk335 { ammo = "FA_300_Mk335_T_Green"; displayName = "[Ghost] 30Rnd Mk335 Green Tracer"; descriptionShort = "Mk335"; tracersEvery = 4; };
    class FA_30Rnd_300_Mk335_T_White: FA_30Rnd_300_Mk335 { ammo = "FA_300_Mk335_T_White"; displayName = "[Ghost] 30Rnd Mk335 White Tracer"; descriptionShort = "Mk335"; tracersEvery = 4; };
    class FA_30Rnd_300_Mk335_T_Blue: FA_30Rnd_300_Mk335 { ammo = "FA_300_Mk335_T_Blue"; displayName = "[Ghost] 30Rnd Mk335 Blue Tracer"; descriptionShort = "Mk335"; tracersEvery = 4; };
    class FA_30Rnd_300_Mk335_T_Orange: FA_30Rnd_300_Mk335 { ammo = "FA_300_Mk335_T_Orange"; displayName = "[Ghost] 30Rnd Mk335 Orange Tracer"; descriptionShort = "Mk335"; tracersEvery = 4; };
    class FA_30Rnd_300_Mk335_T_IR: FA_30Rnd_300_Mk335 { ammo = "FA_300_Mk335_T_IR"; displayName = "[Ghost] 30Rnd Mk335 IR Tracer"; descriptionShort = "Mk335"; tracersEvery = 4; };

    // =========================================================
    // .300 BLK (supersonic) — Mk336 (125gr standard)
    // =========================================================
    class FA_30Rnd_300_Mk336: 30Rnd_556x45_Stanag {
        author = QAUTHOR;
        displayName = "[Ghost] 30Rnd Mk336";
        descriptionShort = "Mk336";
        ammo = "FA_300_Mk336";
        initSpeed = 675;
        mass = 8;
    };
    class FA_30Rnd_300_Mk336_T_Red: FA_30Rnd_300_Mk336 { ammo = "FA_300_Mk336_T_Red"; displayName = "[Ghost] 30Rnd Mk336 Red Tracer"; descriptionShort = "Mk336"; tracersEvery = 4; };
    class FA_30Rnd_300_Mk336_T_Yellow: FA_30Rnd_300_Mk336 { ammo = "FA_300_Mk336_T_Yellow"; displayName = "[Ghost] 30Rnd Mk336 Yellow Tracer"; descriptionShort = "Mk336"; tracersEvery = 4; };
    class FA_30Rnd_300_Mk336_T_Green: FA_30Rnd_300_Mk336 { ammo = "FA_300_Mk336_T_Green"; displayName = "[Ghost] 30Rnd Mk336 Green Tracer"; descriptionShort = "Mk336"; tracersEvery = 4; };
    class FA_30Rnd_300_Mk336_T_White: FA_30Rnd_300_Mk336 { ammo = "FA_300_Mk336_T_White"; displayName = "[Ghost] 30Rnd Mk336 White Tracer"; descriptionShort = "Mk336"; tracersEvery = 4; };
    class FA_30Rnd_300_Mk336_T_Blue: FA_30Rnd_300_Mk336 { ammo = "FA_300_Mk336_T_Blue"; displayName = "[Ghost] 30Rnd Mk336 Blue Tracer"; descriptionShort = "Mk336"; tracersEvery = 4; };
    class FA_30Rnd_300_Mk336_T_Orange: FA_30Rnd_300_Mk336 { ammo = "FA_300_Mk336_T_Orange"; displayName = "[Ghost] 30Rnd Mk336 Orange Tracer"; descriptionShort = "Mk336"; tracersEvery = 4; };
    class FA_30Rnd_300_Mk336_T_IR: FA_30Rnd_300_Mk336 { ammo = "FA_300_Mk336_T_IR"; displayName = "[Ghost] 30Rnd Mk336 IR Tracer"; descriptionShort = "Mk336"; tracersEvery = 4; };

    // =========================================================
    // .300 BLK (supersonic) — Mk337 (150gr heavy)
    // =========================================================
    class FA_30Rnd_300_Mk337: 30Rnd_556x45_Stanag {
        author = QAUTHOR;
        displayName = "[Ghost] 30Rnd Mk337";
        descriptionShort = "Mk337";
        ammo = "FA_300_Mk337";
        initSpeed = 620;
        mass = 9;
    };
    class FA_30Rnd_300_Mk337_T_Red: FA_30Rnd_300_Mk337 { ammo = "FA_300_Mk337_T_Red"; displayName = "[Ghost] 30Rnd Mk337 Red Tracer"; descriptionShort = "Mk337"; tracersEvery = 4; };
    class FA_30Rnd_300_Mk337_T_Yellow: FA_30Rnd_300_Mk337 { ammo = "FA_300_Mk337_T_Yellow"; displayName = "[Ghost] 30Rnd Mk337 Yellow Tracer"; descriptionShort = "Mk337"; tracersEvery = 4; };
    class FA_30Rnd_300_Mk337_T_Green: FA_30Rnd_300_Mk337 { ammo = "FA_300_Mk337_T_Green"; displayName = "[Ghost] 30Rnd Mk337 Green Tracer"; descriptionShort = "Mk337"; tracersEvery = 4; };
    class FA_30Rnd_300_Mk337_T_White: FA_30Rnd_300_Mk337 { ammo = "FA_300_Mk337_T_White"; displayName = "[Ghost] 30Rnd Mk337 White Tracer"; descriptionShort = "Mk337"; tracersEvery = 4; };
    class FA_30Rnd_300_Mk337_T_Blue: FA_30Rnd_300_Mk337 { ammo = "FA_300_Mk337_T_Blue"; displayName = "[Ghost] 30Rnd Mk337 Blue Tracer"; descriptionShort = "Mk337"; tracersEvery = 4; };
    class FA_30Rnd_300_Mk337_T_Orange: FA_30Rnd_300_Mk337 { ammo = "FA_300_Mk337_T_Orange"; displayName = "[Ghost] 30Rnd Mk337 Orange Tracer"; descriptionShort = "Mk337"; tracersEvery = 4; };
    class FA_30Rnd_300_Mk337_T_IR: FA_30Rnd_300_Mk337 { ammo = "FA_300_Mk337_T_IR"; displayName = "[Ghost] 30Rnd Mk337 IR Tracer"; descriptionShort = "Mk337"; tracersEvery = 4; };

    // =========================================================
    // .300 BLK (subsonic) — Mk342 (190gr)
    // =========================================================
    class FA_30Rnd_300_Mk342_Sub: 30Rnd_556x45_Stanag {
        author = QAUTHOR;
        displayName = "[Ghost] 30Rnd Mk342 Sub";
        descriptionShort = "Mk342 Sub";
        ammo = "FA_300_Mk342_Sub";
        initSpeed = 318;
        mass = 10;
    };
    class FA_30Rnd_300_Mk342_Sub_T_Red: FA_30Rnd_300_Mk342_Sub { ammo = "FA_300_Mk342_Sub_T_Red"; displayName = "[Ghost] 30Rnd Mk342 Sub Red Tracer"; descriptionShort = "Mk342 Sub"; tracersEvery = 4; };
    class FA_30Rnd_300_Mk342_Sub_T_Yellow: FA_30Rnd_300_Mk342_Sub { ammo = "FA_300_Mk342_Sub_T_Yellow"; displayName = "[Ghost] 30Rnd Mk342 Sub Yellow Tracer"; descriptionShort = "Mk342 Sub"; tracersEvery = 4; };
    class FA_30Rnd_300_Mk342_Sub_T_Green: FA_30Rnd_300_Mk342_Sub { ammo = "FA_300_Mk342_Sub_T_Green"; displayName = "[Ghost] 30Rnd Mk342 Sub Green Tracer"; descriptionShort = "Mk342 Sub"; tracersEvery = 4; };
    class FA_30Rnd_300_Mk342_Sub_T_White: FA_30Rnd_300_Mk342_Sub { ammo = "FA_300_Mk342_Sub_T_White"; displayName = "[Ghost] 30Rnd Mk342 Sub White Tracer"; descriptionShort = "Mk342 Sub"; tracersEvery = 4; };
    class FA_30Rnd_300_Mk342_Sub_T_Blue: FA_30Rnd_300_Mk342_Sub { ammo = "FA_300_Mk342_Sub_T_Blue"; displayName = "[Ghost] 30Rnd Mk342 Sub Blue Tracer"; descriptionShort = "Mk342 Sub"; tracersEvery = 4; };
    class FA_30Rnd_300_Mk342_Sub_T_Orange: FA_30Rnd_300_Mk342_Sub { ammo = "FA_300_Mk342_Sub_T_Orange"; displayName = "[Ghost] 30Rnd Mk342 Sub Orange Tracer"; descriptionShort = "Mk342 Sub"; tracersEvery = 4; };
    class FA_30Rnd_300_Mk342_Sub_T_IR: FA_30Rnd_300_Mk342_Sub { ammo = "FA_300_Mk342_Sub_T_IR"; displayName = "[Ghost] 30Rnd Mk342 Sub IR Tracer"; descriptionShort = "Mk342 Sub"; tracersEvery = 4; };

    // =========================================================
    // .300 BLK (subsonic) — Mk343 (220gr heavy)
    // =========================================================
    class FA_30Rnd_300_Mk343_Sub: 30Rnd_556x45_Stanag {
        author = QAUTHOR;
        displayName = "[Ghost] 30Rnd Mk343 Sub";
        descriptionShort = "Mk343 Sub";
        ammo = "FA_300_Mk343_Sub";
        initSpeed = 305;
        mass = 11;
    };
    class FA_30Rnd_300_Mk343_Sub_T_Red: FA_30Rnd_300_Mk343_Sub { ammo = "FA_300_Mk343_Sub_T_Red"; displayName = "[Ghost] 30Rnd Mk343 Sub Red Tracer"; descriptionShort = "Mk343 Sub"; tracersEvery = 4; };
    class FA_30Rnd_300_Mk343_Sub_T_Yellow: FA_30Rnd_300_Mk343_Sub { ammo = "FA_300_Mk343_Sub_T_Yellow"; displayName = "[Ghost] 30Rnd Mk343 Sub Yellow Tracer"; descriptionShort = "Mk343 Sub"; tracersEvery = 4; };
    class FA_30Rnd_300_Mk343_Sub_T_Green: FA_30Rnd_300_Mk343_Sub { ammo = "FA_300_Mk343_Sub_T_Green"; displayName = "[Ghost] 30Rnd Mk343 Sub Green Tracer"; descriptionShort = "Mk343 Sub"; tracersEvery = 4; };
    class FA_30Rnd_300_Mk343_Sub_T_White: FA_30Rnd_300_Mk343_Sub { ammo = "FA_300_Mk343_Sub_T_White"; displayName = "[Ghost] 30Rnd Mk343 Sub White Tracer"; descriptionShort = "Mk343 Sub"; tracersEvery = 4; };
    class FA_30Rnd_300_Mk343_Sub_T_Blue: FA_30Rnd_300_Mk343_Sub { ammo = "FA_300_Mk343_Sub_T_Blue"; displayName = "[Ghost] 30Rnd Mk343 Sub Blue Tracer"; descriptionShort = "Mk343 Sub"; tracersEvery = 4; };
    class FA_30Rnd_300_Mk343_Sub_T_Orange: FA_30Rnd_300_Mk343_Sub { ammo = "FA_300_Mk343_Sub_T_Orange"; displayName = "[Ghost] 30Rnd Mk343 Sub Orange Tracer"; descriptionShort = "Mk343 Sub"; tracersEvery = 4; };
    class FA_30Rnd_300_Mk343_Sub_T_IR: FA_30Rnd_300_Mk343_Sub { ammo = "FA_300_Mk343_Sub_T_IR"; displayName = "[Ghost] 30Rnd Mk343 Sub IR Tracer"; descriptionShort = "Mk343 Sub"; tracersEvery = 4; };

    // =========================================================
    // .338 NM — Mk372 MMG — 200Rnd belt
    // =========================================================
    class FA_200Rnd_338_Mk372: 200Rnd_338_Mag {
        author = QAUTHOR;
        displayName = "[Ghost] 200Rnd Mk372";
        descriptionShort = "Mk372";
        ammo = "FA_338_Mk372";
        initSpeed = 810;
        mass = 40;
    };
    class FA_200Rnd_338_Mk372_T_Red: FA_200Rnd_338_Mk372 { ammo = "FA_338_Mk372_T_Red"; displayName = "[Ghost] 200Rnd Mk372 Red Tracer"; descriptionShort = "Mk372"; tracersEvery = 4; };
    class FA_200Rnd_338_Mk372_T_Yellow: FA_200Rnd_338_Mk372 { ammo = "FA_338_Mk372_T_Yellow"; displayName = "[Ghost] 200Rnd Mk372 Yellow Tracer"; descriptionShort = "Mk372"; tracersEvery = 4; };
    class FA_200Rnd_338_Mk372_T_Green: FA_200Rnd_338_Mk372 { ammo = "FA_338_Mk372_T_Green"; displayName = "[Ghost] 200Rnd Mk372 Green Tracer"; descriptionShort = "Mk372"; tracersEvery = 4; };
    class FA_200Rnd_338_Mk372_T_White: FA_200Rnd_338_Mk372 { ammo = "FA_338_Mk372_T_White"; displayName = "[Ghost] 200Rnd Mk372 White Tracer"; descriptionShort = "Mk372"; tracersEvery = 4; };
    class FA_200Rnd_338_Mk372_T_Blue: FA_200Rnd_338_Mk372 { ammo = "FA_338_Mk372_T_Blue"; displayName = "[Ghost] 200Rnd Mk372 Blue Tracer"; descriptionShort = "Mk372"; tracersEvery = 4; };
    class FA_200Rnd_338_Mk372_T_Orange: FA_200Rnd_338_Mk372 { ammo = "FA_338_Mk372_T_Orange"; displayName = "[Ghost] 200Rnd Mk372 Orange Tracer"; descriptionShort = "Mk372"; tracersEvery = 4; };
    class FA_200Rnd_338_Mk372_T_IR: FA_200Rnd_338_Mk372 { ammo = "FA_338_Mk372_T_IR"; displayName = "[Ghost] 200Rnd Mk372 IR Tracer"; descriptionShort = "Mk372"; tracersEvery = 4; };

    // =========================================================
    // .338 NM — Mk372 MMG — 130Rnd belt
    // =========================================================
    class FA_130Rnd_338_Mk372: 130Rnd_338_Mag {
        author = QAUTHOR;
        displayName = "[Ghost] 130Rnd Mk372";
        descriptionShort = "Mk372";
        ammo = "FA_338_Mk372";
        initSpeed = 810;
        mass = 28;
    };
    class FA_130Rnd_338_Mk372_T_Red: FA_130Rnd_338_Mk372 { ammo = "FA_338_Mk372_T_Red"; displayName = "[Ghost] 130Rnd Mk372 Red Tracer"; descriptionShort = "Mk372"; tracersEvery = 4; };
    class FA_130Rnd_338_Mk372_T_Yellow: FA_130Rnd_338_Mk372 { ammo = "FA_338_Mk372_T_Yellow"; displayName = "[Ghost] 130Rnd Mk372 Yellow Tracer"; descriptionShort = "Mk372"; tracersEvery = 4; };
    class FA_130Rnd_338_Mk372_T_Green: FA_130Rnd_338_Mk372 { ammo = "FA_338_Mk372_T_Green"; displayName = "[Ghost] 130Rnd Mk372 Green Tracer"; descriptionShort = "Mk372"; tracersEvery = 4; };
    class FA_130Rnd_338_Mk372_T_White: FA_130Rnd_338_Mk372 { ammo = "FA_338_Mk372_T_White"; displayName = "[Ghost] 130Rnd Mk372 White Tracer"; descriptionShort = "Mk372"; tracersEvery = 4; };
    class FA_130Rnd_338_Mk372_T_Blue: FA_130Rnd_338_Mk372 { ammo = "FA_338_Mk372_T_Blue"; displayName = "[Ghost] 130Rnd Mk372 Blue Tracer"; descriptionShort = "Mk372"; tracersEvery = 4; };
    class FA_130Rnd_338_Mk372_T_Orange: FA_130Rnd_338_Mk372 { ammo = "FA_338_Mk372_T_Orange"; displayName = "[Ghost] 130Rnd Mk372 Orange Tracer"; descriptionShort = "Mk372"; tracersEvery = 4; };
    class FA_130Rnd_338_Mk372_T_IR: FA_130Rnd_338_Mk372 { ammo = "FA_338_Mk372_T_IR"; displayName = "[Ghost] 130Rnd Mk372 IR Tracer"; descriptionShort = "Mk372"; tracersEvery = 4; };

    // =========================================================
    // 6.5x39 Caseless EPR — MX family only
    // =========================================================
    class FA_30Rnd_65_EPR: 30Rnd_65x39_caseless_mag {
        author = QAUTHOR;
        displayName = "[Ghost] 30Rnd Mk330 EPR";
        descriptionShort = "Mk330 EPR";
        ammo = "FA_65_EPR";
        initSpeed = 820;
        mass = 7;
    };
    class FA_30Rnd_65_EPR_T_Red: FA_30Rnd_65_EPR { ammo = "FA_65_EPR_T_Red"; displayName = "[Ghost] 30Rnd Mk330 EPR Red Tracer"; descriptionShort = "Mk330 EPR"; tracersEvery = 4; };
    class FA_30Rnd_65_EPR_T_Yellow: FA_30Rnd_65_EPR { ammo = "FA_65_EPR_T_Yellow"; displayName = "[Ghost] 30Rnd Mk330 EPR Yellow Tracer"; descriptionShort = "Mk330 EPR"; tracersEvery = 4; };
    class FA_30Rnd_65_EPR_T_Green: FA_30Rnd_65_EPR { ammo = "FA_65_EPR_T_Green"; displayName = "[Ghost] 30Rnd Mk330 EPR Green Tracer"; descriptionShort = "Mk330 EPR"; tracersEvery = 4; };
    class FA_30Rnd_65_EPR_T_White: FA_30Rnd_65_EPR { ammo = "FA_65_EPR_T_White"; displayName = "[Ghost] 30Rnd Mk330 EPR White Tracer"; descriptionShort = "Mk330 EPR"; tracersEvery = 4; };
    class FA_30Rnd_65_EPR_T_Blue: FA_30Rnd_65_EPR { ammo = "FA_65_EPR_T_Blue"; displayName = "[Ghost] 30Rnd Mk330 EPR Blue Tracer"; descriptionShort = "Mk330 EPR"; tracersEvery = 4; };
    class FA_30Rnd_65_EPR_T_Orange: FA_30Rnd_65_EPR { ammo = "FA_65_EPR_T_Orange"; displayName = "[Ghost] 30Rnd Mk330 EPR Orange Tracer"; descriptionShort = "Mk330 EPR"; tracersEvery = 4; };
    class FA_30Rnd_65_EPR_T_IR: FA_30Rnd_65_EPR { ammo = "FA_65_EPR_T_IR"; displayName = "[Ghost] 30Rnd Mk330 EPR IR Tracer"; descriptionShort = "Mk330 EPR"; tracersEvery = 4; };

    class FA_30Rnd_65_EPR_Black: 30Rnd_65x39_caseless_black_mag {
        author = QAUTHOR;
        displayName = "[Ghost] 30Rnd Mk330 EPR Black Mag";
        descriptionShort = "Mk330 EPR";
        ammo = "FA_65_EPR";
        initSpeed = 820;
        mass = 7;
    };
    class FA_30Rnd_65_EPR_Black_T_Red: FA_30Rnd_65_EPR_Black { ammo = "FA_65_EPR_T_Red"; displayName = "[Ghost] 30Rnd Mk330 EPR Black Mag Red Tracer"; descriptionShort = "Mk330 EPR"; tracersEvery = 4; };
    class FA_30Rnd_65_EPR_Black_T_Yellow: FA_30Rnd_65_EPR_Black { ammo = "FA_65_EPR_T_Yellow"; displayName = "[Ghost] 30Rnd Mk330 EPR Black Mag Yellow Tracer"; descriptionShort = "Mk330 EPR"; tracersEvery = 4; };
    class FA_30Rnd_65_EPR_Black_T_Green: FA_30Rnd_65_EPR_Black { ammo = "FA_65_EPR_T_Green"; displayName = "[Ghost] 30Rnd Mk330 EPR Black Mag Green Tracer"; descriptionShort = "Mk330 EPR"; tracersEvery = 4; };
    class FA_30Rnd_65_EPR_Black_T_White: FA_30Rnd_65_EPR_Black { ammo = "FA_65_EPR_T_White"; displayName = "[Ghost] 30Rnd Mk330 EPR Black Mag White Tracer"; descriptionShort = "Mk330 EPR"; tracersEvery = 4; };
    class FA_30Rnd_65_EPR_Black_T_Blue: FA_30Rnd_65_EPR_Black { ammo = "FA_65_EPR_T_Blue"; displayName = "[Ghost] 30Rnd Mk330 EPR Black Mag Blue Tracer"; descriptionShort = "Mk330 EPR"; tracersEvery = 4; };
    class FA_30Rnd_65_EPR_Black_T_Orange: FA_30Rnd_65_EPR_Black { ammo = "FA_65_EPR_T_Orange"; displayName = "[Ghost] 30Rnd Mk330 EPR Black Mag Orange Tracer"; descriptionShort = "Mk330 EPR"; tracersEvery = 4; };
    class FA_30Rnd_65_EPR_Black_T_IR: FA_30Rnd_65_EPR_Black { ammo = "FA_65_EPR_T_IR"; displayName = "[Ghost] 30Rnd Mk330 EPR Black Mag IR Tracer"; descriptionShort = "Mk330 EPR"; tracersEvery = 4; };

    class FA_30Rnd_65_EPR_Khaki: 30Rnd_65x39_caseless_khaki_mag {
        author = QAUTHOR;
        displayName = "[Ghost] 30Rnd Mk330 EPR Khaki Mag";
        descriptionShort = "Mk330 EPR";
        ammo = "FA_65_EPR";
        initSpeed = 820;
        mass = 7;
    };
    class FA_30Rnd_65_EPR_Khaki_T_Red: FA_30Rnd_65_EPR_Khaki { ammo = "FA_65_EPR_T_Red"; displayName = "[Ghost] 30Rnd Mk330 EPR Khaki Mag Red Tracer"; descriptionShort = "Mk330 EPR"; tracersEvery = 4; };
    class FA_30Rnd_65_EPR_Khaki_T_Yellow: FA_30Rnd_65_EPR_Khaki { ammo = "FA_65_EPR_T_Yellow"; displayName = "[Ghost] 30Rnd Mk330 EPR Khaki Mag Yellow Tracer"; descriptionShort = "Mk330 EPR"; tracersEvery = 4; };
    class FA_30Rnd_65_EPR_Khaki_T_Green: FA_30Rnd_65_EPR_Khaki { ammo = "FA_65_EPR_T_Green"; displayName = "[Ghost] 30Rnd Mk330 EPR Khaki Mag Green Tracer"; descriptionShort = "Mk330 EPR"; tracersEvery = 4; };
    class FA_30Rnd_65_EPR_Khaki_T_White: FA_30Rnd_65_EPR_Khaki { ammo = "FA_65_EPR_T_White"; displayName = "[Ghost] 30Rnd Mk330 EPR Khaki Mag White Tracer"; descriptionShort = "Mk330 EPR"; tracersEvery = 4; };
    class FA_30Rnd_65_EPR_Khaki_T_Blue: FA_30Rnd_65_EPR_Khaki { ammo = "FA_65_EPR_T_Blue"; displayName = "[Ghost] 30Rnd Mk330 EPR Khaki Mag Blue Tracer"; descriptionShort = "Mk330 EPR"; tracersEvery = 4; };
    class FA_30Rnd_65_EPR_Khaki_T_Orange: FA_30Rnd_65_EPR_Khaki { ammo = "FA_65_EPR_T_Orange"; displayName = "[Ghost] 30Rnd Mk330 EPR Khaki Mag Orange Tracer"; descriptionShort = "Mk330 EPR"; tracersEvery = 4; };
    class FA_30Rnd_65_EPR_Khaki_T_IR: FA_30Rnd_65_EPR_Khaki { ammo = "FA_65_EPR_T_IR"; displayName = "[Ghost] 30Rnd Mk330 EPR Khaki Mag IR Tracer"; descriptionShort = "Mk330 EPR"; tracersEvery = 4; };

    class FA_30Rnd_65_EPR_MSBS: 30Rnd_65x39_caseless_msbs_mag {
        author = QAUTHOR;
        displayName = "[Ghost] 30Rnd Mk330 EPR MSBS Mag";
        descriptionShort = "Mk330 EPR";
        ammo = "FA_65_EPR";
        initSpeed = 820;
        mass = 7;
    };
    class FA_30Rnd_65_EPR_MSBS_T_Red: FA_30Rnd_65_EPR_MSBS { ammo = "FA_65_EPR_T_Red"; displayName = "[Ghost] 30Rnd Mk330 EPR MSBS Mag Red Tracer"; descriptionShort = "Mk330 EPR"; tracersEvery = 4; };
    class FA_30Rnd_65_EPR_MSBS_T_Yellow: FA_30Rnd_65_EPR_MSBS { ammo = "FA_65_EPR_T_Yellow"; displayName = "[Ghost] 30Rnd Mk330 EPR MSBS Mag Yellow Tracer"; descriptionShort = "Mk330 EPR"; tracersEvery = 4; };
    class FA_30Rnd_65_EPR_MSBS_T_Green: FA_30Rnd_65_EPR_MSBS { ammo = "FA_65_EPR_T_Green"; displayName = "[Ghost] 30Rnd Mk330 EPR MSBS Mag Green Tracer"; descriptionShort = "Mk330 EPR"; tracersEvery = 4; };
    class FA_30Rnd_65_EPR_MSBS_T_White: FA_30Rnd_65_EPR_MSBS { ammo = "FA_65_EPR_T_White"; displayName = "[Ghost] 30Rnd Mk330 EPR MSBS Mag White Tracer"; descriptionShort = "Mk330 EPR"; tracersEvery = 4; };
    class FA_30Rnd_65_EPR_MSBS_T_Blue: FA_30Rnd_65_EPR_MSBS { ammo = "FA_65_EPR_T_Blue"; displayName = "[Ghost] 30Rnd Mk330 EPR MSBS Mag Blue Tracer"; descriptionShort = "Mk330 EPR"; tracersEvery = 4; };
    class FA_30Rnd_65_EPR_MSBS_T_Orange: FA_30Rnd_65_EPR_MSBS { ammo = "FA_65_EPR_T_Orange"; displayName = "[Ghost] 30Rnd Mk330 EPR MSBS Mag Orange Tracer"; descriptionShort = "Mk330 EPR"; tracersEvery = 4; };
    class FA_30Rnd_65_EPR_MSBS_T_IR: FA_30Rnd_65_EPR_MSBS { ammo = "FA_65_EPR_T_IR"; displayName = "[Ghost] 30Rnd Mk330 EPR MSBS Mag IR Tracer"; descriptionShort = "Mk330 EPR"; tracersEvery = 4; };

    // =========================================================
    // 7.62x39mm — 7N43 Kremen — BI vanilla 30Rnd
    // =========================================================
    class FA_30Rnd_762x39_7N43: 30Rnd_762x39_Mag_F {
        author = QAUTHOR;
        displayName = "[Ghost] 30Rnd 7.62x39 7N43 Kremen";
        descriptionShort = "7.62x39 7N43 Kremen";
        ammo = "FA_762x39_7N43";
        initSpeed = 820;
        mass = 7;
    };
    class FA_30Rnd_762x39_7N43_T_Red: FA_30Rnd_762x39_7N43 { ammo = "FA_762x39_7N43_T_Red"; displayName = "[Ghost] 30Rnd 7.62x39 7N43 Kremen Red Tracer"; descriptionShort = "7.62x39 7N43 Kremen"; tracersEvery = 4; };
    class FA_30Rnd_762x39_7N43_T_Yellow: FA_30Rnd_762x39_7N43 { ammo = "FA_762x39_7N43_T_Yellow"; displayName = "[Ghost] 30Rnd 7.62x39 7N43 Kremen Yellow Tracer"; descriptionShort = "7.62x39 7N43 Kremen"; tracersEvery = 4; };
    class FA_30Rnd_762x39_7N43_T_Green: FA_30Rnd_762x39_7N43 { ammo = "FA_762x39_7N43_T_Green"; displayName = "[Ghost] 30Rnd 7.62x39 7N43 Kremen Green Tracer"; descriptionShort = "7.62x39 7N43 Kremen"; tracersEvery = 4; };
    class FA_30Rnd_762x39_7N43_T_White: FA_30Rnd_762x39_7N43 { ammo = "FA_762x39_7N43_T_White"; displayName = "[Ghost] 30Rnd 7.62x39 7N43 Kremen White Tracer"; descriptionShort = "7.62x39 7N43 Kremen"; tracersEvery = 4; };
    class FA_30Rnd_762x39_7N43_T_Blue: FA_30Rnd_762x39_7N43 { ammo = "FA_762x39_7N43_T_Blue"; displayName = "[Ghost] 30Rnd 7.62x39 7N43 Kremen Blue Tracer"; descriptionShort = "7.62x39 7N43 Kremen"; tracersEvery = 4; };
    class FA_30Rnd_762x39_7N43_T_Orange: FA_30Rnd_762x39_7N43 { ammo = "FA_762x39_7N43_T_Orange"; displayName = "[Ghost] 30Rnd 7.62x39 7N43 Kremen Orange Tracer"; descriptionShort = "7.62x39 7N43 Kremen"; tracersEvery = 4; };
    class FA_30Rnd_762x39_7N43_T_IR: FA_30Rnd_762x39_7N43 { ammo = "FA_762x39_7N43_T_IR"; displayName = "[Ghost] 30Rnd 7.62x39 7N43 Kremen IR Tracer"; descriptionShort = "7.62x39 7N43 Kremen"; tracersEvery = 4; };

    // =========================================================
    // 7.62x39mm — 7N43 Kremen — BI vanilla 30Rnd Green
    // =========================================================
    class FA_30Rnd_762x39_7N43_Green: 30Rnd_762x39_Mag_Green_F {
        author = QAUTHOR;
        displayName = "[Ghost] 30Rnd 7.62x39 7N43 Kremen Green Mag";
        descriptionShort = "7.62x39 7N43 Kremen";
        ammo = "FA_762x39_7N43";
        initSpeed = 820;
        mass = 7;
    };
    class FA_30Rnd_762x39_7N43_Green_T_Red: FA_30Rnd_762x39_7N43_Green { ammo = "FA_762x39_7N43_T_Red"; displayName = "[Ghost] 30Rnd 7.62x39 7N43 Kremen Green Mag Red Tracer"; descriptionShort = "7.62x39 7N43 Kremen"; tracersEvery = 4; };
    class FA_30Rnd_762x39_7N43_Green_T_Yellow: FA_30Rnd_762x39_7N43_Green { ammo = "FA_762x39_7N43_T_Yellow"; displayName = "[Ghost] 30Rnd 7.62x39 7N43 Kremen Green Mag Yellow Tracer"; descriptionShort = "7.62x39 7N43 Kremen"; tracersEvery = 4; };
    class FA_30Rnd_762x39_7N43_Green_T_Green: FA_30Rnd_762x39_7N43_Green { ammo = "FA_762x39_7N43_T_Green"; displayName = "[Ghost] 30Rnd 7.62x39 7N43 Kremen Green Mag Green Tracer"; descriptionShort = "7.62x39 7N43 Kremen"; tracersEvery = 4; };
    class FA_30Rnd_762x39_7N43_Green_T_White: FA_30Rnd_762x39_7N43_Green { ammo = "FA_762x39_7N43_T_White"; displayName = "[Ghost] 30Rnd 7.62x39 7N43 Kremen Green Mag White Tracer"; descriptionShort = "7.62x39 7N43 Kremen"; tracersEvery = 4; };
    class FA_30Rnd_762x39_7N43_Green_T_Blue: FA_30Rnd_762x39_7N43_Green { ammo = "FA_762x39_7N43_T_Blue"; displayName = "[Ghost] 30Rnd 7.62x39 7N43 Kremen Green Mag Blue Tracer"; descriptionShort = "7.62x39 7N43 Kremen"; tracersEvery = 4; };
    class FA_30Rnd_762x39_7N43_Green_T_Orange: FA_30Rnd_762x39_7N43_Green { ammo = "FA_762x39_7N43_T_Orange"; displayName = "[Ghost] 30Rnd 7.62x39 7N43 Kremen Green Mag Orange Tracer"; descriptionShort = "7.62x39 7N43 Kremen"; tracersEvery = 4; };
    class FA_30Rnd_762x39_7N43_Green_T_IR: FA_30Rnd_762x39_7N43_Green { ammo = "FA_762x39_7N43_T_IR"; displayName = "[Ghost] 30Rnd 7.62x39 7N43 Kremen Green Mag IR Tracer"; descriptionShort = "7.62x39 7N43 Kremen"; tracersEvery = 4; };

    // =========================================================
    // 7.62x39mm — 7N43 Kremen — BI Enoch 30Rnd Lush
    // =========================================================
    class FA_30Rnd_762x39_7N43_Lush: 30Rnd_762x39_AK12_Lush_Mag_F {
        author = QAUTHOR;
        displayName = "[Ghost] 30Rnd 7.62x39 7N43 Kremen Lush Mag";
        descriptionShort = "7.62x39 7N43 Kremen";
        ammo = "FA_762x39_7N43";
        initSpeed = 820;
        mass = 7;
    };
    class FA_30Rnd_762x39_7N43_Lush_T_Red: FA_30Rnd_762x39_7N43_Lush { ammo = "FA_762x39_7N43_T_Red"; displayName = "[Ghost] 30Rnd 7.62x39 7N43 Kremen Lush Mag Red Tracer"; descriptionShort = "7.62x39 7N43 Kremen"; tracersEvery = 4; };
    class FA_30Rnd_762x39_7N43_Lush_T_Yellow: FA_30Rnd_762x39_7N43_Lush { ammo = "FA_762x39_7N43_T_Yellow"; displayName = "[Ghost] 30Rnd 7.62x39 7N43 Kremen Lush Mag Yellow Tracer"; descriptionShort = "7.62x39 7N43 Kremen"; tracersEvery = 4; };
    class FA_30Rnd_762x39_7N43_Lush_T_Green: FA_30Rnd_762x39_7N43_Lush { ammo = "FA_762x39_7N43_T_Green"; displayName = "[Ghost] 30Rnd 7.62x39 7N43 Kremen Lush Mag Green Tracer"; descriptionShort = "7.62x39 7N43 Kremen"; tracersEvery = 4; };
    class FA_30Rnd_762x39_7N43_Lush_T_White: FA_30Rnd_762x39_7N43_Lush { ammo = "FA_762x39_7N43_T_White"; displayName = "[Ghost] 30Rnd 7.62x39 7N43 Kremen Lush Mag White Tracer"; descriptionShort = "7.62x39 7N43 Kremen"; tracersEvery = 4; };
    class FA_30Rnd_762x39_7N43_Lush_T_Blue: FA_30Rnd_762x39_7N43_Lush { ammo = "FA_762x39_7N43_T_Blue"; displayName = "[Ghost] 30Rnd 7.62x39 7N43 Kremen Lush Mag Blue Tracer"; descriptionShort = "7.62x39 7N43 Kremen"; tracersEvery = 4; };
    class FA_30Rnd_762x39_7N43_Lush_T_Orange: FA_30Rnd_762x39_7N43_Lush { ammo = "FA_762x39_7N43_T_Orange"; displayName = "[Ghost] 30Rnd 7.62x39 7N43 Kremen Lush Mag Orange Tracer"; descriptionShort = "7.62x39 7N43 Kremen"; tracersEvery = 4; };
    class FA_30Rnd_762x39_7N43_Lush_T_IR: FA_30Rnd_762x39_7N43_Lush { ammo = "FA_762x39_7N43_T_IR"; displayName = "[Ghost] 30Rnd 7.62x39 7N43 Kremen Lush Mag IR Tracer"; descriptionShort = "7.62x39 7N43 Kremen"; tracersEvery = 4; };

    // =========================================================
    // 7.62x39mm — 7N43 Kremen — BI Enoch 30Rnd Arid
    // =========================================================
    class FA_30Rnd_762x39_7N43_Arid: 30Rnd_762x39_AK12_Arid_Mag_F {
        author = QAUTHOR;
        displayName = "[Ghost] 30Rnd 7.62x39 7N43 Kremen Arid Mag";
        descriptionShort = "7.62x39 7N43 Kremen";
        ammo = "FA_762x39_7N43";
        initSpeed = 820;
        mass = 7;
    };
    class FA_30Rnd_762x39_7N43_Arid_T_Red: FA_30Rnd_762x39_7N43_Arid { ammo = "FA_762x39_7N43_T_Red"; displayName = "[Ghost] 30Rnd 7.62x39 7N43 Kremen Arid Mag Red Tracer"; descriptionShort = "7.62x39 7N43 Kremen"; tracersEvery = 4; };
    class FA_30Rnd_762x39_7N43_Arid_T_Yellow: FA_30Rnd_762x39_7N43_Arid { ammo = "FA_762x39_7N43_T_Yellow"; displayName = "[Ghost] 30Rnd 7.62x39 7N43 Kremen Arid Mag Yellow Tracer"; descriptionShort = "7.62x39 7N43 Kremen"; tracersEvery = 4; };
    class FA_30Rnd_762x39_7N43_Arid_T_Green: FA_30Rnd_762x39_7N43_Arid { ammo = "FA_762x39_7N43_T_Green"; displayName = "[Ghost] 30Rnd 7.62x39 7N43 Kremen Arid Mag Green Tracer"; descriptionShort = "7.62x39 7N43 Kremen"; tracersEvery = 4; };
    class FA_30Rnd_762x39_7N43_Arid_T_White: FA_30Rnd_762x39_7N43_Arid { ammo = "FA_762x39_7N43_T_White"; displayName = "[Ghost] 30Rnd 7.62x39 7N43 Kremen Arid Mag White Tracer"; descriptionShort = "7.62x39 7N43 Kremen"; tracersEvery = 4; };
    class FA_30Rnd_762x39_7N43_Arid_T_Blue: FA_30Rnd_762x39_7N43_Arid { ammo = "FA_762x39_7N43_T_Blue"; displayName = "[Ghost] 30Rnd 7.62x39 7N43 Kremen Arid Mag Blue Tracer"; descriptionShort = "7.62x39 7N43 Kremen"; tracersEvery = 4; };
    class FA_30Rnd_762x39_7N43_Arid_T_Orange: FA_30Rnd_762x39_7N43_Arid { ammo = "FA_762x39_7N43_T_Orange"; displayName = "[Ghost] 30Rnd 7.62x39 7N43 Kremen Arid Mag Orange Tracer"; descriptionShort = "7.62x39 7N43 Kremen"; tracersEvery = 4; };
    class FA_30Rnd_762x39_7N43_Arid_T_IR: FA_30Rnd_762x39_7N43_Arid { ammo = "FA_762x39_7N43_T_IR"; displayName = "[Ghost] 30Rnd 7.62x39 7N43 Kremen Arid Mag IR Tracer"; descriptionShort = "7.62x39 7N43 Kremen"; tracersEvery = 4; };

    // =========================================================
    // 7.62x39mm — 7N43 Kremen — Enoch AK-12 base 30Rnd
    // =========================================================
    class FA_30Rnd_762x39_7N43_AK12: 30Rnd_762x39_AK12_Mag_F {
        author = QAUTHOR;
        displayName = "[Ghost] 30Rnd 7.62x39 7N43 Kremen";
        descriptionShort = "7.62x39 7N43 Kremen";
        ammo = "FA_762x39_7N43";
        initSpeed = 820;
        mass = 7;
    };
    class FA_30Rnd_762x39_7N43_AK12_T_Red: FA_30Rnd_762x39_7N43_AK12 { ammo = "FA_762x39_7N43_T_Red"; displayName = "[Ghost] 30Rnd 7.62x39 7N43 Kremen Red Tracer"; descriptionShort = "7.62x39 7N43 Kremen"; tracersEvery = 4; };
    class FA_30Rnd_762x39_7N43_AK12_T_Yellow: FA_30Rnd_762x39_7N43_AK12 { ammo = "FA_762x39_7N43_T_Yellow"; displayName = "[Ghost] 30Rnd 7.62x39 7N43 Kremen Yellow Tracer"; descriptionShort = "7.62x39 7N43 Kremen"; tracersEvery = 4; };
    class FA_30Rnd_762x39_7N43_AK12_T_Green: FA_30Rnd_762x39_7N43_AK12 { ammo = "FA_762x39_7N43_T_Green"; displayName = "[Ghost] 30Rnd 7.62x39 7N43 Kremen Green Tracer"; descriptionShort = "7.62x39 7N43 Kremen"; tracersEvery = 4; };
    class FA_30Rnd_762x39_7N43_AK12_T_White: FA_30Rnd_762x39_7N43_AK12 { ammo = "FA_762x39_7N43_T_White"; displayName = "[Ghost] 30Rnd 7.62x39 7N43 Kremen White Tracer"; descriptionShort = "7.62x39 7N43 Kremen"; tracersEvery = 4; };
    class FA_30Rnd_762x39_7N43_AK12_T_Blue: FA_30Rnd_762x39_7N43_AK12 { ammo = "FA_762x39_7N43_T_Blue"; displayName = "[Ghost] 30Rnd 7.62x39 7N43 Kremen Blue Tracer"; descriptionShort = "7.62x39 7N43 Kremen"; tracersEvery = 4; };
    class FA_30Rnd_762x39_7N43_AK12_T_Orange: FA_30Rnd_762x39_7N43_AK12 { ammo = "FA_762x39_7N43_T_Orange"; displayName = "[Ghost] 30Rnd 7.62x39 7N43 Kremen Orange Tracer"; descriptionShort = "7.62x39 7N43 Kremen"; tracersEvery = 4; };
    class FA_30Rnd_762x39_7N43_AK12_T_IR: FA_30Rnd_762x39_7N43_AK12 { ammo = "FA_762x39_7N43_T_IR"; displayName = "[Ghost] 30Rnd 7.62x39 7N43 Kremen IR Tracer"; descriptionShort = "7.62x39 7N43 Kremen"; tracersEvery = 4; };

    // =========================================================
    // 7.62x39mm — 7N43 Kremen — BI vanilla 75Rnd drum
    // =========================================================
    class FA_75Rnd_762x39_7N43: 75Rnd_762x39_Mag_F {
        author = QAUTHOR;
        displayName = "[Ghost] 75Rnd 7.62x39 7N43 Kremen";
        descriptionShort = "7.62x39 7N43 Kremen";
        ammo = "FA_762x39_7N43";
        initSpeed = 820;
        mass = 20;
    };
    class FA_75Rnd_762x39_7N43_T_Red: FA_75Rnd_762x39_7N43 { ammo = "FA_762x39_7N43_T_Red"; displayName = "[Ghost] 75Rnd 7.62x39 7N43 Kremen Red Tracer"; descriptionShort = "7.62x39 7N43 Kremen"; tracersEvery = 4; };
    class FA_75Rnd_762x39_7N43_T_Yellow: FA_75Rnd_762x39_7N43 { ammo = "FA_762x39_7N43_T_Yellow"; displayName = "[Ghost] 75Rnd 7.62x39 7N43 Kremen Yellow Tracer"; descriptionShort = "7.62x39 7N43 Kremen"; tracersEvery = 4; };
    class FA_75Rnd_762x39_7N43_T_Green: FA_75Rnd_762x39_7N43 { ammo = "FA_762x39_7N43_T_Green"; displayName = "[Ghost] 75Rnd 7.62x39 7N43 Kremen Green Tracer"; descriptionShort = "7.62x39 7N43 Kremen"; tracersEvery = 4; };
    class FA_75Rnd_762x39_7N43_T_White: FA_75Rnd_762x39_7N43 { ammo = "FA_762x39_7N43_T_White"; displayName = "[Ghost] 75Rnd 7.62x39 7N43 Kremen White Tracer"; descriptionShort = "7.62x39 7N43 Kremen"; tracersEvery = 4; };
    class FA_75Rnd_762x39_7N43_T_Blue: FA_75Rnd_762x39_7N43 { ammo = "FA_762x39_7N43_T_Blue"; displayName = "[Ghost] 75Rnd 7.62x39 7N43 Kremen Blue Tracer"; descriptionShort = "7.62x39 7N43 Kremen"; tracersEvery = 4; };
    class FA_75Rnd_762x39_7N43_T_Orange: FA_75Rnd_762x39_7N43 { ammo = "FA_762x39_7N43_T_Orange"; displayName = "[Ghost] 75Rnd 7.62x39 7N43 Kremen Orange Tracer"; descriptionShort = "7.62x39 7N43 Kremen"; tracersEvery = 4; };
    class FA_75Rnd_762x39_7N43_T_IR: FA_75Rnd_762x39_7N43 { ammo = "FA_762x39_7N43_T_IR"; displayName = "[Ghost] 75Rnd 7.62x39 7N43 Kremen IR Tracer"; descriptionShort = "7.62x39 7N43 Kremen"; tracersEvery = 4; };

    // =========================================================
    // 7.62x39mm — 7N43 Kremen — BI Enoch 75Rnd drum
    // =========================================================
    class FA_75Rnd_762x39_7N43_AK12: 75rnd_762x39_AK12_Mag_F {
        author = QAUTHOR;
        displayName = "[Ghost] 75Rnd 7.62x39 7N43 Kremen";
        descriptionShort = "7.62x39 7N43 Kremen";
        ammo = "FA_762x39_7N43";
        initSpeed = 820;
        mass = 20;
    };
    class FA_75Rnd_762x39_7N43_AK12_T_Red: FA_75Rnd_762x39_7N43_AK12 { ammo = "FA_762x39_7N43_T_Red"; displayName = "[Ghost] 75Rnd 7.62x39 7N43 Kremen Red Tracer"; descriptionShort = "7.62x39 7N43 Kremen"; tracersEvery = 4; };
    class FA_75Rnd_762x39_7N43_AK12_T_Yellow: FA_75Rnd_762x39_7N43_AK12 { ammo = "FA_762x39_7N43_T_Yellow"; displayName = "[Ghost] 75Rnd 7.62x39 7N43 Kremen Yellow Tracer"; descriptionShort = "7.62x39 7N43 Kremen"; tracersEvery = 4; };
    class FA_75Rnd_762x39_7N43_AK12_T_Green: FA_75Rnd_762x39_7N43_AK12 { ammo = "FA_762x39_7N43_T_Green"; displayName = "[Ghost] 75Rnd 7.62x39 7N43 Kremen Green Tracer"; descriptionShort = "7.62x39 7N43 Kremen"; tracersEvery = 4; };
    class FA_75Rnd_762x39_7N43_AK12_T_White: FA_75Rnd_762x39_7N43_AK12 { ammo = "FA_762x39_7N43_T_White"; displayName = "[Ghost] 75Rnd 7.62x39 7N43 Kremen White Tracer"; descriptionShort = "7.62x39 7N43 Kremen"; tracersEvery = 4; };
    class FA_75Rnd_762x39_7N43_AK12_T_Blue: FA_75Rnd_762x39_7N43_AK12 { ammo = "FA_762x39_7N43_T_Blue"; displayName = "[Ghost] 75Rnd 7.62x39 7N43 Kremen Blue Tracer"; descriptionShort = "7.62x39 7N43 Kremen"; tracersEvery = 4; };
    class FA_75Rnd_762x39_7N43_AK12_T_Orange: FA_75Rnd_762x39_7N43_AK12 { ammo = "FA_762x39_7N43_T_Orange"; displayName = "[Ghost] 75Rnd 7.62x39 7N43 Kremen Orange Tracer"; descriptionShort = "7.62x39 7N43 Kremen"; tracersEvery = 4; };
    class FA_75Rnd_762x39_7N43_AK12_T_IR: FA_75Rnd_762x39_7N43_AK12 { ammo = "FA_762x39_7N43_T_IR"; displayName = "[Ghost] 75Rnd 7.62x39 7N43 Kremen IR Tracer"; descriptionShort = "7.62x39 7N43 Kremen"; tracersEvery = 4; };

    // =========================================================
    // 7.62x39mm — 7N43 Kremen — BI Enoch 75Rnd Lush
    // =========================================================
    class FA_75Rnd_762x39_7N43_Lush: 75rnd_762x39_AK12_Lush_Mag_F {
        author = QAUTHOR;
        displayName = "[Ghost] 75Rnd 7.62x39 7N43 Kremen Lush Mag";
        descriptionShort = "7.62x39 7N43 Kremen";
        ammo = "FA_762x39_7N43";
        initSpeed = 820;
        mass = 20;
    };
    class FA_75Rnd_762x39_7N43_Lush_T_Red: FA_75Rnd_762x39_7N43_Lush { ammo = "FA_762x39_7N43_T_Red"; displayName = "[Ghost] 75Rnd 7.62x39 7N43 Kremen Lush Mag Red Tracer"; descriptionShort = "7.62x39 7N43 Kremen"; tracersEvery = 4; };
    class FA_75Rnd_762x39_7N43_Lush_T_Yellow: FA_75Rnd_762x39_7N43_Lush { ammo = "FA_762x39_7N43_T_Yellow"; displayName = "[Ghost] 75Rnd 7.62x39 7N43 Kremen Lush Mag Yellow Tracer"; descriptionShort = "7.62x39 7N43 Kremen"; tracersEvery = 4; };
    class FA_75Rnd_762x39_7N43_Lush_T_Green: FA_75Rnd_762x39_7N43_Lush { ammo = "FA_762x39_7N43_T_Green"; displayName = "[Ghost] 75Rnd 7.62x39 7N43 Kremen Lush Mag Green Tracer"; descriptionShort = "7.62x39 7N43 Kremen"; tracersEvery = 4; };
    class FA_75Rnd_762x39_7N43_Lush_T_White: FA_75Rnd_762x39_7N43_Lush { ammo = "FA_762x39_7N43_T_White"; displayName = "[Ghost] 75Rnd 7.62x39 7N43 Kremen Lush Mag White Tracer"; descriptionShort = "7.62x39 7N43 Kremen"; tracersEvery = 4; };
    class FA_75Rnd_762x39_7N43_Lush_T_Blue: FA_75Rnd_762x39_7N43_Lush { ammo = "FA_762x39_7N43_T_Blue"; displayName = "[Ghost] 75Rnd 7.62x39 7N43 Kremen Lush Mag Blue Tracer"; descriptionShort = "7.62x39 7N43 Kremen"; tracersEvery = 4; };
    class FA_75Rnd_762x39_7N43_Lush_T_Orange: FA_75Rnd_762x39_7N43_Lush { ammo = "FA_762x39_7N43_T_Orange"; displayName = "[Ghost] 75Rnd 7.62x39 7N43 Kremen Lush Mag Orange Tracer"; descriptionShort = "7.62x39 7N43 Kremen"; tracersEvery = 4; };
    class FA_75Rnd_762x39_7N43_Lush_T_IR: FA_75Rnd_762x39_7N43_Lush { ammo = "FA_762x39_7N43_T_IR"; displayName = "[Ghost] 75Rnd 7.62x39 7N43 Kremen Lush Mag IR Tracer"; descriptionShort = "7.62x39 7N43 Kremen"; tracersEvery = 4; };

    // =========================================================
    // 7.62x39mm — 7N43 Kremen — BI Enoch 75Rnd Arid
    // =========================================================
    class FA_75Rnd_762x39_7N43_Arid: 75rnd_762x39_AK12_Arid_Mag_F {
        author = QAUTHOR;
        displayName = "[Ghost] 75Rnd 7.62x39 7N43 Kremen Arid Mag";
        descriptionShort = "7.62x39 7N43 Kremen";
        ammo = "FA_762x39_7N43";
        initSpeed = 820;
        mass = 20;
    };
    class FA_75Rnd_762x39_7N43_Arid_T_Red: FA_75Rnd_762x39_7N43_Arid { ammo = "FA_762x39_7N43_T_Red"; displayName = "[Ghost] 75Rnd 7.62x39 7N43 Kremen Arid Mag Red Tracer"; descriptionShort = "7.62x39 7N43 Kremen"; tracersEvery = 4; };
    class FA_75Rnd_762x39_7N43_Arid_T_Yellow: FA_75Rnd_762x39_7N43_Arid { ammo = "FA_762x39_7N43_T_Yellow"; displayName = "[Ghost] 75Rnd 7.62x39 7N43 Kremen Arid Mag Yellow Tracer"; descriptionShort = "7.62x39 7N43 Kremen"; tracersEvery = 4; };
    class FA_75Rnd_762x39_7N43_Arid_T_Green: FA_75Rnd_762x39_7N43_Arid { ammo = "FA_762x39_7N43_T_Green"; displayName = "[Ghost] 75Rnd 7.62x39 7N43 Kremen Arid Mag Green Tracer"; descriptionShort = "7.62x39 7N43 Kremen"; tracersEvery = 4; };
    class FA_75Rnd_762x39_7N43_Arid_T_White: FA_75Rnd_762x39_7N43_Arid { ammo = "FA_762x39_7N43_T_White"; displayName = "[Ghost] 75Rnd 7.62x39 7N43 Kremen Arid Mag White Tracer"; descriptionShort = "7.62x39 7N43 Kremen"; tracersEvery = 4; };
    class FA_75Rnd_762x39_7N43_Arid_T_Blue: FA_75Rnd_762x39_7N43_Arid { ammo = "FA_762x39_7N43_T_Blue"; displayName = "[Ghost] 75Rnd 7.62x39 7N43 Kremen Arid Mag Blue Tracer"; descriptionShort = "7.62x39 7N43 Kremen"; tracersEvery = 4; };
    class FA_75Rnd_762x39_7N43_Arid_T_Orange: FA_75Rnd_762x39_7N43_Arid { ammo = "FA_762x39_7N43_T_Orange"; displayName = "[Ghost] 75Rnd 7.62x39 7N43 Kremen Arid Mag Orange Tracer"; descriptionShort = "7.62x39 7N43 Kremen"; tracersEvery = 4; };
    class FA_75Rnd_762x39_7N43_Arid_T_IR: FA_75Rnd_762x39_7N43_Arid { ammo = "FA_762x39_7N43_T_IR"; displayName = "[Ghost] 75Rnd 7.62x39 7N43 Kremen Arid Mag IR Tracer"; descriptionShort = "7.62x39 7N43 Kremen"; tracersEvery = 4; };

    // =========================================================
    // 7.62x39mm — 7N47 Kremen-2 CT — vanilla 30Rnd + 75Rnd
    // =========================================================
    class FA_30Rnd_762x39_7N47_CT: 30Rnd_762x39_Mag_F {
        author = QAUTHOR;
        displayName = "[Ghost] 30Rnd 7.62x39 7N47 Kremen-2 CT";
        descriptionShort = "7.62x39 7N47 Kremen-2 CT";
        ammo = "FA_762x39_7N47_CT";
        initSpeed = 845;
        mass = 7;
    };
    class FA_30Rnd_762x39_7N47_CT_T_Red: FA_30Rnd_762x39_7N47_CT { ammo = "FA_762x39_7N47_CT_T_Red"; displayName = "[Ghost] 30Rnd 7.62x39 7N47 Kremen-2 CT Red Tracer"; descriptionShort = "7.62x39 7N47 Kremen-2 CT"; tracersEvery = 4; };
    class FA_30Rnd_762x39_7N47_CT_T_Yellow: FA_30Rnd_762x39_7N47_CT { ammo = "FA_762x39_7N47_CT_T_Yellow"; displayName = "[Ghost] 30Rnd 7.62x39 7N47 Kremen-2 CT Yellow Tracer"; descriptionShort = "7.62x39 7N47 Kremen-2 CT"; tracersEvery = 4; };
    class FA_30Rnd_762x39_7N47_CT_T_Green: FA_30Rnd_762x39_7N47_CT { ammo = "FA_762x39_7N47_CT_T_Green"; displayName = "[Ghost] 30Rnd 7.62x39 7N47 Kremen-2 CT Green Tracer"; descriptionShort = "7.62x39 7N47 Kremen-2 CT"; tracersEvery = 4; };
    class FA_30Rnd_762x39_7N47_CT_T_White: FA_30Rnd_762x39_7N47_CT { ammo = "FA_762x39_7N47_CT_T_White"; displayName = "[Ghost] 30Rnd 7.62x39 7N47 Kremen-2 CT White Tracer"; descriptionShort = "7.62x39 7N47 Kremen-2 CT"; tracersEvery = 4; };
    class FA_30Rnd_762x39_7N47_CT_T_Blue: FA_30Rnd_762x39_7N47_CT { ammo = "FA_762x39_7N47_CT_T_Blue"; displayName = "[Ghost] 30Rnd 7.62x39 7N47 Kremen-2 CT Blue Tracer"; descriptionShort = "7.62x39 7N47 Kremen-2 CT"; tracersEvery = 4; };
    class FA_30Rnd_762x39_7N47_CT_T_Orange: FA_30Rnd_762x39_7N47_CT { ammo = "FA_762x39_7N47_CT_T_Orange"; displayName = "[Ghost] 30Rnd 7.62x39 7N47 Kremen-2 CT Orange Tracer"; descriptionShort = "7.62x39 7N47 Kremen-2 CT"; tracersEvery = 4; };
    class FA_30Rnd_762x39_7N47_CT_T_IR: FA_30Rnd_762x39_7N47_CT { ammo = "FA_762x39_7N47_CT_T_IR"; displayName = "[Ghost] 30Rnd 7.62x39 7N47 Kremen-2 CT IR Tracer"; descriptionShort = "7.62x39 7N47 Kremen-2 CT"; tracersEvery = 4; };

    class FA_75Rnd_762x39_7N47_CT: 75Rnd_762x39_Mag_F {
        author = QAUTHOR;
        displayName = "[Ghost] 75Rnd 7.62x39 7N47 Kremen-2 CT";
        descriptionShort = "7.62x39 7N47 Kremen-2 CT";
        ammo = "FA_762x39_7N47_CT";
        initSpeed = 845;
        mass = 20;
    };
    class FA_75Rnd_762x39_7N47_CT_T_Red: FA_75Rnd_762x39_7N47_CT { ammo = "FA_762x39_7N47_CT_T_Red"; displayName = "[Ghost] 75Rnd 7.62x39 7N47 Kremen-2 CT Red Tracer"; descriptionShort = "7.62x39 7N47 Kremen-2 CT"; tracersEvery = 4; };
    class FA_75Rnd_762x39_7N47_CT_T_Yellow: FA_75Rnd_762x39_7N47_CT { ammo = "FA_762x39_7N47_CT_T_Yellow"; displayName = "[Ghost] 75Rnd 7.62x39 7N47 Kremen-2 CT Yellow Tracer"; descriptionShort = "7.62x39 7N47 Kremen-2 CT"; tracersEvery = 4; };
    class FA_75Rnd_762x39_7N47_CT_T_Green: FA_75Rnd_762x39_7N47_CT { ammo = "FA_762x39_7N47_CT_T_Green"; displayName = "[Ghost] 75Rnd 7.62x39 7N47 Kremen-2 CT Green Tracer"; descriptionShort = "7.62x39 7N47 Kremen-2 CT"; tracersEvery = 4; };
    class FA_75Rnd_762x39_7N47_CT_T_White: FA_75Rnd_762x39_7N47_CT { ammo = "FA_762x39_7N47_CT_T_White"; displayName = "[Ghost] 75Rnd 7.62x39 7N47 Kremen-2 CT White Tracer"; descriptionShort = "7.62x39 7N47 Kremen-2 CT"; tracersEvery = 4; };
    class FA_75Rnd_762x39_7N47_CT_T_Blue: FA_75Rnd_762x39_7N47_CT { ammo = "FA_762x39_7N47_CT_T_Blue"; displayName = "[Ghost] 75Rnd 7.62x39 7N47 Kremen-2 CT Blue Tracer"; descriptionShort = "7.62x39 7N47 Kremen-2 CT"; tracersEvery = 4; };
    class FA_75Rnd_762x39_7N47_CT_T_Orange: FA_75Rnd_762x39_7N47_CT { ammo = "FA_762x39_7N47_CT_T_Orange"; displayName = "[Ghost] 75Rnd 7.62x39 7N47 Kremen-2 CT Orange Tracer"; descriptionShort = "7.62x39 7N47 Kremen-2 CT"; tracersEvery = 4; };
    class FA_75Rnd_762x39_7N47_CT_T_IR: FA_75Rnd_762x39_7N47_CT { ammo = "FA_762x39_7N47_CT_T_IR"; displayName = "[Ghost] 75Rnd 7.62x39 7N47 Kremen-2 CT IR Tracer"; descriptionShort = "7.62x39 7N47 Kremen-2 CT"; tracersEvery = 4; };

    // =========================================================
    // 7.62x39mm — 7U4 Tishina-2 Sub — vanilla 30Rnd
    // =========================================================
    class FA_30Rnd_762x39_7U4_Sub: 30Rnd_762x39_Mag_F {
        author = QAUTHOR;
        displayName = "[Ghost] 30Rnd 7.62x39 7U4 Tishina-2 SubAP";
        descriptionShort = "7.62x39 7U4 Tishina-2 SubAP";
        ammo = "FA_762x39_7U4_Sub";
        initSpeed = 300;
        mass = 8;
    };
    class FA_30Rnd_762x39_7U4_Sub_T_Red: FA_30Rnd_762x39_7U4_Sub { ammo = "FA_762x39_7U4_Sub_T_Red"; displayName = "[Ghost] 30Rnd 7.62x39 7U4 Tishina-2 SubAP Red Tracer"; descriptionShort = "7.62x39 7U4 Tishina-2 SubAP"; tracersEvery = 4; };
    class FA_30Rnd_762x39_7U4_Sub_T_Yellow: FA_30Rnd_762x39_7U4_Sub { ammo = "FA_762x39_7U4_Sub_T_Yellow"; displayName = "[Ghost] 30Rnd 7.62x39 7U4 Tishina-2 SubAP Yellow Tracer"; descriptionShort = "7.62x39 7U4 Tishina-2 SubAP"; tracersEvery = 4; };
    class FA_30Rnd_762x39_7U4_Sub_T_Green: FA_30Rnd_762x39_7U4_Sub { ammo = "FA_762x39_7U4_Sub_T_Green"; displayName = "[Ghost] 30Rnd 7.62x39 7U4 Tishina-2 SubAP Green Tracer"; descriptionShort = "7.62x39 7U4 Tishina-2 SubAP"; tracersEvery = 4; };
    class FA_30Rnd_762x39_7U4_Sub_T_White: FA_30Rnd_762x39_7U4_Sub { ammo = "FA_762x39_7U4_Sub_T_White"; displayName = "[Ghost] 30Rnd 7.62x39 7U4 Tishina-2 SubAP White Tracer"; descriptionShort = "7.62x39 7U4 Tishina-2 SubAP"; tracersEvery = 4; };
    class FA_30Rnd_762x39_7U4_Sub_T_Blue: FA_30Rnd_762x39_7U4_Sub { ammo = "FA_762x39_7U4_Sub_T_Blue"; displayName = "[Ghost] 30Rnd 7.62x39 7U4 Tishina-2 SubAP Blue Tracer"; descriptionShort = "7.62x39 7U4 Tishina-2 SubAP"; tracersEvery = 4; };
    class FA_30Rnd_762x39_7U4_Sub_T_Orange: FA_30Rnd_762x39_7U4_Sub { ammo = "FA_762x39_7U4_Sub_T_Orange"; displayName = "[Ghost] 30Rnd 7.62x39 7U4 Tishina-2 SubAP Orange Tracer"; descriptionShort = "7.62x39 7U4 Tishina-2 SubAP"; tracersEvery = 4; };
    class FA_30Rnd_762x39_7U4_Sub_T_IR: FA_30Rnd_762x39_7U4_Sub { ammo = "FA_762x39_7U4_Sub_T_IR"; displayName = "[Ghost] 30Rnd 7.62x39 7U4 Tishina-2 SubAP IR Tracer"; descriptionShort = "7.62x39 7U4 Tishina-2 SubAP"; tracersEvery = 4; };

    // =========================================================
    // 7.62x54R — 150Rnd_762x54_Box (PKM/PKP)
    // =========================================================
    class FA_150Rnd_762x54_Box: 150Rnd_762x54_Box { author = QAUTHOR; displayName = "[Ghost] 150Rnd 7.62x54R Ball HV"; descriptionShort = "7.62x54R Ball HV"; ammo = "FA_762x54R_Ball_HV"; initSpeed = 850; };
    class FA_150Rnd_762x54_Box_T_Red : 150Rnd_762x54_Box { author = QAUTHOR; displayName = "[Ghost] 150Rnd 7.62x54R Ball HV Red Tracer"; descriptionShort = "7.62x54R Ball HV"; ammo = "FA_762x54R_Ball_HV_T_Red"; initSpeed = 855; tracersEvery = 4; };
    class FA_150Rnd_762x54_Box_T_Yellow : 150Rnd_762x54_Box { author = QAUTHOR; displayName = "[Ghost] 150Rnd 7.62x54R Ball HV Yellow Tracer"; descriptionShort = "7.62x54R Ball HV"; ammo = "FA_762x54R_Ball_HV_T_Yellow"; initSpeed = 855; tracersEvery = 4; };
    class FA_150Rnd_762x54_Box_T_Green : 150Rnd_762x54_Box { author = QAUTHOR; displayName = "[Ghost] 150Rnd 7.62x54R Ball HV Green Tracer"; descriptionShort = "7.62x54R Ball HV"; ammo = "FA_762x54R_Ball_HV_T_Green"; initSpeed = 855; tracersEvery = 4; };
    class FA_150Rnd_762x54_Box_T_White : 150Rnd_762x54_Box { author = QAUTHOR; displayName = "[Ghost] 150Rnd 7.62x54R Ball HV White Tracer"; descriptionShort = "7.62x54R Ball HV"; ammo = "FA_762x54R_Ball_HV_T_White"; initSpeed = 855; tracersEvery = 4; };
    class FA_150Rnd_762x54_Box_T_Blue : 150Rnd_762x54_Box { author = QAUTHOR; displayName = "[Ghost] 150Rnd 7.62x54R Ball HV Blue Tracer"; descriptionShort = "7.62x54R Ball HV"; ammo = "FA_762x54R_Ball_HV_T_Blue"; initSpeed = 855; tracersEvery = 4; };
    class FA_150Rnd_762x54_Box_T_Orange : 150Rnd_762x54_Box { author = QAUTHOR; displayName = "[Ghost] 150Rnd 7.62x54R Ball HV Orange Tracer"; descriptionShort = "7.62x54R Ball HV"; ammo = "FA_762x54R_Ball_HV_T_Orange"; initSpeed = 855; tracersEvery = 4; };
    class FA_150Rnd_762x54_Box_T_IR : 150Rnd_762x54_Box { author = QAUTHOR; displayName = "[Ghost] 150Rnd 7.62x54R Ball HV IR Tracer"; descriptionShort = "7.62x54R Ball HV"; ammo = "FA_762x54R_Ball_HV_T_IR"; initSpeed = 855; tracersEvery = 4; };

    // =========================================================
    // ACE 7.62x51 HK417 — ACE_20Rnd_762x51_M993_AP_Mag
    // =========================================================
    class FA_ACE_20Rnd_762x51_M993_AP: ACE_20Rnd_762x51_M993_AP_Mag { author = QAUTHOR; displayName = "[Ghost] 20Rnd M80A2 HV"; descriptionShort = "M80A2 HV"; ammo = "FA_762_M80A2_HV"; initSpeed = 833; };
    class FA_ACE_20Rnd_762x51_M993_AP_T_Red : ACE_20Rnd_762x51_M993_AP_Mag { author = QAUTHOR; displayName = "[Ghost] 20Rnd M80A2 HV Red Tracer"; descriptionShort = "M80A2 HV"; ammo = "FA_762_M80A2_HV_T_Red"; initSpeed = 940; tracersEvery = 4; };
    class FA_ACE_20Rnd_762x51_M993_AP_T_Yellow : ACE_20Rnd_762x51_M993_AP_Mag { author = QAUTHOR; displayName = "[Ghost] 20Rnd M80A2 HV Yellow Tracer"; descriptionShort = "M80A2 HV"; ammo = "FA_762_M80A2_HV_T_Yellow"; initSpeed = 940; tracersEvery = 4; };
    class FA_ACE_20Rnd_762x51_M993_AP_T_Green : ACE_20Rnd_762x51_M993_AP_Mag { author = QAUTHOR; displayName = "[Ghost] 20Rnd M80A2 HV Green Tracer"; descriptionShort = "M80A2 HV"; ammo = "FA_762_M80A2_HV_T_Green"; initSpeed = 940; tracersEvery = 4; };
    class FA_ACE_20Rnd_762x51_M993_AP_T_White : ACE_20Rnd_762x51_M993_AP_Mag { author = QAUTHOR; displayName = "[Ghost] 20Rnd M80A2 HV White Tracer"; descriptionShort = "M80A2 HV"; ammo = "FA_762_M80A2_HV_T_White"; initSpeed = 940; tracersEvery = 4; };
    class FA_ACE_20Rnd_762x51_M993_AP_T_Blue : ACE_20Rnd_762x51_M993_AP_Mag { author = QAUTHOR; displayName = "[Ghost] 20Rnd M80A2 HV Blue Tracer"; descriptionShort = "M80A2 HV"; ammo = "FA_762_M80A2_HV_T_Blue"; initSpeed = 940; tracersEvery = 4; };
    class FA_ACE_20Rnd_762x51_M993_AP_T_Orange : ACE_20Rnd_762x51_M993_AP_Mag { author = QAUTHOR; displayName = "[Ghost] 20Rnd M80A2 HV Orange Tracer"; descriptionShort = "M80A2 HV"; ammo = "FA_762_M80A2_HV_T_Orange"; initSpeed = 940; tracersEvery = 4; };
    class FA_ACE_20Rnd_762x51_M993_AP_T_IR : ACE_20Rnd_762x51_M993_AP_Mag { author = QAUTHOR; displayName = "[Ghost] 20Rnd M80A2 HV IR Tracer"; descriptionShort = "M80A2 HV"; ammo = "FA_762_M80A2_HV_T_IR"; initSpeed = 940; tracersEvery = 4; };

    // =========================================================
    // ACE 7.62x51 HK417 — ACE_10Rnd_762x51_Mag_SD
    // =========================================================
    class FA_ACE_10Rnd_762x51_SD: ACE_10Rnd_762x51_Mag_SD { author = QAUTHOR; displayName = "[Ghost] 10Rnd M80A2 HV"; descriptionShort = "M80A2 HV"; ammo = "FA_762_M80A2_HV"; initSpeed = 833; };
    class FA_ACE_10Rnd_762x51_SD_T_Red : ACE_10Rnd_762x51_Mag_SD { author = QAUTHOR; displayName = "[Ghost] 10Rnd M80A2 HV Red Tracer"; descriptionShort = "M80A2 HV"; ammo = "FA_762_M80A2_HV_T_Red"; initSpeed = 940; tracersEvery = 4; };
    class FA_ACE_10Rnd_762x51_SD_T_Yellow : ACE_10Rnd_762x51_Mag_SD { author = QAUTHOR; displayName = "[Ghost] 10Rnd M80A2 HV Yellow Tracer"; descriptionShort = "M80A2 HV"; ammo = "FA_762_M80A2_HV_T_Yellow"; initSpeed = 940; tracersEvery = 4; };
    class FA_ACE_10Rnd_762x51_SD_T_Green : ACE_10Rnd_762x51_Mag_SD { author = QAUTHOR; displayName = "[Ghost] 10Rnd M80A2 HV Green Tracer"; descriptionShort = "M80A2 HV"; ammo = "FA_762_M80A2_HV_T_Green"; initSpeed = 940; tracersEvery = 4; };
    class FA_ACE_10Rnd_762x51_SD_T_White : ACE_10Rnd_762x51_Mag_SD { author = QAUTHOR; displayName = "[Ghost] 10Rnd M80A2 HV White Tracer"; descriptionShort = "M80A2 HV"; ammo = "FA_762_M80A2_HV_T_White"; initSpeed = 940; tracersEvery = 4; };
    class FA_ACE_10Rnd_762x51_SD_T_Blue : ACE_10Rnd_762x51_Mag_SD { author = QAUTHOR; displayName = "[Ghost] 10Rnd M80A2 HV Blue Tracer"; descriptionShort = "M80A2 HV"; ammo = "FA_762_M80A2_HV_T_Blue"; initSpeed = 940; tracersEvery = 4; };
    class FA_ACE_10Rnd_762x51_SD_T_Orange : ACE_10Rnd_762x51_Mag_SD { author = QAUTHOR; displayName = "[Ghost] 10Rnd M80A2 HV Orange Tracer"; descriptionShort = "M80A2 HV"; ammo = "FA_762_M80A2_HV_T_Orange"; initSpeed = 940; tracersEvery = 4; };
    class FA_ACE_10Rnd_762x51_SD_T_IR : ACE_10Rnd_762x51_Mag_SD { author = QAUTHOR; displayName = "[Ghost] 10Rnd M80A2 HV IR Tracer"; descriptionShort = "M80A2 HV"; ammo = "FA_762_M80A2_HV_T_IR"; initSpeed = 940; tracersEvery = 4; };


    // =========================================================
    // 6.5x39 — 100Rnd_65x39_caseless_black_mag
    // =========================================================
    class FA_100Rnd_65x39_caseless_black_mag : 100Rnd_65x39_caseless_black_mag { author = QAUTHOR; displayName = "[Ghost] 100Rnd Mk330 EPR Black Mag"; descriptionShort = "Mk330 EPR"; ammo = "FA_65_EPR"; initSpeed = 820; };
    class FA_100Rnd_65x39_caseless_black_mag_T_Red : 100Rnd_65x39_caseless_black_mag { author = QAUTHOR; displayName = "[Ghost] 100Rnd Mk330 EPR Black Mag Red Tracer"; descriptionShort = "Mk330 EPR"; ammo = "FA_65_EPR_T_Red"; initSpeed = 820; tracersEvery = 4; };
    class FA_100Rnd_65x39_caseless_black_mag_T_Yellow : 100Rnd_65x39_caseless_black_mag { author = QAUTHOR; displayName = "[Ghost] 100Rnd Mk330 EPR Black Mag Yellow Tracer"; descriptionShort = "Mk330 EPR"; ammo = "FA_65_EPR_T_Yellow"; initSpeed = 820; tracersEvery = 4; };
    class FA_100Rnd_65x39_caseless_black_mag_T_Green : 100Rnd_65x39_caseless_black_mag { author = QAUTHOR; displayName = "[Ghost] 100Rnd Mk330 EPR Black Mag Green Tracer"; descriptionShort = "Mk330 EPR"; ammo = "FA_65_EPR_T_Green"; initSpeed = 820; tracersEvery = 4; };
    class FA_100Rnd_65x39_caseless_black_mag_T_White : 100Rnd_65x39_caseless_black_mag { author = QAUTHOR; displayName = "[Ghost] 100Rnd Mk330 EPR Black Mag White Tracer"; descriptionShort = "Mk330 EPR"; ammo = "FA_65_EPR_T_White"; initSpeed = 820; tracersEvery = 4; };
    class FA_100Rnd_65x39_caseless_black_mag_T_Blue : 100Rnd_65x39_caseless_black_mag { author = QAUTHOR; displayName = "[Ghost] 100Rnd Mk330 EPR Black Mag Blue Tracer"; descriptionShort = "Mk330 EPR"; ammo = "FA_65_EPR_T_Blue"; initSpeed = 820; tracersEvery = 4; };
    class FA_100Rnd_65x39_caseless_black_mag_T_Orange : 100Rnd_65x39_caseless_black_mag { author = QAUTHOR; displayName = "[Ghost] 100Rnd Mk330 EPR Black Mag Orange Tracer"; descriptionShort = "Mk330 EPR"; ammo = "FA_65_EPR_T_Orange"; initSpeed = 820; tracersEvery = 4; };
    class FA_100Rnd_65x39_caseless_black_mag_T_IR : 100Rnd_65x39_caseless_black_mag { author = QAUTHOR; displayName = "[Ghost] 100Rnd Mk330 EPR Black Mag IR Tracer"; descriptionShort = "Mk330 EPR"; ammo = "FA_65_EPR_T_IR"; initSpeed = 820; tracersEvery = 4; };

    // =========================================================
    // 6.5x39 — 100Rnd_65x39_caseless_khaki_mag
    // =========================================================
    class FA_100Rnd_65x39_caseless_khaki_mag : 100Rnd_65x39_caseless_khaki_mag { author = QAUTHOR; displayName = "[Ghost] 100Rnd Mk330 EPR Khaki Mag"; descriptionShort = "Mk330 EPR"; ammo = "FA_65_EPR"; initSpeed = 820; };
    class FA_100Rnd_65x39_caseless_khaki_mag_T_Red : 100Rnd_65x39_caseless_khaki_mag { author = QAUTHOR; displayName = "[Ghost] 100Rnd Mk330 EPR Khaki Mag Red Tracer"; descriptionShort = "Mk330 EPR"; ammo = "FA_65_EPR_T_Red"; initSpeed = 820; tracersEvery = 4; };
    class FA_100Rnd_65x39_caseless_khaki_mag_T_Yellow : 100Rnd_65x39_caseless_khaki_mag { author = QAUTHOR; displayName = "[Ghost] 100Rnd Mk330 EPR Khaki Mag Yellow Tracer"; descriptionShort = "Mk330 EPR"; ammo = "FA_65_EPR_T_Yellow"; initSpeed = 820; tracersEvery = 4; };
    class FA_100Rnd_65x39_caseless_khaki_mag_T_Green : 100Rnd_65x39_caseless_khaki_mag { author = QAUTHOR; displayName = "[Ghost] 100Rnd Mk330 EPR Khaki Mag Green Tracer"; descriptionShort = "Mk330 EPR"; ammo = "FA_65_EPR_T_Green"; initSpeed = 820; tracersEvery = 4; };
    class FA_100Rnd_65x39_caseless_khaki_mag_T_White : 100Rnd_65x39_caseless_khaki_mag { author = QAUTHOR; displayName = "[Ghost] 100Rnd Mk330 EPR Khaki Mag White Tracer"; descriptionShort = "Mk330 EPR"; ammo = "FA_65_EPR_T_White"; initSpeed = 820; tracersEvery = 4; };
    class FA_100Rnd_65x39_caseless_khaki_mag_T_Blue : 100Rnd_65x39_caseless_khaki_mag { author = QAUTHOR; displayName = "[Ghost] 100Rnd Mk330 EPR Khaki Mag Blue Tracer"; descriptionShort = "Mk330 EPR"; ammo = "FA_65_EPR_T_Blue"; initSpeed = 820; tracersEvery = 4; };
    class FA_100Rnd_65x39_caseless_khaki_mag_T_Orange : 100Rnd_65x39_caseless_khaki_mag { author = QAUTHOR; displayName = "[Ghost] 100Rnd Mk330 EPR Khaki Mag Orange Tracer"; descriptionShort = "Mk330 EPR"; ammo = "FA_65_EPR_T_Orange"; initSpeed = 820; tracersEvery = 4; };
    class FA_100Rnd_65x39_caseless_khaki_mag_T_IR : 100Rnd_65x39_caseless_khaki_mag { author = QAUTHOR; displayName = "[Ghost] 100Rnd Mk330 EPR Khaki Mag IR Tracer"; descriptionShort = "Mk330 EPR"; ammo = "FA_65_EPR_T_IR"; initSpeed = 820; tracersEvery = 4; };

    // =========================================================
    // 6.5x39 — 100Rnd_65x39_caseless_mag
    // =========================================================
    class FA_100Rnd_65x39_caseless_mag : 100Rnd_65x39_caseless_mag { author = QAUTHOR; displayName = "[Ghost] 100Rnd Mk330 EPR"; descriptionShort = "Mk330 EPR"; ammo = "FA_65_EPR"; initSpeed = 820; };
    class FA_100Rnd_65x39_caseless_mag_T_Red : 100Rnd_65x39_caseless_mag { author = QAUTHOR; displayName = "[Ghost] 100Rnd Mk330 EPR Red Tracer"; descriptionShort = "Mk330 EPR"; ammo = "FA_65_EPR_T_Red"; initSpeed = 820; tracersEvery = 4; };
    class FA_100Rnd_65x39_caseless_mag_T_Yellow : 100Rnd_65x39_caseless_mag { author = QAUTHOR; displayName = "[Ghost] 100Rnd Mk330 EPR Yellow Tracer"; descriptionShort = "Mk330 EPR"; ammo = "FA_65_EPR_T_Yellow"; initSpeed = 820; tracersEvery = 4; };
    class FA_100Rnd_65x39_caseless_mag_T_Green : 100Rnd_65x39_caseless_mag { author = QAUTHOR; displayName = "[Ghost] 100Rnd Mk330 EPR Green Tracer"; descriptionShort = "Mk330 EPR"; ammo = "FA_65_EPR_T_Green"; initSpeed = 820; tracersEvery = 4; };
    class FA_100Rnd_65x39_caseless_mag_T_White : 100Rnd_65x39_caseless_mag { author = QAUTHOR; displayName = "[Ghost] 100Rnd Mk330 EPR White Tracer"; descriptionShort = "Mk330 EPR"; ammo = "FA_65_EPR_T_White"; initSpeed = 820; tracersEvery = 4; };
    class FA_100Rnd_65x39_caseless_mag_T_Blue : 100Rnd_65x39_caseless_mag { author = QAUTHOR; displayName = "[Ghost] 100Rnd Mk330 EPR Blue Tracer"; descriptionShort = "Mk330 EPR"; ammo = "FA_65_EPR_T_Blue"; initSpeed = 820; tracersEvery = 4; };
    class FA_100Rnd_65x39_caseless_mag_T_Orange : 100Rnd_65x39_caseless_mag { author = QAUTHOR; displayName = "[Ghost] 100Rnd Mk330 EPR Orange Tracer"; descriptionShort = "Mk330 EPR"; ammo = "FA_65_EPR_T_Orange"; initSpeed = 820; tracersEvery = 4; };
    class FA_100Rnd_65x39_caseless_mag_T_IR : 100Rnd_65x39_caseless_mag { author = QAUTHOR; displayName = "[Ghost] 100Rnd Mk330 EPR IR Tracer"; descriptionShort = "Mk330 EPR"; ammo = "FA_65_EPR_T_IR"; initSpeed = 820; tracersEvery = 4; };

    // =========================================================
    // 6.5x39 — 200Rnd_65x39_cased_Box
    // =========================================================
    class FA_200Rnd_65x39_cased_Box : 200Rnd_65x39_cased_Box { author = QAUTHOR; displayName = "[Ghost] 200Rnd Mk330 EPR"; descriptionShort = "Mk330 EPR"; ammo = "FA_65_EPR"; initSpeed = 820; };
    class FA_200Rnd_65x39_cased_Box_T_Red : 200Rnd_65x39_cased_Box { author = QAUTHOR; displayName = "[Ghost] 200Rnd Mk330 EPR Red Tracer"; descriptionShort = "Mk330 EPR"; ammo = "FA_65_EPR_T_Red"; initSpeed = 820; tracersEvery = 4; };
    class FA_200Rnd_65x39_cased_Box_T_Yellow : 200Rnd_65x39_cased_Box { author = QAUTHOR; displayName = "[Ghost] 200Rnd Mk330 EPR Yellow Tracer"; descriptionShort = "Mk330 EPR"; ammo = "FA_65_EPR_T_Yellow"; initSpeed = 820; tracersEvery = 4; };
    class FA_200Rnd_65x39_cased_Box_T_Green : 200Rnd_65x39_cased_Box { author = QAUTHOR; displayName = "[Ghost] 200Rnd Mk330 EPR Green Tracer"; descriptionShort = "Mk330 EPR"; ammo = "FA_65_EPR_T_Green"; initSpeed = 820; tracersEvery = 4; };
    class FA_200Rnd_65x39_cased_Box_T_White : 200Rnd_65x39_cased_Box { author = QAUTHOR; displayName = "[Ghost] 200Rnd Mk330 EPR White Tracer"; descriptionShort = "Mk330 EPR"; ammo = "FA_65_EPR_T_White"; initSpeed = 820; tracersEvery = 4; };
    class FA_200Rnd_65x39_cased_Box_T_Blue : 200Rnd_65x39_cased_Box { author = QAUTHOR; displayName = "[Ghost] 200Rnd Mk330 EPR Blue Tracer"; descriptionShort = "Mk330 EPR"; ammo = "FA_65_EPR_T_Blue"; initSpeed = 820; tracersEvery = 4; };
    class FA_200Rnd_65x39_cased_Box_T_Orange : 200Rnd_65x39_cased_Box { author = QAUTHOR; displayName = "[Ghost] 200Rnd Mk330 EPR Orange Tracer"; descriptionShort = "Mk330 EPR"; ammo = "FA_65_EPR_T_Orange"; initSpeed = 820; tracersEvery = 4; };
    class FA_200Rnd_65x39_cased_Box_T_IR : 200Rnd_65x39_cased_Box { author = QAUTHOR; displayName = "[Ghost] 200Rnd Mk330 EPR IR Tracer"; descriptionShort = "Mk330 EPR"; ammo = "FA_65_EPR_T_IR"; initSpeed = 820; tracersEvery = 4; };

    // =========================================================
    // 6.5x39 — 2000Rnd_65x39_Belt
    // =========================================================
    class FA_2000Rnd_65x39_Belt_T_Red : 2000Rnd_65x39_Belt { author = QAUTHOR; displayName = "[Ghost] 2000Rnd Mk330 EPR Red Tracer"; descriptionShort = "Mk330 EPR"; ammo = "FA_65_EPR_T_Red"; initSpeed = 820; tracersEvery = 4; };
    class FA_2000Rnd_65x39_Belt_T_Yellow : 2000Rnd_65x39_Belt { author = QAUTHOR; displayName = "[Ghost] 2000Rnd Mk330 EPR Yellow Tracer"; descriptionShort = "Mk330 EPR"; ammo = "FA_65_EPR_T_Yellow"; initSpeed = 820; tracersEvery = 4; };
    class FA_2000Rnd_65x39_Belt_T_Green : 2000Rnd_65x39_Belt { author = QAUTHOR; displayName = "[Ghost] 2000Rnd Mk330 EPR Green Tracer"; descriptionShort = "Mk330 EPR"; ammo = "FA_65_EPR_T_Green"; initSpeed = 820; tracersEvery = 4; };
    class FA_2000Rnd_65x39_Belt_T_White : 2000Rnd_65x39_Belt { author = QAUTHOR; displayName = "[Ghost] 2000Rnd Mk330 EPR White Tracer"; descriptionShort = "Mk330 EPR"; ammo = "FA_65_EPR_T_White"; initSpeed = 820; tracersEvery = 4; };
    class FA_2000Rnd_65x39_Belt_T_Blue : 2000Rnd_65x39_Belt { author = QAUTHOR; displayName = "[Ghost] 2000Rnd Mk330 EPR Blue Tracer"; descriptionShort = "Mk330 EPR"; ammo = "FA_65_EPR_T_Blue"; initSpeed = 820; tracersEvery = 4; };
    class FA_2000Rnd_65x39_Belt_T_Orange : 2000Rnd_65x39_Belt { author = QAUTHOR; displayName = "[Ghost] 2000Rnd Mk330 EPR Orange Tracer"; descriptionShort = "Mk330 EPR"; ammo = "FA_65_EPR_T_Orange"; initSpeed = 820; tracersEvery = 4; };

    // =========================================================
    // 6.5x39 — 1000Rnd_65x39_Belt
    // =========================================================
    class FA_1000Rnd_65x39_Belt_T_Red : 1000Rnd_65x39_Belt { author = QAUTHOR; displayName = "[Ghost] 1000Rnd Mk330 EPR Red Tracer"; descriptionShort = "Mk330 EPR"; ammo = "FA_65_EPR_T_Red"; initSpeed = 820; tracersEvery = 4; };
    class FA_1000Rnd_65x39_Belt_T_Yellow : 1000Rnd_65x39_Belt { author = QAUTHOR; displayName = "[Ghost] 1000Rnd Mk330 EPR Yellow Tracer"; descriptionShort = "Mk330 EPR"; ammo = "FA_65_EPR_T_Yellow"; initSpeed = 820; tracersEvery = 4; };
    class FA_1000Rnd_65x39_Belt_T_Green : 1000Rnd_65x39_Belt { author = QAUTHOR; displayName = "[Ghost] 1000Rnd Mk330 EPR Green Tracer"; descriptionShort = "Mk330 EPR"; ammo = "FA_65_EPR_T_Green"; initSpeed = 820; tracersEvery = 4; };
    class FA_1000Rnd_65x39_Belt_T_White : 1000Rnd_65x39_Belt { author = QAUTHOR; displayName = "[Ghost] 1000Rnd Mk330 EPR White Tracer"; descriptionShort = "Mk330 EPR"; ammo = "FA_65_EPR_T_White"; initSpeed = 820; tracersEvery = 4; };
    class FA_1000Rnd_65x39_Belt_T_Blue : 1000Rnd_65x39_Belt { author = QAUTHOR; displayName = "[Ghost] 1000Rnd Mk330 EPR Blue Tracer"; descriptionShort = "Mk330 EPR"; ammo = "FA_65_EPR_T_Blue"; initSpeed = 820; tracersEvery = 4; };
    class FA_1000Rnd_65x39_Belt_T_Orange : 1000Rnd_65x39_Belt { author = QAUTHOR; displayName = "[Ghost] 1000Rnd Mk330 EPR Orange Tracer"; descriptionShort = "Mk330 EPR"; ammo = "FA_65_EPR_T_Orange"; initSpeed = 820; tracersEvery = 4; };

    // =========================================================
    // 6.5x39 — 200Rnd_65x39_Belt
    // =========================================================
    class FA_200Rnd_65x39_Belt_T_Red : 200Rnd_65x39_Belt { author = QAUTHOR; displayName = "[Ghost] 200Rnd Mk330 EPR Red Tracer"; descriptionShort = "Mk330 EPR"; ammo = "FA_65_EPR_T_Red"; initSpeed = 820; tracersEvery = 4; };
    class FA_200Rnd_65x39_Belt_T_Yellow : 200Rnd_65x39_Belt { author = QAUTHOR; displayName = "[Ghost] 200Rnd Mk330 EPR Yellow Tracer"; descriptionShort = "Mk330 EPR"; ammo = "FA_65_EPR_T_Yellow"; initSpeed = 820; tracersEvery = 4; };
    class FA_200Rnd_65x39_Belt_T_Green : 200Rnd_65x39_Belt { author = QAUTHOR; displayName = "[Ghost] 200Rnd Mk330 EPR Green Tracer"; descriptionShort = "Mk330 EPR"; ammo = "FA_65_EPR_T_Green"; initSpeed = 820; tracersEvery = 4; };
    class FA_200Rnd_65x39_Belt_T_White : 200Rnd_65x39_Belt { author = QAUTHOR; displayName = "[Ghost] 200Rnd Mk330 EPR White Tracer"; descriptionShort = "Mk330 EPR"; ammo = "FA_65_EPR_T_White"; initSpeed = 820; tracersEvery = 4; };
    class FA_200Rnd_65x39_Belt_T_Blue : 200Rnd_65x39_Belt { author = QAUTHOR; displayName = "[Ghost] 200Rnd Mk330 EPR Blue Tracer"; descriptionShort = "Mk330 EPR"; ammo = "FA_65_EPR_T_Blue"; initSpeed = 820; tracersEvery = 4; };
    class FA_200Rnd_65x39_Belt_T_Orange : 200Rnd_65x39_Belt { author = QAUTHOR; displayName = "[Ghost] 200Rnd Mk330 EPR Orange Tracer"; descriptionShort = "Mk330 EPR"; ammo = "FA_65_EPR_T_Orange"; initSpeed = 820; tracersEvery = 4; };


    // =========================================================
    // 6.5x39 — 500Rnd_65x39_Belt
    // =========================================================
    class FA_500Rnd_65x39_Belt_T_Red : 500Rnd_65x39_Belt { author = QAUTHOR; displayName = "[Ghost] 500Rnd Mk330 EPR Red Tracer"; descriptionShort = "Mk330 EPR"; ammo = "FA_65_EPR_T_Red"; initSpeed = 820; tracersEvery = 4; };
    class FA_500Rnd_65x39_Belt_T_Yellow : 500Rnd_65x39_Belt { author = QAUTHOR; displayName = "[Ghost] 500Rnd Mk330 EPR Yellow Tracer"; descriptionShort = "Mk330 EPR"; ammo = "FA_65_EPR_T_Yellow"; initSpeed = 820; tracersEvery = 4; };
    class FA_500Rnd_65x39_Belt_T_Green : 500Rnd_65x39_Belt { author = QAUTHOR; displayName = "[Ghost] 500Rnd Mk330 EPR Green Tracer"; descriptionShort = "Mk330 EPR"; ammo = "FA_65_EPR_T_Green"; initSpeed = 820; tracersEvery = 4; };
    class FA_500Rnd_65x39_Belt_T_White : 500Rnd_65x39_Belt { author = QAUTHOR; displayName = "[Ghost] 500Rnd Mk330 EPR White Tracer"; descriptionShort = "Mk330 EPR"; ammo = "FA_65_EPR_T_White"; initSpeed = 820; tracersEvery = 4; };
    class FA_500Rnd_65x39_Belt_T_Blue : 500Rnd_65x39_Belt { author = QAUTHOR; displayName = "[Ghost] 500Rnd Mk330 EPR Blue Tracer"; descriptionShort = "Mk330 EPR"; ammo = "FA_65_EPR_T_Blue"; initSpeed = 820; tracersEvery = 4; };
    class FA_500Rnd_65x39_Belt_T_Orange : 500Rnd_65x39_Belt { author = QAUTHOR; displayName = "[Ghost] 500Rnd Mk330 EPR Orange Tracer"; descriptionShort = "Mk330 EPR"; ammo = "FA_65_EPR_T_Orange"; initSpeed = 820; tracersEvery = 4; };

    // =========================================================
    // 6.5x39 — PylonWeapon_2000Rnd_65x39_belt
    // =========================================================
    class FA_PylonWeapon_2000Rnd_65x39_belt_T_Red : PylonWeapon_2000Rnd_65x39_belt { author = QAUTHOR; displayName = "[Ghost] 2000Rnd Mk330 EPR Red Tracer"; descriptionShort = "Mk330 EPR"; ammo = "FA_65_EPR_T_Red"; initSpeed = 820; tracersEvery = 4; };
    class FA_PylonWeapon_2000Rnd_65x39_belt_T_Yellow : PylonWeapon_2000Rnd_65x39_belt { author = QAUTHOR; displayName = "[Ghost] 2000Rnd Mk330 EPR Yellow Tracer"; descriptionShort = "Mk330 EPR"; ammo = "FA_65_EPR_T_Yellow"; initSpeed = 820; tracersEvery = 4; };
    class FA_PylonWeapon_2000Rnd_65x39_belt_T_Green : PylonWeapon_2000Rnd_65x39_belt { author = QAUTHOR; displayName = "[Ghost] 2000Rnd Mk330 EPR Green Tracer"; descriptionShort = "Mk330 EPR"; ammo = "FA_65_EPR_T_Green"; initSpeed = 820; tracersEvery = 4; };
    class FA_PylonWeapon_2000Rnd_65x39_belt_T_White : PylonWeapon_2000Rnd_65x39_belt { author = QAUTHOR; displayName = "[Ghost] 2000Rnd Mk330 EPR White Tracer"; descriptionShort = "Mk330 EPR"; ammo = "FA_65_EPR_T_White"; initSpeed = 820; tracersEvery = 4; };
    class FA_PylonWeapon_2000Rnd_65x39_belt_T_Blue : PylonWeapon_2000Rnd_65x39_belt { author = QAUTHOR; displayName = "[Ghost] 2000Rnd Mk330 EPR Blue Tracer"; descriptionShort = "Mk330 EPR"; ammo = "FA_65_EPR_T_Blue"; initSpeed = 820; tracersEvery = 4; };
    class FA_PylonWeapon_2000Rnd_65x39_belt_T_Orange : PylonWeapon_2000Rnd_65x39_belt { author = QAUTHOR; displayName = "[Ghost] 2000Rnd Mk330 EPR Orange Tracer"; descriptionShort = "Mk330 EPR"; ammo = "FA_65_EPR_T_Orange"; initSpeed = 820; tracersEvery = 4; };

    // =========================================================
    // .338 LM — 10Rnd_338_Mag (vanilla MAR-10)
    // =========================================================
    class FA_10Rnd_338_Mk371_250gr_T_Red : 10Rnd_338_Mag { author = QAUTHOR; displayName = "[Ghost] 10Rnd Mk371 250gr Red Tracer"; descriptionShort = "Mk371 250gr"; ammo = "FA_338_Mk371_250gr_T_Red"; initSpeed = 905; tracersEvery = 4; };
    class FA_10Rnd_338_Mk371_250gr_T_Yellow : 10Rnd_338_Mag { author = QAUTHOR; displayName = "[Ghost] 10Rnd Mk371 250gr Yellow Tracer"; descriptionShort = "Mk371 250gr"; ammo = "FA_338_Mk371_250gr_T_Yellow"; initSpeed = 905; tracersEvery = 4; };
    class FA_10Rnd_338_Mk371_250gr_T_Green : 10Rnd_338_Mag { author = QAUTHOR; displayName = "[Ghost] 10Rnd Mk371 250gr Green Tracer"; descriptionShort = "Mk371 250gr"; ammo = "FA_338_Mk371_250gr_T_Green"; initSpeed = 905; tracersEvery = 4; };
    class FA_10Rnd_338_Mk371_250gr_T_White : 10Rnd_338_Mag { author = QAUTHOR; displayName = "[Ghost] 10Rnd Mk371 250gr White Tracer"; descriptionShort = "Mk371 250gr"; ammo = "FA_338_Mk371_250gr_T_White"; initSpeed = 905; tracersEvery = 4; };
    class FA_10Rnd_338_Mk371_250gr_T_Blue : 10Rnd_338_Mag { author = QAUTHOR; displayName = "[Ghost] 10Rnd Mk371 250gr Blue Tracer"; descriptionShort = "Mk371 250gr"; ammo = "FA_338_Mk371_250gr_T_Blue"; initSpeed = 905; tracersEvery = 4; };
    class FA_10Rnd_338_Mk371_250gr_T_Orange : 10Rnd_338_Mag { author = QAUTHOR; displayName = "[Ghost] 10Rnd Mk371 250gr Orange Tracer"; descriptionShort = "Mk371 250gr"; ammo = "FA_338_Mk371_250gr_T_Orange"; initSpeed = 905; tracersEvery = 4; };
    class FA_10Rnd_338_Mk371_250gr_T_IR : 10Rnd_338_Mag { author = QAUTHOR; displayName = "[Ghost] 10Rnd Mk371 250gr IR Tracer"; descriptionShort = "Mk371 250gr"; ammo = "FA_338_Mk371_250gr_T_IR"; initSpeed = 905; tracersEvery = 4; };
    class FA_10Rnd_338_Mk371_285gr_T_Red : 10Rnd_338_Mag { author = QAUTHOR; displayName = "[Ghost] 10Rnd Mk371 285gr Red Tracer"; descriptionShort = "Mk371 285gr"; ammo = "FA_338_Mk371_285gr_T_Red"; initSpeed = 870; tracersEvery = 4; };
    class FA_10Rnd_338_Mk371_285gr_T_Yellow : 10Rnd_338_Mag { author = QAUTHOR; displayName = "[Ghost] 10Rnd Mk371 285gr Yellow Tracer"; descriptionShort = "Mk371 285gr"; ammo = "FA_338_Mk371_285gr_T_Yellow"; initSpeed = 870; tracersEvery = 4; };
    class FA_10Rnd_338_Mk371_285gr_T_Green : 10Rnd_338_Mag { author = QAUTHOR; displayName = "[Ghost] 10Rnd Mk371 285gr Green Tracer"; descriptionShort = "Mk371 285gr"; ammo = "FA_338_Mk371_285gr_T_Green"; initSpeed = 870; tracersEvery = 4; };
    class FA_10Rnd_338_Mk371_285gr_T_White : 10Rnd_338_Mag { author = QAUTHOR; displayName = "[Ghost] 10Rnd Mk371 285gr White Tracer"; descriptionShort = "Mk371 285gr"; ammo = "FA_338_Mk371_285gr_T_White"; initSpeed = 870; tracersEvery = 4; };
    class FA_10Rnd_338_Mk371_285gr_T_Blue : 10Rnd_338_Mag { author = QAUTHOR; displayName = "[Ghost] 10Rnd Mk371 285gr Blue Tracer"; descriptionShort = "Mk371 285gr"; ammo = "FA_338_Mk371_285gr_T_Blue"; initSpeed = 870; tracersEvery = 4; };
    class FA_10Rnd_338_Mk371_285gr_T_Orange : 10Rnd_338_Mag { author = QAUTHOR; displayName = "[Ghost] 10Rnd Mk371 285gr Orange Tracer"; descriptionShort = "Mk371 285gr"; ammo = "FA_338_Mk371_285gr_T_Orange"; initSpeed = 870; tracersEvery = 4; };
    class FA_10Rnd_338_Mk371_285gr_T_IR : 10Rnd_338_Mag { author = QAUTHOR; displayName = "[Ghost] 10Rnd Mk371 285gr IR Tracer"; descriptionShort = "Mk371 285gr"; ammo = "FA_338_Mk371_285gr_T_IR"; initSpeed = 870; tracersEvery = 4; };
    class FA_10Rnd_338_Mk371_300gr_T_Red : 10Rnd_338_Mag { author = QAUTHOR; displayName = "[Ghost] 10Rnd Mk371 300gr Red Tracer"; descriptionShort = "Mk371 300gr"; ammo = "FA_338_Mk371_300gr_T_Red"; initSpeed = 830; tracersEvery = 4; };
    class FA_10Rnd_338_Mk371_300gr_T_Yellow : 10Rnd_338_Mag { author = QAUTHOR; displayName = "[Ghost] 10Rnd Mk371 300gr Yellow Tracer"; descriptionShort = "Mk371 300gr"; ammo = "FA_338_Mk371_300gr_T_Yellow"; initSpeed = 830; tracersEvery = 4; };
    class FA_10Rnd_338_Mk371_300gr_T_Green : 10Rnd_338_Mag { author = QAUTHOR; displayName = "[Ghost] 10Rnd Mk371 300gr Green Tracer"; descriptionShort = "Mk371 300gr"; ammo = "FA_338_Mk371_300gr_T_Green"; initSpeed = 830; tracersEvery = 4; };
    class FA_10Rnd_338_Mk371_300gr_T_White : 10Rnd_338_Mag { author = QAUTHOR; displayName = "[Ghost] 10Rnd Mk371 300gr White Tracer"; descriptionShort = "Mk371 300gr"; ammo = "FA_338_Mk371_300gr_T_White"; initSpeed = 830; tracersEvery = 4; };
    class FA_10Rnd_338_Mk371_300gr_T_Blue : 10Rnd_338_Mag { author = QAUTHOR; displayName = "[Ghost] 10Rnd Mk371 300gr Blue Tracer"; descriptionShort = "Mk371 300gr"; ammo = "FA_338_Mk371_300gr_T_Blue"; initSpeed = 830; tracersEvery = 4; };
    class FA_10Rnd_338_Mk371_300gr_T_Orange : 10Rnd_338_Mag { author = QAUTHOR; displayName = "[Ghost] 10Rnd Mk371 300gr Orange Tracer"; descriptionShort = "Mk371 300gr"; ammo = "FA_338_Mk371_300gr_T_Orange"; initSpeed = 830; tracersEvery = 4; };
    class FA_10Rnd_338_Mk371_300gr_T_IR : 10Rnd_338_Mag { author = QAUTHOR; displayName = "[Ghost] 10Rnd Mk371 300gr IR Tracer"; descriptionShort = "Mk371 300gr"; ammo = "FA_338_Mk371_300gr_T_IR"; initSpeed = 830; tracersEvery = 4; };

    // =========================================================
    // 9.3x64 Type 40 — 10Rnd_93x64_Mag (Cyrus)
    // =========================================================
    class FA_10Rnd_93x64_Type40: 10Rnd_93x64_Mag {
        author = QAUTHOR;
        displayName = "[Ghost] 10Rnd Type40";
        descriptionShort = "Type40";
        ammo = "FA_93x64_Type40";
        initSpeed = 882;
        mass = 9;
    };
    class FA_10Rnd_93x64_Type40_T_Red    : 10Rnd_93x64_Mag { author = QAUTHOR; displayName = "[Ghost] 10Rnd Type40 Red Tracer";    descriptionShort = "Type40";    ammo = "FA_93x64_Type40_T_Red";    initSpeed = 882; tracersEvery = 4; };
    class FA_10Rnd_93x64_Type40_T_Yellow : 10Rnd_93x64_Mag { author = QAUTHOR; displayName = "[Ghost] 10Rnd Type40 Yellow Tracer"; descriptionShort = "Type40"; ammo = "FA_93x64_Type40_T_Yellow"; initSpeed = 882; tracersEvery = 4; };
    class FA_10Rnd_93x64_Type40_T_Green  : 10Rnd_93x64_Mag { author = QAUTHOR; displayName = "[Ghost] 10Rnd Type40 Green Tracer";  descriptionShort = "Type40";  ammo = "FA_93x64_Type40_T_Green";  initSpeed = 882; tracersEvery = 4; };
    class FA_10Rnd_93x64_Type40_T_White  : 10Rnd_93x64_Mag { author = QAUTHOR; displayName = "[Ghost] 10Rnd Type40 White Tracer";  descriptionShort = "Type40";  ammo = "FA_93x64_Type40_T_White";  initSpeed = 882; tracersEvery = 4; };
    class FA_10Rnd_93x64_Type40_T_Blue   : 10Rnd_93x64_Mag { author = QAUTHOR; displayName = "[Ghost] 10Rnd Type40 Blue Tracer";   descriptionShort = "Type40";   ammo = "FA_93x64_Type40_T_Blue";   initSpeed = 882; tracersEvery = 4; };
    class FA_10Rnd_93x64_Type40_T_Orange : 10Rnd_93x64_Mag { author = QAUTHOR; displayName = "[Ghost] 10Rnd Type40 Orange Tracer"; descriptionShort = "Type40"; ammo = "FA_93x64_Type40_T_Orange"; initSpeed = 882; tracersEvery = 4; };
    class FA_10Rnd_93x64_Type40_T_IR     : 10Rnd_93x64_Mag { author = QAUTHOR; displayName = "[Ghost] 10Rnd Type40 IR Tracer";     descriptionShort = "Type40";     ammo = "FA_93x64_Type40_T_IR";     initSpeed = 882; tracersEvery = 4; };

    // =========================================================
    // .408 Mk240 LRP — 10Rnd_338_Mag body (MAR-10 housing, .408 chambering)
    // =========================================================
    class FA_10Rnd_408_Mk240: 10Rnd_338_Mag {
        author = QAUTHOR;
        displayName = "[Ghost] 10Rnd Mk240";
        descriptionShort = "Mk240";
        ammo = "FA_408_Mk240";
        count = 7;
        initSpeed = 965;
        mass = 10;
    };
    class FA_10Rnd_408_Mk240_T_Red    : 10Rnd_338_Mag { author = QAUTHOR; displayName = "[Ghost] 10Rnd Mk240 Red Tracer";    descriptionShort = "Mk240";    ammo = "FA_408_Mk240_T_Red";    count = 7; initSpeed = 965; tracersEvery = 4; };
    class FA_10Rnd_408_Mk240_T_Yellow : 10Rnd_338_Mag { author = QAUTHOR; displayName = "[Ghost] 10Rnd Mk240 Yellow Tracer"; descriptionShort = "Mk240"; ammo = "FA_408_Mk240_T_Yellow"; count = 7; initSpeed = 965; tracersEvery = 4; };
    class FA_10Rnd_408_Mk240_T_Green  : 10Rnd_338_Mag { author = QAUTHOR; displayName = "[Ghost] 10Rnd Mk240 Green Tracer";  descriptionShort = "Mk240";  ammo = "FA_408_Mk240_T_Green";  count = 7; initSpeed = 965; tracersEvery = 4; };
    class FA_10Rnd_408_Mk240_T_White  : 10Rnd_338_Mag { author = QAUTHOR; displayName = "[Ghost] 10Rnd Mk240 White Tracer";  descriptionShort = "Mk240";  ammo = "FA_408_Mk240_T_White";  count = 7; initSpeed = 965; tracersEvery = 4; };
    class FA_10Rnd_408_Mk240_T_Blue   : 10Rnd_338_Mag { author = QAUTHOR; displayName = "[Ghost] 10Rnd Mk240 Blue Tracer";   descriptionShort = "Mk240";   ammo = "FA_408_Mk240_T_Blue";   count = 7; initSpeed = 965; tracersEvery = 4; };
    class FA_10Rnd_408_Mk240_T_Orange : 10Rnd_338_Mag { author = QAUTHOR; displayName = "[Ghost] 10Rnd Mk240 Orange Tracer"; descriptionShort = "Mk240"; ammo = "FA_408_Mk240_T_Orange"; count = 7; initSpeed = 965; tracersEvery = 4; };
    class FA_10Rnd_408_Mk240_T_IR     : 10Rnd_338_Mag { author = QAUTHOR; displayName = "[Ghost] 10Rnd Mk240 IR Tracer";     descriptionShort = "Mk240";     ammo = "FA_408_Mk240_T_IR";     count = 7; initSpeed = 965; tracersEvery = 4; };

    // =========================================================
    // 12.7x108 Mk250 LRP — 5Rnd_127x108_Mag (GM6 Lynx)
    // =========================================================
    class FA_5Rnd_127x108_Mk250: 5Rnd_127x108_Mag {
        author = QAUTHOR;
        displayName = "[Ghost] 5Rnd Mk250";
        descriptionShort = "Mk250";
        ammo = "FA_127x108_Mk250";
        initSpeed = 870;
        mass = 15;
    };
    class FA_5Rnd_127x108_Mk250_T_Red    : 5Rnd_127x108_Mag { author = QAUTHOR; displayName = "[Ghost] 5Rnd Mk250 Red Tracer";    descriptionShort = "Mk250";    ammo = "FA_127x108_Mk250_T_Red";    initSpeed = 870; tracersEvery = 4; };
    class FA_5Rnd_127x108_Mk250_T_Yellow : 5Rnd_127x108_Mag { author = QAUTHOR; displayName = "[Ghost] 5Rnd Mk250 Yellow Tracer"; descriptionShort = "Mk250"; ammo = "FA_127x108_Mk250_T_Yellow"; initSpeed = 870; tracersEvery = 4; };
    class FA_5Rnd_127x108_Mk250_T_Green  : 5Rnd_127x108_Mag { author = QAUTHOR; displayName = "[Ghost] 5Rnd Mk250 Green Tracer";  descriptionShort = "Mk250";  ammo = "FA_127x108_Mk250_T_Green";  initSpeed = 870; tracersEvery = 4; };
    class FA_5Rnd_127x108_Mk250_T_White  : 5Rnd_127x108_Mag { author = QAUTHOR; displayName = "[Ghost] 5Rnd Mk250 White Tracer";  descriptionShort = "Mk250";  ammo = "FA_127x108_Mk250_T_White";  initSpeed = 870; tracersEvery = 4; };
    class FA_5Rnd_127x108_Mk250_T_Blue   : 5Rnd_127x108_Mag { author = QAUTHOR; displayName = "[Ghost] 5Rnd Mk250 Blue Tracer";   descriptionShort = "Mk250";   ammo = "FA_127x108_Mk250_T_Blue";   initSpeed = 870; tracersEvery = 4; };
    class FA_5Rnd_127x108_Mk250_T_Orange : 5Rnd_127x108_Mag { author = QAUTHOR; displayName = "[Ghost] 5Rnd Mk250 Orange Tracer"; descriptionShort = "Mk250"; ammo = "FA_127x108_Mk250_T_Orange"; initSpeed = 870; tracersEvery = 4; };
    class FA_5Rnd_127x108_Mk250_T_IR     : 5Rnd_127x108_Mag { author = QAUTHOR; displayName = "[Ghost] 5Rnd Mk250 IR Tracer";     descriptionShort = "Mk250";     ammo = "FA_127x108_Mk250_T_IR";     initSpeed = 870; tracersEvery = 4; };

    // =========================================================
    // 12.7x108 Mk211 Mod 2 (HEIAP) — 5Rnd_127x108_Mag (GM6 Lynx)
    // =========================================================
    class FA_5Rnd_127x108_Mk211Mod2: 5Rnd_127x108_Mag {
        author = QAUTHOR;
        displayName = "[Ghost] 5Rnd Mk211Mod2";
        descriptionShort = "Mk211Mod2";
        ammo = "FA_127x108_Mk211Mod2";
        initSpeed = 900;
        mass = 15;
    };
    class FA_5Rnd_127x108_Mk211Mod2_T_Red    : 5Rnd_127x108_Mag { author = QAUTHOR; displayName = "[Ghost] 5Rnd Mk211Mod2 Red Tracer";    descriptionShort = "Mk211Mod2";    ammo = "FA_127x108_Mk211Mod2_T_Red";    initSpeed = 900; tracersEvery = 4; };
    class FA_5Rnd_127x108_Mk211Mod2_T_Yellow : 5Rnd_127x108_Mag { author = QAUTHOR; displayName = "[Ghost] 5Rnd Mk211Mod2 Yellow Tracer"; descriptionShort = "Mk211Mod2"; ammo = "FA_127x108_Mk211Mod2_T_Yellow"; initSpeed = 900; tracersEvery = 4; };
    class FA_5Rnd_127x108_Mk211Mod2_T_Green  : 5Rnd_127x108_Mag { author = QAUTHOR; displayName = "[Ghost] 5Rnd Mk211Mod2 Green Tracer";  descriptionShort = "Mk211Mod2";  ammo = "FA_127x108_Mk211Mod2_T_Green";  initSpeed = 900; tracersEvery = 4; };
    class FA_5Rnd_127x108_Mk211Mod2_T_White  : 5Rnd_127x108_Mag { author = QAUTHOR; displayName = "[Ghost] 5Rnd Mk211Mod2 White Tracer";  descriptionShort = "Mk211Mod2";  ammo = "FA_127x108_Mk211Mod2_T_White";  initSpeed = 900; tracersEvery = 4; };
    class FA_5Rnd_127x108_Mk211Mod2_T_Blue   : 5Rnd_127x108_Mag { author = QAUTHOR; displayName = "[Ghost] 5Rnd Mk211Mod2 Blue Tracer";   descriptionShort = "Mk211Mod2";   ammo = "FA_127x108_Mk211Mod2_T_Blue";   initSpeed = 900; tracersEvery = 4; };
    class FA_5Rnd_127x108_Mk211Mod2_T_Orange : 5Rnd_127x108_Mag { author = QAUTHOR; displayName = "[Ghost] 5Rnd Mk211Mod2 Orange Tracer"; descriptionShort = "Mk211Mod2"; ammo = "FA_127x108_Mk211Mod2_T_Orange"; initSpeed = 900; tracersEvery = 4; };
    class FA_5Rnd_127x108_Mk211Mod2_T_IR     : 5Rnd_127x108_Mag { author = QAUTHOR; displayName = "[Ghost] 5Rnd Mk211Mod2 IR Tracer";     descriptionShort = "Mk211Mod2";     ammo = "FA_127x108_Mk211Mod2_T_IR";     initSpeed = 900; tracersEvery = 4; };

    // =========================================================
    // 12.7x99 (.50 BMG) — Mk258 LRP — 200Rnd belt (Rhino commander HMG et al.)
    // FA's other .50 x99 mags are 5Rnd sniper mags (aegis WF50), not belts.
    // =========================================================
    class FA_200Rnd_127x99_Mk258: 200Rnd_127x99_mag_Tracer_Red {
        author = QAUTHOR;
        displayName = "[Ghost] 200Rnd Mk258 LRP";
        descriptionShort = "Mk258 LRP";
        ammo = "FA_127x99_Mk258_LRP";
        initSpeed = 860;
        tracersEvery = 0;
    };
    class FA_200Rnd_127x99_Mk258_T_Red: FA_200Rnd_127x99_Mk258 { ammo = "FA_127x99_Mk258_LRP_T_Red"; displayName = "[Ghost] 200Rnd Mk258 LRP Red Tracer"; descriptionShort = "Mk258 LRP"; tracersEvery = 4; };
    class FA_200Rnd_127x99_Mk258_T_Yellow: FA_200Rnd_127x99_Mk258 { ammo = "FA_127x99_Mk258_LRP_T_Yellow"; displayName = "[Ghost] 200Rnd Mk258 LRP Yellow Tracer"; descriptionShort = "Mk258 LRP"; tracersEvery = 4; };
    class FA_200Rnd_127x99_Mk258_T_Green: FA_200Rnd_127x99_Mk258 { ammo = "FA_127x99_Mk258_LRP_T_Green"; displayName = "[Ghost] 200Rnd Mk258 LRP Green Tracer"; descriptionShort = "Mk258 LRP"; tracersEvery = 4; };
    class FA_200Rnd_127x99_Mk258_T_White: FA_200Rnd_127x99_Mk258 { ammo = "FA_127x99_Mk258_LRP_T_White"; displayName = "[Ghost] 200Rnd Mk258 LRP White Tracer"; descriptionShort = "Mk258 LRP"; tracersEvery = 4; };
    class FA_200Rnd_127x99_Mk258_T_Blue: FA_200Rnd_127x99_Mk258 { ammo = "FA_127x99_Mk258_LRP_T_Blue"; displayName = "[Ghost] 200Rnd Mk258 LRP Blue Tracer"; descriptionShort = "Mk258 LRP"; tracersEvery = 4; };
    class FA_200Rnd_127x99_Mk258_T_Orange: FA_200Rnd_127x99_Mk258 { ammo = "FA_127x99_Mk258_LRP_T_Orange"; displayName = "[Ghost] 200Rnd Mk258 LRP Orange Tracer"; descriptionShort = "Mk258 LRP"; tracersEvery = 4; };
    class FA_200Rnd_127x99_Mk258_T_IR: FA_200Rnd_127x99_Mk258 { ammo = "FA_127x99_Mk258_LRP_T_IR"; displayName = "[Ghost] 200Rnd Mk258 LRP IR Tracer"; descriptionShort = "Mk258 LRP"; tracersEvery = 4; };

    // =========================================================
    // 12.7x99 (.50 BMG) — Mk211 Mod 0 HEIAP — 200Rnd belt (Rhino commander HMG et al.)
    // =========================================================
    class FA_200Rnd_127x99_Mk211Mod0: 200Rnd_127x99_mag_Tracer_Red {
        author = QAUTHOR;
        displayName = "[Ghost] 200Rnd Mk211Mod0 AP";
        descriptionShort = "Mk211Mod0 AP";
        ammo = "FA_127x99_Mk211Mod0_AP";
        initSpeed = 890;
        tracersEvery = 0;
    };
    class FA_200Rnd_127x99_Mk211Mod0_T_Red: FA_200Rnd_127x99_Mk211Mod0 { ammo = "FA_127x99_Mk211Mod0_AP_T_Red"; displayName = "[Ghost] 200Rnd Mk211Mod0 AP Red Tracer"; descriptionShort = "Mk211Mod0 AP"; tracersEvery = 4; };
    class FA_200Rnd_127x99_Mk211Mod0_T_Yellow: FA_200Rnd_127x99_Mk211Mod0 { ammo = "FA_127x99_Mk211Mod0_AP_T_Yellow"; displayName = "[Ghost] 200Rnd Mk211Mod0 AP Yellow Tracer"; descriptionShort = "Mk211Mod0 AP"; tracersEvery = 4; };
    class FA_200Rnd_127x99_Mk211Mod0_T_Green: FA_200Rnd_127x99_Mk211Mod0 { ammo = "FA_127x99_Mk211Mod0_AP_T_Green"; displayName = "[Ghost] 200Rnd Mk211Mod0 AP Green Tracer"; descriptionShort = "Mk211Mod0 AP"; tracersEvery = 4; };
    class FA_200Rnd_127x99_Mk211Mod0_T_White: FA_200Rnd_127x99_Mk211Mod0 { ammo = "FA_127x99_Mk211Mod0_AP_T_White"; displayName = "[Ghost] 200Rnd Mk211Mod0 AP White Tracer"; descriptionShort = "Mk211Mod0 AP"; tracersEvery = 4; };
    class FA_200Rnd_127x99_Mk211Mod0_T_Blue: FA_200Rnd_127x99_Mk211Mod0 { ammo = "FA_127x99_Mk211Mod0_AP_T_Blue"; displayName = "[Ghost] 200Rnd Mk211Mod0 AP Blue Tracer"; descriptionShort = "Mk211Mod0 AP"; tracersEvery = 4; };
    class FA_200Rnd_127x99_Mk211Mod0_T_Orange: FA_200Rnd_127x99_Mk211Mod0 { ammo = "FA_127x99_Mk211Mod0_AP_T_Orange"; displayName = "[Ghost] 200Rnd Mk211Mod0 AP Orange Tracer"; descriptionShort = "Mk211Mod0 AP"; tracersEvery = 4; };
    class FA_200Rnd_127x99_Mk211Mod0_T_IR: FA_200Rnd_127x99_Mk211Mod0 { ammo = "FA_127x99_Mk211Mod0_AP_T_IR"; displayName = "[Ghost] 200Rnd Mk211Mod0 AP IR Tracer"; descriptionShort = "Mk211Mod0 AP"; tracersEvery = 4; };

    // =========================================================
    // 5.56x45 — 200Rnd_556x45_Box_F (vanilla MINIMI belt box)
    // =========================================================
    class FA_200Rnd_556x45_Box_F: 200Rnd_556x45_Box_F { author = QAUTHOR; displayName = "[Ghost] 200Rnd Mk327 HV"; descriptionShort = "Mk327 HV"; ammo = "FA_556_Mk327_HV"; initSpeed = 1000; };
    class FA_200Rnd_556x45_Box_F_T_Red : 200Rnd_556x45_Box_F { author = QAUTHOR; displayName = "[Ghost] 200Rnd Mk327 HV Red Tracer"; descriptionShort = "Mk327 HV"; ammo = "FA_556_Mk327_HV_T_Red"; initSpeed = 1000; tracersEvery = 4; };
    class FA_200Rnd_556x45_Box_F_T_Yellow : 200Rnd_556x45_Box_F { author = QAUTHOR; displayName = "[Ghost] 200Rnd Mk327 HV Yellow Tracer"; descriptionShort = "Mk327 HV"; ammo = "FA_556_Mk327_HV_T_Yellow"; initSpeed = 1000; tracersEvery = 4; };
    class FA_200Rnd_556x45_Box_F_T_Green : 200Rnd_556x45_Box_F { author = QAUTHOR; displayName = "[Ghost] 200Rnd Mk327 HV Green Tracer"; descriptionShort = "Mk327 HV"; ammo = "FA_556_Mk327_HV_T_Green"; initSpeed = 1000; tracersEvery = 4; };
    class FA_200Rnd_556x45_Box_F_T_White : 200Rnd_556x45_Box_F { author = QAUTHOR; displayName = "[Ghost] 200Rnd Mk327 HV White Tracer"; descriptionShort = "Mk327 HV"; ammo = "FA_556_Mk327_HV_T_White"; initSpeed = 1000; tracersEvery = 4; };
    class FA_200Rnd_556x45_Box_F_T_Blue : 200Rnd_556x45_Box_F { author = QAUTHOR; displayName = "[Ghost] 200Rnd Mk327 HV Blue Tracer"; descriptionShort = "Mk327 HV"; ammo = "FA_556_Mk327_HV_T_Blue"; initSpeed = 1000; tracersEvery = 4; };
    class FA_200Rnd_556x45_Box_F_T_Orange : 200Rnd_556x45_Box_F { author = QAUTHOR; displayName = "[Ghost] 200Rnd Mk327 HV Orange Tracer"; descriptionShort = "Mk327 HV"; ammo = "FA_556_Mk327_HV_T_Orange"; initSpeed = 1000; tracersEvery = 4; };
    class FA_200Rnd_556x45_Box_F_T_IR : 200Rnd_556x45_Box_F { author = QAUTHOR; displayName = "[Ghost] 200Rnd Mk327 HV IR Tracer"; descriptionShort = "Mk327 HV"; ammo = "FA_556_Mk327_HV_T_IR"; initSpeed = 1000; tracersEvery = 4; };
    // =========================================================
    // 12 Gauge — 2Rnd break-action (Hunter / CBA_12g_2rnds)
    // =========================================================
    class FA_2Rnd_12g_No0_Buck: ACE_2Rnd_12Gauge_Pellets_No0_Buck { author = QAUTHOR; displayName = "[Ghost] 2Rnd 12g No.0 Buck"; descriptionShort = "12 Gauge No.0 Buck — 9 pellets 8.4mm"; };
    class FA_2Rnd_12g_No1_Buck: ACE_2Rnd_12Gauge_Pellets_No1_Buck { author = QAUTHOR; displayName = "[Ghost] 2Rnd 12g No.1 Buck"; descriptionShort = "12 Gauge No.1 Buck — 12 pellets 7.6mm"; };
    class FA_2Rnd_12g_No2_Buck: ACE_2Rnd_12Gauge_Pellets_No2_Buck { author = QAUTHOR; displayName = "[Ghost] 2Rnd 12g No.2 Buck"; descriptionShort = "12 Gauge No.2 Buck — 15 pellets 6.9mm"; };
    class FA_2Rnd_12g_No3_Buck: ACE_2Rnd_12Gauge_Pellets_No3_Buck { author = QAUTHOR; displayName = "[Ghost] 2Rnd 12g No.3 Buck"; descriptionShort = "12 Gauge No.3 Buck — 21 pellets 6.4mm"; };
    class FA_2Rnd_12g_No4_Buck: ACE_2Rnd_12Gauge_Pellets_No4_Buck { author = QAUTHOR; displayName = "[Ghost] 2Rnd 12g No.4 Buck"; descriptionShort = "12 Gauge No.4 Buck — 27 pellets 6.1mm"; };
    class FA_2Rnd_12g_No4_Bird: ACE_2Rnd_12Gauge_Pellets_No4_Bird { author = QAUTHOR; displayName = "[Ghost] 2Rnd 12g No.4 Bird"; descriptionShort = "12 Gauge No.4 Birdshot — fine pellets"; };

    // =========================================================
    // 12 Gauge — 6Rnd tube magazine (UBS / Saiga-type)
    // =========================================================
    class FA_6Rnd_12g_No0_Buck: ACE_6Rnd_12Gauge_Pellets_No0_Buck { author = QAUTHOR; displayName = "[Ghost] 6Rnd 12g No.0 Buck"; descriptionShort = "12 Gauge No.0 Buck — 9 pellets 8.4mm"; };
    class FA_6Rnd_12g_No1_Buck: ACE_6Rnd_12Gauge_Pellets_No1_Buck { author = QAUTHOR; displayName = "[Ghost] 6Rnd 12g No.1 Buck"; descriptionShort = "12 Gauge No.1 Buck — 12 pellets 7.6mm"; };
    class FA_6Rnd_12g_No2_Buck: ACE_6Rnd_12Gauge_Pellets_No2_Buck { author = QAUTHOR; displayName = "[Ghost] 6Rnd 12g No.2 Buck"; descriptionShort = "12 Gauge No.2 Buck — 15 pellets 6.9mm"; };
    class FA_6Rnd_12g_No3_Buck: ACE_6Rnd_12Gauge_Pellets_No3_Buck { author = QAUTHOR; displayName = "[Ghost] 6Rnd 12g No.3 Buck"; descriptionShort = "12 Gauge No.3 Buck — 21 pellets 6.4mm"; };
    class FA_6Rnd_12g_No4_Buck: ACE_6Rnd_12Gauge_Pellets_No4_Buck { author = QAUTHOR; displayName = "[Ghost] 6Rnd 12g No.4 Buck"; descriptionShort = "12 Gauge No.4 Buck — 27 pellets 6.1mm"; };
    class FA_6Rnd_12g_No4_Bird: ACE_6Rnd_12Gauge_Pellets_No4_Bird { author = QAUTHOR; displayName = "[Ghost] 6Rnd 12g No.4 Bird"; descriptionShort = "12 Gauge No.4 Birdshot — fine pellets"; };

    // =========================================================
    // 5.8x42 Ball HV — 30Rnd (Type 115 / CMR-76)
    // =========================================================
    class FA_30Rnd_580x42_Ball_HV: 30Rnd_580x42_Mag_F {
        author = QAUTHOR;
        displayName = "[Ghost] 30Rnd 5.8x42mm Ball HV";
        descriptionShort = "5.8x42mm Ball HV";
        ammo = "FA_580_Ball_HV";
        initSpeed = 940;
    };
    class FA_30Rnd_580x42_Ball_HV_T_Red    : 30Rnd_580x42_Mag_F { author = QAUTHOR; displayName = "[Ghost] 30Rnd 5.8x42mm Ball HV Red Tracer";    descriptionShort = "5.8x42mm Ball HV";    ammo = "FA_580_Ball_HV_T_Red";    initSpeed = 940; tracersEvery = 4; };
    class FA_30Rnd_580x42_Ball_HV_T_Yellow : 30Rnd_580x42_Mag_F { author = QAUTHOR; displayName = "[Ghost] 30Rnd 5.8x42mm Ball HV Yellow Tracer"; descriptionShort = "5.8x42mm Ball HV"; ammo = "FA_580_Ball_HV_T_Yellow"; initSpeed = 940; tracersEvery = 4; };
    class FA_30Rnd_580x42_Ball_HV_T_Green  : 30Rnd_580x42_Mag_F { author = QAUTHOR; displayName = "[Ghost] 30Rnd 5.8x42mm Ball HV Green Tracer";  descriptionShort = "5.8x42mm Ball HV";  ammo = "FA_580_Ball_HV_T_Green";  initSpeed = 940; tracersEvery = 4; };
    class FA_30Rnd_580x42_Ball_HV_T_White  : 30Rnd_580x42_Mag_F { author = QAUTHOR; displayName = "[Ghost] 30Rnd 5.8x42mm Ball HV White Tracer";  descriptionShort = "5.8x42mm Ball HV";  ammo = "FA_580_Ball_HV_T_White";  initSpeed = 940; tracersEvery = 4; };
    class FA_30Rnd_580x42_Ball_HV_T_Blue   : 30Rnd_580x42_Mag_F { author = QAUTHOR; displayName = "[Ghost] 30Rnd 5.8x42mm Ball HV Blue Tracer";   descriptionShort = "5.8x42mm Ball HV";   ammo = "FA_580_Ball_HV_T_Blue";   initSpeed = 940; tracersEvery = 4; };
    class FA_30Rnd_580x42_Ball_HV_T_Orange : 30Rnd_580x42_Mag_F { author = QAUTHOR; displayName = "[Ghost] 30Rnd 5.8x42mm Ball HV Orange Tracer"; descriptionShort = "5.8x42mm Ball HV"; ammo = "FA_580_Ball_HV_T_Orange"; initSpeed = 940; tracersEvery = 4; };
    class FA_30Rnd_580x42_Ball_HV_T_IR     : 30Rnd_580x42_Mag_F { author = QAUTHOR; displayName = "[Ghost] 30Rnd 5.8x42mm Ball HV IR Tracer";     descriptionShort = "5.8x42mm Ball HV";     ammo = "FA_580_Ball_HV_T_IR";     initSpeed = 940; tracersEvery = 4; };

    // =========================================================
    // .45 ACP Mk421 SUB-AP — 30Rnd SMG (Vermin)
    // =========================================================
    class FA_30Rnd_45ACP_Mk421: 30Rnd_45ACP_Mag_SMG_01 {
        author = QAUTHOR;
        displayName = "[Ghost] 30Rnd 45ACP Mk421 SubAP";
        descriptionShort = "45ACP Mk421 SubAP";
        ammo = "FA_45ACP_Mk421_SubAP";
        initSpeed = 290;
        mass = 6;
    };
    class FA_30Rnd_45ACP_Mk421_T_Red    : 30Rnd_45ACP_Mag_SMG_01 { author = QAUTHOR; displayName = "[Ghost] 30Rnd 45ACP Mk421 SubAP Red Tracer";    descriptionShort = "45ACP Mk421 SubAP";    ammo = "FA_45ACP_Mk421_SubAP_T_Red";    initSpeed = 290; tracersEvery = 4; };
    class FA_30Rnd_45ACP_Mk421_T_Yellow : 30Rnd_45ACP_Mag_SMG_01 { author = QAUTHOR; displayName = "[Ghost] 30Rnd 45ACP Mk421 SubAP Yellow Tracer"; descriptionShort = "45ACP Mk421 SubAP"; ammo = "FA_45ACP_Mk421_SubAP_T_Yellow"; initSpeed = 290; tracersEvery = 4; };
    class FA_30Rnd_45ACP_Mk421_T_Green  : 30Rnd_45ACP_Mag_SMG_01 { author = QAUTHOR; displayName = "[Ghost] 30Rnd 45ACP Mk421 SubAP Green Tracer";  descriptionShort = "45ACP Mk421 SubAP";  ammo = "FA_45ACP_Mk421_SubAP_T_Green";  initSpeed = 290; tracersEvery = 4; };
    class FA_30Rnd_45ACP_Mk421_T_White  : 30Rnd_45ACP_Mag_SMG_01 { author = QAUTHOR; displayName = "[Ghost] 30Rnd 45ACP Mk421 SubAP White Tracer";  descriptionShort = "45ACP Mk421 SubAP";  ammo = "FA_45ACP_Mk421_SubAP_T_White";  initSpeed = 290; tracersEvery = 4; };
    class FA_30Rnd_45ACP_Mk421_T_Blue   : 30Rnd_45ACP_Mag_SMG_01 { author = QAUTHOR; displayName = "[Ghost] 30Rnd 45ACP Mk421 SubAP Blue Tracer";   descriptionShort = "45ACP Mk421 SubAP";   ammo = "FA_45ACP_Mk421_SubAP_T_Blue";   initSpeed = 290; tracersEvery = 4; };
    class FA_30Rnd_45ACP_Mk421_T_Orange : 30Rnd_45ACP_Mag_SMG_01 { author = QAUTHOR; displayName = "[Ghost] 30Rnd 45ACP Mk421 SubAP Orange Tracer"; descriptionShort = "45ACP Mk421 SubAP"; ammo = "FA_45ACP_Mk421_SubAP_T_Orange"; initSpeed = 290; tracersEvery = 4; };
    class FA_30Rnd_45ACP_Mk421_T_IR     : 30Rnd_45ACP_Mag_SMG_01 { author = QAUTHOR; displayName = "[Ghost] 30Rnd 45ACP Mk421 SubAP IR Tracer";     descriptionShort = "45ACP Mk421 SubAP";     ammo = "FA_45ACP_Mk421_SubAP_T_IR";     initSpeed = 290; tracersEvery = 4; };

    // =========================================================
    // .45 ACP Mk421 SUB-AP — 11Rnd pistol (4-five)
    // =========================================================
    class FA_11Rnd_45ACP_Mk421: 11Rnd_45ACP_Mag {
        author = QAUTHOR;
        displayName = "[Ghost] 11Rnd 45ACP Mk421 SubAP";
        descriptionShort = "45ACP Mk421 SubAP";
        ammo = "FA_45ACP_Mk421_SubAP";
        initSpeed = 280;
        mass = 3;
    };
    class FA_11Rnd_45ACP_Mk421_T_Red    : 11Rnd_45ACP_Mag { author = QAUTHOR; displayName = "[Ghost] 11Rnd 45ACP Mk421 SubAP Red Tracer";    descriptionShort = "45ACP Mk421 SubAP";    ammo = "FA_45ACP_Mk421_SubAP_T_Red";    initSpeed = 280; tracersEvery = 4; };
    class FA_11Rnd_45ACP_Mk421_T_Yellow : 11Rnd_45ACP_Mag { author = QAUTHOR; displayName = "[Ghost] 11Rnd 45ACP Mk421 SubAP Yellow Tracer"; descriptionShort = "45ACP Mk421 SubAP"; ammo = "FA_45ACP_Mk421_SubAP_T_Yellow"; initSpeed = 280; tracersEvery = 4; };
    class FA_11Rnd_45ACP_Mk421_T_Green  : 11Rnd_45ACP_Mag { author = QAUTHOR; displayName = "[Ghost] 11Rnd 45ACP Mk421 SubAP Green Tracer";  descriptionShort = "45ACP Mk421 SubAP";  ammo = "FA_45ACP_Mk421_SubAP_T_Green";  initSpeed = 280; tracersEvery = 4; };
    class FA_11Rnd_45ACP_Mk421_T_White  : 11Rnd_45ACP_Mag { author = QAUTHOR; displayName = "[Ghost] 11Rnd 45ACP Mk421 SubAP White Tracer";  descriptionShort = "45ACP Mk421 SubAP";  ammo = "FA_45ACP_Mk421_SubAP_T_White";  initSpeed = 280; tracersEvery = 4; };
    class FA_11Rnd_45ACP_Mk421_T_Blue   : 11Rnd_45ACP_Mag { author = QAUTHOR; displayName = "[Ghost] 11Rnd 45ACP Mk421 SubAP Blue Tracer";   descriptionShort = "45ACP Mk421 SubAP";   ammo = "FA_45ACP_Mk421_SubAP_T_Blue";   initSpeed = 280; tracersEvery = 4; };
    class FA_11Rnd_45ACP_Mk421_T_Orange : 11Rnd_45ACP_Mag { author = QAUTHOR; displayName = "[Ghost] 11Rnd 45ACP Mk421 SubAP Orange Tracer"; descriptionShort = "45ACP Mk421 SubAP"; ammo = "FA_45ACP_Mk421_SubAP_T_Orange"; initSpeed = 280; tracersEvery = 4; };
    class FA_11Rnd_45ACP_Mk421_T_IR     : 11Rnd_45ACP_Mag { author = QAUTHOR; displayName = "[Ghost] 11Rnd 45ACP Mk421 SubAP IR Tracer";     descriptionShort = "45ACP Mk421 SubAP";     ammo = "FA_45ACP_Mk421_SubAP_T_IR";     initSpeed = 280; tracersEvery = 4; };

    // =========================================================
    // Mk389 TBK — 40mm Tungsten Buckshot (UGL / MGL)
    // High initSpeed for a flat, fast pattern effective to ~100 m.
    // =========================================================
    class FA_1Rnd_40mm_Mk389_TBK: 1Rnd_HE_Grenade_shell {
        author = QAUTHOR;
        displayName = "[Ghost] 1Rnd Mk389 Tungsten Buckshot";
        descriptionShort = "Mk389 Tungsten Buckshot";
        ammo = "FA_40mm_Mk389_TBK";
        initSpeed = 180;
    };
    class FA_3Rnd_40mm_Mk389_TBK: 3Rnd_HE_Grenade_shell {
        author = QAUTHOR;
        displayName = "[Ghost] 3Rnd Mk389 Tungsten Buckshot";
        descriptionShort = "Mk389 Tungsten Buckshot";
        ammo = "FA_40mm_Mk389_TBK";
        initSpeed = 180;
    };
    #include "CfgMag65_matrix.hpp"
    class FA_30Rnd_556_Mk332_AP: 30Rnd_556x45_Stanag { author = QAUTHOR; displayName = "[Ghost] 30Rnd Mk332 AP"; descriptionShort = "Mk332 AP"; ammo = "FA_556_Mk332_AP"; initSpeed = 940; };
    class FA_30Rnd_556_Mk332_AP_T_Red: FA_30Rnd_556_Mk332_AP { ammo = "FA_556_Mk332_AP_T_Red"; displayName = "[Ghost] 30Rnd Mk332 AP Red Tracer"; descriptionShort = "Mk332 AP"; tracersEvery = 4; };
    class FA_30Rnd_556_Mk332_AP_T_Yellow: FA_30Rnd_556_Mk332_AP { ammo = "FA_556_Mk332_AP_T_Yellow"; displayName = "[Ghost] 30Rnd Mk332 AP Yellow Tracer"; descriptionShort = "Mk332 AP"; tracersEvery = 4; };
    class FA_30Rnd_556_Mk332_AP_T_Green: FA_30Rnd_556_Mk332_AP { ammo = "FA_556_Mk332_AP_T_Green"; displayName = "[Ghost] 30Rnd Mk332 AP Green Tracer"; descriptionShort = "Mk332 AP"; tracersEvery = 4; };
    class FA_30Rnd_556_Mk332_AP_T_White: FA_30Rnd_556_Mk332_AP { ammo = "FA_556_Mk332_AP_T_White"; displayName = "[Ghost] 30Rnd Mk332 AP White Tracer"; descriptionShort = "Mk332 AP"; tracersEvery = 4; };
    class FA_30Rnd_556_Mk332_AP_T_Blue: FA_30Rnd_556_Mk332_AP { ammo = "FA_556_Mk332_AP_T_Blue"; displayName = "[Ghost] 30Rnd Mk332 AP Blue Tracer"; descriptionShort = "Mk332 AP"; tracersEvery = 4; };
    class FA_30Rnd_556_Mk332_AP_T_Orange: FA_30Rnd_556_Mk332_AP { ammo = "FA_556_Mk332_AP_T_Orange"; displayName = "[Ghost] 30Rnd Mk332 AP Orange Tracer"; descriptionShort = "Mk332 AP"; tracersEvery = 4; };
    class FA_30Rnd_556_Mk332_AP_T_IR: FA_30Rnd_556_Mk332_AP { ammo = "FA_556_Mk332_AP_T_IR"; displayName = "[Ghost] 30Rnd Mk332 AP IR Tracer"; descriptionShort = "Mk332 AP"; tracersEvery = 4; };
    class FA_200Rnd_556x45_Box_F_XM891_CTEP: 200Rnd_556x45_Box_F { author = QAUTHOR; displayName = "[Ghost] 200Rnd XM891 CTEP"; descriptionShort = "XM891 CTEP"; ammo = "FA_556_XM891_CTEP"; initSpeed = 980; };
    class FA_200Rnd_556x45_Box_F_XM891_CTEP_T_Red: FA_200Rnd_556x45_Box_F_XM891_CTEP { ammo = "FA_556_XM891_CTEP_T_Red"; displayName = "[Ghost] 200Rnd XM891 CTEP Red Tracer"; descriptionShort = "XM891 CTEP"; tracersEvery = 4; };
    class FA_200Rnd_556x45_Box_F_XM891_CTEP_T_Yellow: FA_200Rnd_556x45_Box_F_XM891_CTEP { ammo = "FA_556_XM891_CTEP_T_Yellow"; displayName = "[Ghost] 200Rnd XM891 CTEP Yellow Tracer"; descriptionShort = "XM891 CTEP"; tracersEvery = 4; };
    class FA_200Rnd_556x45_Box_F_XM891_CTEP_T_Green: FA_200Rnd_556x45_Box_F_XM891_CTEP { ammo = "FA_556_XM891_CTEP_T_Green"; displayName = "[Ghost] 200Rnd XM891 CTEP Green Tracer"; descriptionShort = "XM891 CTEP"; tracersEvery = 4; };
    class FA_200Rnd_556x45_Box_F_XM891_CTEP_T_White: FA_200Rnd_556x45_Box_F_XM891_CTEP { ammo = "FA_556_XM891_CTEP_T_White"; displayName = "[Ghost] 200Rnd XM891 CTEP White Tracer"; descriptionShort = "XM891 CTEP"; tracersEvery = 4; };
    class FA_200Rnd_556x45_Box_F_XM891_CTEP_T_Blue: FA_200Rnd_556x45_Box_F_XM891_CTEP { ammo = "FA_556_XM891_CTEP_T_Blue"; displayName = "[Ghost] 200Rnd XM891 CTEP Blue Tracer"; descriptionShort = "XM891 CTEP"; tracersEvery = 4; };
    class FA_200Rnd_556x45_Box_F_XM891_CTEP_T_Orange: FA_200Rnd_556x45_Box_F_XM891_CTEP { ammo = "FA_556_XM891_CTEP_T_Orange"; displayName = "[Ghost] 200Rnd XM891 CTEP Orange Tracer"; descriptionShort = "XM891 CTEP"; tracersEvery = 4; };
    class FA_200Rnd_556x45_Box_F_XM891_CTEP_T_IR: FA_200Rnd_556x45_Box_F_XM891_CTEP { ammo = "FA_556_XM891_CTEP_T_IR"; displayName = "[Ghost] 200Rnd XM891 CTEP IR Tracer"; descriptionShort = "XM891 CTEP"; tracersEvery = 4; };
    class FA_200Rnd_556x45_Box_F_Mk332_AP: 200Rnd_556x45_Box_F { author = QAUTHOR; displayName = "[Ghost] 200Rnd Mk332 AP"; descriptionShort = "Mk332 AP"; ammo = "FA_556_Mk332_AP"; initSpeed = 940; };
    class FA_200Rnd_556x45_Box_F_Mk332_AP_T_Red: FA_200Rnd_556x45_Box_F_Mk332_AP { ammo = "FA_556_Mk332_AP_T_Red"; displayName = "[Ghost] 200Rnd Mk332 AP Red Tracer"; descriptionShort = "Mk332 AP"; tracersEvery = 4; };
    class FA_200Rnd_556x45_Box_F_Mk332_AP_T_Yellow: FA_200Rnd_556x45_Box_F_Mk332_AP { ammo = "FA_556_Mk332_AP_T_Yellow"; displayName = "[Ghost] 200Rnd Mk332 AP Yellow Tracer"; descriptionShort = "Mk332 AP"; tracersEvery = 4; };
    class FA_200Rnd_556x45_Box_F_Mk332_AP_T_Green: FA_200Rnd_556x45_Box_F_Mk332_AP { ammo = "FA_556_Mk332_AP_T_Green"; displayName = "[Ghost] 200Rnd Mk332 AP Green Tracer"; descriptionShort = "Mk332 AP"; tracersEvery = 4; };
    class FA_200Rnd_556x45_Box_F_Mk332_AP_T_White: FA_200Rnd_556x45_Box_F_Mk332_AP { ammo = "FA_556_Mk332_AP_T_White"; displayName = "[Ghost] 200Rnd Mk332 AP White Tracer"; descriptionShort = "Mk332 AP"; tracersEvery = 4; };
    class FA_200Rnd_556x45_Box_F_Mk332_AP_T_Blue: FA_200Rnd_556x45_Box_F_Mk332_AP { ammo = "FA_556_Mk332_AP_T_Blue"; displayName = "[Ghost] 200Rnd Mk332 AP Blue Tracer"; descriptionShort = "Mk332 AP"; tracersEvery = 4; };
    class FA_200Rnd_556x45_Box_F_Mk332_AP_T_Orange: FA_200Rnd_556x45_Box_F_Mk332_AP { ammo = "FA_556_Mk332_AP_T_Orange"; displayName = "[Ghost] 200Rnd Mk332 AP Orange Tracer"; descriptionShort = "Mk332 AP"; tracersEvery = 4; };
    class FA_200Rnd_556x45_Box_F_Mk332_AP_T_IR: FA_200Rnd_556x45_Box_F_Mk332_AP { ammo = "FA_556_Mk332_AP_T_IR"; displayName = "[Ghost] 200Rnd Mk332 AP IR Tracer"; descriptionShort = "Mk332 AP"; tracersEvery = 4; };
    class FA_ACE_20Rnd_762x51_M993_AP_XM751_CTEP: ACE_20Rnd_762x51_M993_AP_Mag { author = QAUTHOR; displayName = "[Ghost] 20Rnd XM751 CTEP"; descriptionShort = "XM751 CTEP"; ammo = "FA_762_XM751_CTEP"; initSpeed = 850; };
    class FA_ACE_20Rnd_762x51_M993_AP_XM751_CTEP_T_Red: FA_ACE_20Rnd_762x51_M993_AP_XM751_CTEP { ammo = "FA_762_XM751_CTEP_T_Red"; displayName = "[Ghost] 20Rnd XM751 CTEP Red Tracer"; descriptionShort = "XM751 CTEP"; tracersEvery = 4; };
    class FA_ACE_20Rnd_762x51_M993_AP_XM751_CTEP_T_Yellow: FA_ACE_20Rnd_762x51_M993_AP_XM751_CTEP { ammo = "FA_762_XM751_CTEP_T_Yellow"; displayName = "[Ghost] 20Rnd XM751 CTEP Yellow Tracer"; descriptionShort = "XM751 CTEP"; tracersEvery = 4; };
    class FA_ACE_20Rnd_762x51_M993_AP_XM751_CTEP_T_Green: FA_ACE_20Rnd_762x51_M993_AP_XM751_CTEP { ammo = "FA_762_XM751_CTEP_T_Green"; displayName = "[Ghost] 20Rnd XM751 CTEP Green Tracer"; descriptionShort = "XM751 CTEP"; tracersEvery = 4; };
    class FA_ACE_20Rnd_762x51_M993_AP_XM751_CTEP_T_White: FA_ACE_20Rnd_762x51_M993_AP_XM751_CTEP { ammo = "FA_762_XM751_CTEP_T_White"; displayName = "[Ghost] 20Rnd XM751 CTEP White Tracer"; descriptionShort = "XM751 CTEP"; tracersEvery = 4; };
    class FA_ACE_20Rnd_762x51_M993_AP_XM751_CTEP_T_Blue: FA_ACE_20Rnd_762x51_M993_AP_XM751_CTEP { ammo = "FA_762_XM751_CTEP_T_Blue"; displayName = "[Ghost] 20Rnd XM751 CTEP Blue Tracer"; descriptionShort = "XM751 CTEP"; tracersEvery = 4; };
    class FA_ACE_20Rnd_762x51_M993_AP_XM751_CTEP_T_Orange: FA_ACE_20Rnd_762x51_M993_AP_XM751_CTEP { ammo = "FA_762_XM751_CTEP_T_Orange"; displayName = "[Ghost] 20Rnd XM751 CTEP Orange Tracer"; descriptionShort = "XM751 CTEP"; tracersEvery = 4; };
    class FA_ACE_20Rnd_762x51_M993_AP_XM751_CTEP_T_IR: FA_ACE_20Rnd_762x51_M993_AP_XM751_CTEP { ammo = "FA_762_XM751_CTEP_T_IR"; displayName = "[Ghost] 20Rnd XM751 CTEP IR Tracer"; descriptionShort = "XM751 CTEP"; tracersEvery = 4; };
    class FA_ACE_10Rnd_762x51_SD_XM751_CTEP: ACE_10Rnd_762x51_Mag_SD { author = QAUTHOR; displayName = "[Ghost] 10Rnd XM751 CTEP"; descriptionShort = "XM751 CTEP"; ammo = "FA_762_XM751_CTEP"; initSpeed = 850; };
    class FA_ACE_10Rnd_762x51_SD_XM751_CTEP_T_Red: FA_ACE_10Rnd_762x51_SD_XM751_CTEP { ammo = "FA_762_XM751_CTEP_T_Red"; displayName = "[Ghost] 10Rnd XM751 CTEP Red Tracer"; descriptionShort = "XM751 CTEP"; tracersEvery = 4; };
    class FA_ACE_10Rnd_762x51_SD_XM751_CTEP_T_Yellow: FA_ACE_10Rnd_762x51_SD_XM751_CTEP { ammo = "FA_762_XM751_CTEP_T_Yellow"; displayName = "[Ghost] 10Rnd XM751 CTEP Yellow Tracer"; descriptionShort = "XM751 CTEP"; tracersEvery = 4; };
    class FA_ACE_10Rnd_762x51_SD_XM751_CTEP_T_Green: FA_ACE_10Rnd_762x51_SD_XM751_CTEP { ammo = "FA_762_XM751_CTEP_T_Green"; displayName = "[Ghost] 10Rnd XM751 CTEP Green Tracer"; descriptionShort = "XM751 CTEP"; tracersEvery = 4; };
    class FA_ACE_10Rnd_762x51_SD_XM751_CTEP_T_White: FA_ACE_10Rnd_762x51_SD_XM751_CTEP { ammo = "FA_762_XM751_CTEP_T_White"; displayName = "[Ghost] 10Rnd XM751 CTEP White Tracer"; descriptionShort = "XM751 CTEP"; tracersEvery = 4; };
    class FA_ACE_10Rnd_762x51_SD_XM751_CTEP_T_Blue: FA_ACE_10Rnd_762x51_SD_XM751_CTEP { ammo = "FA_762_XM751_CTEP_T_Blue"; displayName = "[Ghost] 10Rnd XM751 CTEP Blue Tracer"; descriptionShort = "XM751 CTEP"; tracersEvery = 4; };
    class FA_ACE_10Rnd_762x51_SD_XM751_CTEP_T_Orange: FA_ACE_10Rnd_762x51_SD_XM751_CTEP { ammo = "FA_762_XM751_CTEP_T_Orange"; displayName = "[Ghost] 10Rnd XM751 CTEP Orange Tracer"; descriptionShort = "XM751 CTEP"; tracersEvery = 4; };
    class FA_ACE_10Rnd_762x51_SD_XM751_CTEP_T_IR: FA_ACE_10Rnd_762x51_SD_XM751_CTEP { ammo = "FA_762_XM751_CTEP_T_IR"; displayName = "[Ghost] 10Rnd XM751 CTEP IR Tracer"; descriptionShort = "XM751 CTEP"; tracersEvery = 4; };
    class FA_30Rnd_762x39_7N47_CT_Green: 30Rnd_762x39_Mag_Green_F { author = QAUTHOR; displayName = "[Ghost] 30Rnd 7.62x39 7N47 Kremen-2 CT Green Mag"; descriptionShort = "7.62x39 7N47 Kremen-2 CT"; ammo = "FA_762x39_7N47_CT"; initSpeed = 800; };
    class FA_30Rnd_762x39_7N47_CT_Green_T_Red: FA_30Rnd_762x39_7N47_CT_Green { ammo = "FA_762x39_7N47_CT_T_Red"; displayName = "[Ghost] 30Rnd 7.62x39 7N47 Kremen-2 CT Green Mag Red Tracer"; descriptionShort = "7.62x39 7N47 Kremen-2 CT"; tracersEvery = 4; };
    class FA_30Rnd_762x39_7N47_CT_Green_T_Yellow: FA_30Rnd_762x39_7N47_CT_Green { ammo = "FA_762x39_7N47_CT_T_Yellow"; displayName = "[Ghost] 30Rnd 7.62x39 7N47 Kremen-2 CT Green Mag Yellow Tracer"; descriptionShort = "7.62x39 7N47 Kremen-2 CT"; tracersEvery = 4; };
    class FA_30Rnd_762x39_7N47_CT_Green_T_Green: FA_30Rnd_762x39_7N47_CT_Green { ammo = "FA_762x39_7N47_CT_T_Green"; displayName = "[Ghost] 30Rnd 7.62x39 7N47 Kremen-2 CT Green Mag Green Tracer"; descriptionShort = "7.62x39 7N47 Kremen-2 CT"; tracersEvery = 4; };
    class FA_30Rnd_762x39_7N47_CT_Green_T_White: FA_30Rnd_762x39_7N47_CT_Green { ammo = "FA_762x39_7N47_CT_T_White"; displayName = "[Ghost] 30Rnd 7.62x39 7N47 Kremen-2 CT Green Mag White Tracer"; descriptionShort = "7.62x39 7N47 Kremen-2 CT"; tracersEvery = 4; };
    class FA_30Rnd_762x39_7N47_CT_Green_T_Blue: FA_30Rnd_762x39_7N47_CT_Green { ammo = "FA_762x39_7N47_CT_T_Blue"; displayName = "[Ghost] 30Rnd 7.62x39 7N47 Kremen-2 CT Green Mag Blue Tracer"; descriptionShort = "7.62x39 7N47 Kremen-2 CT"; tracersEvery = 4; };
    class FA_30Rnd_762x39_7N47_CT_Green_T_Orange: FA_30Rnd_762x39_7N47_CT_Green { ammo = "FA_762x39_7N47_CT_T_Orange"; displayName = "[Ghost] 30Rnd 7.62x39 7N47 Kremen-2 CT Green Mag Orange Tracer"; descriptionShort = "7.62x39 7N47 Kremen-2 CT"; tracersEvery = 4; };
    class FA_30Rnd_762x39_7N47_CT_Green_T_IR: FA_30Rnd_762x39_7N47_CT_Green { ammo = "FA_762x39_7N47_CT_T_IR"; displayName = "[Ghost] 30Rnd 7.62x39 7N47 Kremen-2 CT Green Mag IR Tracer"; descriptionShort = "7.62x39 7N47 Kremen-2 CT"; tracersEvery = 4; };
    class FA_30Rnd_762x39_7U4_Sub_Green: 30Rnd_762x39_Mag_Green_F { author = QAUTHOR; displayName = "[Ghost] 30Rnd 7.62x39 7U4 Tishina-2 SubAP Green Mag"; descriptionShort = "7.62x39 7U4 Tishina-2 SubAP"; ammo = "FA_762x39_7U4_Sub"; initSpeed = 290; };
    class FA_30Rnd_762x39_7U4_Sub_Green_T_Red: FA_30Rnd_762x39_7U4_Sub_Green { ammo = "FA_762x39_7U4_Sub_T_Red"; displayName = "[Ghost] 30Rnd 7.62x39 7U4 Tishina-2 SubAP Green Mag Red Tracer"; descriptionShort = "7.62x39 7U4 Tishina-2 SubAP"; tracersEvery = 4; };
    class FA_30Rnd_762x39_7U4_Sub_Green_T_Yellow: FA_30Rnd_762x39_7U4_Sub_Green { ammo = "FA_762x39_7U4_Sub_T_Yellow"; displayName = "[Ghost] 30Rnd 7.62x39 7U4 Tishina-2 SubAP Green Mag Yellow Tracer"; descriptionShort = "7.62x39 7U4 Tishina-2 SubAP"; tracersEvery = 4; };
    class FA_30Rnd_762x39_7U4_Sub_Green_T_Green: FA_30Rnd_762x39_7U4_Sub_Green { ammo = "FA_762x39_7U4_Sub_T_Green"; displayName = "[Ghost] 30Rnd 7.62x39 7U4 Tishina-2 SubAP Green Mag Green Tracer"; descriptionShort = "7.62x39 7U4 Tishina-2 SubAP"; tracersEvery = 4; };
    class FA_30Rnd_762x39_7U4_Sub_Green_T_White: FA_30Rnd_762x39_7U4_Sub_Green { ammo = "FA_762x39_7U4_Sub_T_White"; displayName = "[Ghost] 30Rnd 7.62x39 7U4 Tishina-2 SubAP Green Mag White Tracer"; descriptionShort = "7.62x39 7U4 Tishina-2 SubAP"; tracersEvery = 4; };
    class FA_30Rnd_762x39_7U4_Sub_Green_T_Blue: FA_30Rnd_762x39_7U4_Sub_Green { ammo = "FA_762x39_7U4_Sub_T_Blue"; displayName = "[Ghost] 30Rnd 7.62x39 7U4 Tishina-2 SubAP Green Mag Blue Tracer"; descriptionShort = "7.62x39 7U4 Tishina-2 SubAP"; tracersEvery = 4; };
    class FA_30Rnd_762x39_7U4_Sub_Green_T_Orange: FA_30Rnd_762x39_7U4_Sub_Green { ammo = "FA_762x39_7U4_Sub_T_Orange"; displayName = "[Ghost] 30Rnd 7.62x39 7U4 Tishina-2 SubAP Green Mag Orange Tracer"; descriptionShort = "7.62x39 7U4 Tishina-2 SubAP"; tracersEvery = 4; };
    class FA_30Rnd_762x39_7U4_Sub_Green_T_IR: FA_30Rnd_762x39_7U4_Sub_Green { ammo = "FA_762x39_7U4_Sub_T_IR"; displayName = "[Ghost] 30Rnd 7.62x39 7U4 Tishina-2 SubAP Green Mag IR Tracer"; descriptionShort = "7.62x39 7U4 Tishina-2 SubAP"; tracersEvery = 4; };
    class FA_30Rnd_762x39_7N47_CT_Lush: 30Rnd_762x39_AK12_Lush_Mag_F { author = QAUTHOR; displayName = "[Ghost] 30Rnd 7.62x39 7N47 Kremen-2 CT Lush Mag"; descriptionShort = "7.62x39 7N47 Kremen-2 CT"; ammo = "FA_762x39_7N47_CT"; initSpeed = 800; };
    class FA_30Rnd_762x39_7N47_CT_Lush_T_Red: FA_30Rnd_762x39_7N47_CT_Lush { ammo = "FA_762x39_7N47_CT_T_Red"; displayName = "[Ghost] 30Rnd 7.62x39 7N47 Kremen-2 CT Lush Mag Red Tracer"; descriptionShort = "7.62x39 7N47 Kremen-2 CT"; tracersEvery = 4; };
    class FA_30Rnd_762x39_7N47_CT_Lush_T_Yellow: FA_30Rnd_762x39_7N47_CT_Lush { ammo = "FA_762x39_7N47_CT_T_Yellow"; displayName = "[Ghost] 30Rnd 7.62x39 7N47 Kremen-2 CT Lush Mag Yellow Tracer"; descriptionShort = "7.62x39 7N47 Kremen-2 CT"; tracersEvery = 4; };
    class FA_30Rnd_762x39_7N47_CT_Lush_T_Green: FA_30Rnd_762x39_7N47_CT_Lush { ammo = "FA_762x39_7N47_CT_T_Green"; displayName = "[Ghost] 30Rnd 7.62x39 7N47 Kremen-2 CT Lush Mag Green Tracer"; descriptionShort = "7.62x39 7N47 Kremen-2 CT"; tracersEvery = 4; };
    class FA_30Rnd_762x39_7N47_CT_Lush_T_White: FA_30Rnd_762x39_7N47_CT_Lush { ammo = "FA_762x39_7N47_CT_T_White"; displayName = "[Ghost] 30Rnd 7.62x39 7N47 Kremen-2 CT Lush Mag White Tracer"; descriptionShort = "7.62x39 7N47 Kremen-2 CT"; tracersEvery = 4; };
    class FA_30Rnd_762x39_7N47_CT_Lush_T_Blue: FA_30Rnd_762x39_7N47_CT_Lush { ammo = "FA_762x39_7N47_CT_T_Blue"; displayName = "[Ghost] 30Rnd 7.62x39 7N47 Kremen-2 CT Lush Mag Blue Tracer"; descriptionShort = "7.62x39 7N47 Kremen-2 CT"; tracersEvery = 4; };
    class FA_30Rnd_762x39_7N47_CT_Lush_T_Orange: FA_30Rnd_762x39_7N47_CT_Lush { ammo = "FA_762x39_7N47_CT_T_Orange"; displayName = "[Ghost] 30Rnd 7.62x39 7N47 Kremen-2 CT Lush Mag Orange Tracer"; descriptionShort = "7.62x39 7N47 Kremen-2 CT"; tracersEvery = 4; };
    class FA_30Rnd_762x39_7N47_CT_Lush_T_IR: FA_30Rnd_762x39_7N47_CT_Lush { ammo = "FA_762x39_7N47_CT_T_IR"; displayName = "[Ghost] 30Rnd 7.62x39 7N47 Kremen-2 CT Lush Mag IR Tracer"; descriptionShort = "7.62x39 7N47 Kremen-2 CT"; tracersEvery = 4; };
    class FA_30Rnd_762x39_7U4_Sub_Lush: 30Rnd_762x39_AK12_Lush_Mag_F { author = QAUTHOR; displayName = "[Ghost] 30Rnd 7.62x39 7U4 Tishina-2 SubAP Lush Mag"; descriptionShort = "7.62x39 7U4 Tishina-2 SubAP"; ammo = "FA_762x39_7U4_Sub"; initSpeed = 290; };
    class FA_30Rnd_762x39_7U4_Sub_Lush_T_Red: FA_30Rnd_762x39_7U4_Sub_Lush { ammo = "FA_762x39_7U4_Sub_T_Red"; displayName = "[Ghost] 30Rnd 7.62x39 7U4 Tishina-2 SubAP Lush Mag Red Tracer"; descriptionShort = "7.62x39 7U4 Tishina-2 SubAP"; tracersEvery = 4; };
    class FA_30Rnd_762x39_7U4_Sub_Lush_T_Yellow: FA_30Rnd_762x39_7U4_Sub_Lush { ammo = "FA_762x39_7U4_Sub_T_Yellow"; displayName = "[Ghost] 30Rnd 7.62x39 7U4 Tishina-2 SubAP Lush Mag Yellow Tracer"; descriptionShort = "7.62x39 7U4 Tishina-2 SubAP"; tracersEvery = 4; };
    class FA_30Rnd_762x39_7U4_Sub_Lush_T_Green: FA_30Rnd_762x39_7U4_Sub_Lush { ammo = "FA_762x39_7U4_Sub_T_Green"; displayName = "[Ghost] 30Rnd 7.62x39 7U4 Tishina-2 SubAP Lush Mag Green Tracer"; descriptionShort = "7.62x39 7U4 Tishina-2 SubAP"; tracersEvery = 4; };
    class FA_30Rnd_762x39_7U4_Sub_Lush_T_White: FA_30Rnd_762x39_7U4_Sub_Lush { ammo = "FA_762x39_7U4_Sub_T_White"; displayName = "[Ghost] 30Rnd 7.62x39 7U4 Tishina-2 SubAP Lush Mag White Tracer"; descriptionShort = "7.62x39 7U4 Tishina-2 SubAP"; tracersEvery = 4; };
    class FA_30Rnd_762x39_7U4_Sub_Lush_T_Blue: FA_30Rnd_762x39_7U4_Sub_Lush { ammo = "FA_762x39_7U4_Sub_T_Blue"; displayName = "[Ghost] 30Rnd 7.62x39 7U4 Tishina-2 SubAP Lush Mag Blue Tracer"; descriptionShort = "7.62x39 7U4 Tishina-2 SubAP"; tracersEvery = 4; };
    class FA_30Rnd_762x39_7U4_Sub_Lush_T_Orange: FA_30Rnd_762x39_7U4_Sub_Lush { ammo = "FA_762x39_7U4_Sub_T_Orange"; displayName = "[Ghost] 30Rnd 7.62x39 7U4 Tishina-2 SubAP Lush Mag Orange Tracer"; descriptionShort = "7.62x39 7U4 Tishina-2 SubAP"; tracersEvery = 4; };
    class FA_30Rnd_762x39_7U4_Sub_Lush_T_IR: FA_30Rnd_762x39_7U4_Sub_Lush { ammo = "FA_762x39_7U4_Sub_T_IR"; displayName = "[Ghost] 30Rnd 7.62x39 7U4 Tishina-2 SubAP Lush Mag IR Tracer"; descriptionShort = "7.62x39 7U4 Tishina-2 SubAP"; tracersEvery = 4; };
    class FA_30Rnd_762x39_7N47_CT_Arid: 30Rnd_762x39_AK12_Arid_Mag_F { author = QAUTHOR; displayName = "[Ghost] 30Rnd 7.62x39 7N47 Kremen-2 CT Arid Mag"; descriptionShort = "7.62x39 7N47 Kremen-2 CT"; ammo = "FA_762x39_7N47_CT"; initSpeed = 800; };
    class FA_30Rnd_762x39_7N47_CT_Arid_T_Red: FA_30Rnd_762x39_7N47_CT_Arid { ammo = "FA_762x39_7N47_CT_T_Red"; displayName = "[Ghost] 30Rnd 7.62x39 7N47 Kremen-2 CT Arid Mag Red Tracer"; descriptionShort = "7.62x39 7N47 Kremen-2 CT"; tracersEvery = 4; };
    class FA_30Rnd_762x39_7N47_CT_Arid_T_Yellow: FA_30Rnd_762x39_7N47_CT_Arid { ammo = "FA_762x39_7N47_CT_T_Yellow"; displayName = "[Ghost] 30Rnd 7.62x39 7N47 Kremen-2 CT Arid Mag Yellow Tracer"; descriptionShort = "7.62x39 7N47 Kremen-2 CT"; tracersEvery = 4; };
    class FA_30Rnd_762x39_7N47_CT_Arid_T_Green: FA_30Rnd_762x39_7N47_CT_Arid { ammo = "FA_762x39_7N47_CT_T_Green"; displayName = "[Ghost] 30Rnd 7.62x39 7N47 Kremen-2 CT Arid Mag Green Tracer"; descriptionShort = "7.62x39 7N47 Kremen-2 CT"; tracersEvery = 4; };
    class FA_30Rnd_762x39_7N47_CT_Arid_T_White: FA_30Rnd_762x39_7N47_CT_Arid { ammo = "FA_762x39_7N47_CT_T_White"; displayName = "[Ghost] 30Rnd 7.62x39 7N47 Kremen-2 CT Arid Mag White Tracer"; descriptionShort = "7.62x39 7N47 Kremen-2 CT"; tracersEvery = 4; };
    class FA_30Rnd_762x39_7N47_CT_Arid_T_Blue: FA_30Rnd_762x39_7N47_CT_Arid { ammo = "FA_762x39_7N47_CT_T_Blue"; displayName = "[Ghost] 30Rnd 7.62x39 7N47 Kremen-2 CT Arid Mag Blue Tracer"; descriptionShort = "7.62x39 7N47 Kremen-2 CT"; tracersEvery = 4; };
    class FA_30Rnd_762x39_7N47_CT_Arid_T_Orange: FA_30Rnd_762x39_7N47_CT_Arid { ammo = "FA_762x39_7N47_CT_T_Orange"; displayName = "[Ghost] 30Rnd 7.62x39 7N47 Kremen-2 CT Arid Mag Orange Tracer"; descriptionShort = "7.62x39 7N47 Kremen-2 CT"; tracersEvery = 4; };
    class FA_30Rnd_762x39_7N47_CT_Arid_T_IR: FA_30Rnd_762x39_7N47_CT_Arid { ammo = "FA_762x39_7N47_CT_T_IR"; displayName = "[Ghost] 30Rnd 7.62x39 7N47 Kremen-2 CT Arid Mag IR Tracer"; descriptionShort = "7.62x39 7N47 Kremen-2 CT"; tracersEvery = 4; };
    class FA_30Rnd_762x39_7U4_Sub_Arid: 30Rnd_762x39_AK12_Arid_Mag_F { author = QAUTHOR; displayName = "[Ghost] 30Rnd 7.62x39 7U4 Tishina-2 SubAP Arid Mag"; descriptionShort = "7.62x39 7U4 Tishina-2 SubAP"; ammo = "FA_762x39_7U4_Sub"; initSpeed = 290; };
    class FA_30Rnd_762x39_7U4_Sub_Arid_T_Red: FA_30Rnd_762x39_7U4_Sub_Arid { ammo = "FA_762x39_7U4_Sub_T_Red"; displayName = "[Ghost] 30Rnd 7.62x39 7U4 Tishina-2 SubAP Arid Mag Red Tracer"; descriptionShort = "7.62x39 7U4 Tishina-2 SubAP"; tracersEvery = 4; };
    class FA_30Rnd_762x39_7U4_Sub_Arid_T_Yellow: FA_30Rnd_762x39_7U4_Sub_Arid { ammo = "FA_762x39_7U4_Sub_T_Yellow"; displayName = "[Ghost] 30Rnd 7.62x39 7U4 Tishina-2 SubAP Arid Mag Yellow Tracer"; descriptionShort = "7.62x39 7U4 Tishina-2 SubAP"; tracersEvery = 4; };
    class FA_30Rnd_762x39_7U4_Sub_Arid_T_Green: FA_30Rnd_762x39_7U4_Sub_Arid { ammo = "FA_762x39_7U4_Sub_T_Green"; displayName = "[Ghost] 30Rnd 7.62x39 7U4 Tishina-2 SubAP Arid Mag Green Tracer"; descriptionShort = "7.62x39 7U4 Tishina-2 SubAP"; tracersEvery = 4; };
    class FA_30Rnd_762x39_7U4_Sub_Arid_T_White: FA_30Rnd_762x39_7U4_Sub_Arid { ammo = "FA_762x39_7U4_Sub_T_White"; displayName = "[Ghost] 30Rnd 7.62x39 7U4 Tishina-2 SubAP Arid Mag White Tracer"; descriptionShort = "7.62x39 7U4 Tishina-2 SubAP"; tracersEvery = 4; };
    class FA_30Rnd_762x39_7U4_Sub_Arid_T_Blue: FA_30Rnd_762x39_7U4_Sub_Arid { ammo = "FA_762x39_7U4_Sub_T_Blue"; displayName = "[Ghost] 30Rnd 7.62x39 7U4 Tishina-2 SubAP Arid Mag Blue Tracer"; descriptionShort = "7.62x39 7U4 Tishina-2 SubAP"; tracersEvery = 4; };
    class FA_30Rnd_762x39_7U4_Sub_Arid_T_Orange: FA_30Rnd_762x39_7U4_Sub_Arid { ammo = "FA_762x39_7U4_Sub_T_Orange"; displayName = "[Ghost] 30Rnd 7.62x39 7U4 Tishina-2 SubAP Arid Mag Orange Tracer"; descriptionShort = "7.62x39 7U4 Tishina-2 SubAP"; tracersEvery = 4; };
    class FA_30Rnd_762x39_7U4_Sub_Arid_T_IR: FA_30Rnd_762x39_7U4_Sub_Arid { ammo = "FA_762x39_7U4_Sub_T_IR"; displayName = "[Ghost] 30Rnd 7.62x39 7U4 Tishina-2 SubAP Arid Mag IR Tracer"; descriptionShort = "7.62x39 7U4 Tishina-2 SubAP"; tracersEvery = 4; };
    class FA_30Rnd_762x39_7N47_CT_AK12: 30Rnd_762x39_AK12_Mag_F { author = QAUTHOR; displayName = "[Ghost] 30Rnd 7.62x39 7N47 Kremen-2 CT"; descriptionShort = "7.62x39 7N47 Kremen-2 CT"; ammo = "FA_762x39_7N47_CT"; initSpeed = 800; };
    class FA_30Rnd_762x39_7N47_CT_AK12_T_Red: FA_30Rnd_762x39_7N47_CT_AK12 { ammo = "FA_762x39_7N47_CT_T_Red"; displayName = "[Ghost] 30Rnd 7.62x39 7N47 Kremen-2 CT Red Tracer"; descriptionShort = "7.62x39 7N47 Kremen-2 CT"; tracersEvery = 4; };
    class FA_30Rnd_762x39_7N47_CT_AK12_T_Yellow: FA_30Rnd_762x39_7N47_CT_AK12 { ammo = "FA_762x39_7N47_CT_T_Yellow"; displayName = "[Ghost] 30Rnd 7.62x39 7N47 Kremen-2 CT Yellow Tracer"; descriptionShort = "7.62x39 7N47 Kremen-2 CT"; tracersEvery = 4; };
    class FA_30Rnd_762x39_7N47_CT_AK12_T_Green: FA_30Rnd_762x39_7N47_CT_AK12 { ammo = "FA_762x39_7N47_CT_T_Green"; displayName = "[Ghost] 30Rnd 7.62x39 7N47 Kremen-2 CT Green Tracer"; descriptionShort = "7.62x39 7N47 Kremen-2 CT"; tracersEvery = 4; };
    class FA_30Rnd_762x39_7N47_CT_AK12_T_White: FA_30Rnd_762x39_7N47_CT_AK12 { ammo = "FA_762x39_7N47_CT_T_White"; displayName = "[Ghost] 30Rnd 7.62x39 7N47 Kremen-2 CT White Tracer"; descriptionShort = "7.62x39 7N47 Kremen-2 CT"; tracersEvery = 4; };
    class FA_30Rnd_762x39_7N47_CT_AK12_T_Blue: FA_30Rnd_762x39_7N47_CT_AK12 { ammo = "FA_762x39_7N47_CT_T_Blue"; displayName = "[Ghost] 30Rnd 7.62x39 7N47 Kremen-2 CT Blue Tracer"; descriptionShort = "7.62x39 7N47 Kremen-2 CT"; tracersEvery = 4; };
    class FA_30Rnd_762x39_7N47_CT_AK12_T_Orange: FA_30Rnd_762x39_7N47_CT_AK12 { ammo = "FA_762x39_7N47_CT_T_Orange"; displayName = "[Ghost] 30Rnd 7.62x39 7N47 Kremen-2 CT Orange Tracer"; descriptionShort = "7.62x39 7N47 Kremen-2 CT"; tracersEvery = 4; };
    class FA_30Rnd_762x39_7N47_CT_AK12_T_IR: FA_30Rnd_762x39_7N47_CT_AK12 { ammo = "FA_762x39_7N47_CT_T_IR"; displayName = "[Ghost] 30Rnd 7.62x39 7N47 Kremen-2 CT IR Tracer"; descriptionShort = "7.62x39 7N47 Kremen-2 CT"; tracersEvery = 4; };
    class FA_30Rnd_762x39_7U4_Sub_AK12: 30Rnd_762x39_AK12_Mag_F { author = QAUTHOR; displayName = "[Ghost] 30Rnd 7.62x39 7U4 Tishina-2 SubAP"; descriptionShort = "7.62x39 7U4 Tishina-2 SubAP"; ammo = "FA_762x39_7U4_Sub"; initSpeed = 290; };
    class FA_30Rnd_762x39_7U4_Sub_AK12_T_Red: FA_30Rnd_762x39_7U4_Sub_AK12 { ammo = "FA_762x39_7U4_Sub_T_Red"; displayName = "[Ghost] 30Rnd 7.62x39 7U4 Tishina-2 SubAP Red Tracer"; descriptionShort = "7.62x39 7U4 Tishina-2 SubAP"; tracersEvery = 4; };
    class FA_30Rnd_762x39_7U4_Sub_AK12_T_Yellow: FA_30Rnd_762x39_7U4_Sub_AK12 { ammo = "FA_762x39_7U4_Sub_T_Yellow"; displayName = "[Ghost] 30Rnd 7.62x39 7U4 Tishina-2 SubAP Yellow Tracer"; descriptionShort = "7.62x39 7U4 Tishina-2 SubAP"; tracersEvery = 4; };
    class FA_30Rnd_762x39_7U4_Sub_AK12_T_Green: FA_30Rnd_762x39_7U4_Sub_AK12 { ammo = "FA_762x39_7U4_Sub_T_Green"; displayName = "[Ghost] 30Rnd 7.62x39 7U4 Tishina-2 SubAP Green Tracer"; descriptionShort = "7.62x39 7U4 Tishina-2 SubAP"; tracersEvery = 4; };
    class FA_30Rnd_762x39_7U4_Sub_AK12_T_White: FA_30Rnd_762x39_7U4_Sub_AK12 { ammo = "FA_762x39_7U4_Sub_T_White"; displayName = "[Ghost] 30Rnd 7.62x39 7U4 Tishina-2 SubAP White Tracer"; descriptionShort = "7.62x39 7U4 Tishina-2 SubAP"; tracersEvery = 4; };
    class FA_30Rnd_762x39_7U4_Sub_AK12_T_Blue: FA_30Rnd_762x39_7U4_Sub_AK12 { ammo = "FA_762x39_7U4_Sub_T_Blue"; displayName = "[Ghost] 30Rnd 7.62x39 7U4 Tishina-2 SubAP Blue Tracer"; descriptionShort = "7.62x39 7U4 Tishina-2 SubAP"; tracersEvery = 4; };
    class FA_30Rnd_762x39_7U4_Sub_AK12_T_Orange: FA_30Rnd_762x39_7U4_Sub_AK12 { ammo = "FA_762x39_7U4_Sub_T_Orange"; displayName = "[Ghost] 30Rnd 7.62x39 7U4 Tishina-2 SubAP Orange Tracer"; descriptionShort = "7.62x39 7U4 Tishina-2 SubAP"; tracersEvery = 4; };
    class FA_30Rnd_762x39_7U4_Sub_AK12_T_IR: FA_30Rnd_762x39_7U4_Sub_AK12 { ammo = "FA_762x39_7U4_Sub_T_IR"; displayName = "[Ghost] 30Rnd 7.62x39 7U4 Tishina-2 SubAP IR Tracer"; descriptionShort = "7.62x39 7U4 Tishina-2 SubAP"; tracersEvery = 4; };
    class FA_75Rnd_762x39_7U4_Sub: 75Rnd_762x39_Mag_F { author = QAUTHOR; displayName = "[Ghost] 75Rnd 7.62x39 7U4 Tishina-2 SubAP"; descriptionShort = "7.62x39 7U4 Tishina-2 SubAP"; ammo = "FA_762x39_7U4_Sub"; initSpeed = 290; };
    class FA_75Rnd_762x39_7U4_Sub_T_Red: FA_75Rnd_762x39_7U4_Sub { ammo = "FA_762x39_7U4_Sub_T_Red"; displayName = "[Ghost] 75Rnd 7.62x39 7U4 Tishina-2 SubAP Red Tracer"; descriptionShort = "7.62x39 7U4 Tishina-2 SubAP"; tracersEvery = 4; };
    class FA_75Rnd_762x39_7U4_Sub_T_Yellow: FA_75Rnd_762x39_7U4_Sub { ammo = "FA_762x39_7U4_Sub_T_Yellow"; displayName = "[Ghost] 75Rnd 7.62x39 7U4 Tishina-2 SubAP Yellow Tracer"; descriptionShort = "7.62x39 7U4 Tishina-2 SubAP"; tracersEvery = 4; };
    class FA_75Rnd_762x39_7U4_Sub_T_Green: FA_75Rnd_762x39_7U4_Sub { ammo = "FA_762x39_7U4_Sub_T_Green"; displayName = "[Ghost] 75Rnd 7.62x39 7U4 Tishina-2 SubAP Green Tracer"; descriptionShort = "7.62x39 7U4 Tishina-2 SubAP"; tracersEvery = 4; };
    class FA_75Rnd_762x39_7U4_Sub_T_White: FA_75Rnd_762x39_7U4_Sub { ammo = "FA_762x39_7U4_Sub_T_White"; displayName = "[Ghost] 75Rnd 7.62x39 7U4 Tishina-2 SubAP White Tracer"; descriptionShort = "7.62x39 7U4 Tishina-2 SubAP"; tracersEvery = 4; };
    class FA_75Rnd_762x39_7U4_Sub_T_Blue: FA_75Rnd_762x39_7U4_Sub { ammo = "FA_762x39_7U4_Sub_T_Blue"; displayName = "[Ghost] 75Rnd 7.62x39 7U4 Tishina-2 SubAP Blue Tracer"; descriptionShort = "7.62x39 7U4 Tishina-2 SubAP"; tracersEvery = 4; };
    class FA_75Rnd_762x39_7U4_Sub_T_Orange: FA_75Rnd_762x39_7U4_Sub { ammo = "FA_762x39_7U4_Sub_T_Orange"; displayName = "[Ghost] 75Rnd 7.62x39 7U4 Tishina-2 SubAP Orange Tracer"; descriptionShort = "7.62x39 7U4 Tishina-2 SubAP"; tracersEvery = 4; };
    class FA_75Rnd_762x39_7U4_Sub_T_IR: FA_75Rnd_762x39_7U4_Sub { ammo = "FA_762x39_7U4_Sub_T_IR"; displayName = "[Ghost] 75Rnd 7.62x39 7U4 Tishina-2 SubAP IR Tracer"; descriptionShort = "7.62x39 7U4 Tishina-2 SubAP"; tracersEvery = 4; };
    class FA_75Rnd_762x39_7N47_CT_AK12: 75rnd_762x39_AK12_Mag_F { author = QAUTHOR; displayName = "[Ghost] 75Rnd 7.62x39 7N47 Kremen-2 CT"; descriptionShort = "7.62x39 7N47 Kremen-2 CT"; ammo = "FA_762x39_7N47_CT"; initSpeed = 800; };
    class FA_75Rnd_762x39_7N47_CT_AK12_T_Red: FA_75Rnd_762x39_7N47_CT_AK12 { ammo = "FA_762x39_7N47_CT_T_Red"; displayName = "[Ghost] 75Rnd 7.62x39 7N47 Kremen-2 CT Red Tracer"; descriptionShort = "7.62x39 7N47 Kremen-2 CT"; tracersEvery = 4; };
    class FA_75Rnd_762x39_7N47_CT_AK12_T_Yellow: FA_75Rnd_762x39_7N47_CT_AK12 { ammo = "FA_762x39_7N47_CT_T_Yellow"; displayName = "[Ghost] 75Rnd 7.62x39 7N47 Kremen-2 CT Yellow Tracer"; descriptionShort = "7.62x39 7N47 Kremen-2 CT"; tracersEvery = 4; };
    class FA_75Rnd_762x39_7N47_CT_AK12_T_Green: FA_75Rnd_762x39_7N47_CT_AK12 { ammo = "FA_762x39_7N47_CT_T_Green"; displayName = "[Ghost] 75Rnd 7.62x39 7N47 Kremen-2 CT Green Tracer"; descriptionShort = "7.62x39 7N47 Kremen-2 CT"; tracersEvery = 4; };
    class FA_75Rnd_762x39_7N47_CT_AK12_T_White: FA_75Rnd_762x39_7N47_CT_AK12 { ammo = "FA_762x39_7N47_CT_T_White"; displayName = "[Ghost] 75Rnd 7.62x39 7N47 Kremen-2 CT White Tracer"; descriptionShort = "7.62x39 7N47 Kremen-2 CT"; tracersEvery = 4; };
    class FA_75Rnd_762x39_7N47_CT_AK12_T_Blue: FA_75Rnd_762x39_7N47_CT_AK12 { ammo = "FA_762x39_7N47_CT_T_Blue"; displayName = "[Ghost] 75Rnd 7.62x39 7N47 Kremen-2 CT Blue Tracer"; descriptionShort = "7.62x39 7N47 Kremen-2 CT"; tracersEvery = 4; };
    class FA_75Rnd_762x39_7N47_CT_AK12_T_Orange: FA_75Rnd_762x39_7N47_CT_AK12 { ammo = "FA_762x39_7N47_CT_T_Orange"; displayName = "[Ghost] 75Rnd 7.62x39 7N47 Kremen-2 CT Orange Tracer"; descriptionShort = "7.62x39 7N47 Kremen-2 CT"; tracersEvery = 4; };
    class FA_75Rnd_762x39_7N47_CT_AK12_T_IR: FA_75Rnd_762x39_7N47_CT_AK12 { ammo = "FA_762x39_7N47_CT_T_IR"; displayName = "[Ghost] 75Rnd 7.62x39 7N47 Kremen-2 CT IR Tracer"; descriptionShort = "7.62x39 7N47 Kremen-2 CT"; tracersEvery = 4; };
    class FA_75Rnd_762x39_7U4_Sub_AK12: 75rnd_762x39_AK12_Mag_F { author = QAUTHOR; displayName = "[Ghost] 75Rnd 7.62x39 7U4 Tishina-2 SubAP"; descriptionShort = "7.62x39 7U4 Tishina-2 SubAP"; ammo = "FA_762x39_7U4_Sub"; initSpeed = 290; };
    class FA_75Rnd_762x39_7U4_Sub_AK12_T_Red: FA_75Rnd_762x39_7U4_Sub_AK12 { ammo = "FA_762x39_7U4_Sub_T_Red"; displayName = "[Ghost] 75Rnd 7.62x39 7U4 Tishina-2 SubAP Red Tracer"; descriptionShort = "7.62x39 7U4 Tishina-2 SubAP"; tracersEvery = 4; };
    class FA_75Rnd_762x39_7U4_Sub_AK12_T_Yellow: FA_75Rnd_762x39_7U4_Sub_AK12 { ammo = "FA_762x39_7U4_Sub_T_Yellow"; displayName = "[Ghost] 75Rnd 7.62x39 7U4 Tishina-2 SubAP Yellow Tracer"; descriptionShort = "7.62x39 7U4 Tishina-2 SubAP"; tracersEvery = 4; };
    class FA_75Rnd_762x39_7U4_Sub_AK12_T_Green: FA_75Rnd_762x39_7U4_Sub_AK12 { ammo = "FA_762x39_7U4_Sub_T_Green"; displayName = "[Ghost] 75Rnd 7.62x39 7U4 Tishina-2 SubAP Green Tracer"; descriptionShort = "7.62x39 7U4 Tishina-2 SubAP"; tracersEvery = 4; };
    class FA_75Rnd_762x39_7U4_Sub_AK12_T_White: FA_75Rnd_762x39_7U4_Sub_AK12 { ammo = "FA_762x39_7U4_Sub_T_White"; displayName = "[Ghost] 75Rnd 7.62x39 7U4 Tishina-2 SubAP White Tracer"; descriptionShort = "7.62x39 7U4 Tishina-2 SubAP"; tracersEvery = 4; };
    class FA_75Rnd_762x39_7U4_Sub_AK12_T_Blue: FA_75Rnd_762x39_7U4_Sub_AK12 { ammo = "FA_762x39_7U4_Sub_T_Blue"; displayName = "[Ghost] 75Rnd 7.62x39 7U4 Tishina-2 SubAP Blue Tracer"; descriptionShort = "7.62x39 7U4 Tishina-2 SubAP"; tracersEvery = 4; };
    class FA_75Rnd_762x39_7U4_Sub_AK12_T_Orange: FA_75Rnd_762x39_7U4_Sub_AK12 { ammo = "FA_762x39_7U4_Sub_T_Orange"; displayName = "[Ghost] 75Rnd 7.62x39 7U4 Tishina-2 SubAP Orange Tracer"; descriptionShort = "7.62x39 7U4 Tishina-2 SubAP"; tracersEvery = 4; };
    class FA_75Rnd_762x39_7U4_Sub_AK12_T_IR: FA_75Rnd_762x39_7U4_Sub_AK12 { ammo = "FA_762x39_7U4_Sub_T_IR"; displayName = "[Ghost] 75Rnd 7.62x39 7U4 Tishina-2 SubAP IR Tracer"; descriptionShort = "7.62x39 7U4 Tishina-2 SubAP"; tracersEvery = 4; };
    class FA_75Rnd_762x39_7N47_CT_Lush: 75rnd_762x39_AK12_Lush_Mag_F { author = QAUTHOR; displayName = "[Ghost] 75Rnd 7.62x39 7N47 Kremen-2 CT Lush Mag"; descriptionShort = "7.62x39 7N47 Kremen-2 CT"; ammo = "FA_762x39_7N47_CT"; initSpeed = 800; };
    class FA_75Rnd_762x39_7N47_CT_Lush_T_Red: FA_75Rnd_762x39_7N47_CT_Lush { ammo = "FA_762x39_7N47_CT_T_Red"; displayName = "[Ghost] 75Rnd 7.62x39 7N47 Kremen-2 CT Lush Mag Red Tracer"; descriptionShort = "7.62x39 7N47 Kremen-2 CT"; tracersEvery = 4; };
    class FA_75Rnd_762x39_7N47_CT_Lush_T_Yellow: FA_75Rnd_762x39_7N47_CT_Lush { ammo = "FA_762x39_7N47_CT_T_Yellow"; displayName = "[Ghost] 75Rnd 7.62x39 7N47 Kremen-2 CT Lush Mag Yellow Tracer"; descriptionShort = "7.62x39 7N47 Kremen-2 CT"; tracersEvery = 4; };
    class FA_75Rnd_762x39_7N47_CT_Lush_T_Green: FA_75Rnd_762x39_7N47_CT_Lush { ammo = "FA_762x39_7N47_CT_T_Green"; displayName = "[Ghost] 75Rnd 7.62x39 7N47 Kremen-2 CT Lush Mag Green Tracer"; descriptionShort = "7.62x39 7N47 Kremen-2 CT"; tracersEvery = 4; };
    class FA_75Rnd_762x39_7N47_CT_Lush_T_White: FA_75Rnd_762x39_7N47_CT_Lush { ammo = "FA_762x39_7N47_CT_T_White"; displayName = "[Ghost] 75Rnd 7.62x39 7N47 Kremen-2 CT Lush Mag White Tracer"; descriptionShort = "7.62x39 7N47 Kremen-2 CT"; tracersEvery = 4; };
    class FA_75Rnd_762x39_7N47_CT_Lush_T_Blue: FA_75Rnd_762x39_7N47_CT_Lush { ammo = "FA_762x39_7N47_CT_T_Blue"; displayName = "[Ghost] 75Rnd 7.62x39 7N47 Kremen-2 CT Lush Mag Blue Tracer"; descriptionShort = "7.62x39 7N47 Kremen-2 CT"; tracersEvery = 4; };
    class FA_75Rnd_762x39_7N47_CT_Lush_T_Orange: FA_75Rnd_762x39_7N47_CT_Lush { ammo = "FA_762x39_7N47_CT_T_Orange"; displayName = "[Ghost] 75Rnd 7.62x39 7N47 Kremen-2 CT Lush Mag Orange Tracer"; descriptionShort = "7.62x39 7N47 Kremen-2 CT"; tracersEvery = 4; };
    class FA_75Rnd_762x39_7N47_CT_Lush_T_IR: FA_75Rnd_762x39_7N47_CT_Lush { ammo = "FA_762x39_7N47_CT_T_IR"; displayName = "[Ghost] 75Rnd 7.62x39 7N47 Kremen-2 CT Lush Mag IR Tracer"; descriptionShort = "7.62x39 7N47 Kremen-2 CT"; tracersEvery = 4; };
    class FA_75Rnd_762x39_7U4_Sub_Lush: 75rnd_762x39_AK12_Lush_Mag_F { author = QAUTHOR; displayName = "[Ghost] 75Rnd 7.62x39 7U4 Tishina-2 SubAP Lush Mag"; descriptionShort = "7.62x39 7U4 Tishina-2 SubAP"; ammo = "FA_762x39_7U4_Sub"; initSpeed = 290; };
    class FA_75Rnd_762x39_7U4_Sub_Lush_T_Red: FA_75Rnd_762x39_7U4_Sub_Lush { ammo = "FA_762x39_7U4_Sub_T_Red"; displayName = "[Ghost] 75Rnd 7.62x39 7U4 Tishina-2 SubAP Lush Mag Red Tracer"; descriptionShort = "7.62x39 7U4 Tishina-2 SubAP"; tracersEvery = 4; };
    class FA_75Rnd_762x39_7U4_Sub_Lush_T_Yellow: FA_75Rnd_762x39_7U4_Sub_Lush { ammo = "FA_762x39_7U4_Sub_T_Yellow"; displayName = "[Ghost] 75Rnd 7.62x39 7U4 Tishina-2 SubAP Lush Mag Yellow Tracer"; descriptionShort = "7.62x39 7U4 Tishina-2 SubAP"; tracersEvery = 4; };
    class FA_75Rnd_762x39_7U4_Sub_Lush_T_Green: FA_75Rnd_762x39_7U4_Sub_Lush { ammo = "FA_762x39_7U4_Sub_T_Green"; displayName = "[Ghost] 75Rnd 7.62x39 7U4 Tishina-2 SubAP Lush Mag Green Tracer"; descriptionShort = "7.62x39 7U4 Tishina-2 SubAP"; tracersEvery = 4; };
    class FA_75Rnd_762x39_7U4_Sub_Lush_T_White: FA_75Rnd_762x39_7U4_Sub_Lush { ammo = "FA_762x39_7U4_Sub_T_White"; displayName = "[Ghost] 75Rnd 7.62x39 7U4 Tishina-2 SubAP Lush Mag White Tracer"; descriptionShort = "7.62x39 7U4 Tishina-2 SubAP"; tracersEvery = 4; };
    class FA_75Rnd_762x39_7U4_Sub_Lush_T_Blue: FA_75Rnd_762x39_7U4_Sub_Lush { ammo = "FA_762x39_7U4_Sub_T_Blue"; displayName = "[Ghost] 75Rnd 7.62x39 7U4 Tishina-2 SubAP Lush Mag Blue Tracer"; descriptionShort = "7.62x39 7U4 Tishina-2 SubAP"; tracersEvery = 4; };
    class FA_75Rnd_762x39_7U4_Sub_Lush_T_Orange: FA_75Rnd_762x39_7U4_Sub_Lush { ammo = "FA_762x39_7U4_Sub_T_Orange"; displayName = "[Ghost] 75Rnd 7.62x39 7U4 Tishina-2 SubAP Lush Mag Orange Tracer"; descriptionShort = "7.62x39 7U4 Tishina-2 SubAP"; tracersEvery = 4; };
    class FA_75Rnd_762x39_7U4_Sub_Lush_T_IR: FA_75Rnd_762x39_7U4_Sub_Lush { ammo = "FA_762x39_7U4_Sub_T_IR"; displayName = "[Ghost] 75Rnd 7.62x39 7U4 Tishina-2 SubAP Lush Mag IR Tracer"; descriptionShort = "7.62x39 7U4 Tishina-2 SubAP"; tracersEvery = 4; };
    class FA_75Rnd_762x39_7N47_CT_Arid: 75rnd_762x39_AK12_Arid_Mag_F { author = QAUTHOR; displayName = "[Ghost] 75Rnd 7.62x39 7N47 Kremen-2 CT Arid Mag"; descriptionShort = "7.62x39 7N47 Kremen-2 CT"; ammo = "FA_762x39_7N47_CT"; initSpeed = 800; };
    class FA_75Rnd_762x39_7N47_CT_Arid_T_Red: FA_75Rnd_762x39_7N47_CT_Arid { ammo = "FA_762x39_7N47_CT_T_Red"; displayName = "[Ghost] 75Rnd 7.62x39 7N47 Kremen-2 CT Arid Mag Red Tracer"; descriptionShort = "7.62x39 7N47 Kremen-2 CT"; tracersEvery = 4; };
    class FA_75Rnd_762x39_7N47_CT_Arid_T_Yellow: FA_75Rnd_762x39_7N47_CT_Arid { ammo = "FA_762x39_7N47_CT_T_Yellow"; displayName = "[Ghost] 75Rnd 7.62x39 7N47 Kremen-2 CT Arid Mag Yellow Tracer"; descriptionShort = "7.62x39 7N47 Kremen-2 CT"; tracersEvery = 4; };
    class FA_75Rnd_762x39_7N47_CT_Arid_T_Green: FA_75Rnd_762x39_7N47_CT_Arid { ammo = "FA_762x39_7N47_CT_T_Green"; displayName = "[Ghost] 75Rnd 7.62x39 7N47 Kremen-2 CT Arid Mag Green Tracer"; descriptionShort = "7.62x39 7N47 Kremen-2 CT"; tracersEvery = 4; };
    class FA_75Rnd_762x39_7N47_CT_Arid_T_White: FA_75Rnd_762x39_7N47_CT_Arid { ammo = "FA_762x39_7N47_CT_T_White"; displayName = "[Ghost] 75Rnd 7.62x39 7N47 Kremen-2 CT Arid Mag White Tracer"; descriptionShort = "7.62x39 7N47 Kremen-2 CT"; tracersEvery = 4; };
    class FA_75Rnd_762x39_7N47_CT_Arid_T_Blue: FA_75Rnd_762x39_7N47_CT_Arid { ammo = "FA_762x39_7N47_CT_T_Blue"; displayName = "[Ghost] 75Rnd 7.62x39 7N47 Kremen-2 CT Arid Mag Blue Tracer"; descriptionShort = "7.62x39 7N47 Kremen-2 CT"; tracersEvery = 4; };
    class FA_75Rnd_762x39_7N47_CT_Arid_T_Orange: FA_75Rnd_762x39_7N47_CT_Arid { ammo = "FA_762x39_7N47_CT_T_Orange"; displayName = "[Ghost] 75Rnd 7.62x39 7N47 Kremen-2 CT Arid Mag Orange Tracer"; descriptionShort = "7.62x39 7N47 Kremen-2 CT"; tracersEvery = 4; };
    class FA_75Rnd_762x39_7N47_CT_Arid_T_IR: FA_75Rnd_762x39_7N47_CT_Arid { ammo = "FA_762x39_7N47_CT_T_IR"; displayName = "[Ghost] 75Rnd 7.62x39 7N47 Kremen-2 CT Arid Mag IR Tracer"; descriptionShort = "7.62x39 7N47 Kremen-2 CT"; tracersEvery = 4; };
    class FA_75Rnd_762x39_7U4_Sub_Arid: 75rnd_762x39_AK12_Arid_Mag_F { author = QAUTHOR; displayName = "[Ghost] 75Rnd 7.62x39 7U4 Tishina-2 SubAP Arid Mag"; descriptionShort = "7.62x39 7U4 Tishina-2 SubAP"; ammo = "FA_762x39_7U4_Sub"; initSpeed = 290; };
    class FA_75Rnd_762x39_7U4_Sub_Arid_T_Red: FA_75Rnd_762x39_7U4_Sub_Arid { ammo = "FA_762x39_7U4_Sub_T_Red"; displayName = "[Ghost] 75Rnd 7.62x39 7U4 Tishina-2 SubAP Arid Mag Red Tracer"; descriptionShort = "7.62x39 7U4 Tishina-2 SubAP"; tracersEvery = 4; };
    class FA_75Rnd_762x39_7U4_Sub_Arid_T_Yellow: FA_75Rnd_762x39_7U4_Sub_Arid { ammo = "FA_762x39_7U4_Sub_T_Yellow"; displayName = "[Ghost] 75Rnd 7.62x39 7U4 Tishina-2 SubAP Arid Mag Yellow Tracer"; descriptionShort = "7.62x39 7U4 Tishina-2 SubAP"; tracersEvery = 4; };
    class FA_75Rnd_762x39_7U4_Sub_Arid_T_Green: FA_75Rnd_762x39_7U4_Sub_Arid { ammo = "FA_762x39_7U4_Sub_T_Green"; displayName = "[Ghost] 75Rnd 7.62x39 7U4 Tishina-2 SubAP Arid Mag Green Tracer"; descriptionShort = "7.62x39 7U4 Tishina-2 SubAP"; tracersEvery = 4; };
    class FA_75Rnd_762x39_7U4_Sub_Arid_T_White: FA_75Rnd_762x39_7U4_Sub_Arid { ammo = "FA_762x39_7U4_Sub_T_White"; displayName = "[Ghost] 75Rnd 7.62x39 7U4 Tishina-2 SubAP Arid Mag White Tracer"; descriptionShort = "7.62x39 7U4 Tishina-2 SubAP"; tracersEvery = 4; };
    class FA_75Rnd_762x39_7U4_Sub_Arid_T_Blue: FA_75Rnd_762x39_7U4_Sub_Arid { ammo = "FA_762x39_7U4_Sub_T_Blue"; displayName = "[Ghost] 75Rnd 7.62x39 7U4 Tishina-2 SubAP Arid Mag Blue Tracer"; descriptionShort = "7.62x39 7U4 Tishina-2 SubAP"; tracersEvery = 4; };
    class FA_75Rnd_762x39_7U4_Sub_Arid_T_Orange: FA_75Rnd_762x39_7U4_Sub_Arid { ammo = "FA_762x39_7U4_Sub_T_Orange"; displayName = "[Ghost] 75Rnd 7.62x39 7U4 Tishina-2 SubAP Arid Mag Orange Tracer"; descriptionShort = "7.62x39 7U4 Tishina-2 SubAP"; tracersEvery = 4; };
    class FA_75Rnd_762x39_7U4_Sub_Arid_T_IR: FA_75Rnd_762x39_7U4_Sub_Arid { ammo = "FA_762x39_7U4_Sub_T_IR"; displayName = "[Ghost] 75Rnd 7.62x39 7U4 Tishina-2 SubAP Arid Mag IR Tracer"; descriptionShort = "7.62x39 7U4 Tishina-2 SubAP"; tracersEvery = 4; };
};
