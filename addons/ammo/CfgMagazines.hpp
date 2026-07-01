class CfgMagazines {
    class 1Rnd_HE_Grenade_shell;
    class 3Rnd_HE_Grenade_shell;
    class 30Rnd_556x45_Stanag;
    class 200Rnd_556x45_Box_F;
    class 20Rnd_762x51_Mag;
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
    class 30Rnd_65x39_caseless_green;
    class 30Rnd_65x39_caseless_msbs_mag;
    
    // =========================================================
    // 5.56x45mm — Mk327 HV (hybrid case, feeds existing 5.56 wells)
    // =========================================================
    class FA_30Rnd_556_Mk327_HV: 30Rnd_556x45_Stanag {
        author = QAUTHOR;
        displayName = "[Ghost] 30Rnd 5.56 Mk327 HV";
        descriptionShort = "5.56x45 Mk327 EPR-HV (2033)<br/>Hybrid case, 70gr tungsten";
        ammo = "FA_556_Mk327_HV";
        initSpeed = 1000;
        mass = 8;
    };
    class FA_30Rnd_556_Mk327_HV_T_Red: FA_30Rnd_556_Mk327_HV { ammo = "FA_556_Mk327_HV_T_Red"; displayName = "[Ghost] 30Rnd 5.56 Mk327 HV (Red Tracer)"; tracersEvery = 4; };
    class FA_30Rnd_556_Mk327_HV_T_Yellow: FA_30Rnd_556_Mk327_HV { ammo = "FA_556_Mk327_HV_T_Yellow"; displayName = "[Ghost] 30Rnd 5.56 Mk327 HV (Yellow Tracer)"; tracersEvery = 4; };
    class FA_30Rnd_556_Mk327_HV_T_Green: FA_30Rnd_556_Mk327_HV { ammo = "FA_556_Mk327_HV_T_Green"; displayName = "[Ghost] 30Rnd 5.56 Mk327 HV (Green Tracer)"; tracersEvery = 4; };
    class FA_30Rnd_556_Mk327_HV_T_White: FA_30Rnd_556_Mk327_HV { ammo = "FA_556_Mk327_HV_T_White"; displayName = "[Ghost] 30Rnd 5.56 Mk327 HV (White Tracer)"; tracersEvery = 4; };
    class FA_30Rnd_556_Mk327_HV_T_Blue: FA_30Rnd_556_Mk327_HV { ammo = "FA_556_Mk327_HV_T_Blue"; displayName = "[Ghost] 30Rnd 5.56 Mk327 HV (Blue Tracer)"; tracersEvery = 4; };
    class FA_30Rnd_556_Mk327_HV_T_Orange: FA_30Rnd_556_Mk327_HV { ammo = "FA_556_Mk327_HV_T_Orange"; displayName = "[Ghost] 30Rnd 5.56 Mk327 HV (Orange Tracer)"; tracersEvery = 4; };
    class FA_30Rnd_556_Mk327_HV_T_IR: FA_30Rnd_556_Mk327_HV { ammo = "FA_556_Mk327_HV_T_IR"; displayName = "[Ghost] 30Rnd 5.56 Mk327 HV (IR Tracer)"; tracersEvery = 4; };

    // =========================================================
    // 5.56x45mm — XM891 CTEP (cased-telescoped, needs rated well)
    // =========================================================
    class FA_30Rnd_556_XM891_CTEP: 30Rnd_556x45_Stanag {
        author = QAUTHOR;
        displayName = "[Ghost] 30Rnd 5.56 XM891 CTEP";
        descriptionShort = "5.56x45 XM891 CTEP (2039)<br/>Cased-telescoped, 68gr 2-stage tungsten";
        ammo = "FA_556_XM891_CTEP";
        initSpeed = 1015;
        mass = 6;
    };
    class FA_30Rnd_556_XM891_CTEP_T_Red: FA_30Rnd_556_XM891_CTEP { ammo = "FA_556_XM891_CTEP_T_Red"; displayName = "[Ghost] 30Rnd 5.56 XM891 CTEP (Red Tracer)"; tracersEvery = 4; };
    class FA_30Rnd_556_XM891_CTEP_T_Yellow: FA_30Rnd_556_XM891_CTEP { ammo = "FA_556_XM891_CTEP_T_Yellow"; displayName = "[Ghost] 30Rnd 5.56 XM891 CTEP (Yellow Tracer)"; tracersEvery = 4; };
    class FA_30Rnd_556_XM891_CTEP_T_Green: FA_30Rnd_556_XM891_CTEP { ammo = "FA_556_XM891_CTEP_T_Green"; displayName = "[Ghost] 30Rnd 5.56 XM891 CTEP (Green Tracer)"; tracersEvery = 4; };
    class FA_30Rnd_556_XM891_CTEP_T_White: FA_30Rnd_556_XM891_CTEP { ammo = "FA_556_XM891_CTEP_T_White"; displayName = "[Ghost] 30Rnd 5.56 XM891 CTEP (White Tracer)"; tracersEvery = 4; };
    class FA_30Rnd_556_XM891_CTEP_T_Blue: FA_30Rnd_556_XM891_CTEP { ammo = "FA_556_XM891_CTEP_T_Blue"; displayName = "[Ghost] 30Rnd 5.56 XM891 CTEP (Blue Tracer)"; tracersEvery = 4; };
    class FA_30Rnd_556_XM891_CTEP_T_Orange: FA_30Rnd_556_XM891_CTEP { ammo = "FA_556_XM891_CTEP_T_Orange"; displayName = "[Ghost] 30Rnd 5.56 XM891 CTEP (Orange Tracer)"; tracersEvery = 4; };
    class FA_30Rnd_556_XM891_CTEP_T_IR: FA_30Rnd_556_XM891_CTEP { ammo = "FA_556_XM891_CTEP_T_IR"; displayName = "[Ghost] 30Rnd 5.56 XM891 CTEP (IR Tracer)"; tracersEvery = 4; };

    // =========================================================
    // 7.62x51mm — M80A2 HV (hybrid case, feeds existing 7.62 wells)
    // =========================================================
    class FA_20Rnd_762_M80A2_HV: 20Rnd_762x51_Mag {
        author = QAUTHOR;
        displayName = "[Ghost] 20Rnd 7.62 M80A2 HV";
        descriptionShort = "7.62x51 M80A2 HV-EPR (2032)<br/>Hybrid case, 135gr tungsten";
        ammo = "FA_762_M80A2_HV";
        initSpeed = 940;
        mass = 16;
    };
    class FA_20Rnd_762_M80A2_HV_T_Red: FA_20Rnd_762_M80A2_HV { ammo = "FA_762_M80A2_HV_T_Red"; displayName = "[Ghost] 20Rnd 7.62 M80A2 HV (Red Tracer)"; tracersEvery = 4; };
    class FA_20Rnd_762_M80A2_HV_T_Yellow: FA_20Rnd_762_M80A2_HV { ammo = "FA_762_M80A2_HV_T_Yellow"; displayName = "[Ghost] 20Rnd 7.62 M80A2 HV (Yellow Tracer)"; tracersEvery = 4; };
    class FA_20Rnd_762_M80A2_HV_T_Green: FA_20Rnd_762_M80A2_HV { ammo = "FA_762_M80A2_HV_T_Green"; displayName = "[Ghost] 20Rnd 7.62 M80A2 HV (Green Tracer)"; tracersEvery = 4; };
    class FA_20Rnd_762_M80A2_HV_T_White: FA_20Rnd_762_M80A2_HV { ammo = "FA_762_M80A2_HV_T_White"; displayName = "[Ghost] 20Rnd 7.62 M80A2 HV (White Tracer)"; tracersEvery = 4; };
    class FA_20Rnd_762_M80A2_HV_T_Blue: FA_20Rnd_762_M80A2_HV { ammo = "FA_762_M80A2_HV_T_Blue"; displayName = "[Ghost] 20Rnd 7.62 M80A2 HV (Blue Tracer)"; tracersEvery = 4; };
    class FA_20Rnd_762_M80A2_HV_T_Orange: FA_20Rnd_762_M80A2_HV { ammo = "FA_762_M80A2_HV_T_Orange"; displayName = "[Ghost] 20Rnd 7.62 M80A2 HV (Orange Tracer)"; tracersEvery = 4; };
    class FA_20Rnd_762_M80A2_HV_T_IR: FA_20Rnd_762_M80A2_HV { ammo = "FA_762_M80A2_HV_T_IR"; displayName = "[Ghost] 20Rnd 7.62 M80A2 HV (IR Tracer)"; tracersEvery = 4; };

    // =========================================================
    // 7.62x51mm — XM751 CTEP (cased-telescoped, needs rated well)
    // =========================================================
    class FA_20Rnd_762_XM751_CTEP: 20Rnd_762x51_Mag {
        author = QAUTHOR;
        displayName = "[Ghost] 20Rnd 7.62 XM751 CTEP";
        descriptionShort = "7.62x51 XM751 CTEP (2039)<br/>Cased-telescoped, 140gr 2-stage tungsten";
        ammo = "FA_762_XM751_CTEP";
        initSpeed = 960;
        mass = 12;
    };
    class FA_20Rnd_762_XM751_CTEP_T_Red: FA_20Rnd_762_XM751_CTEP { ammo = "FA_762_XM751_CTEP_T_Red"; displayName = "[Ghost] 20Rnd 7.62 XM751 CTEP (Red Tracer)"; tracersEvery = 4; };
    class FA_20Rnd_762_XM751_CTEP_T_Yellow: FA_20Rnd_762_XM751_CTEP { ammo = "FA_762_XM751_CTEP_T_Yellow"; displayName = "[Ghost] 20Rnd 7.62 XM751 CTEP (Yellow Tracer)"; tracersEvery = 4; };
    class FA_20Rnd_762_XM751_CTEP_T_Green: FA_20Rnd_762_XM751_CTEP { ammo = "FA_762_XM751_CTEP_T_Green"; displayName = "[Ghost] 20Rnd 7.62 XM751 CTEP (Green Tracer)"; tracersEvery = 4; };
    class FA_20Rnd_762_XM751_CTEP_T_White: FA_20Rnd_762_XM751_CTEP { ammo = "FA_762_XM751_CTEP_T_White"; displayName = "[Ghost] 20Rnd 7.62 XM751 CTEP (White Tracer)"; tracersEvery = 4; };
    class FA_20Rnd_762_XM751_CTEP_T_Blue: FA_20Rnd_762_XM751_CTEP { ammo = "FA_762_XM751_CTEP_T_Blue"; displayName = "[Ghost] 20Rnd 7.62 XM751 CTEP (Blue Tracer)"; tracersEvery = 4; };
    class FA_20Rnd_762_XM751_CTEP_T_Orange: FA_20Rnd_762_XM751_CTEP { ammo = "FA_762_XM751_CTEP_T_Orange"; displayName = "[Ghost] 20Rnd 7.62 XM751 CTEP (Orange Tracer)"; tracersEvery = 4; };
    class FA_20Rnd_762_XM751_CTEP_T_IR: FA_20Rnd_762_XM751_CTEP { ammo = "FA_762_XM751_CTEP_T_IR"; displayName = "[Ghost] 20Rnd 7.62 XM751 CTEP (IR Tracer)"; tracersEvery = 4; };

    // =========================================================
    // .300 BLK (subsonic) — Mk341 SUB-AP
    // =========================================================
    class FA_30Rnd_300_Mk341_SubAP: 30Rnd_556x45_Stanag {
        author = QAUTHOR;
        displayName = "[Ghost] 30Rnd 300BLK Mk341 SUB-AP";
        descriptionShort = ".300 BLK Mk341 SUB-AP (2033)<br/>Subsonic, 210gr tungsten, suppressed AP";
        ammo = "FA_300_Mk341_SubAP";
        initSpeed = 315;
        mass = 11;
    };
    class FA_30Rnd_300_Mk341_SubAP_T_Red: FA_30Rnd_300_Mk341_SubAP { ammo = "FA_300_Mk341_SubAP_T_Red"; displayName = "[Ghost] 30Rnd 300BLK Mk341 Sub-AP (Red Tracer)"; tracersEvery = 4; };
    class FA_30Rnd_300_Mk341_SubAP_T_Yellow: FA_30Rnd_300_Mk341_SubAP { ammo = "FA_300_Mk341_SubAP_T_Yellow"; displayName = "[Ghost] 30Rnd 300BLK Mk341 Sub-AP (Yellow Tracer)"; tracersEvery = 4; };
    class FA_30Rnd_300_Mk341_SubAP_T_Green: FA_30Rnd_300_Mk341_SubAP { ammo = "FA_300_Mk341_SubAP_T_Green"; displayName = "[Ghost] 30Rnd 300BLK Mk341 Sub-AP (Green Tracer)"; tracersEvery = 4; };
    class FA_30Rnd_300_Mk341_SubAP_T_White: FA_30Rnd_300_Mk341_SubAP { ammo = "FA_300_Mk341_SubAP_T_White"; displayName = "[Ghost] 30Rnd 300BLK Mk341 Sub-AP (White Tracer)"; tracersEvery = 4; };
    class FA_30Rnd_300_Mk341_SubAP_T_Blue: FA_30Rnd_300_Mk341_SubAP { ammo = "FA_300_Mk341_SubAP_T_Blue"; displayName = "[Ghost] 30Rnd 300BLK Mk341 Sub-AP (Blue Tracer)"; tracersEvery = 4; };
    class FA_30Rnd_300_Mk341_SubAP_T_Orange: FA_30Rnd_300_Mk341_SubAP { ammo = "FA_300_Mk341_SubAP_T_Orange"; displayName = "[Ghost] 30Rnd 300BLK Mk341 Sub-AP (Orange Tracer)"; tracersEvery = 4; };
    class FA_30Rnd_300_Mk341_SubAP_T_IR: FA_30Rnd_300_Mk341_SubAP { ammo = "FA_300_Mk341_SubAP_T_IR"; displayName = "[Ghost] 30Rnd 300BLK Mk341 Sub-AP (IR Tracer)"; tracersEvery = 4; };

    // =========================================================
    // .300 BLK (subsonic) — XM345 SUB-AP2
    // =========================================================
    class FA_30Rnd_300_XM345_SubAP2: 30Rnd_556x45_Stanag {
        author = QAUTHOR;
        displayName = "[Ghost] 30Rnd 300BLK XM345 SUB-AP2";
        descriptionShort = ".300 BLK XM345 SUB-AP2 (2039)<br/>Subsonic, 220gr 2-stage tungsten";
        ammo = "FA_300_XM345_SubAP2";
        initSpeed = 312;
        mass = 11;
    };
    class FA_30Rnd_300_XM345_SubAP2_T_Red: FA_30Rnd_300_XM345_SubAP2 { ammo = "FA_300_XM345_SubAP2_T_Red"; displayName = "[Ghost] 30Rnd 300BLK XM345 Sub-AP2 (Red Tracer)"; tracersEvery = 4; };
    class FA_30Rnd_300_XM345_SubAP2_T_Yellow: FA_30Rnd_300_XM345_SubAP2 { ammo = "FA_300_XM345_SubAP2_T_Yellow"; displayName = "[Ghost] 30Rnd 300BLK XM345 Sub-AP2 (Yellow Tracer)"; tracersEvery = 4; };
    class FA_30Rnd_300_XM345_SubAP2_T_Green: FA_30Rnd_300_XM345_SubAP2 { ammo = "FA_300_XM345_SubAP2_T_Green"; displayName = "[Ghost] 30Rnd 300BLK XM345 Sub-AP2 (Green Tracer)"; tracersEvery = 4; };
    class FA_30Rnd_300_XM345_SubAP2_T_White: FA_30Rnd_300_XM345_SubAP2 { ammo = "FA_300_XM345_SubAP2_T_White"; displayName = "[Ghost] 30Rnd 300BLK XM345 Sub-AP2 (White Tracer)"; tracersEvery = 4; };
    class FA_30Rnd_300_XM345_SubAP2_T_Blue: FA_30Rnd_300_XM345_SubAP2 { ammo = "FA_300_XM345_SubAP2_T_Blue"; displayName = "[Ghost] 30Rnd 300BLK XM345 Sub-AP2 (Blue Tracer)"; tracersEvery = 4; };
    class FA_30Rnd_300_XM345_SubAP2_T_Orange: FA_30Rnd_300_XM345_SubAP2 { ammo = "FA_300_XM345_SubAP2_T_Orange"; displayName = "[Ghost] 30Rnd 300BLK XM345 Sub-AP2 (Orange Tracer)"; tracersEvery = 4; };
    class FA_30Rnd_300_XM345_SubAP2_T_IR: FA_30Rnd_300_XM345_SubAP2 { ammo = "FA_300_XM345_SubAP2_T_IR"; displayName = "[Ghost] 30Rnd 300BLK XM345 Sub-AP2 (IR Tracer)"; tracersEvery = 4; };

    // =========================================================
    // .338 LM — Mk371 LRP Mod 0 (250gr, fast)
    // =========================================================
    class FA_10Rnd_338_Mk371_250gr: 10Rnd_338_Mag {
        author = QAUTHOR;
        displayName = "[Ghost] 10Rnd .338 Mk371 LRP (250gr)";
        descriptionShort = ".338 LM Mk371 LRP-250 (2033)<br/>Hybrid case, 250gr tungsten - fast";
        ammo = "FA_338_Mk371_250gr";
        initSpeed = 905;
        mass = 8;
    };

    // =========================================================
    // .338 LM — Mk371 LRP Mod 1 (285gr, balanced)
    // =========================================================
    class FA_10Rnd_338_Mk371_285gr: 10Rnd_338_Mag {
        author = QAUTHOR;
        displayName = "[Ghost] 10Rnd .338 Mk371 LRP (285gr)";
        descriptionShort = ".338 LM Mk371 LRP-285 (2033)<br/>Hybrid case, 285gr tungsten - balanced";
        ammo = "FA_338_Mk371_285gr";
        initSpeed = 870;
        mass = 9;
    };

    // =========================================================
    // .338 LM — Mk371 LRP Mod 2 (300gr, extreme range)
    // =========================================================
    class FA_10Rnd_338_Mk371_300gr: 10Rnd_338_Mag {
        author = QAUTHOR;
        displayName = "[Ghost] 10Rnd .338 Mk371 LRP (300gr)";
        descriptionShort = ".338 LM Mk371 LRP-300 (2033)<br/>Hybrid case, 300gr tungsten - extreme range";
        ammo = "FA_338_Mk371_300gr";
        initSpeed = 830;
        mass = 10;
    };

    // =========================================================
    // .300 BLK (supersonic) — Mk335 (110gr light)
    // =========================================================
    class FA_30Rnd_300_Mk335: 30Rnd_556x45_Stanag {
        author = QAUTHOR;
        displayName = "[Ghost] 30Rnd 300BLK Mk335 (110gr)";
        descriptionShort = ".300 BLK Mk335 (2033)<br/>110gr light supersonic";
        ammo = "FA_300_Mk335";
        initSpeed = 725;
        mass = 7;
    };
    class FA_30Rnd_300_Mk335_T_Red: FA_30Rnd_300_Mk335 { ammo = "FA_300_Mk335_T_Red"; displayName = "[Ghost] 30Rnd 300BLK Mk335 110gr (Red Tracer)"; tracersEvery = 4; };
    class FA_30Rnd_300_Mk335_T_Yellow: FA_30Rnd_300_Mk335 { ammo = "FA_300_Mk335_T_Yellow"; displayName = "[Ghost] 30Rnd 300BLK Mk335 110gr (Yellow Tracer)"; tracersEvery = 4; };
    class FA_30Rnd_300_Mk335_T_Green: FA_30Rnd_300_Mk335 { ammo = "FA_300_Mk335_T_Green"; displayName = "[Ghost] 30Rnd 300BLK Mk335 110gr (Green Tracer)"; tracersEvery = 4; };
    class FA_30Rnd_300_Mk335_T_White: FA_30Rnd_300_Mk335 { ammo = "FA_300_Mk335_T_White"; displayName = "[Ghost] 30Rnd 300BLK Mk335 110gr (White Tracer)"; tracersEvery = 4; };
    class FA_30Rnd_300_Mk335_T_Blue: FA_30Rnd_300_Mk335 { ammo = "FA_300_Mk335_T_Blue"; displayName = "[Ghost] 30Rnd 300BLK Mk335 110gr (Blue Tracer)"; tracersEvery = 4; };
    class FA_30Rnd_300_Mk335_T_Orange: FA_30Rnd_300_Mk335 { ammo = "FA_300_Mk335_T_Orange"; displayName = "[Ghost] 30Rnd 300BLK Mk335 110gr (Orange Tracer)"; tracersEvery = 4; };
    class FA_30Rnd_300_Mk335_T_IR: FA_30Rnd_300_Mk335 { ammo = "FA_300_Mk335_T_IR"; displayName = "[Ghost] 30Rnd 300BLK Mk335 110gr (IR Tracer)"; tracersEvery = 4; };

    // =========================================================
    // .300 BLK (supersonic) — Mk336 (125gr standard)
    // =========================================================
    class FA_30Rnd_300_Mk336: 30Rnd_556x45_Stanag {
        author = QAUTHOR;
        displayName = "[Ghost] 30Rnd 300BLK Mk336 (125gr)";
        descriptionShort = ".300 BLK Mk336 (2033)<br/>125gr standard supersonic";
        ammo = "FA_300_Mk336";
        initSpeed = 675;
        mass = 8;
    };
    class FA_30Rnd_300_Mk336_T_Red: FA_30Rnd_300_Mk336 { ammo = "FA_300_Mk336_T_Red"; displayName = "[Ghost] 30Rnd 300BLK Mk336 125gr (Red Tracer)"; tracersEvery = 4; };
    class FA_30Rnd_300_Mk336_T_Yellow: FA_30Rnd_300_Mk336 { ammo = "FA_300_Mk336_T_Yellow"; displayName = "[Ghost] 30Rnd 300BLK Mk336 125gr (Yellow Tracer)"; tracersEvery = 4; };
    class FA_30Rnd_300_Mk336_T_Green: FA_30Rnd_300_Mk336 { ammo = "FA_300_Mk336_T_Green"; displayName = "[Ghost] 30Rnd 300BLK Mk336 125gr (Green Tracer)"; tracersEvery = 4; };
    class FA_30Rnd_300_Mk336_T_White: FA_30Rnd_300_Mk336 { ammo = "FA_300_Mk336_T_White"; displayName = "[Ghost] 30Rnd 300BLK Mk336 125gr (White Tracer)"; tracersEvery = 4; };
    class FA_30Rnd_300_Mk336_T_Blue: FA_30Rnd_300_Mk336 { ammo = "FA_300_Mk336_T_Blue"; displayName = "[Ghost] 30Rnd 300BLK Mk336 125gr (Blue Tracer)"; tracersEvery = 4; };
    class FA_30Rnd_300_Mk336_T_Orange: FA_30Rnd_300_Mk336 { ammo = "FA_300_Mk336_T_Orange"; displayName = "[Ghost] 30Rnd 300BLK Mk336 125gr (Orange Tracer)"; tracersEvery = 4; };
    class FA_30Rnd_300_Mk336_T_IR: FA_30Rnd_300_Mk336 { ammo = "FA_300_Mk336_T_IR"; displayName = "[Ghost] 30Rnd 300BLK Mk336 125gr (IR Tracer)"; tracersEvery = 4; };

    // =========================================================
    // .300 BLK (supersonic) — Mk337 (150gr heavy)
    // =========================================================
    class FA_30Rnd_300_Mk337: 30Rnd_556x45_Stanag {
        author = QAUTHOR;
        displayName = "[Ghost] 30Rnd 300BLK Mk337 (150gr)";
        descriptionShort = ".300 BLK Mk337 (2033)<br/>150gr heavy supersonic";
        ammo = "FA_300_Mk337";
        initSpeed = 620;
        mass = 9;
    };
    class FA_30Rnd_300_Mk337_T_Red: FA_30Rnd_300_Mk337 { ammo = "FA_300_Mk337_T_Red"; displayName = "[Ghost] 30Rnd 300BLK Mk337 150gr (Red Tracer)"; tracersEvery = 4; };
    class FA_30Rnd_300_Mk337_T_Yellow: FA_30Rnd_300_Mk337 { ammo = "FA_300_Mk337_T_Yellow"; displayName = "[Ghost] 30Rnd 300BLK Mk337 150gr (Yellow Tracer)"; tracersEvery = 4; };
    class FA_30Rnd_300_Mk337_T_Green: FA_30Rnd_300_Mk337 { ammo = "FA_300_Mk337_T_Green"; displayName = "[Ghost] 30Rnd 300BLK Mk337 150gr (Green Tracer)"; tracersEvery = 4; };
    class FA_30Rnd_300_Mk337_T_White: FA_30Rnd_300_Mk337 { ammo = "FA_300_Mk337_T_White"; displayName = "[Ghost] 30Rnd 300BLK Mk337 150gr (White Tracer)"; tracersEvery = 4; };
    class FA_30Rnd_300_Mk337_T_Blue: FA_30Rnd_300_Mk337 { ammo = "FA_300_Mk337_T_Blue"; displayName = "[Ghost] 30Rnd 300BLK Mk337 150gr (Blue Tracer)"; tracersEvery = 4; };
    class FA_30Rnd_300_Mk337_T_Orange: FA_30Rnd_300_Mk337 { ammo = "FA_300_Mk337_T_Orange"; displayName = "[Ghost] 30Rnd 300BLK Mk337 150gr (Orange Tracer)"; tracersEvery = 4; };
    class FA_30Rnd_300_Mk337_T_IR: FA_30Rnd_300_Mk337 { ammo = "FA_300_Mk337_T_IR"; displayName = "[Ghost] 30Rnd 300BLK Mk337 150gr (IR Tracer)"; tracersEvery = 4; };

    // =========================================================
    // .300 BLK (subsonic) — Mk342 (190gr)
    // =========================================================
    class FA_30Rnd_300_Mk342_Sub: 30Rnd_556x45_Stanag {
        author = QAUTHOR;
        displayName = "[Ghost] 30Rnd 300BLK Mk342 Sub (190gr)";
        descriptionShort = ".300 BLK Mk342 Sub (2033)<br/>190gr subsonic, suppressed";
        ammo = "FA_300_Mk342_Sub";
        initSpeed = 318;
        mass = 10;
    };
    class FA_30Rnd_300_Mk342_Sub_T_Red: FA_30Rnd_300_Mk342_Sub { ammo = "FA_300_Mk342_Sub_T_Red"; displayName = "[Ghost] 30Rnd 300BLK Mk342 Sub 190gr (Red Tracer)"; tracersEvery = 4; };
    class FA_30Rnd_300_Mk342_Sub_T_Yellow: FA_30Rnd_300_Mk342_Sub { ammo = "FA_300_Mk342_Sub_T_Yellow"; displayName = "[Ghost] 30Rnd 300BLK Mk342 Sub 190gr (Yellow Tracer)"; tracersEvery = 4; };
    class FA_30Rnd_300_Mk342_Sub_T_Green: FA_30Rnd_300_Mk342_Sub { ammo = "FA_300_Mk342_Sub_T_Green"; displayName = "[Ghost] 30Rnd 300BLK Mk342 Sub 190gr (Green Tracer)"; tracersEvery = 4; };
    class FA_30Rnd_300_Mk342_Sub_T_White: FA_30Rnd_300_Mk342_Sub { ammo = "FA_300_Mk342_Sub_T_White"; displayName = "[Ghost] 30Rnd 300BLK Mk342 Sub 190gr (White Tracer)"; tracersEvery = 4; };
    class FA_30Rnd_300_Mk342_Sub_T_Blue: FA_30Rnd_300_Mk342_Sub { ammo = "FA_300_Mk342_Sub_T_Blue"; displayName = "[Ghost] 30Rnd 300BLK Mk342 Sub 190gr (Blue Tracer)"; tracersEvery = 4; };
    class FA_30Rnd_300_Mk342_Sub_T_Orange: FA_30Rnd_300_Mk342_Sub { ammo = "FA_300_Mk342_Sub_T_Orange"; displayName = "[Ghost] 30Rnd 300BLK Mk342 Sub 190gr (Orange Tracer)"; tracersEvery = 4; };
    class FA_30Rnd_300_Mk342_Sub_T_IR: FA_30Rnd_300_Mk342_Sub { ammo = "FA_300_Mk342_Sub_T_IR"; displayName = "[Ghost] 30Rnd 300BLK Mk342 Sub 190gr (IR Tracer)"; tracersEvery = 4; };

    // =========================================================
    // .300 BLK (subsonic) — Mk343 (220gr heavy)
    // =========================================================
    class FA_30Rnd_300_Mk343_Sub: 30Rnd_556x45_Stanag {
        author = QAUTHOR;
        displayName = "[Ghost] 30Rnd 300BLK Mk343 Sub (220gr)";
        descriptionShort = ".300 BLK Mk343 Sub (2033)<br/>220gr heavy subsonic, best BC";
        ammo = "FA_300_Mk343_Sub";
        initSpeed = 305;
        mass = 11;
    };
    class FA_30Rnd_300_Mk343_Sub_T_Red: FA_30Rnd_300_Mk343_Sub { ammo = "FA_300_Mk343_Sub_T_Red"; displayName = "[Ghost] 30Rnd 300BLK Mk343 Sub 220gr (Red Tracer)"; tracersEvery = 4; };
    class FA_30Rnd_300_Mk343_Sub_T_Yellow: FA_30Rnd_300_Mk343_Sub { ammo = "FA_300_Mk343_Sub_T_Yellow"; displayName = "[Ghost] 30Rnd 300BLK Mk343 Sub 220gr (Yellow Tracer)"; tracersEvery = 4; };
    class FA_30Rnd_300_Mk343_Sub_T_Green: FA_30Rnd_300_Mk343_Sub { ammo = "FA_300_Mk343_Sub_T_Green"; displayName = "[Ghost] 30Rnd 300BLK Mk343 Sub 220gr (Green Tracer)"; tracersEvery = 4; };
    class FA_30Rnd_300_Mk343_Sub_T_White: FA_30Rnd_300_Mk343_Sub { ammo = "FA_300_Mk343_Sub_T_White"; displayName = "[Ghost] 30Rnd 300BLK Mk343 Sub 220gr (White Tracer)"; tracersEvery = 4; };
    class FA_30Rnd_300_Mk343_Sub_T_Blue: FA_30Rnd_300_Mk343_Sub { ammo = "FA_300_Mk343_Sub_T_Blue"; displayName = "[Ghost] 30Rnd 300BLK Mk343 Sub 220gr (Blue Tracer)"; tracersEvery = 4; };
    class FA_30Rnd_300_Mk343_Sub_T_Orange: FA_30Rnd_300_Mk343_Sub { ammo = "FA_300_Mk343_Sub_T_Orange"; displayName = "[Ghost] 30Rnd 300BLK Mk343 Sub 220gr (Orange Tracer)"; tracersEvery = 4; };
    class FA_30Rnd_300_Mk343_Sub_T_IR: FA_30Rnd_300_Mk343_Sub { ammo = "FA_300_Mk343_Sub_T_IR"; displayName = "[Ghost] 30Rnd 300BLK Mk343 Sub 220gr (IR Tracer)"; tracersEvery = 4; };

    // =========================================================
    // .338 NM — Mk372 MMG — 200Rnd belt
    // =========================================================
    class FA_200Rnd_338_Mk372: 200Rnd_338_Mag {
        author = QAUTHOR;
        displayName = "[Ghost] 200Rnd .338NM Mk372 MMG";
        descriptionShort = ".338 Norma Mk372 MMG (2033)<br/>Hybrid case, tungsten-core HV";
        ammo = "FA_338_Mk372";
        initSpeed = 810;
        mass = 40;
    };
    class FA_200Rnd_338_Mk372_T_Red: FA_200Rnd_338_Mk372 { ammo = "FA_338_Mk372_T_Red"; displayName = "[Ghost] 200Rnd .338NM Mk372 MMG (Red Tracer)"; tracersEvery = 4; };
    class FA_200Rnd_338_Mk372_T_Yellow: FA_200Rnd_338_Mk372 { ammo = "FA_338_Mk372_T_Yellow"; displayName = "[Ghost] 200Rnd .338NM Mk372 MMG (Yellow Tracer)"; tracersEvery = 4; };
    class FA_200Rnd_338_Mk372_T_Green: FA_200Rnd_338_Mk372 { ammo = "FA_338_Mk372_T_Green"; displayName = "[Ghost] 200Rnd .338NM Mk372 MMG (Green Tracer)"; tracersEvery = 4; };
    class FA_200Rnd_338_Mk372_T_White: FA_200Rnd_338_Mk372 { ammo = "FA_338_Mk372_T_White"; displayName = "[Ghost] 200Rnd .338NM Mk372 MMG (White Tracer)"; tracersEvery = 4; };
    class FA_200Rnd_338_Mk372_T_Blue: FA_200Rnd_338_Mk372 { ammo = "FA_338_Mk372_T_Blue"; displayName = "[Ghost] 200Rnd .338NM Mk372 MMG (Blue Tracer)"; tracersEvery = 4; };
    class FA_200Rnd_338_Mk372_T_Orange: FA_200Rnd_338_Mk372 { ammo = "FA_338_Mk372_T_Orange"; displayName = "[Ghost] 200Rnd .338NM Mk372 MMG (Orange Tracer)"; tracersEvery = 4; };
    class FA_200Rnd_338_Mk372_T_IR: FA_200Rnd_338_Mk372 { ammo = "FA_338_Mk372_T_IR"; displayName = "[Ghost] 200Rnd .338NM Mk372 MMG (IR Tracer)"; tracersEvery = 4; };

    // =========================================================
    // .338 NM — Mk372 MMG — 130Rnd belt
    // =========================================================
    class FA_130Rnd_338_Mk372: 130Rnd_338_Mag {
        author = QAUTHOR;
        displayName = "[Ghost] 130Rnd .338NM Mk372 MMG";
        descriptionShort = ".338 Norma Mk372 MMG (2033)<br/>Hybrid case, tungsten-core HV";
        ammo = "FA_338_Mk372";
        initSpeed = 810;
        mass = 28;
    };
    class FA_130Rnd_338_Mk372_T_Red: FA_130Rnd_338_Mk372 { ammo = "FA_338_Mk372_T_Red"; displayName = "[Ghost] 130Rnd .338NM Mk372 MMG (Red Tracer)"; tracersEvery = 4; };
    class FA_130Rnd_338_Mk372_T_Yellow: FA_130Rnd_338_Mk372 { ammo = "FA_338_Mk372_T_Yellow"; displayName = "[Ghost] 130Rnd .338NM Mk372 MMG (Yellow Tracer)"; tracersEvery = 4; };
    class FA_130Rnd_338_Mk372_T_Green: FA_130Rnd_338_Mk372 { ammo = "FA_338_Mk372_T_Green"; displayName = "[Ghost] 130Rnd .338NM Mk372 MMG (Green Tracer)"; tracersEvery = 4; };
    class FA_130Rnd_338_Mk372_T_White: FA_130Rnd_338_Mk372 { ammo = "FA_338_Mk372_T_White"; displayName = "[Ghost] 130Rnd .338NM Mk372 MMG (White Tracer)"; tracersEvery = 4; };
    class FA_130Rnd_338_Mk372_T_Blue: FA_130Rnd_338_Mk372 { ammo = "FA_338_Mk372_T_Blue"; displayName = "[Ghost] 130Rnd .338NM Mk372 MMG (Blue Tracer)"; tracersEvery = 4; };
    class FA_130Rnd_338_Mk372_T_Orange: FA_130Rnd_338_Mk372 { ammo = "FA_338_Mk372_T_Orange"; displayName = "[Ghost] 130Rnd .338NM Mk372 MMG (Orange Tracer)"; tracersEvery = 4; };
    class FA_130Rnd_338_Mk372_T_IR: FA_130Rnd_338_Mk372 { ammo = "FA_338_Mk372_T_IR"; displayName = "[Ghost] 130Rnd .338NM Mk372 MMG (IR Tracer)"; tracersEvery = 4; };

    // =========================================================
    // 6.5x39 Caseless EPR — MX family only
    // =========================================================
    class FA_30Rnd_65_EPR: 30Rnd_65x39_caseless_mag {
        author = QAUTHOR;
        displayName = "[Ghost] 30Rnd 6.5 Caseless EPR";
        descriptionShort = "6.5x39 Caseless EPR (2035)<br/>Tungsten, MX family only";
        ammo = "FA_65_EPR";
        initSpeed = 820;
        mass = 7;
    };
    class FA_30Rnd_65_EPR_T_Red: FA_30Rnd_65_EPR { ammo = "FA_65_EPR_T_Red"; displayName = "[Ghost] 30Rnd 6.5 Caseless EPR (Red Tracer)"; tracersEvery = 4; };
    class FA_30Rnd_65_EPR_T_Yellow: FA_30Rnd_65_EPR { ammo = "FA_65_EPR_T_Yellow"; displayName = "[Ghost] 30Rnd 6.5 Caseless EPR (Yellow Tracer)"; tracersEvery = 4; };
    class FA_30Rnd_65_EPR_T_Green: FA_30Rnd_65_EPR { ammo = "FA_65_EPR_T_Green"; displayName = "[Ghost] 30Rnd 6.5 Caseless EPR (Green Tracer)"; tracersEvery = 4; };
    class FA_30Rnd_65_EPR_T_White: FA_30Rnd_65_EPR { ammo = "FA_65_EPR_T_White"; displayName = "[Ghost] 30Rnd 6.5 Caseless EPR (White Tracer)"; tracersEvery = 4; };
    class FA_30Rnd_65_EPR_T_Blue: FA_30Rnd_65_EPR { ammo = "FA_65_EPR_T_Blue"; displayName = "[Ghost] 30Rnd 6.5 Caseless EPR (Blue Tracer)"; tracersEvery = 4; };
    class FA_30Rnd_65_EPR_T_Orange: FA_30Rnd_65_EPR { ammo = "FA_65_EPR_T_Orange"; displayName = "[Ghost] 30Rnd 6.5 Caseless EPR (Orange Tracer)"; tracersEvery = 4; };
    class FA_30Rnd_65_EPR_T_IR: FA_30Rnd_65_EPR { ammo = "FA_65_EPR_T_IR"; displayName = "[Ghost] 30Rnd 6.5 Caseless EPR (IR Tracer)"; tracersEvery = 4; };

    class FA_30Rnd_65_EPR_Black: 30Rnd_65x39_caseless_black_mag {
        author = QAUTHOR;
        displayName = "[Ghost] 30Rnd 6.5 Caseless EPR (Black)";
        descriptionShort = "6.5x39 Caseless EPR (2035)<br/>Tungsten, MX family only";
        ammo = "FA_65_EPR";
        initSpeed = 820;
        mass = 7;
    };
    class FA_30Rnd_65_EPR_Black_T_Red: FA_30Rnd_65_EPR_Black { ammo = "FA_65_EPR_T_Red"; displayName = "[Ghost] 30Rnd 6.5 Caseless EPR Black (Red Tracer)"; tracersEvery = 4; };
    class FA_30Rnd_65_EPR_Black_T_Yellow: FA_30Rnd_65_EPR_Black { ammo = "FA_65_EPR_T_Yellow"; displayName = "[Ghost] 30Rnd 6.5 Caseless EPR Black (Yellow Tracer)"; tracersEvery = 4; };
    class FA_30Rnd_65_EPR_Black_T_Green: FA_30Rnd_65_EPR_Black { ammo = "FA_65_EPR_T_Green"; displayName = "[Ghost] 30Rnd 6.5 Caseless EPR Black (Green Tracer)"; tracersEvery = 4; };
    class FA_30Rnd_65_EPR_Black_T_White: FA_30Rnd_65_EPR_Black { ammo = "FA_65_EPR_T_White"; displayName = "[Ghost] 30Rnd 6.5 Caseless EPR Black (White Tracer)"; tracersEvery = 4; };
    class FA_30Rnd_65_EPR_Black_T_Blue: FA_30Rnd_65_EPR_Black { ammo = "FA_65_EPR_T_Blue"; displayName = "[Ghost] 30Rnd 6.5 Caseless EPR Black (Blue Tracer)"; tracersEvery = 4; };
    class FA_30Rnd_65_EPR_Black_T_Orange: FA_30Rnd_65_EPR_Black { ammo = "FA_65_EPR_T_Orange"; displayName = "[Ghost] 30Rnd 6.5 Caseless EPR Black (Orange Tracer)"; tracersEvery = 4; };
    class FA_30Rnd_65_EPR_Black_T_IR: FA_30Rnd_65_EPR_Black { ammo = "FA_65_EPR_T_IR"; displayName = "[Ghost] 30Rnd 6.5 Caseless EPR Black (IR Tracer)"; tracersEvery = 4; };

    class FA_30Rnd_65_EPR_Green: 30Rnd_65x39_caseless_green {
        author = QAUTHOR;
        displayName = "[Ghost] 30Rnd 6.5 Caseless EPR (Green)";
        descriptionShort = "6.5x39 Caseless EPR (2035)<br/>Tungsten, MX family only";
        ammo = "FA_65_EPR";
        initSpeed = 820;
        mass = 7;
    };
    class FA_30Rnd_65_EPR_Green_T_Red: FA_30Rnd_65_EPR_Green { ammo = "FA_65_EPR_T_Red"; displayName = "[Ghost] 30Rnd 6.5 Caseless EPR Green (Red Tracer)"; tracersEvery = 4; };
    class FA_30Rnd_65_EPR_Green_T_Yellow: FA_30Rnd_65_EPR_Green { ammo = "FA_65_EPR_T_Yellow"; displayName = "[Ghost] 30Rnd 6.5 Caseless EPR Green (Yellow Tracer)"; tracersEvery = 4; };
    class FA_30Rnd_65_EPR_Green_T_Green: FA_30Rnd_65_EPR_Green { ammo = "FA_65_EPR_T_Green"; displayName = "[Ghost] 30Rnd 6.5 Caseless EPR Green (Green Tracer)"; tracersEvery = 4; };
    class FA_30Rnd_65_EPR_Green_T_White: FA_30Rnd_65_EPR_Green { ammo = "FA_65_EPR_T_White"; displayName = "[Ghost] 30Rnd 6.5 Caseless EPR Green (White Tracer)"; tracersEvery = 4; };
    class FA_30Rnd_65_EPR_Green_T_Blue: FA_30Rnd_65_EPR_Green { ammo = "FA_65_EPR_T_Blue"; displayName = "[Ghost] 30Rnd 6.5 Caseless EPR Green (Blue Tracer)"; tracersEvery = 4; };
    class FA_30Rnd_65_EPR_Green_T_Orange: FA_30Rnd_65_EPR_Green { ammo = "FA_65_EPR_T_Orange"; displayName = "[Ghost] 30Rnd 6.5 Caseless EPR Green (Orange Tracer)"; tracersEvery = 4; };
    class FA_30Rnd_65_EPR_Green_T_IR: FA_30Rnd_65_EPR_Green { ammo = "FA_65_EPR_T_IR"; displayName = "[Ghost] 30Rnd 6.5 Caseless EPR Green (IR Tracer)"; tracersEvery = 4; };

    class FA_30Rnd_65_EPR_MSBS: 30Rnd_65x39_caseless_msbs_mag {
        author = QAUTHOR;
        displayName = "[Ghost] 30Rnd 6.5 Caseless EPR (MSBS)";
        descriptionShort = "6.5x39 Caseless EPR (2035)<br/>Tungsten, MSBS family";
        ammo = "FA_65_EPR";
        initSpeed = 820;
        mass = 7;
    };
    class FA_30Rnd_65_EPR_MSBS_T_Red: FA_30Rnd_65_EPR_MSBS { ammo = "FA_65_EPR_T_Red"; displayName = "[Ghost] 30Rnd 6.5 Caseless EPR MSBS (Red Tracer)"; tracersEvery = 4; };
    class FA_30Rnd_65_EPR_MSBS_T_Yellow: FA_30Rnd_65_EPR_MSBS { ammo = "FA_65_EPR_T_Yellow"; displayName = "[Ghost] 30Rnd 6.5 Caseless EPR MSBS (Yellow Tracer)"; tracersEvery = 4; };
    class FA_30Rnd_65_EPR_MSBS_T_Green: FA_30Rnd_65_EPR_MSBS { ammo = "FA_65_EPR_T_Green"; displayName = "[Ghost] 30Rnd 6.5 Caseless EPR MSBS (Green Tracer)"; tracersEvery = 4; };
    class FA_30Rnd_65_EPR_MSBS_T_White: FA_30Rnd_65_EPR_MSBS { ammo = "FA_65_EPR_T_White"; displayName = "[Ghost] 30Rnd 6.5 Caseless EPR MSBS (White Tracer)"; tracersEvery = 4; };
    class FA_30Rnd_65_EPR_MSBS_T_Blue: FA_30Rnd_65_EPR_MSBS { ammo = "FA_65_EPR_T_Blue"; displayName = "[Ghost] 30Rnd 6.5 Caseless EPR MSBS (Blue Tracer)"; tracersEvery = 4; };
    class FA_30Rnd_65_EPR_MSBS_T_Orange: FA_30Rnd_65_EPR_MSBS { ammo = "FA_65_EPR_T_Orange"; displayName = "[Ghost] 30Rnd 6.5 Caseless EPR MSBS (Orange Tracer)"; tracersEvery = 4; };
    class FA_30Rnd_65_EPR_MSBS_T_IR: FA_30Rnd_65_EPR_MSBS { ammo = "FA_65_EPR_T_IR"; displayName = "[Ghost] 30Rnd 6.5 Caseless EPR MSBS (IR Tracer)"; tracersEvery = 4; };

    // =========================================================
    // 7.62x39mm — 7N43 Kremen — BI vanilla 30Rnd
    // =========================================================
    class FA_30Rnd_762x39_7N43: 30Rnd_762x39_Mag_F {
        author = QAUTHOR;
        displayName = "[Ghost] 30Rnd 7.62x39 7N43 Kremen";
        descriptionShort = "7.62x39 7N43 Kremen (2034)<br/>Hybrid case, 116gr tungsten";
        ammo = "FA_762x39_7N43";
        initSpeed = 820;
        mass = 7;
    };
    class FA_30Rnd_762x39_7N43_T_Red: FA_30Rnd_762x39_7N43 { ammo = "FA_762x39_7N43_T_Red"; displayName = "[Ghost] 30Rnd 7.62x39 7N43 (Red Tracer)"; tracersEvery = 4; };
    class FA_30Rnd_762x39_7N43_T_Yellow: FA_30Rnd_762x39_7N43 { ammo = "FA_762x39_7N43_T_Yellow"; displayName = "[Ghost] 30Rnd 7.62x39 7N43 (Yellow Tracer)"; tracersEvery = 4; };
    class FA_30Rnd_762x39_7N43_T_Green: FA_30Rnd_762x39_7N43 { ammo = "FA_762x39_7N43_T_Green"; displayName = "[Ghost] 30Rnd 7.62x39 7N43 (Green Tracer)"; tracersEvery = 4; };
    class FA_30Rnd_762x39_7N43_T_White: FA_30Rnd_762x39_7N43 { ammo = "FA_762x39_7N43_T_White"; displayName = "[Ghost] 30Rnd 7.62x39 7N43 (White Tracer)"; tracersEvery = 4; };
    class FA_30Rnd_762x39_7N43_T_Blue: FA_30Rnd_762x39_7N43 { ammo = "FA_762x39_7N43_T_Blue"; displayName = "[Ghost] 30Rnd 7.62x39 7N43 (Blue Tracer)"; tracersEvery = 4; };
    class FA_30Rnd_762x39_7N43_T_Orange: FA_30Rnd_762x39_7N43 { ammo = "FA_762x39_7N43_T_Orange"; displayName = "[Ghost] 30Rnd 7.62x39 7N43 (Orange Tracer)"; tracersEvery = 4; };
    class FA_30Rnd_762x39_7N43_T_IR: FA_30Rnd_762x39_7N43 { ammo = "FA_762x39_7N43_T_IR"; displayName = "[Ghost] 30Rnd 7.62x39 7N43 (IR Tracer)"; tracersEvery = 4; };

    // =========================================================
    // 7.62x39mm — 7N43 Kremen — BI vanilla 30Rnd Green
    // =========================================================
    class FA_30Rnd_762x39_7N43_Green: 30Rnd_762x39_Mag_Green_F {
        author = QAUTHOR;
        displayName = "[Ghost] 30Rnd 7.62x39 7N43 Kremen (Green)";
        descriptionShort = "7.62x39 7N43 Kremen (2034)<br/>Hybrid case, 116gr tungsten";
        ammo = "FA_762x39_7N43";
        initSpeed = 820;
        mass = 7;
    };
    class FA_30Rnd_762x39_7N43_Green_T_Red: FA_30Rnd_762x39_7N43_Green { ammo = "FA_762x39_7N43_T_Red"; displayName = "[Ghost] 30Rnd 7.62x39 7N43 Green (Red Tracer)"; tracersEvery = 4; };
    class FA_30Rnd_762x39_7N43_Green_T_Yellow: FA_30Rnd_762x39_7N43_Green { ammo = "FA_762x39_7N43_T_Yellow"; displayName = "[Ghost] 30Rnd 7.62x39 7N43 Green (Yellow Tracer)"; tracersEvery = 4; };
    class FA_30Rnd_762x39_7N43_Green_T_Green: FA_30Rnd_762x39_7N43_Green { ammo = "FA_762x39_7N43_T_Green"; displayName = "[Ghost] 30Rnd 7.62x39 7N43 Green (Green Tracer)"; tracersEvery = 4; };
    class FA_30Rnd_762x39_7N43_Green_T_White: FA_30Rnd_762x39_7N43_Green { ammo = "FA_762x39_7N43_T_White"; displayName = "[Ghost] 30Rnd 7.62x39 7N43 Green (White Tracer)"; tracersEvery = 4; };
    class FA_30Rnd_762x39_7N43_Green_T_Blue: FA_30Rnd_762x39_7N43_Green { ammo = "FA_762x39_7N43_T_Blue"; displayName = "[Ghost] 30Rnd 7.62x39 7N43 Green (Blue Tracer)"; tracersEvery = 4; };
    class FA_30Rnd_762x39_7N43_Green_T_Orange: FA_30Rnd_762x39_7N43_Green { ammo = "FA_762x39_7N43_T_Orange"; displayName = "[Ghost] 30Rnd 7.62x39 7N43 Green (Orange Tracer)"; tracersEvery = 4; };
    class FA_30Rnd_762x39_7N43_Green_T_IR: FA_30Rnd_762x39_7N43_Green { ammo = "FA_762x39_7N43_T_IR"; displayName = "[Ghost] 30Rnd 7.62x39 7N43 Green (IR Tracer)"; tracersEvery = 4; };

    // =========================================================
    // 7.62x39mm — 7N43 Kremen — BI Enoch 30Rnd Lush
    // =========================================================
    class FA_30Rnd_762x39_7N43_Lush: 30Rnd_762x39_AK12_Lush_Mag_F {
        author = QAUTHOR;
        displayName = "[Ghost] 30Rnd 7.62x39 7N43 Kremen (Lush)";
        descriptionShort = "7.62x39 7N43 Kremen (2034)<br/>Hybrid case, 116gr tungsten";
        ammo = "FA_762x39_7N43";
        initSpeed = 820;
        mass = 7;
    };
    class FA_30Rnd_762x39_7N43_Lush_T_Red: FA_30Rnd_762x39_7N43_Lush { ammo = "FA_762x39_7N43_T_Red"; displayName = "[Ghost] 30Rnd 7.62x39 7N43 Lush (Red Tracer)"; tracersEvery = 4; };
    class FA_30Rnd_762x39_7N43_Lush_T_Yellow: FA_30Rnd_762x39_7N43_Lush { ammo = "FA_762x39_7N43_T_Yellow"; displayName = "[Ghost] 30Rnd 7.62x39 7N43 Lush (Yellow Tracer)"; tracersEvery = 4; };
    class FA_30Rnd_762x39_7N43_Lush_T_Green: FA_30Rnd_762x39_7N43_Lush { ammo = "FA_762x39_7N43_T_Green"; displayName = "[Ghost] 30Rnd 7.62x39 7N43 Lush (Green Tracer)"; tracersEvery = 4; };
    class FA_30Rnd_762x39_7N43_Lush_T_White: FA_30Rnd_762x39_7N43_Lush { ammo = "FA_762x39_7N43_T_White"; displayName = "[Ghost] 30Rnd 7.62x39 7N43 Lush (White Tracer)"; tracersEvery = 4; };
    class FA_30Rnd_762x39_7N43_Lush_T_Blue: FA_30Rnd_762x39_7N43_Lush { ammo = "FA_762x39_7N43_T_Blue"; displayName = "[Ghost] 30Rnd 7.62x39 7N43 Lush (Blue Tracer)"; tracersEvery = 4; };
    class FA_30Rnd_762x39_7N43_Lush_T_Orange: FA_30Rnd_762x39_7N43_Lush { ammo = "FA_762x39_7N43_T_Orange"; displayName = "[Ghost] 30Rnd 7.62x39 7N43 Lush (Orange Tracer)"; tracersEvery = 4; };
    class FA_30Rnd_762x39_7N43_Lush_T_IR: FA_30Rnd_762x39_7N43_Lush { ammo = "FA_762x39_7N43_T_IR"; displayName = "[Ghost] 30Rnd 7.62x39 7N43 Lush (IR Tracer)"; tracersEvery = 4; };

    // =========================================================
    // 7.62x39mm — 7N43 Kremen — BI Enoch 30Rnd Arid
    // =========================================================
    class FA_30Rnd_762x39_7N43_Arid: 30Rnd_762x39_AK12_Arid_Mag_F {
        author = QAUTHOR;
        displayName = "[Ghost] 30Rnd 7.62x39 7N43 Kremen (Arid)";
        descriptionShort = "7.62x39 7N43 Kremen (2034)<br/>Hybrid case, 116gr tungsten";
        ammo = "FA_762x39_7N43";
        initSpeed = 820;
        mass = 7;
    };
    class FA_30Rnd_762x39_7N43_Arid_T_Red: FA_30Rnd_762x39_7N43_Arid { ammo = "FA_762x39_7N43_T_Red"; displayName = "[Ghost] 30Rnd 7.62x39 7N43 Arid (Red Tracer)"; tracersEvery = 4; };
    class FA_30Rnd_762x39_7N43_Arid_T_Yellow: FA_30Rnd_762x39_7N43_Arid { ammo = "FA_762x39_7N43_T_Yellow"; displayName = "[Ghost] 30Rnd 7.62x39 7N43 Arid (Yellow Tracer)"; tracersEvery = 4; };
    class FA_30Rnd_762x39_7N43_Arid_T_Green: FA_30Rnd_762x39_7N43_Arid { ammo = "FA_762x39_7N43_T_Green"; displayName = "[Ghost] 30Rnd 7.62x39 7N43 Arid (Green Tracer)"; tracersEvery = 4; };
    class FA_30Rnd_762x39_7N43_Arid_T_White: FA_30Rnd_762x39_7N43_Arid { ammo = "FA_762x39_7N43_T_White"; displayName = "[Ghost] 30Rnd 7.62x39 7N43 Arid (White Tracer)"; tracersEvery = 4; };
    class FA_30Rnd_762x39_7N43_Arid_T_Blue: FA_30Rnd_762x39_7N43_Arid { ammo = "FA_762x39_7N43_T_Blue"; displayName = "[Ghost] 30Rnd 7.62x39 7N43 Arid (Blue Tracer)"; tracersEvery = 4; };
    class FA_30Rnd_762x39_7N43_Arid_T_Orange: FA_30Rnd_762x39_7N43_Arid { ammo = "FA_762x39_7N43_T_Orange"; displayName = "[Ghost] 30Rnd 7.62x39 7N43 Arid (Orange Tracer)"; tracersEvery = 4; };
    class FA_30Rnd_762x39_7N43_Arid_T_IR: FA_30Rnd_762x39_7N43_Arid { ammo = "FA_762x39_7N43_T_IR"; displayName = "[Ghost] 30Rnd 7.62x39 7N43 Arid (IR Tracer)"; tracersEvery = 4; };

    // =========================================================
    // 7.62x39mm — 7N43 Kremen — Enoch AK-12 base 30Rnd
    // =========================================================
    class FA_30Rnd_762x39_7N43_AK12: 30Rnd_762x39_AK12_Mag_F {
        author = QAUTHOR;
        displayName = "[Ghost] 30Rnd 7.62x39 7N43 Kremen (AK-12)";
        descriptionShort = "7.62x39 7N43 Kremen (2034)<br/>Hybrid case, 116gr tungsten";
        ammo = "FA_762x39_7N43";
        initSpeed = 820;
        mass = 7;
    };
    class FA_30Rnd_762x39_7N43_AK12_T_Red: FA_30Rnd_762x39_7N43_AK12 { ammo = "FA_762x39_7N43_T_Red"; displayName = "[Ghost] 30Rnd 7.62x39 7N43 AK-12 (Red Tracer)"; tracersEvery = 4; };
    class FA_30Rnd_762x39_7N43_AK12_T_Yellow: FA_30Rnd_762x39_7N43_AK12 { ammo = "FA_762x39_7N43_T_Yellow"; displayName = "[Ghost] 30Rnd 7.62x39 7N43 AK-12 (Yellow Tracer)"; tracersEvery = 4; };
    class FA_30Rnd_762x39_7N43_AK12_T_Green: FA_30Rnd_762x39_7N43_AK12 { ammo = "FA_762x39_7N43_T_Green"; displayName = "[Ghost] 30Rnd 7.62x39 7N43 AK-12 (Green Tracer)"; tracersEvery = 4; };
    class FA_30Rnd_762x39_7N43_AK12_T_White: FA_30Rnd_762x39_7N43_AK12 { ammo = "FA_762x39_7N43_T_White"; displayName = "[Ghost] 30Rnd 7.62x39 7N43 AK-12 (White Tracer)"; tracersEvery = 4; };
    class FA_30Rnd_762x39_7N43_AK12_T_Blue: FA_30Rnd_762x39_7N43_AK12 { ammo = "FA_762x39_7N43_T_Blue"; displayName = "[Ghost] 30Rnd 7.62x39 7N43 AK-12 (Blue Tracer)"; tracersEvery = 4; };
    class FA_30Rnd_762x39_7N43_AK12_T_Orange: FA_30Rnd_762x39_7N43_AK12 { ammo = "FA_762x39_7N43_T_Orange"; displayName = "[Ghost] 30Rnd 7.62x39 7N43 AK-12 (Orange Tracer)"; tracersEvery = 4; };
    class FA_30Rnd_762x39_7N43_AK12_T_IR: FA_30Rnd_762x39_7N43_AK12 { ammo = "FA_762x39_7N43_T_IR"; displayName = "[Ghost] 30Rnd 7.62x39 7N43 AK-12 (IR Tracer)"; tracersEvery = 4; };

    // =========================================================
    // 7.62x39mm — 7N43 Kremen — BI vanilla 75Rnd drum
    // =========================================================
    class FA_75Rnd_762x39_7N43: 75Rnd_762x39_Mag_F {
        author = QAUTHOR;
        displayName = "[Ghost] 75Rnd 7.62x39 7N43 Kremen (Drum)";
        descriptionShort = "7.62x39 7N43 Kremen (2034)<br/>Hybrid case, 116gr tungsten — RPK drum";
        ammo = "FA_762x39_7N43";
        initSpeed = 820;
        mass = 20;
    };
    class FA_75Rnd_762x39_7N43_T_Red: FA_75Rnd_762x39_7N43 { ammo = "FA_762x39_7N43_T_Red"; displayName = "[Ghost] 75Rnd 7.62x39 7N43 Drum (Red Tracer)"; tracersEvery = 4; };
    class FA_75Rnd_762x39_7N43_T_Yellow: FA_75Rnd_762x39_7N43 { ammo = "FA_762x39_7N43_T_Yellow"; displayName = "[Ghost] 75Rnd 7.62x39 7N43 Drum (Yellow Tracer)"; tracersEvery = 4; };
    class FA_75Rnd_762x39_7N43_T_Green: FA_75Rnd_762x39_7N43 { ammo = "FA_762x39_7N43_T_Green"; displayName = "[Ghost] 75Rnd 7.62x39 7N43 Drum (Green Tracer)"; tracersEvery = 4; };
    class FA_75Rnd_762x39_7N43_T_White: FA_75Rnd_762x39_7N43 { ammo = "FA_762x39_7N43_T_White"; displayName = "[Ghost] 75Rnd 7.62x39 7N43 Drum (White Tracer)"; tracersEvery = 4; };
    class FA_75Rnd_762x39_7N43_T_Blue: FA_75Rnd_762x39_7N43 { ammo = "FA_762x39_7N43_T_Blue"; displayName = "[Ghost] 75Rnd 7.62x39 7N43 Drum (Blue Tracer)"; tracersEvery = 4; };
    class FA_75Rnd_762x39_7N43_T_Orange: FA_75Rnd_762x39_7N43 { ammo = "FA_762x39_7N43_T_Orange"; displayName = "[Ghost] 75Rnd 7.62x39 7N43 Drum (Orange Tracer)"; tracersEvery = 4; };
    class FA_75Rnd_762x39_7N43_T_IR: FA_75Rnd_762x39_7N43 { ammo = "FA_762x39_7N43_T_IR"; displayName = "[Ghost] 75Rnd 7.62x39 7N43 Drum (IR Tracer)"; tracersEvery = 4; };

    // =========================================================
    // 7.62x39mm — 7N43 Kremen — BI Enoch 75Rnd drum
    // =========================================================
    class FA_75Rnd_762x39_7N43_AK12: 75rnd_762x39_AK12_Mag_F {
        author = QAUTHOR;
        displayName = "[Ghost] 75Rnd 7.62x39 7N43 Kremen (AK-12 Drum)";
        descriptionShort = "7.62x39 7N43 Kremen (2034)<br/>Hybrid case, 116gr tungsten — AK-12 drum";
        ammo = "FA_762x39_7N43";
        initSpeed = 820;
        mass = 20;
    };
    class FA_75Rnd_762x39_7N43_AK12_T_Red: FA_75Rnd_762x39_7N43_AK12 { ammo = "FA_762x39_7N43_T_Red"; displayName = "[Ghost] 75Rnd 7.62x39 7N43 AK-12 Drum (Red Tracer)"; tracersEvery = 4; };
    class FA_75Rnd_762x39_7N43_AK12_T_Yellow: FA_75Rnd_762x39_7N43_AK12 { ammo = "FA_762x39_7N43_T_Yellow"; displayName = "[Ghost] 75Rnd 7.62x39 7N43 AK-12 Drum (Yellow Tracer)"; tracersEvery = 4; };
    class FA_75Rnd_762x39_7N43_AK12_T_Green: FA_75Rnd_762x39_7N43_AK12 { ammo = "FA_762x39_7N43_T_Green"; displayName = "[Ghost] 75Rnd 7.62x39 7N43 AK-12 Drum (Green Tracer)"; tracersEvery = 4; };
    class FA_75Rnd_762x39_7N43_AK12_T_White: FA_75Rnd_762x39_7N43_AK12 { ammo = "FA_762x39_7N43_T_White"; displayName = "[Ghost] 75Rnd 7.62x39 7N43 AK-12 Drum (White Tracer)"; tracersEvery = 4; };
    class FA_75Rnd_762x39_7N43_AK12_T_Blue: FA_75Rnd_762x39_7N43_AK12 { ammo = "FA_762x39_7N43_T_Blue"; displayName = "[Ghost] 75Rnd 7.62x39 7N43 AK-12 Drum (Blue Tracer)"; tracersEvery = 4; };
    class FA_75Rnd_762x39_7N43_AK12_T_Orange: FA_75Rnd_762x39_7N43_AK12 { ammo = "FA_762x39_7N43_T_Orange"; displayName = "[Ghost] 75Rnd 7.62x39 7N43 AK-12 Drum (Orange Tracer)"; tracersEvery = 4; };
    class FA_75Rnd_762x39_7N43_AK12_T_IR: FA_75Rnd_762x39_7N43_AK12 { ammo = "FA_762x39_7N43_T_IR"; displayName = "[Ghost] 75Rnd 7.62x39 7N43 AK-12 Drum (IR Tracer)"; tracersEvery = 4; };

    // =========================================================
    // 7.62x39mm — 7N43 Kremen — BI Enoch 75Rnd Lush
    // =========================================================
    class FA_75Rnd_762x39_7N43_Lush: 75rnd_762x39_AK12_Lush_Mag_F {
        author = QAUTHOR;
        displayName = "[Ghost] 75Rnd 7.62x39 7N43 Kremen (Lush Drum)";
        descriptionShort = "7.62x39 7N43 Kremen (2034)<br/>Hybrid case, 116gr tungsten — Lush drum";
        ammo = "FA_762x39_7N43";
        initSpeed = 820;
        mass = 20;
    };
    class FA_75Rnd_762x39_7N43_Lush_T_Red: FA_75Rnd_762x39_7N43_Lush { ammo = "FA_762x39_7N43_T_Red"; displayName = "[Ghost] 75Rnd 7.62x39 7N43 Lush Drum (Red Tracer)"; tracersEvery = 4; };
    class FA_75Rnd_762x39_7N43_Lush_T_Yellow: FA_75Rnd_762x39_7N43_Lush { ammo = "FA_762x39_7N43_T_Yellow"; displayName = "[Ghost] 75Rnd 7.62x39 7N43 Lush Drum (Yellow Tracer)"; tracersEvery = 4; };
    class FA_75Rnd_762x39_7N43_Lush_T_Green: FA_75Rnd_762x39_7N43_Lush { ammo = "FA_762x39_7N43_T_Green"; displayName = "[Ghost] 75Rnd 7.62x39 7N43 Lush Drum (Green Tracer)"; tracersEvery = 4; };
    class FA_75Rnd_762x39_7N43_Lush_T_White: FA_75Rnd_762x39_7N43_Lush { ammo = "FA_762x39_7N43_T_White"; displayName = "[Ghost] 75Rnd 7.62x39 7N43 Lush Drum (White Tracer)"; tracersEvery = 4; };
    class FA_75Rnd_762x39_7N43_Lush_T_Blue: FA_75Rnd_762x39_7N43_Lush { ammo = "FA_762x39_7N43_T_Blue"; displayName = "[Ghost] 75Rnd 7.62x39 7N43 Lush Drum (Blue Tracer)"; tracersEvery = 4; };
    class FA_75Rnd_762x39_7N43_Lush_T_Orange: FA_75Rnd_762x39_7N43_Lush { ammo = "FA_762x39_7N43_T_Orange"; displayName = "[Ghost] 75Rnd 7.62x39 7N43 Lush Drum (Orange Tracer)"; tracersEvery = 4; };
    class FA_75Rnd_762x39_7N43_Lush_T_IR: FA_75Rnd_762x39_7N43_Lush { ammo = "FA_762x39_7N43_T_IR"; displayName = "[Ghost] 75Rnd 7.62x39 7N43 Lush Drum (IR Tracer)"; tracersEvery = 4; };

    // =========================================================
    // 7.62x39mm — 7N43 Kremen — BI Enoch 75Rnd Arid
    // =========================================================
    class FA_75Rnd_762x39_7N43_Arid: 75rnd_762x39_AK12_Arid_Mag_F {
        author = QAUTHOR;
        displayName = "[Ghost] 75Rnd 7.62x39 7N43 Kremen (Arid Drum)";
        descriptionShort = "7.62x39 7N43 Kremen (2034)<br/>Hybrid case, 116gr tungsten — Arid drum";
        ammo = "FA_762x39_7N43";
        initSpeed = 820;
        mass = 20;
    };
    class FA_75Rnd_762x39_7N43_Arid_T_Red: FA_75Rnd_762x39_7N43_Arid { ammo = "FA_762x39_7N43_T_Red"; displayName = "[Ghost] 75Rnd 7.62x39 7N43 Arid Drum (Red Tracer)"; tracersEvery = 4; };
    class FA_75Rnd_762x39_7N43_Arid_T_Yellow: FA_75Rnd_762x39_7N43_Arid { ammo = "FA_762x39_7N43_T_Yellow"; displayName = "[Ghost] 75Rnd 7.62x39 7N43 Arid Drum (Yellow Tracer)"; tracersEvery = 4; };
    class FA_75Rnd_762x39_7N43_Arid_T_Green: FA_75Rnd_762x39_7N43_Arid { ammo = "FA_762x39_7N43_T_Green"; displayName = "[Ghost] 75Rnd 7.62x39 7N43 Arid Drum (Green Tracer)"; tracersEvery = 4; };
    class FA_75Rnd_762x39_7N43_Arid_T_White: FA_75Rnd_762x39_7N43_Arid { ammo = "FA_762x39_7N43_T_White"; displayName = "[Ghost] 75Rnd 7.62x39 7N43 Arid Drum (White Tracer)"; tracersEvery = 4; };
    class FA_75Rnd_762x39_7N43_Arid_T_Blue: FA_75Rnd_762x39_7N43_Arid { ammo = "FA_762x39_7N43_T_Blue"; displayName = "[Ghost] 75Rnd 7.62x39 7N43 Arid Drum (Blue Tracer)"; tracersEvery = 4; };
    class FA_75Rnd_762x39_7N43_Arid_T_Orange: FA_75Rnd_762x39_7N43_Arid { ammo = "FA_762x39_7N43_T_Orange"; displayName = "[Ghost] 75Rnd 7.62x39 7N43 Arid Drum (Orange Tracer)"; tracersEvery = 4; };
    class FA_75Rnd_762x39_7N43_Arid_T_IR: FA_75Rnd_762x39_7N43_Arid { ammo = "FA_762x39_7N43_T_IR"; displayName = "[Ghost] 75Rnd 7.62x39 7N43 Arid Drum (IR Tracer)"; tracersEvery = 4; };

    // =========================================================
    // 7.62x39mm — 7N47 Kremen-2 CT — vanilla 30Rnd + 75Rnd
    // =========================================================
    class FA_30Rnd_762x39_7N47_CT: 30Rnd_762x39_Mag_F {
        author = QAUTHOR;
        displayName = "[Ghost] 30Rnd 7.62x39 7N47 Kremen-2 CT";
        descriptionShort = "7.62x39 7N47 Kremen-2 (2040)<br/>Cased-telescoped, 2-stage tungsten";
        ammo = "FA_762x39_7N47_CT";
        initSpeed = 845;
        mass = 7;
    };
    class FA_30Rnd_762x39_7N47_CT_T_Red: FA_30Rnd_762x39_7N47_CT { ammo = "FA_762x39_7N47_CT_T_Red"; displayName = "[Ghost] 30Rnd 7.62x39 7N47 CT (Red Tracer)"; tracersEvery = 4; };
    class FA_30Rnd_762x39_7N47_CT_T_Yellow: FA_30Rnd_762x39_7N47_CT { ammo = "FA_762x39_7N47_CT_T_Yellow"; displayName = "[Ghost] 30Rnd 7.62x39 7N47 CT (Yellow Tracer)"; tracersEvery = 4; };
    class FA_30Rnd_762x39_7N47_CT_T_Green: FA_30Rnd_762x39_7N47_CT { ammo = "FA_762x39_7N47_CT_T_Green"; displayName = "[Ghost] 30Rnd 7.62x39 7N47 CT (Green Tracer)"; tracersEvery = 4; };
    class FA_30Rnd_762x39_7N47_CT_T_White: FA_30Rnd_762x39_7N47_CT { ammo = "FA_762x39_7N47_CT_T_White"; displayName = "[Ghost] 30Rnd 7.62x39 7N47 CT (White Tracer)"; tracersEvery = 4; };
    class FA_30Rnd_762x39_7N47_CT_T_Blue: FA_30Rnd_762x39_7N47_CT { ammo = "FA_762x39_7N47_CT_T_Blue"; displayName = "[Ghost] 30Rnd 7.62x39 7N47 CT (Blue Tracer)"; tracersEvery = 4; };
    class FA_30Rnd_762x39_7N47_CT_T_Orange: FA_30Rnd_762x39_7N47_CT { ammo = "FA_762x39_7N47_CT_T_Orange"; displayName = "[Ghost] 30Rnd 7.62x39 7N47 CT (Orange Tracer)"; tracersEvery = 4; };
    class FA_30Rnd_762x39_7N47_CT_T_IR: FA_30Rnd_762x39_7N47_CT { ammo = "FA_762x39_7N47_CT_T_IR"; displayName = "[Ghost] 30Rnd 7.62x39 7N47 CT (IR Tracer)"; tracersEvery = 4; };

    class FA_75Rnd_762x39_7N47_CT: 75Rnd_762x39_Mag_F {
        author = QAUTHOR;
        displayName = "[Ghost] 75Rnd 7.62x39 7N47 Kremen-2 CT (Drum)";
        descriptionShort = "7.62x39 7N47 Kremen-2 (2040)<br/>Cased-telescoped, 2-stage tungsten — RPK drum";
        ammo = "FA_762x39_7N47_CT";
        initSpeed = 845;
        mass = 20;
    };
    class FA_75Rnd_762x39_7N47_CT_T_Red: FA_75Rnd_762x39_7N47_CT { ammo = "FA_762x39_7N47_CT_T_Red"; displayName = "[Ghost] 75Rnd 7.62x39 7N47 CT Drum (Red Tracer)"; tracersEvery = 4; };
    class FA_75Rnd_762x39_7N47_CT_T_Yellow: FA_75Rnd_762x39_7N47_CT { ammo = "FA_762x39_7N47_CT_T_Yellow"; displayName = "[Ghost] 75Rnd 7.62x39 7N47 CT Drum (Yellow Tracer)"; tracersEvery = 4; };
    class FA_75Rnd_762x39_7N47_CT_T_Green: FA_75Rnd_762x39_7N47_CT { ammo = "FA_762x39_7N47_CT_T_Green"; displayName = "[Ghost] 75Rnd 7.62x39 7N47 CT Drum (Green Tracer)"; tracersEvery = 4; };
    class FA_75Rnd_762x39_7N47_CT_T_White: FA_75Rnd_762x39_7N47_CT { ammo = "FA_762x39_7N47_CT_T_White"; displayName = "[Ghost] 75Rnd 7.62x39 7N47 CT Drum (White Tracer)"; tracersEvery = 4; };
    class FA_75Rnd_762x39_7N47_CT_T_Blue: FA_75Rnd_762x39_7N47_CT { ammo = "FA_762x39_7N47_CT_T_Blue"; displayName = "[Ghost] 75Rnd 7.62x39 7N47 CT Drum (Blue Tracer)"; tracersEvery = 4; };
    class FA_75Rnd_762x39_7N47_CT_T_Orange: FA_75Rnd_762x39_7N47_CT { ammo = "FA_762x39_7N47_CT_T_Orange"; displayName = "[Ghost] 75Rnd 7.62x39 7N47 CT Drum (Orange Tracer)"; tracersEvery = 4; };
    class FA_75Rnd_762x39_7N47_CT_T_IR: FA_75Rnd_762x39_7N47_CT { ammo = "FA_762x39_7N47_CT_T_IR"; displayName = "[Ghost] 75Rnd 7.62x39 7N47 CT Drum (IR Tracer)"; tracersEvery = 4; };

    // =========================================================
    // 7.62x39mm — 7U4 Tishina-2 Sub — vanilla 30Rnd
    // =========================================================
    class FA_30Rnd_762x39_7U4_Sub: 30Rnd_762x39_Mag_F {
        author = QAUTHOR;
        displayName = "[Ghost] 30Rnd 7.62x39 7U4 Tishina-2 Sub";
        descriptionShort = "7.62x39 7U4 Tishina-2<br/>Subsonic tungsten AP — suppressed";
        ammo = "FA_762x39_7U4_Sub";
        initSpeed = 300;
        mass = 8;
    };
    class FA_30Rnd_762x39_7U4_Sub_T_Red: FA_30Rnd_762x39_7U4_Sub { ammo = "FA_762x39_7U4_Sub_T_Red"; displayName = "[Ghost] 30Rnd 7.62x39 7U4 Sub (Red Tracer)"; tracersEvery = 4; };
    class FA_30Rnd_762x39_7U4_Sub_T_Yellow: FA_30Rnd_762x39_7U4_Sub { ammo = "FA_762x39_7U4_Sub_T_Yellow"; displayName = "[Ghost] 30Rnd 7.62x39 7U4 Sub (Yellow Tracer)"; tracersEvery = 4; };
    class FA_30Rnd_762x39_7U4_Sub_T_Green: FA_30Rnd_762x39_7U4_Sub { ammo = "FA_762x39_7U4_Sub_T_Green"; displayName = "[Ghost] 30Rnd 7.62x39 7U4 Sub (Green Tracer)"; tracersEvery = 4; };
    class FA_30Rnd_762x39_7U4_Sub_T_White: FA_30Rnd_762x39_7U4_Sub { ammo = "FA_762x39_7U4_Sub_T_White"; displayName = "[Ghost] 30Rnd 7.62x39 7U4 Sub (White Tracer)"; tracersEvery = 4; };
    class FA_30Rnd_762x39_7U4_Sub_T_Blue: FA_30Rnd_762x39_7U4_Sub { ammo = "FA_762x39_7U4_Sub_T_Blue"; displayName = "[Ghost] 30Rnd 7.62x39 7U4 Sub (Blue Tracer)"; tracersEvery = 4; };
    class FA_30Rnd_762x39_7U4_Sub_T_Orange: FA_30Rnd_762x39_7U4_Sub { ammo = "FA_762x39_7U4_Sub_T_Orange"; displayName = "[Ghost] 30Rnd 7.62x39 7U4 Sub (Orange Tracer)"; tracersEvery = 4; };
    class FA_30Rnd_762x39_7U4_Sub_T_IR: FA_30Rnd_762x39_7U4_Sub { ammo = "FA_762x39_7U4_Sub_T_IR"; displayName = "[Ghost] 30Rnd 7.62x39 7U4 Sub (IR Tracer)"; tracersEvery = 4; };

    // =========================================================
    // 7.62x54R — 150Rnd_762x54_Box (PKM/PKP)
    // =========================================================
    class FA_150Rnd_762x54_Box_T_Red : 150Rnd_762x54_Box { author = QAUTHOR; displayName = "[Ghost] 150Rnd 7.62x54R Box (Red Tracer)"; descriptionShort = "7.62x54R Ball HV - Red Tracer"; ammo = "FA_762x54R_Ball_HV_T_Red"; initSpeed = 855; tracersEvery = 4; };
    class FA_150Rnd_762x54_Box_T_Yellow : 150Rnd_762x54_Box { author = QAUTHOR; displayName = "[Ghost] 150Rnd 7.62x54R Box (Yellow Tracer)"; descriptionShort = "7.62x54R Ball HV - Yellow Tracer"; ammo = "FA_762x54R_Ball_HV_T_Yellow"; initSpeed = 855; tracersEvery = 4; };
    class FA_150Rnd_762x54_Box_T_Green : 150Rnd_762x54_Box { author = QAUTHOR; displayName = "[Ghost] 150Rnd 7.62x54R Box (Green Tracer)"; descriptionShort = "7.62x54R Ball HV - Green Tracer"; ammo = "FA_762x54R_Ball_HV_T_Green"; initSpeed = 855; tracersEvery = 4; };
    class FA_150Rnd_762x54_Box_T_White : 150Rnd_762x54_Box { author = QAUTHOR; displayName = "[Ghost] 150Rnd 7.62x54R Box (White Tracer)"; descriptionShort = "7.62x54R Ball HV - White Tracer"; ammo = "FA_762x54R_Ball_HV_T_White"; initSpeed = 855; tracersEvery = 4; };
    class FA_150Rnd_762x54_Box_T_Blue : 150Rnd_762x54_Box { author = QAUTHOR; displayName = "[Ghost] 150Rnd 7.62x54R Box (Blue Tracer)"; descriptionShort = "7.62x54R Ball HV - Blue Tracer"; ammo = "FA_762x54R_Ball_HV_T_Blue"; initSpeed = 855; tracersEvery = 4; };
    class FA_150Rnd_762x54_Box_T_Orange : 150Rnd_762x54_Box { author = QAUTHOR; displayName = "[Ghost] 150Rnd 7.62x54R Box (Orange Tracer)"; descriptionShort = "7.62x54R Ball HV - Orange Tracer"; ammo = "FA_762x54R_Ball_HV_T_Orange"; initSpeed = 855; tracersEvery = 4; };
    class FA_150Rnd_762x54_Box_T_IR : 150Rnd_762x54_Box { author = QAUTHOR; displayName = "[Ghost] 150Rnd 7.62x54R Box (IR Tracer)"; descriptionShort = "7.62x54R Ball HV - IR Tracer"; ammo = "FA_762x54R_Ball_HV_T_IR"; initSpeed = 855; tracersEvery = 4; };

    // =========================================================
    // ACE 7.62x51 HK417 — ACE_20Rnd_762x51_M993_AP_Mag
    // =========================================================
    class FA_ACE_20Rnd_762x51_M993_AP_T_Red : ACE_20Rnd_762x51_M993_AP_Mag { author = QAUTHOR; displayName = "[Ghost] 20Rnd 7.62 HK417 AP (Red Tracer)"; descriptionShort = "7.62x51 M80A2 HV - Red Tracer"; ammo = "FA_762_M80A2_HV_T_Red"; initSpeed = 940; tracersEvery = 4; };
    class FA_ACE_20Rnd_762x51_M993_AP_T_Yellow : ACE_20Rnd_762x51_M993_AP_Mag { author = QAUTHOR; displayName = "[Ghost] 20Rnd 7.62 HK417 AP (Yellow Tracer)"; descriptionShort = "7.62x51 M80A2 HV - Yellow Tracer"; ammo = "FA_762_M80A2_HV_T_Yellow"; initSpeed = 940; tracersEvery = 4; };
    class FA_ACE_20Rnd_762x51_M993_AP_T_Green : ACE_20Rnd_762x51_M993_AP_Mag { author = QAUTHOR; displayName = "[Ghost] 20Rnd 7.62 HK417 AP (Green Tracer)"; descriptionShort = "7.62x51 M80A2 HV - Green Tracer"; ammo = "FA_762_M80A2_HV_T_Green"; initSpeed = 940; tracersEvery = 4; };
    class FA_ACE_20Rnd_762x51_M993_AP_T_White : ACE_20Rnd_762x51_M993_AP_Mag { author = QAUTHOR; displayName = "[Ghost] 20Rnd 7.62 HK417 AP (White Tracer)"; descriptionShort = "7.62x51 M80A2 HV - White Tracer"; ammo = "FA_762_M80A2_HV_T_White"; initSpeed = 940; tracersEvery = 4; };
    class FA_ACE_20Rnd_762x51_M993_AP_T_Blue : ACE_20Rnd_762x51_M993_AP_Mag { author = QAUTHOR; displayName = "[Ghost] 20Rnd 7.62 HK417 AP (Blue Tracer)"; descriptionShort = "7.62x51 M80A2 HV - Blue Tracer"; ammo = "FA_762_M80A2_HV_T_Blue"; initSpeed = 940; tracersEvery = 4; };
    class FA_ACE_20Rnd_762x51_M993_AP_T_Orange : ACE_20Rnd_762x51_M993_AP_Mag { author = QAUTHOR; displayName = "[Ghost] 20Rnd 7.62 HK417 AP (Orange Tracer)"; descriptionShort = "7.62x51 M80A2 HV - Orange Tracer"; ammo = "FA_762_M80A2_HV_T_Orange"; initSpeed = 940; tracersEvery = 4; };
    class FA_ACE_20Rnd_762x51_M993_AP_T_IR : ACE_20Rnd_762x51_M993_AP_Mag { author = QAUTHOR; displayName = "[Ghost] 20Rnd 7.62 HK417 AP (IR Tracer)"; descriptionShort = "7.62x51 M80A2 HV - IR Tracer"; ammo = "FA_762_M80A2_HV_T_IR"; initSpeed = 940; tracersEvery = 4; };

    // =========================================================
    // ACE 7.62x51 HK417 — ACE_10Rnd_762x51_Mag_SD
    // =========================================================
    class FA_ACE_10Rnd_762x51_SD_T_Red : ACE_10Rnd_762x51_Mag_SD { author = QAUTHOR; displayName = "[Ghost] 10Rnd 7.62 HK417 SD (Red Tracer)"; descriptionShort = "7.62x51 M80A2 HV - Red Tracer"; ammo = "FA_762_M80A2_HV_T_Red"; initSpeed = 940; tracersEvery = 4; };
    class FA_ACE_10Rnd_762x51_SD_T_Yellow : ACE_10Rnd_762x51_Mag_SD { author = QAUTHOR; displayName = "[Ghost] 10Rnd 7.62 HK417 SD (Yellow Tracer)"; descriptionShort = "7.62x51 M80A2 HV - Yellow Tracer"; ammo = "FA_762_M80A2_HV_T_Yellow"; initSpeed = 940; tracersEvery = 4; };
    class FA_ACE_10Rnd_762x51_SD_T_Green : ACE_10Rnd_762x51_Mag_SD { author = QAUTHOR; displayName = "[Ghost] 10Rnd 7.62 HK417 SD (Green Tracer)"; descriptionShort = "7.62x51 M80A2 HV - Green Tracer"; ammo = "FA_762_M80A2_HV_T_Green"; initSpeed = 940; tracersEvery = 4; };
    class FA_ACE_10Rnd_762x51_SD_T_White : ACE_10Rnd_762x51_Mag_SD { author = QAUTHOR; displayName = "[Ghost] 10Rnd 7.62 HK417 SD (White Tracer)"; descriptionShort = "7.62x51 M80A2 HV - White Tracer"; ammo = "FA_762_M80A2_HV_T_White"; initSpeed = 940; tracersEvery = 4; };
    class FA_ACE_10Rnd_762x51_SD_T_Blue : ACE_10Rnd_762x51_Mag_SD { author = QAUTHOR; displayName = "[Ghost] 10Rnd 7.62 HK417 SD (Blue Tracer)"; descriptionShort = "7.62x51 M80A2 HV - Blue Tracer"; ammo = "FA_762_M80A2_HV_T_Blue"; initSpeed = 940; tracersEvery = 4; };
    class FA_ACE_10Rnd_762x51_SD_T_Orange : ACE_10Rnd_762x51_Mag_SD { author = QAUTHOR; displayName = "[Ghost] 10Rnd 7.62 HK417 SD (Orange Tracer)"; descriptionShort = "7.62x51 M80A2 HV - Orange Tracer"; ammo = "FA_762_M80A2_HV_T_Orange"; initSpeed = 940; tracersEvery = 4; };
    class FA_ACE_10Rnd_762x51_SD_T_IR : ACE_10Rnd_762x51_Mag_SD { author = QAUTHOR; displayName = "[Ghost] 10Rnd 7.62 HK417 SD (IR Tracer)"; descriptionShort = "7.62x51 M80A2 HV - IR Tracer"; ammo = "FA_762_M80A2_HV_T_IR"; initSpeed = 940; tracersEvery = 4; };


    // =========================================================
    // 6.5x39 — 100Rnd_65x39_caseless_black_mag
    // =========================================================
    class FA_100Rnd_65x39_caseless_black_mag : 100Rnd_65x39_caseless_black_mag { author = QAUTHOR; displayName = "[Ghost] 100Rnd 6.5 Caseless Black"; descriptionShort = "6.5x39 Caseless EPR"; ammo = "FA_65_EPR"; initSpeed = 820; };
    class FA_100Rnd_65x39_caseless_black_mag_T_Red : 100Rnd_65x39_caseless_black_mag { author = QAUTHOR; displayName = "[Ghost] 100Rnd 6.5 Caseless Black (Red Tracer)"; descriptionShort = "6.5x39 Caseless EPR - Red Tracer"; ammo = "FA_65_EPR_T_Red"; initSpeed = 820; tracersEvery = 4; };
    class FA_100Rnd_65x39_caseless_black_mag_T_Yellow : 100Rnd_65x39_caseless_black_mag { author = QAUTHOR; displayName = "[Ghost] 100Rnd 6.5 Caseless Black (Yellow Tracer)"; descriptionShort = "6.5x39 Caseless EPR - Yellow Tracer"; ammo = "FA_65_EPR_T_Yellow"; initSpeed = 820; tracersEvery = 4; };
    class FA_100Rnd_65x39_caseless_black_mag_T_Green : 100Rnd_65x39_caseless_black_mag { author = QAUTHOR; displayName = "[Ghost] 100Rnd 6.5 Caseless Black (Green Tracer)"; descriptionShort = "6.5x39 Caseless EPR - Green Tracer"; ammo = "FA_65_EPR_T_Green"; initSpeed = 820; tracersEvery = 4; };
    class FA_100Rnd_65x39_caseless_black_mag_T_White : 100Rnd_65x39_caseless_black_mag { author = QAUTHOR; displayName = "[Ghost] 100Rnd 6.5 Caseless Black (White Tracer)"; descriptionShort = "6.5x39 Caseless EPR - White Tracer"; ammo = "FA_65_EPR_T_White"; initSpeed = 820; tracersEvery = 4; };
    class FA_100Rnd_65x39_caseless_black_mag_T_Blue : 100Rnd_65x39_caseless_black_mag { author = QAUTHOR; displayName = "[Ghost] 100Rnd 6.5 Caseless Black (Blue Tracer)"; descriptionShort = "6.5x39 Caseless EPR - Blue Tracer"; ammo = "FA_65_EPR_T_Blue"; initSpeed = 820; tracersEvery = 4; };
    class FA_100Rnd_65x39_caseless_black_mag_T_Orange : 100Rnd_65x39_caseless_black_mag { author = QAUTHOR; displayName = "[Ghost] 100Rnd 6.5 Caseless Black (Orange Tracer)"; descriptionShort = "6.5x39 Caseless EPR - Orange Tracer"; ammo = "FA_65_EPR_T_Orange"; initSpeed = 820; tracersEvery = 4; };
    class FA_100Rnd_65x39_caseless_black_mag_T_IR : 100Rnd_65x39_caseless_black_mag { author = QAUTHOR; displayName = "[Ghost] 100Rnd 6.5 Caseless Black (IR Tracer)"; descriptionShort = "6.5x39 Caseless EPR - IR Tracer"; ammo = "FA_65_EPR_T_IR"; initSpeed = 820; tracersEvery = 4; };

    // =========================================================
    // 6.5x39 — 100Rnd_65x39_caseless_khaki_mag
    // =========================================================
    class FA_100Rnd_65x39_caseless_khaki_mag : 100Rnd_65x39_caseless_khaki_mag { author = QAUTHOR; displayName = "[Ghost] 100Rnd 6.5 Caseless Khaki"; descriptionShort = "6.5x39 Caseless EPR"; ammo = "FA_65_EPR"; initSpeed = 820; };
    class FA_100Rnd_65x39_caseless_khaki_mag_T_Red : 100Rnd_65x39_caseless_khaki_mag { author = QAUTHOR; displayName = "[Ghost] 100Rnd 6.5 Caseless Khaki (Red Tracer)"; descriptionShort = "6.5x39 Caseless EPR - Red Tracer"; ammo = "FA_65_EPR_T_Red"; initSpeed = 820; tracersEvery = 4; };
    class FA_100Rnd_65x39_caseless_khaki_mag_T_Yellow : 100Rnd_65x39_caseless_khaki_mag { author = QAUTHOR; displayName = "[Ghost] 100Rnd 6.5 Caseless Khaki (Yellow Tracer)"; descriptionShort = "6.5x39 Caseless EPR - Yellow Tracer"; ammo = "FA_65_EPR_T_Yellow"; initSpeed = 820; tracersEvery = 4; };
    class FA_100Rnd_65x39_caseless_khaki_mag_T_Green : 100Rnd_65x39_caseless_khaki_mag { author = QAUTHOR; displayName = "[Ghost] 100Rnd 6.5 Caseless Khaki (Green Tracer)"; descriptionShort = "6.5x39 Caseless EPR - Green Tracer"; ammo = "FA_65_EPR_T_Green"; initSpeed = 820; tracersEvery = 4; };
    class FA_100Rnd_65x39_caseless_khaki_mag_T_White : 100Rnd_65x39_caseless_khaki_mag { author = QAUTHOR; displayName = "[Ghost] 100Rnd 6.5 Caseless Khaki (White Tracer)"; descriptionShort = "6.5x39 Caseless EPR - White Tracer"; ammo = "FA_65_EPR_T_White"; initSpeed = 820; tracersEvery = 4; };
    class FA_100Rnd_65x39_caseless_khaki_mag_T_Blue : 100Rnd_65x39_caseless_khaki_mag { author = QAUTHOR; displayName = "[Ghost] 100Rnd 6.5 Caseless Khaki (Blue Tracer)"; descriptionShort = "6.5x39 Caseless EPR - Blue Tracer"; ammo = "FA_65_EPR_T_Blue"; initSpeed = 820; tracersEvery = 4; };
    class FA_100Rnd_65x39_caseless_khaki_mag_T_Orange : 100Rnd_65x39_caseless_khaki_mag { author = QAUTHOR; displayName = "[Ghost] 100Rnd 6.5 Caseless Khaki (Orange Tracer)"; descriptionShort = "6.5x39 Caseless EPR - Orange Tracer"; ammo = "FA_65_EPR_T_Orange"; initSpeed = 820; tracersEvery = 4; };
    class FA_100Rnd_65x39_caseless_khaki_mag_T_IR : 100Rnd_65x39_caseless_khaki_mag { author = QAUTHOR; displayName = "[Ghost] 100Rnd 6.5 Caseless Khaki (IR Tracer)"; descriptionShort = "6.5x39 Caseless EPR - IR Tracer"; ammo = "FA_65_EPR_T_IR"; initSpeed = 820; tracersEvery = 4; };

    // =========================================================
    // 6.5x39 — 100Rnd_65x39_caseless_mag
    // =========================================================
    class FA_100Rnd_65x39_caseless_mag : 100Rnd_65x39_caseless_mag { author = QAUTHOR; displayName = "[Ghost] 100Rnd 6.5 Caseless"; descriptionShort = "6.5x39 Caseless EPR"; ammo = "FA_65_EPR"; initSpeed = 820; };
    class FA_100Rnd_65x39_caseless_mag_T_Red : 100Rnd_65x39_caseless_mag { author = QAUTHOR; displayName = "[Ghost] 100Rnd 6.5 Caseless (Red Tracer)"; descriptionShort = "6.5x39 Caseless EPR - Red Tracer"; ammo = "FA_65_EPR_T_Red"; initSpeed = 820; tracersEvery = 4; };
    class FA_100Rnd_65x39_caseless_mag_T_Yellow : 100Rnd_65x39_caseless_mag { author = QAUTHOR; displayName = "[Ghost] 100Rnd 6.5 Caseless (Yellow Tracer)"; descriptionShort = "6.5x39 Caseless EPR - Yellow Tracer"; ammo = "FA_65_EPR_T_Yellow"; initSpeed = 820; tracersEvery = 4; };
    class FA_100Rnd_65x39_caseless_mag_T_Green : 100Rnd_65x39_caseless_mag { author = QAUTHOR; displayName = "[Ghost] 100Rnd 6.5 Caseless (Green Tracer)"; descriptionShort = "6.5x39 Caseless EPR - Green Tracer"; ammo = "FA_65_EPR_T_Green"; initSpeed = 820; tracersEvery = 4; };
    class FA_100Rnd_65x39_caseless_mag_T_White : 100Rnd_65x39_caseless_mag { author = QAUTHOR; displayName = "[Ghost] 100Rnd 6.5 Caseless (White Tracer)"; descriptionShort = "6.5x39 Caseless EPR - White Tracer"; ammo = "FA_65_EPR_T_White"; initSpeed = 820; tracersEvery = 4; };
    class FA_100Rnd_65x39_caseless_mag_T_Blue : 100Rnd_65x39_caseless_mag { author = QAUTHOR; displayName = "[Ghost] 100Rnd 6.5 Caseless (Blue Tracer)"; descriptionShort = "6.5x39 Caseless EPR - Blue Tracer"; ammo = "FA_65_EPR_T_Blue"; initSpeed = 820; tracersEvery = 4; };
    class FA_100Rnd_65x39_caseless_mag_T_Orange : 100Rnd_65x39_caseless_mag { author = QAUTHOR; displayName = "[Ghost] 100Rnd 6.5 Caseless (Orange Tracer)"; descriptionShort = "6.5x39 Caseless EPR - Orange Tracer"; ammo = "FA_65_EPR_T_Orange"; initSpeed = 820; tracersEvery = 4; };
    class FA_100Rnd_65x39_caseless_mag_T_IR : 100Rnd_65x39_caseless_mag { author = QAUTHOR; displayName = "[Ghost] 100Rnd 6.5 Caseless (IR Tracer)"; descriptionShort = "6.5x39 Caseless EPR - IR Tracer"; ammo = "FA_65_EPR_T_IR"; initSpeed = 820; tracersEvery = 4; };

    // =========================================================
    // 6.5x39 — 200Rnd_65x39_cased_Box
    // =========================================================
    class FA_200Rnd_65x39_cased_Box : 200Rnd_65x39_cased_Box { author = QAUTHOR; displayName = "[Ghost] 200Rnd 6.5 Box"; descriptionShort = "6.5x39 Caseless EPR"; ammo = "FA_65_EPR"; initSpeed = 820; };
    class FA_200Rnd_65x39_cased_Box_T_Red : 200Rnd_65x39_cased_Box { author = QAUTHOR; displayName = "[Ghost] 200Rnd 6.5 Box (Red Tracer)"; descriptionShort = "6.5x39 Caseless EPR - Red Tracer"; ammo = "FA_65_EPR_T_Red"; initSpeed = 820; tracersEvery = 4; };
    class FA_200Rnd_65x39_cased_Box_T_Yellow : 200Rnd_65x39_cased_Box { author = QAUTHOR; displayName = "[Ghost] 200Rnd 6.5 Box (Yellow Tracer)"; descriptionShort = "6.5x39 Caseless EPR - Yellow Tracer"; ammo = "FA_65_EPR_T_Yellow"; initSpeed = 820; tracersEvery = 4; };
    class FA_200Rnd_65x39_cased_Box_T_Green : 200Rnd_65x39_cased_Box { author = QAUTHOR; displayName = "[Ghost] 200Rnd 6.5 Box (Green Tracer)"; descriptionShort = "6.5x39 Caseless EPR - Green Tracer"; ammo = "FA_65_EPR_T_Green"; initSpeed = 820; tracersEvery = 4; };
    class FA_200Rnd_65x39_cased_Box_T_White : 200Rnd_65x39_cased_Box { author = QAUTHOR; displayName = "[Ghost] 200Rnd 6.5 Box (White Tracer)"; descriptionShort = "6.5x39 Caseless EPR - White Tracer"; ammo = "FA_65_EPR_T_White"; initSpeed = 820; tracersEvery = 4; };
    class FA_200Rnd_65x39_cased_Box_T_Blue : 200Rnd_65x39_cased_Box { author = QAUTHOR; displayName = "[Ghost] 200Rnd 6.5 Box (Blue Tracer)"; descriptionShort = "6.5x39 Caseless EPR - Blue Tracer"; ammo = "FA_65_EPR_T_Blue"; initSpeed = 820; tracersEvery = 4; };
    class FA_200Rnd_65x39_cased_Box_T_Orange : 200Rnd_65x39_cased_Box { author = QAUTHOR; displayName = "[Ghost] 200Rnd 6.5 Box (Orange Tracer)"; descriptionShort = "6.5x39 Caseless EPR - Orange Tracer"; ammo = "FA_65_EPR_T_Orange"; initSpeed = 820; tracersEvery = 4; };
    class FA_200Rnd_65x39_cased_Box_T_IR : 200Rnd_65x39_cased_Box { author = QAUTHOR; displayName = "[Ghost] 200Rnd 6.5 Box (IR Tracer)"; descriptionShort = "6.5x39 Caseless EPR - IR Tracer"; ammo = "FA_65_EPR_T_IR"; initSpeed = 820; tracersEvery = 4; };

    // =========================================================
    // 6.5x39 — 2000Rnd_65x39_Belt
    // =========================================================
    class FA_2000Rnd_65x39_Belt_T_Red : 2000Rnd_65x39_Belt { author = QAUTHOR; displayName = "[Ghost] 2000Rnd 6.5 Belt (Red Tracer)"; descriptionShort = "6.5x39 Caseless EPR - Red Tracer"; ammo = "FA_65_EPR_T_Red"; initSpeed = 820; tracersEvery = 4; };
    class FA_2000Rnd_65x39_Belt_T_Yellow : 2000Rnd_65x39_Belt { author = QAUTHOR; displayName = "[Ghost] 2000Rnd 6.5 Belt (Yellow Tracer)"; descriptionShort = "6.5x39 Caseless EPR - Yellow Tracer"; ammo = "FA_65_EPR_T_Yellow"; initSpeed = 820; tracersEvery = 4; };
    class FA_2000Rnd_65x39_Belt_T_Green : 2000Rnd_65x39_Belt { author = QAUTHOR; displayName = "[Ghost] 2000Rnd 6.5 Belt (Green Tracer)"; descriptionShort = "6.5x39 Caseless EPR - Green Tracer"; ammo = "FA_65_EPR_T_Green"; initSpeed = 820; tracersEvery = 4; };
    class FA_2000Rnd_65x39_Belt_T_White : 2000Rnd_65x39_Belt { author = QAUTHOR; displayName = "[Ghost] 2000Rnd 6.5 Belt (White Tracer)"; descriptionShort = "6.5x39 Caseless EPR - White Tracer"; ammo = "FA_65_EPR_T_White"; initSpeed = 820; tracersEvery = 4; };
    class FA_2000Rnd_65x39_Belt_T_Blue : 2000Rnd_65x39_Belt { author = QAUTHOR; displayName = "[Ghost] 2000Rnd 6.5 Belt (Blue Tracer)"; descriptionShort = "6.5x39 Caseless EPR - Blue Tracer"; ammo = "FA_65_EPR_T_Blue"; initSpeed = 820; tracersEvery = 4; };
    class FA_2000Rnd_65x39_Belt_T_Orange : 2000Rnd_65x39_Belt { author = QAUTHOR; displayName = "[Ghost] 2000Rnd 6.5 Belt (Orange Tracer)"; descriptionShort = "6.5x39 Caseless EPR - Orange Tracer"; ammo = "FA_65_EPR_T_Orange"; initSpeed = 820; tracersEvery = 4; };

    // =========================================================
    // 6.5x39 — 1000Rnd_65x39_Belt
    // =========================================================
    class FA_1000Rnd_65x39_Belt_T_Red : 1000Rnd_65x39_Belt { author = QAUTHOR; displayName = "[Ghost] 1000Rnd 6.5 Belt (Red Tracer)"; descriptionShort = "6.5x39 Caseless EPR - Red Tracer"; ammo = "FA_65_EPR_T_Red"; initSpeed = 820; tracersEvery = 4; };
    class FA_1000Rnd_65x39_Belt_T_Yellow : 1000Rnd_65x39_Belt { author = QAUTHOR; displayName = "[Ghost] 1000Rnd 6.5 Belt (Yellow Tracer)"; descriptionShort = "6.5x39 Caseless EPR - Yellow Tracer"; ammo = "FA_65_EPR_T_Yellow"; initSpeed = 820; tracersEvery = 4; };
    class FA_1000Rnd_65x39_Belt_T_Green : 1000Rnd_65x39_Belt { author = QAUTHOR; displayName = "[Ghost] 1000Rnd 6.5 Belt (Green Tracer)"; descriptionShort = "6.5x39 Caseless EPR - Green Tracer"; ammo = "FA_65_EPR_T_Green"; initSpeed = 820; tracersEvery = 4; };
    class FA_1000Rnd_65x39_Belt_T_White : 1000Rnd_65x39_Belt { author = QAUTHOR; displayName = "[Ghost] 1000Rnd 6.5 Belt (White Tracer)"; descriptionShort = "6.5x39 Caseless EPR - White Tracer"; ammo = "FA_65_EPR_T_White"; initSpeed = 820; tracersEvery = 4; };
    class FA_1000Rnd_65x39_Belt_T_Blue : 1000Rnd_65x39_Belt { author = QAUTHOR; displayName = "[Ghost] 1000Rnd 6.5 Belt (Blue Tracer)"; descriptionShort = "6.5x39 Caseless EPR - Blue Tracer"; ammo = "FA_65_EPR_T_Blue"; initSpeed = 820; tracersEvery = 4; };
    class FA_1000Rnd_65x39_Belt_T_Orange : 1000Rnd_65x39_Belt { author = QAUTHOR; displayName = "[Ghost] 1000Rnd 6.5 Belt (Orange Tracer)"; descriptionShort = "6.5x39 Caseless EPR - Orange Tracer"; ammo = "FA_65_EPR_T_Orange"; initSpeed = 820; tracersEvery = 4; };

    // =========================================================
    // 6.5x39 — 200Rnd_65x39_Belt
    // =========================================================
    class FA_200Rnd_65x39_Belt_T_Red : 200Rnd_65x39_Belt { author = QAUTHOR; displayName = "[Ghost] 200Rnd 6.5 Belt (Red Tracer)"; descriptionShort = "6.5x39 Caseless EPR - Red Tracer"; ammo = "FA_65_EPR_T_Red"; initSpeed = 820; tracersEvery = 4; };
    class FA_200Rnd_65x39_Belt_T_Yellow : 200Rnd_65x39_Belt { author = QAUTHOR; displayName = "[Ghost] 200Rnd 6.5 Belt (Yellow Tracer)"; descriptionShort = "6.5x39 Caseless EPR - Yellow Tracer"; ammo = "FA_65_EPR_T_Yellow"; initSpeed = 820; tracersEvery = 4; };
    class FA_200Rnd_65x39_Belt_T_Green : 200Rnd_65x39_Belt { author = QAUTHOR; displayName = "[Ghost] 200Rnd 6.5 Belt (Green Tracer)"; descriptionShort = "6.5x39 Caseless EPR - Green Tracer"; ammo = "FA_65_EPR_T_Green"; initSpeed = 820; tracersEvery = 4; };
    class FA_200Rnd_65x39_Belt_T_White : 200Rnd_65x39_Belt { author = QAUTHOR; displayName = "[Ghost] 200Rnd 6.5 Belt (White Tracer)"; descriptionShort = "6.5x39 Caseless EPR - White Tracer"; ammo = "FA_65_EPR_T_White"; initSpeed = 820; tracersEvery = 4; };
    class FA_200Rnd_65x39_Belt_T_Blue : 200Rnd_65x39_Belt { author = QAUTHOR; displayName = "[Ghost] 200Rnd 6.5 Belt (Blue Tracer)"; descriptionShort = "6.5x39 Caseless EPR - Blue Tracer"; ammo = "FA_65_EPR_T_Blue"; initSpeed = 820; tracersEvery = 4; };
    class FA_200Rnd_65x39_Belt_T_Orange : 200Rnd_65x39_Belt { author = QAUTHOR; displayName = "[Ghost] 200Rnd 6.5 Belt (Orange Tracer)"; descriptionShort = "6.5x39 Caseless EPR - Orange Tracer"; ammo = "FA_65_EPR_T_Orange"; initSpeed = 820; tracersEvery = 4; };

    // =========================================================
    // 6.5x39 — 30Rnd_65x39_caseless_black_mag
    // =========================================================
    class FA_30Rnd_65x39_caseless_black_mag_T_Red : 30Rnd_65x39_caseless_black_mag { author = QAUTHOR; displayName = "[Ghost] 30Rnd 6.5 Caseless Black (Red Tracer)"; descriptionShort = "6.5x39 Caseless EPR - Red Tracer"; ammo = "FA_65_EPR_T_Red"; initSpeed = 820; tracersEvery = 4; };
    class FA_30Rnd_65x39_caseless_black_mag_T_Yellow : 30Rnd_65x39_caseless_black_mag { author = QAUTHOR; displayName = "[Ghost] 30Rnd 6.5 Caseless Black (Yellow Tracer)"; descriptionShort = "6.5x39 Caseless EPR - Yellow Tracer"; ammo = "FA_65_EPR_T_Yellow"; initSpeed = 820; tracersEvery = 4; };
    class FA_30Rnd_65x39_caseless_black_mag_T_Green : 30Rnd_65x39_caseless_black_mag { author = QAUTHOR; displayName = "[Ghost] 30Rnd 6.5 Caseless Black (Green Tracer)"; descriptionShort = "6.5x39 Caseless EPR - Green Tracer"; ammo = "FA_65_EPR_T_Green"; initSpeed = 820; tracersEvery = 4; };
    class FA_30Rnd_65x39_caseless_black_mag_T_White : 30Rnd_65x39_caseless_black_mag { author = QAUTHOR; displayName = "[Ghost] 30Rnd 6.5 Caseless Black (White Tracer)"; descriptionShort = "6.5x39 Caseless EPR - White Tracer"; ammo = "FA_65_EPR_T_White"; initSpeed = 820; tracersEvery = 4; };
    class FA_30Rnd_65x39_caseless_black_mag_T_Blue : 30Rnd_65x39_caseless_black_mag { author = QAUTHOR; displayName = "[Ghost] 30Rnd 6.5 Caseless Black (Blue Tracer)"; descriptionShort = "6.5x39 Caseless EPR - Blue Tracer"; ammo = "FA_65_EPR_T_Blue"; initSpeed = 820; tracersEvery = 4; };
    class FA_30Rnd_65x39_caseless_black_mag_T_Orange : 30Rnd_65x39_caseless_black_mag { author = QAUTHOR; displayName = "[Ghost] 30Rnd 6.5 Caseless Black (Orange Tracer)"; descriptionShort = "6.5x39 Caseless EPR - Orange Tracer"; ammo = "FA_65_EPR_T_Orange"; initSpeed = 820; tracersEvery = 4; };

    // =========================================================
    // 6.5x39 — 30Rnd_65x39_caseless_green
    // =========================================================
    class FA_30Rnd_65x39_caseless_green_T_Red : 30Rnd_65x39_caseless_green { author = QAUTHOR; displayName = "[Ghost] 30Rnd 6.5 Caseless Green (Red Tracer)"; descriptionShort = "6.5x39 Caseless EPR - Red Tracer"; ammo = "FA_65_EPR_T_Red"; initSpeed = 820; tracersEvery = 4; };
    class FA_30Rnd_65x39_caseless_green_T_Yellow : 30Rnd_65x39_caseless_green { author = QAUTHOR; displayName = "[Ghost] 30Rnd 6.5 Caseless Green (Yellow Tracer)"; descriptionShort = "6.5x39 Caseless EPR - Yellow Tracer"; ammo = "FA_65_EPR_T_Yellow"; initSpeed = 820; tracersEvery = 4; };
    class FA_30Rnd_65x39_caseless_green_T_Green : 30Rnd_65x39_caseless_green { author = QAUTHOR; displayName = "[Ghost] 30Rnd 6.5 Caseless Green (Green Tracer)"; descriptionShort = "6.5x39 Caseless EPR - Green Tracer"; ammo = "FA_65_EPR_T_Green"; initSpeed = 820; tracersEvery = 4; };
    class FA_30Rnd_65x39_caseless_green_T_White : 30Rnd_65x39_caseless_green { author = QAUTHOR; displayName = "[Ghost] 30Rnd 6.5 Caseless Green (White Tracer)"; descriptionShort = "6.5x39 Caseless EPR - White Tracer"; ammo = "FA_65_EPR_T_White"; initSpeed = 820; tracersEvery = 4; };
    class FA_30Rnd_65x39_caseless_green_T_Blue : 30Rnd_65x39_caseless_green { author = QAUTHOR; displayName = "[Ghost] 30Rnd 6.5 Caseless Green (Blue Tracer)"; descriptionShort = "6.5x39 Caseless EPR - Blue Tracer"; ammo = "FA_65_EPR_T_Blue"; initSpeed = 820; tracersEvery = 4; };
    class FA_30Rnd_65x39_caseless_green_T_Orange : 30Rnd_65x39_caseless_green { author = QAUTHOR; displayName = "[Ghost] 30Rnd 6.5 Caseless Green (Orange Tracer)"; descriptionShort = "6.5x39 Caseless EPR - Orange Tracer"; ammo = "FA_65_EPR_T_Orange"; initSpeed = 820; tracersEvery = 4; };

    // =========================================================
    // 6.5x39 — 30Rnd_65x39_caseless_mag
    // =========================================================
    class FA_30Rnd_65x39_caseless_mag_T_Red : 30Rnd_65x39_caseless_mag { author = QAUTHOR; displayName = "[Ghost] 30Rnd 6.5 Caseless (Red Tracer)"; descriptionShort = "6.5x39 Caseless EPR - Red Tracer"; ammo = "FA_65_EPR_T_Red"; initSpeed = 820; tracersEvery = 4; };
    class FA_30Rnd_65x39_caseless_mag_T_Yellow : 30Rnd_65x39_caseless_mag { author = QAUTHOR; displayName = "[Ghost] 30Rnd 6.5 Caseless (Yellow Tracer)"; descriptionShort = "6.5x39 Caseless EPR - Yellow Tracer"; ammo = "FA_65_EPR_T_Yellow"; initSpeed = 820; tracersEvery = 4; };
    class FA_30Rnd_65x39_caseless_mag_T_Green : 30Rnd_65x39_caseless_mag { author = QAUTHOR; displayName = "[Ghost] 30Rnd 6.5 Caseless (Green Tracer)"; descriptionShort = "6.5x39 Caseless EPR - Green Tracer"; ammo = "FA_65_EPR_T_Green"; initSpeed = 820; tracersEvery = 4; };
    class FA_30Rnd_65x39_caseless_mag_T_White : 30Rnd_65x39_caseless_mag { author = QAUTHOR; displayName = "[Ghost] 30Rnd 6.5 Caseless (White Tracer)"; descriptionShort = "6.5x39 Caseless EPR - White Tracer"; ammo = "FA_65_EPR_T_White"; initSpeed = 820; tracersEvery = 4; };
    class FA_30Rnd_65x39_caseless_mag_T_Blue : 30Rnd_65x39_caseless_mag { author = QAUTHOR; displayName = "[Ghost] 30Rnd 6.5 Caseless (Blue Tracer)"; descriptionShort = "6.5x39 Caseless EPR - Blue Tracer"; ammo = "FA_65_EPR_T_Blue"; initSpeed = 820; tracersEvery = 4; };
    class FA_30Rnd_65x39_caseless_mag_T_Orange : 30Rnd_65x39_caseless_mag { author = QAUTHOR; displayName = "[Ghost] 30Rnd 6.5 Caseless (Orange Tracer)"; descriptionShort = "6.5x39 Caseless EPR - Orange Tracer"; ammo = "FA_65_EPR_T_Orange"; initSpeed = 820; tracersEvery = 4; };

    // =========================================================
    // 6.5x39 — 500Rnd_65x39_Belt
    // =========================================================
    class FA_500Rnd_65x39_Belt_T_Red : 500Rnd_65x39_Belt { author = QAUTHOR; displayName = "[Ghost] 500Rnd 6.5 Belt (Red Tracer)"; descriptionShort = "6.5x39 Caseless EPR - Red Tracer"; ammo = "FA_65_EPR_T_Red"; initSpeed = 820; tracersEvery = 4; };
    class FA_500Rnd_65x39_Belt_T_Yellow : 500Rnd_65x39_Belt { author = QAUTHOR; displayName = "[Ghost] 500Rnd 6.5 Belt (Yellow Tracer)"; descriptionShort = "6.5x39 Caseless EPR - Yellow Tracer"; ammo = "FA_65_EPR_T_Yellow"; initSpeed = 820; tracersEvery = 4; };
    class FA_500Rnd_65x39_Belt_T_Green : 500Rnd_65x39_Belt { author = QAUTHOR; displayName = "[Ghost] 500Rnd 6.5 Belt (Green Tracer)"; descriptionShort = "6.5x39 Caseless EPR - Green Tracer"; ammo = "FA_65_EPR_T_Green"; initSpeed = 820; tracersEvery = 4; };
    class FA_500Rnd_65x39_Belt_T_White : 500Rnd_65x39_Belt { author = QAUTHOR; displayName = "[Ghost] 500Rnd 6.5 Belt (White Tracer)"; descriptionShort = "6.5x39 Caseless EPR - White Tracer"; ammo = "FA_65_EPR_T_White"; initSpeed = 820; tracersEvery = 4; };
    class FA_500Rnd_65x39_Belt_T_Blue : 500Rnd_65x39_Belt { author = QAUTHOR; displayName = "[Ghost] 500Rnd 6.5 Belt (Blue Tracer)"; descriptionShort = "6.5x39 Caseless EPR - Blue Tracer"; ammo = "FA_65_EPR_T_Blue"; initSpeed = 820; tracersEvery = 4; };
    class FA_500Rnd_65x39_Belt_T_Orange : 500Rnd_65x39_Belt { author = QAUTHOR; displayName = "[Ghost] 500Rnd 6.5 Belt (Orange Tracer)"; descriptionShort = "6.5x39 Caseless EPR - Orange Tracer"; ammo = "FA_65_EPR_T_Orange"; initSpeed = 820; tracersEvery = 4; };

    // =========================================================
    // 6.5x39 — PylonWeapon_2000Rnd_65x39_belt
    // =========================================================
    class FA_PylonWeapon_2000Rnd_65x39_belt_T_Red : PylonWeapon_2000Rnd_65x39_belt { author = QAUTHOR; displayName = "[Ghost] 2000Rnd 6.5 Belt Pylon (Red Tracer)"; descriptionShort = "6.5x39 Caseless EPR - Red Tracer"; ammo = "FA_65_EPR_T_Red"; initSpeed = 820; tracersEvery = 4; };
    class FA_PylonWeapon_2000Rnd_65x39_belt_T_Yellow : PylonWeapon_2000Rnd_65x39_belt { author = QAUTHOR; displayName = "[Ghost] 2000Rnd 6.5 Belt Pylon (Yellow Tracer)"; descriptionShort = "6.5x39 Caseless EPR - Yellow Tracer"; ammo = "FA_65_EPR_T_Yellow"; initSpeed = 820; tracersEvery = 4; };
    class FA_PylonWeapon_2000Rnd_65x39_belt_T_Green : PylonWeapon_2000Rnd_65x39_belt { author = QAUTHOR; displayName = "[Ghost] 2000Rnd 6.5 Belt Pylon (Green Tracer)"; descriptionShort = "6.5x39 Caseless EPR - Green Tracer"; ammo = "FA_65_EPR_T_Green"; initSpeed = 820; tracersEvery = 4; };
    class FA_PylonWeapon_2000Rnd_65x39_belt_T_White : PylonWeapon_2000Rnd_65x39_belt { author = QAUTHOR; displayName = "[Ghost] 2000Rnd 6.5 Belt Pylon (White Tracer)"; descriptionShort = "6.5x39 Caseless EPR - White Tracer"; ammo = "FA_65_EPR_T_White"; initSpeed = 820; tracersEvery = 4; };
    class FA_PylonWeapon_2000Rnd_65x39_belt_T_Blue : PylonWeapon_2000Rnd_65x39_belt { author = QAUTHOR; displayName = "[Ghost] 2000Rnd 6.5 Belt Pylon (Blue Tracer)"; descriptionShort = "6.5x39 Caseless EPR - Blue Tracer"; ammo = "FA_65_EPR_T_Blue"; initSpeed = 820; tracersEvery = 4; };
    class FA_PylonWeapon_2000Rnd_65x39_belt_T_Orange : PylonWeapon_2000Rnd_65x39_belt { author = QAUTHOR; displayName = "[Ghost] 2000Rnd 6.5 Belt Pylon (Orange Tracer)"; descriptionShort = "6.5x39 Caseless EPR - Orange Tracer"; ammo = "FA_65_EPR_T_Orange"; initSpeed = 820; tracersEvery = 4; };

    // =========================================================
    // .338 LM — 10Rnd_338_Mag (vanilla MAR-10)
    // =========================================================
    class FA_10Rnd_338_Mk371_250gr_T_Red : 10Rnd_338_Mag { author = QAUTHOR; displayName = "[Ghost] 10Rnd .338 Mk371 LRP 250gr (Red Tracer)"; descriptionShort = ".338 LM Mk371 LRP-250 - Red Tracer"; ammo = "FA_338_Mk371_250gr_T_Red"; initSpeed = 905; tracersEvery = 4; };
    class FA_10Rnd_338_Mk371_250gr_T_Yellow : 10Rnd_338_Mag { author = QAUTHOR; displayName = "[Ghost] 10Rnd .338 Mk371 LRP 250gr (Yellow Tracer)"; descriptionShort = ".338 LM Mk371 LRP-250 - Yellow Tracer"; ammo = "FA_338_Mk371_250gr_T_Yellow"; initSpeed = 905; tracersEvery = 4; };
    class FA_10Rnd_338_Mk371_250gr_T_Green : 10Rnd_338_Mag { author = QAUTHOR; displayName = "[Ghost] 10Rnd .338 Mk371 LRP 250gr (Green Tracer)"; descriptionShort = ".338 LM Mk371 LRP-250 - Green Tracer"; ammo = "FA_338_Mk371_250gr_T_Green"; initSpeed = 905; tracersEvery = 4; };
    class FA_10Rnd_338_Mk371_250gr_T_White : 10Rnd_338_Mag { author = QAUTHOR; displayName = "[Ghost] 10Rnd .338 Mk371 LRP 250gr (White Tracer)"; descriptionShort = ".338 LM Mk371 LRP-250 - White Tracer"; ammo = "FA_338_Mk371_250gr_T_White"; initSpeed = 905; tracersEvery = 4; };
    class FA_10Rnd_338_Mk371_250gr_T_Blue : 10Rnd_338_Mag { author = QAUTHOR; displayName = "[Ghost] 10Rnd .338 Mk371 LRP 250gr (Blue Tracer)"; descriptionShort = ".338 LM Mk371 LRP-250 - Blue Tracer"; ammo = "FA_338_Mk371_250gr_T_Blue"; initSpeed = 905; tracersEvery = 4; };
    class FA_10Rnd_338_Mk371_250gr_T_Orange : 10Rnd_338_Mag { author = QAUTHOR; displayName = "[Ghost] 10Rnd .338 Mk371 LRP 250gr (Orange Tracer)"; descriptionShort = ".338 LM Mk371 LRP-250 - Orange Tracer"; ammo = "FA_338_Mk371_250gr_T_Orange"; initSpeed = 905; tracersEvery = 4; };
    class FA_10Rnd_338_Mk371_250gr_T_IR : 10Rnd_338_Mag { author = QAUTHOR; displayName = "[Ghost] 10Rnd .338 Mk371 LRP 250gr (IR Tracer)"; descriptionShort = ".338 LM Mk371 LRP-250 - IR Tracer"; ammo = "FA_338_Mk371_250gr_T_IR"; initSpeed = 905; tracersEvery = 4; };
    class FA_10Rnd_338_Mk371_285gr_T_Red : 10Rnd_338_Mag { author = QAUTHOR; displayName = "[Ghost] 10Rnd .338 Mk371 LRP 285gr (Red Tracer)"; descriptionShort = ".338 LM Mk371 LRP-285 - Red Tracer"; ammo = "FA_338_Mk371_285gr_T_Red"; initSpeed = 870; tracersEvery = 4; };
    class FA_10Rnd_338_Mk371_285gr_T_Yellow : 10Rnd_338_Mag { author = QAUTHOR; displayName = "[Ghost] 10Rnd .338 Mk371 LRP 285gr (Yellow Tracer)"; descriptionShort = ".338 LM Mk371 LRP-285 - Yellow Tracer"; ammo = "FA_338_Mk371_285gr_T_Yellow"; initSpeed = 870; tracersEvery = 4; };
    class FA_10Rnd_338_Mk371_285gr_T_Green : 10Rnd_338_Mag { author = QAUTHOR; displayName = "[Ghost] 10Rnd .338 Mk371 LRP 285gr (Green Tracer)"; descriptionShort = ".338 LM Mk371 LRP-285 - Green Tracer"; ammo = "FA_338_Mk371_285gr_T_Green"; initSpeed = 870; tracersEvery = 4; };
    class FA_10Rnd_338_Mk371_285gr_T_White : 10Rnd_338_Mag { author = QAUTHOR; displayName = "[Ghost] 10Rnd .338 Mk371 LRP 285gr (White Tracer)"; descriptionShort = ".338 LM Mk371 LRP-285 - White Tracer"; ammo = "FA_338_Mk371_285gr_T_White"; initSpeed = 870; tracersEvery = 4; };
    class FA_10Rnd_338_Mk371_285gr_T_Blue : 10Rnd_338_Mag { author = QAUTHOR; displayName = "[Ghost] 10Rnd .338 Mk371 LRP 285gr (Blue Tracer)"; descriptionShort = ".338 LM Mk371 LRP-285 - Blue Tracer"; ammo = "FA_338_Mk371_285gr_T_Blue"; initSpeed = 870; tracersEvery = 4; };
    class FA_10Rnd_338_Mk371_285gr_T_Orange : 10Rnd_338_Mag { author = QAUTHOR; displayName = "[Ghost] 10Rnd .338 Mk371 LRP 285gr (Orange Tracer)"; descriptionShort = ".338 LM Mk371 LRP-285 - Orange Tracer"; ammo = "FA_338_Mk371_285gr_T_Orange"; initSpeed = 870; tracersEvery = 4; };
    class FA_10Rnd_338_Mk371_285gr_T_IR : 10Rnd_338_Mag { author = QAUTHOR; displayName = "[Ghost] 10Rnd .338 Mk371 LRP 285gr (IR Tracer)"; descriptionShort = ".338 LM Mk371 LRP-285 - IR Tracer"; ammo = "FA_338_Mk371_285gr_T_IR"; initSpeed = 870; tracersEvery = 4; };
    class FA_10Rnd_338_Mk371_300gr_T_Red : 10Rnd_338_Mag { author = QAUTHOR; displayName = "[Ghost] 10Rnd .338 Mk371 LRP 300gr (Red Tracer)"; descriptionShort = ".338 LM Mk371 LRP-300 - Red Tracer"; ammo = "FA_338_Mk371_300gr_T_Red"; initSpeed = 830; tracersEvery = 4; };
    class FA_10Rnd_338_Mk371_300gr_T_Yellow : 10Rnd_338_Mag { author = QAUTHOR; displayName = "[Ghost] 10Rnd .338 Mk371 LRP 300gr (Yellow Tracer)"; descriptionShort = ".338 LM Mk371 LRP-300 - Yellow Tracer"; ammo = "FA_338_Mk371_300gr_T_Yellow"; initSpeed = 830; tracersEvery = 4; };
    class FA_10Rnd_338_Mk371_300gr_T_Green : 10Rnd_338_Mag { author = QAUTHOR; displayName = "[Ghost] 10Rnd .338 Mk371 LRP 300gr (Green Tracer)"; descriptionShort = ".338 LM Mk371 LRP-300 - Green Tracer"; ammo = "FA_338_Mk371_300gr_T_Green"; initSpeed = 830; tracersEvery = 4; };
    class FA_10Rnd_338_Mk371_300gr_T_White : 10Rnd_338_Mag { author = QAUTHOR; displayName = "[Ghost] 10Rnd .338 Mk371 LRP 300gr (White Tracer)"; descriptionShort = ".338 LM Mk371 LRP-300 - White Tracer"; ammo = "FA_338_Mk371_300gr_T_White"; initSpeed = 830; tracersEvery = 4; };
    class FA_10Rnd_338_Mk371_300gr_T_Blue : 10Rnd_338_Mag { author = QAUTHOR; displayName = "[Ghost] 10Rnd .338 Mk371 LRP 300gr (Blue Tracer)"; descriptionShort = ".338 LM Mk371 LRP-300 - Blue Tracer"; ammo = "FA_338_Mk371_300gr_T_Blue"; initSpeed = 830; tracersEvery = 4; };
    class FA_10Rnd_338_Mk371_300gr_T_Orange : 10Rnd_338_Mag { author = QAUTHOR; displayName = "[Ghost] 10Rnd .338 Mk371 LRP 300gr (Orange Tracer)"; descriptionShort = ".338 LM Mk371 LRP-300 - Orange Tracer"; ammo = "FA_338_Mk371_300gr_T_Orange"; initSpeed = 830; tracersEvery = 4; };
    class FA_10Rnd_338_Mk371_300gr_T_IR : 10Rnd_338_Mag { author = QAUTHOR; displayName = "[Ghost] 10Rnd .338 Mk371 LRP 300gr (IR Tracer)"; descriptionShort = ".338 LM Mk371 LRP-300 - IR Tracer"; ammo = "FA_338_Mk371_300gr_T_IR"; initSpeed = 830; tracersEvery = 4; };

    // =========================================================
    // 9.3x64 Type 40 — 10Rnd_93x64_Mag (Cyrus)
    // =========================================================
    class FA_10Rnd_93x64_Type40: 10Rnd_93x64_Mag {
        author = QAUTHOR;
        displayName = "[Ghost] 10Rnd 9.3x64 Type 40";
        descriptionShort = "9.3x64 Type 40 (2040)<br/>CSAT marksman — hybrid case, tungsten";
        ammo = "FA_93x64_Type40";
        initSpeed = 882;
        mass = 9;
    };
    class FA_10Rnd_93x64_Type40_T_Red    : 10Rnd_93x64_Mag { author = QAUTHOR; displayName = "[Ghost] 10Rnd 9.3x64 Type 40 (Red Tracer)";    descriptionShort = "9.3x64 Type 40 - Red Tracer";    ammo = "FA_93x64_Type40_T_Red";    initSpeed = 882; tracersEvery = 4; };
    class FA_10Rnd_93x64_Type40_T_Yellow : 10Rnd_93x64_Mag { author = QAUTHOR; displayName = "[Ghost] 10Rnd 9.3x64 Type 40 (Yellow Tracer)"; descriptionShort = "9.3x64 Type 40 - Yellow Tracer"; ammo = "FA_93x64_Type40_T_Yellow"; initSpeed = 882; tracersEvery = 4; };
    class FA_10Rnd_93x64_Type40_T_Green  : 10Rnd_93x64_Mag { author = QAUTHOR; displayName = "[Ghost] 10Rnd 9.3x64 Type 40 (Green Tracer)";  descriptionShort = "9.3x64 Type 40 - Green Tracer";  ammo = "FA_93x64_Type40_T_Green";  initSpeed = 882; tracersEvery = 4; };
    class FA_10Rnd_93x64_Type40_T_White  : 10Rnd_93x64_Mag { author = QAUTHOR; displayName = "[Ghost] 10Rnd 9.3x64 Type 40 (White Tracer)";  descriptionShort = "9.3x64 Type 40 - White Tracer";  ammo = "FA_93x64_Type40_T_White";  initSpeed = 882; tracersEvery = 4; };
    class FA_10Rnd_93x64_Type40_T_Blue   : 10Rnd_93x64_Mag { author = QAUTHOR; displayName = "[Ghost] 10Rnd 9.3x64 Type 40 (Blue Tracer)";   descriptionShort = "9.3x64 Type 40 - Blue Tracer";   ammo = "FA_93x64_Type40_T_Blue";   initSpeed = 882; tracersEvery = 4; };
    class FA_10Rnd_93x64_Type40_T_Orange : 10Rnd_93x64_Mag { author = QAUTHOR; displayName = "[Ghost] 10Rnd 9.3x64 Type 40 (Orange Tracer)"; descriptionShort = "9.3x64 Type 40 - Orange Tracer"; ammo = "FA_93x64_Type40_T_Orange"; initSpeed = 882; tracersEvery = 4; };
    class FA_10Rnd_93x64_Type40_T_IR     : 10Rnd_93x64_Mag { author = QAUTHOR; displayName = "[Ghost] 10Rnd 9.3x64 Type 40 (IR Tracer)";     descriptionShort = "9.3x64 Type 40 - IR Tracer";     ammo = "FA_93x64_Type40_T_IR";     initSpeed = 882; tracersEvery = 4; };

    // =========================================================
    // .408 Mk240 LRP — 10Rnd_338_Mag body (MAR-10 housing, .408 chambering)
    // =========================================================
    class FA_10Rnd_408_Mk240: 10Rnd_338_Mag {
        author = QAUTHOR;
        displayName = "[Ghost] 7Rnd .408 Mk240 LRP";
        descriptionShort = ".408 Mk240 LRP (2040)<br/>Extreme-range precision — hybrid case, tungsten";
        ammo = "FA_408_Mk240";
        count = 7;
        initSpeed = 965;
        mass = 10;
    };
    class FA_10Rnd_408_Mk240_T_Red    : 10Rnd_338_Mag { author = QAUTHOR; displayName = "[Ghost] 7Rnd .408 Mk240 LRP (Red Tracer)";    descriptionShort = ".408 Mk240 LRP - Red Tracer";    ammo = "FA_408_Mk240_T_Red";    count = 7; initSpeed = 965; tracersEvery = 4; };
    class FA_10Rnd_408_Mk240_T_Yellow : 10Rnd_338_Mag { author = QAUTHOR; displayName = "[Ghost] 7Rnd .408 Mk240 LRP (Yellow Tracer)"; descriptionShort = ".408 Mk240 LRP - Yellow Tracer"; ammo = "FA_408_Mk240_T_Yellow"; count = 7; initSpeed = 965; tracersEvery = 4; };
    class FA_10Rnd_408_Mk240_T_Green  : 10Rnd_338_Mag { author = QAUTHOR; displayName = "[Ghost] 7Rnd .408 Mk240 LRP (Green Tracer)";  descriptionShort = ".408 Mk240 LRP - Green Tracer";  ammo = "FA_408_Mk240_T_Green";  count = 7; initSpeed = 965; tracersEvery = 4; };
    class FA_10Rnd_408_Mk240_T_White  : 10Rnd_338_Mag { author = QAUTHOR; displayName = "[Ghost] 7Rnd .408 Mk240 LRP (White Tracer)";  descriptionShort = ".408 Mk240 LRP - White Tracer";  ammo = "FA_408_Mk240_T_White";  count = 7; initSpeed = 965; tracersEvery = 4; };
    class FA_10Rnd_408_Mk240_T_Blue   : 10Rnd_338_Mag { author = QAUTHOR; displayName = "[Ghost] 7Rnd .408 Mk240 LRP (Blue Tracer)";   descriptionShort = ".408 Mk240 LRP - Blue Tracer";   ammo = "FA_408_Mk240_T_Blue";   count = 7; initSpeed = 965; tracersEvery = 4; };
    class FA_10Rnd_408_Mk240_T_Orange : 10Rnd_338_Mag { author = QAUTHOR; displayName = "[Ghost] 7Rnd .408 Mk240 LRP (Orange Tracer)"; descriptionShort = ".408 Mk240 LRP - Orange Tracer"; ammo = "FA_408_Mk240_T_Orange"; count = 7; initSpeed = 965; tracersEvery = 4; };
    class FA_10Rnd_408_Mk240_T_IR     : 10Rnd_338_Mag { author = QAUTHOR; displayName = "[Ghost] 7Rnd .408 Mk240 LRP (IR Tracer)";     descriptionShort = ".408 Mk240 LRP - IR Tracer";     ammo = "FA_408_Mk240_T_IR";     count = 7; initSpeed = 965; tracersEvery = 4; };

    // =========================================================
    // 12.7x108 Mk250 LRP — 5Rnd_127x108_Mag (GM6 Lynx)
    // =========================================================
    class FA_5Rnd_127x108_Mk250: 5Rnd_127x108_Mag {
        author = QAUTHOR;
        displayName = "[Ghost] 5Rnd 12.7x108 Mk250 LRP";
        descriptionShort = "12.7x108 Mk250 LRP (2040)<br/>Precision/match — solid-core";
        ammo = "FA_127x108_Mk250";
        initSpeed = 870;
        mass = 15;
    };
    class FA_5Rnd_127x108_Mk250_T_Red    : 5Rnd_127x108_Mag { author = QAUTHOR; displayName = "[Ghost] 5Rnd 12.7x108 Mk250 LRP (Red Tracer)";    descriptionShort = "12.7 Mk250 - Red Tracer";    ammo = "FA_127x108_Mk250_T_Red";    initSpeed = 870; tracersEvery = 4; };
    class FA_5Rnd_127x108_Mk250_T_Yellow : 5Rnd_127x108_Mag { author = QAUTHOR; displayName = "[Ghost] 5Rnd 12.7x108 Mk250 LRP (Yellow Tracer)"; descriptionShort = "12.7 Mk250 - Yellow Tracer"; ammo = "FA_127x108_Mk250_T_Yellow"; initSpeed = 870; tracersEvery = 4; };
    class FA_5Rnd_127x108_Mk250_T_Green  : 5Rnd_127x108_Mag { author = QAUTHOR; displayName = "[Ghost] 5Rnd 12.7x108 Mk250 LRP (Green Tracer)";  descriptionShort = "12.7 Mk250 - Green Tracer";  ammo = "FA_127x108_Mk250_T_Green";  initSpeed = 870; tracersEvery = 4; };
    class FA_5Rnd_127x108_Mk250_T_White  : 5Rnd_127x108_Mag { author = QAUTHOR; displayName = "[Ghost] 5Rnd 12.7x108 Mk250 LRP (White Tracer)";  descriptionShort = "12.7 Mk250 - White Tracer";  ammo = "FA_127x108_Mk250_T_White";  initSpeed = 870; tracersEvery = 4; };
    class FA_5Rnd_127x108_Mk250_T_Blue   : 5Rnd_127x108_Mag { author = QAUTHOR; displayName = "[Ghost] 5Rnd 12.7x108 Mk250 LRP (Blue Tracer)";   descriptionShort = "12.7 Mk250 - Blue Tracer";   ammo = "FA_127x108_Mk250_T_Blue";   initSpeed = 870; tracersEvery = 4; };
    class FA_5Rnd_127x108_Mk250_T_Orange : 5Rnd_127x108_Mag { author = QAUTHOR; displayName = "[Ghost] 5Rnd 12.7x108 Mk250 LRP (Orange Tracer)"; descriptionShort = "12.7 Mk250 - Orange Tracer"; ammo = "FA_127x108_Mk250_T_Orange"; initSpeed = 870; tracersEvery = 4; };
    class FA_5Rnd_127x108_Mk250_T_IR     : 5Rnd_127x108_Mag { author = QAUTHOR; displayName = "[Ghost] 5Rnd 12.7x108 Mk250 LRP (IR Tracer)";     descriptionShort = "12.7 Mk250 - IR Tracer";     ammo = "FA_127x108_Mk250_T_IR";     initSpeed = 870; tracersEvery = 4; };

    // =========================================================
    // 12.7x108 Mk211 Mod 2 (HEIAP) — 5Rnd_127x108_Mag (GM6 Lynx)
    // =========================================================
    class FA_5Rnd_127x108_Mk211Mod2: 5Rnd_127x108_Mag {
        author = QAUTHOR;
        displayName = "[Ghost] 5Rnd 12.7x108 Mk211 Mod 2 (HEIAP)";
        descriptionShort = "12.7x108 Mk211 Mod 2 (2040)<br/>HEIAP anti-materiel — tungsten penetrator";
        ammo = "FA_127x108_Mk211Mod2";
        initSpeed = 900;
        mass = 15;
    };
    class FA_5Rnd_127x108_Mk211Mod2_T_Red    : 5Rnd_127x108_Mag { author = QAUTHOR; displayName = "[Ghost] 5Rnd 12.7x108 Mk211 Mod 2 (Red Tracer)";    descriptionShort = "12.7 Mk211 Mod 2 - Red Tracer";    ammo = "FA_127x108_Mk211Mod2_T_Red";    initSpeed = 900; tracersEvery = 4; };
    class FA_5Rnd_127x108_Mk211Mod2_T_Yellow : 5Rnd_127x108_Mag { author = QAUTHOR; displayName = "[Ghost] 5Rnd 12.7x108 Mk211 Mod 2 (Yellow Tracer)"; descriptionShort = "12.7 Mk211 Mod 2 - Yellow Tracer"; ammo = "FA_127x108_Mk211Mod2_T_Yellow"; initSpeed = 900; tracersEvery = 4; };
    class FA_5Rnd_127x108_Mk211Mod2_T_Green  : 5Rnd_127x108_Mag { author = QAUTHOR; displayName = "[Ghost] 5Rnd 12.7x108 Mk211 Mod 2 (Green Tracer)";  descriptionShort = "12.7 Mk211 Mod 2 - Green Tracer";  ammo = "FA_127x108_Mk211Mod2_T_Green";  initSpeed = 900; tracersEvery = 4; };
    class FA_5Rnd_127x108_Mk211Mod2_T_White  : 5Rnd_127x108_Mag { author = QAUTHOR; displayName = "[Ghost] 5Rnd 12.7x108 Mk211 Mod 2 (White Tracer)";  descriptionShort = "12.7 Mk211 Mod 2 - White Tracer";  ammo = "FA_127x108_Mk211Mod2_T_White";  initSpeed = 900; tracersEvery = 4; };
    class FA_5Rnd_127x108_Mk211Mod2_T_Blue   : 5Rnd_127x108_Mag { author = QAUTHOR; displayName = "[Ghost] 5Rnd 12.7x108 Mk211 Mod 2 (Blue Tracer)";   descriptionShort = "12.7 Mk211 Mod 2 - Blue Tracer";   ammo = "FA_127x108_Mk211Mod2_T_Blue";   initSpeed = 900; tracersEvery = 4; };
    class FA_5Rnd_127x108_Mk211Mod2_T_Orange : 5Rnd_127x108_Mag { author = QAUTHOR; displayName = "[Ghost] 5Rnd 12.7x108 Mk211 Mod 2 (Orange Tracer)"; descriptionShort = "12.7 Mk211 Mod 2 - Orange Tracer"; ammo = "FA_127x108_Mk211Mod2_T_Orange"; initSpeed = 900; tracersEvery = 4; };
    class FA_5Rnd_127x108_Mk211Mod2_T_IR     : 5Rnd_127x108_Mag { author = QAUTHOR; displayName = "[Ghost] 5Rnd 12.7x108 Mk211 Mod 2 (IR Tracer)";     descriptionShort = "12.7 Mk211 Mod 2 - IR Tracer";     ammo = "FA_127x108_Mk211Mod2_T_IR";     initSpeed = 900; tracersEvery = 4; };

    // =========================================================
    // 5.56x45 — 200Rnd_556x45_Box_F (vanilla MINIMI belt box)
    // =========================================================
    class FA_200Rnd_556x45_Box_F_T_Red : 200Rnd_556x45_Box_F { author = QAUTHOR; displayName = "[Ghost] 200Rnd 5.56 Box (Red Tracer)"; descriptionShort = "5.56x45 Mk327 HV - Red Tracer"; ammo = "FA_556_Mk327_HV_T_Red"; initSpeed = 1000; tracersEvery = 4; };
    class FA_200Rnd_556x45_Box_F_T_Yellow : 200Rnd_556x45_Box_F { author = QAUTHOR; displayName = "[Ghost] 200Rnd 5.56 Box (Yellow Tracer)"; descriptionShort = "5.56x45 Mk327 HV - Yellow Tracer"; ammo = "FA_556_Mk327_HV_T_Yellow"; initSpeed = 1000; tracersEvery = 4; };
    class FA_200Rnd_556x45_Box_F_T_Green : 200Rnd_556x45_Box_F { author = QAUTHOR; displayName = "[Ghost] 200Rnd 5.56 Box (Green Tracer)"; descriptionShort = "5.56x45 Mk327 HV - Green Tracer"; ammo = "FA_556_Mk327_HV_T_Green"; initSpeed = 1000; tracersEvery = 4; };
    class FA_200Rnd_556x45_Box_F_T_White : 200Rnd_556x45_Box_F { author = QAUTHOR; displayName = "[Ghost] 200Rnd 5.56 Box (White Tracer)"; descriptionShort = "5.56x45 Mk327 HV - White Tracer"; ammo = "FA_556_Mk327_HV_T_White"; initSpeed = 1000; tracersEvery = 4; };
    class FA_200Rnd_556x45_Box_F_T_Blue : 200Rnd_556x45_Box_F { author = QAUTHOR; displayName = "[Ghost] 200Rnd 5.56 Box (Blue Tracer)"; descriptionShort = "5.56x45 Mk327 HV - Blue Tracer"; ammo = "FA_556_Mk327_HV_T_Blue"; initSpeed = 1000; tracersEvery = 4; };
    class FA_200Rnd_556x45_Box_F_T_Orange : 200Rnd_556x45_Box_F { author = QAUTHOR; displayName = "[Ghost] 200Rnd 5.56 Box (Orange Tracer)"; descriptionShort = "5.56x45 Mk327 HV - Orange Tracer"; ammo = "FA_556_Mk327_HV_T_Orange"; initSpeed = 1000; tracersEvery = 4; };
    class FA_200Rnd_556x45_Box_F_T_IR : 200Rnd_556x45_Box_F { author = QAUTHOR; displayName = "[Ghost] 200Rnd 5.56 Box (IR Tracer)"; descriptionShort = "5.56x45 Mk327 HV - IR Tracer"; ammo = "FA_556_Mk327_HV_T_IR"; initSpeed = 1000; tracersEvery = 4; };
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
        displayName = "[Ghost] 30Rnd 5.8x42 Ball HV";
        descriptionShort = "5.8x42 Ball HV<br/>High-velocity general-purpose";
        ammo = "FA_580_Ball_HV";
        initSpeed = 940;
    };
    class FA_30Rnd_580x42_Ball_HV_T_Red    : 30Rnd_580x42_Mag_F { author = QAUTHOR; displayName = "[Ghost] 30Rnd 5.8x42 Ball HV (Red Tracer)";    descriptionShort = "5.8x42 Ball HV - Red Tracer";    ammo = "FA_580_Ball_HV_T_Red";    initSpeed = 940; tracersEvery = 4; };
    class FA_30Rnd_580x42_Ball_HV_T_Yellow : 30Rnd_580x42_Mag_F { author = QAUTHOR; displayName = "[Ghost] 30Rnd 5.8x42 Ball HV (Yellow Tracer)"; descriptionShort = "5.8x42 Ball HV - Yellow Tracer"; ammo = "FA_580_Ball_HV_T_Yellow"; initSpeed = 940; tracersEvery = 4; };
    class FA_30Rnd_580x42_Ball_HV_T_Green  : 30Rnd_580x42_Mag_F { author = QAUTHOR; displayName = "[Ghost] 30Rnd 5.8x42 Ball HV (Green Tracer)";  descriptionShort = "5.8x42 Ball HV - Green Tracer";  ammo = "FA_580_Ball_HV_T_Green";  initSpeed = 940; tracersEvery = 4; };
    class FA_30Rnd_580x42_Ball_HV_T_White  : 30Rnd_580x42_Mag_F { author = QAUTHOR; displayName = "[Ghost] 30Rnd 5.8x42 Ball HV (White Tracer)";  descriptionShort = "5.8x42 Ball HV - White Tracer";  ammo = "FA_580_Ball_HV_T_White";  initSpeed = 940; tracersEvery = 4; };
    class FA_30Rnd_580x42_Ball_HV_T_Blue   : 30Rnd_580x42_Mag_F { author = QAUTHOR; displayName = "[Ghost] 30Rnd 5.8x42 Ball HV (Blue Tracer)";   descriptionShort = "5.8x42 Ball HV - Blue Tracer";   ammo = "FA_580_Ball_HV_T_Blue";   initSpeed = 940; tracersEvery = 4; };
    class FA_30Rnd_580x42_Ball_HV_T_Orange : 30Rnd_580x42_Mag_F { author = QAUTHOR; displayName = "[Ghost] 30Rnd 5.8x42 Ball HV (Orange Tracer)"; descriptionShort = "5.8x42 Ball HV - Orange Tracer"; ammo = "FA_580_Ball_HV_T_Orange"; initSpeed = 940; tracersEvery = 4; };
    class FA_30Rnd_580x42_Ball_HV_T_IR     : 30Rnd_580x42_Mag_F { author = QAUTHOR; displayName = "[Ghost] 30Rnd 5.8x42 Ball HV (IR Tracer)";     descriptionShort = "5.8x42 Ball HV - IR Tracer";     ammo = "FA_580_Ball_HV_T_IR";     initSpeed = 940; tracersEvery = 4; };

    // =========================================================
    // .45 ACP Mk421 SUB-AP — 30Rnd SMG (Vermin)
    // =========================================================
    class FA_30Rnd_45ACP_Mk421: 30Rnd_45ACP_Mag_SMG_01 {
        author = QAUTHOR;
        displayName = "[Ghost] 30Rnd .45 Mk421 SUB-AP";
        descriptionShort = ".45 ACP Mk421 (2040)<br/>Subsonic tungsten AP — suppressed CQB";
        ammo = "FA_45ACP_Mk421_SubAP";
        initSpeed = 290;
        mass = 6;
    };
    class FA_30Rnd_45ACP_Mk421_T_Red    : 30Rnd_45ACP_Mag_SMG_01 { author = QAUTHOR; displayName = "[Ghost] 30Rnd .45 Mk421 SUB-AP (Red Tracer)";    descriptionShort = ".45 ACP Mk421 - Red Tracer";    ammo = "FA_45ACP_Mk421_SubAP_T_Red";    initSpeed = 290; tracersEvery = 4; };
    class FA_30Rnd_45ACP_Mk421_T_Yellow : 30Rnd_45ACP_Mag_SMG_01 { author = QAUTHOR; displayName = "[Ghost] 30Rnd .45 Mk421 SUB-AP (Yellow Tracer)"; descriptionShort = ".45 ACP Mk421 - Yellow Tracer"; ammo = "FA_45ACP_Mk421_SubAP_T_Yellow"; initSpeed = 290; tracersEvery = 4; };
    class FA_30Rnd_45ACP_Mk421_T_Green  : 30Rnd_45ACP_Mag_SMG_01 { author = QAUTHOR; displayName = "[Ghost] 30Rnd .45 Mk421 SUB-AP (Green Tracer)";  descriptionShort = ".45 ACP Mk421 - Green Tracer";  ammo = "FA_45ACP_Mk421_SubAP_T_Green";  initSpeed = 290; tracersEvery = 4; };
    class FA_30Rnd_45ACP_Mk421_T_White  : 30Rnd_45ACP_Mag_SMG_01 { author = QAUTHOR; displayName = "[Ghost] 30Rnd .45 Mk421 SUB-AP (White Tracer)";  descriptionShort = ".45 ACP Mk421 - White Tracer";  ammo = "FA_45ACP_Mk421_SubAP_T_White";  initSpeed = 290; tracersEvery = 4; };
    class FA_30Rnd_45ACP_Mk421_T_Blue   : 30Rnd_45ACP_Mag_SMG_01 { author = QAUTHOR; displayName = "[Ghost] 30Rnd .45 Mk421 SUB-AP (Blue Tracer)";   descriptionShort = ".45 ACP Mk421 - Blue Tracer";   ammo = "FA_45ACP_Mk421_SubAP_T_Blue";   initSpeed = 290; tracersEvery = 4; };
    class FA_30Rnd_45ACP_Mk421_T_Orange : 30Rnd_45ACP_Mag_SMG_01 { author = QAUTHOR; displayName = "[Ghost] 30Rnd .45 Mk421 SUB-AP (Orange Tracer)"; descriptionShort = ".45 ACP Mk421 - Orange Tracer"; ammo = "FA_45ACP_Mk421_SubAP_T_Orange"; initSpeed = 290; tracersEvery = 4; };
    class FA_30Rnd_45ACP_Mk421_T_IR     : 30Rnd_45ACP_Mag_SMG_01 { author = QAUTHOR; displayName = "[Ghost] 30Rnd .45 Mk421 SUB-AP (IR Tracer)";     descriptionShort = ".45 ACP Mk421 - IR Tracer";     ammo = "FA_45ACP_Mk421_SubAP_T_IR";     initSpeed = 290; tracersEvery = 4; };

    // =========================================================
    // .45 ACP Mk421 SUB-AP — 11Rnd pistol (4-five)
    // =========================================================
    class FA_11Rnd_45ACP_Mk421: 11Rnd_45ACP_Mag {
        author = QAUTHOR;
        displayName = "[Ghost] 11Rnd .45 Mk421 SUB-AP";
        descriptionShort = ".45 ACP Mk421 (2040)<br/>Subsonic tungsten AP — suppressed sidearm";
        ammo = "FA_45ACP_Mk421_SubAP";
        initSpeed = 280;
        mass = 3;
    };
    class FA_11Rnd_45ACP_Mk421_T_Red    : 11Rnd_45ACP_Mag { author = QAUTHOR; displayName = "[Ghost] 11Rnd .45 Mk421 SUB-AP (Red Tracer)";    descriptionShort = ".45 ACP Mk421 - Red Tracer";    ammo = "FA_45ACP_Mk421_SubAP_T_Red";    initSpeed = 280; tracersEvery = 4; };
    class FA_11Rnd_45ACP_Mk421_T_Yellow : 11Rnd_45ACP_Mag { author = QAUTHOR; displayName = "[Ghost] 11Rnd .45 Mk421 SUB-AP (Yellow Tracer)"; descriptionShort = ".45 ACP Mk421 - Yellow Tracer"; ammo = "FA_45ACP_Mk421_SubAP_T_Yellow"; initSpeed = 280; tracersEvery = 4; };
    class FA_11Rnd_45ACP_Mk421_T_Green  : 11Rnd_45ACP_Mag { author = QAUTHOR; displayName = "[Ghost] 11Rnd .45 Mk421 SUB-AP (Green Tracer)";  descriptionShort = ".45 ACP Mk421 - Green Tracer";  ammo = "FA_45ACP_Mk421_SubAP_T_Green";  initSpeed = 280; tracersEvery = 4; };
    class FA_11Rnd_45ACP_Mk421_T_White  : 11Rnd_45ACP_Mag { author = QAUTHOR; displayName = "[Ghost] 11Rnd .45 Mk421 SUB-AP (White Tracer)";  descriptionShort = ".45 ACP Mk421 - White Tracer";  ammo = "FA_45ACP_Mk421_SubAP_T_White";  initSpeed = 280; tracersEvery = 4; };
    class FA_11Rnd_45ACP_Mk421_T_Blue   : 11Rnd_45ACP_Mag { author = QAUTHOR; displayName = "[Ghost] 11Rnd .45 Mk421 SUB-AP (Blue Tracer)";   descriptionShort = ".45 ACP Mk421 - Blue Tracer";   ammo = "FA_45ACP_Mk421_SubAP_T_Blue";   initSpeed = 280; tracersEvery = 4; };
    class FA_11Rnd_45ACP_Mk421_T_Orange : 11Rnd_45ACP_Mag { author = QAUTHOR; displayName = "[Ghost] 11Rnd .45 Mk421 SUB-AP (Orange Tracer)"; descriptionShort = ".45 ACP Mk421 - Orange Tracer"; ammo = "FA_45ACP_Mk421_SubAP_T_Orange"; initSpeed = 280; tracersEvery = 4; };
    class FA_11Rnd_45ACP_Mk421_T_IR     : 11Rnd_45ACP_Mag { author = QAUTHOR; displayName = "[Ghost] 11Rnd .45 Mk421 SUB-AP (IR Tracer)";     descriptionShort = ".45 ACP Mk421 - IR Tracer";     ammo = "FA_45ACP_Mk421_SubAP_T_IR";     initSpeed = 280; tracersEvery = 4; };

    // =========================================================
    // Mk389 TBK — 40mm Tungsten Buckshot (UGL / MGL)
    // High initSpeed for a flat, fast pattern effective to ~100 m.
    // =========================================================
    class FA_1Rnd_40mm_Mk389_TBK: 1Rnd_HE_Grenade_shell {
        author = QAUTHOR;
        displayName = "[Ghost] 40mm Mk389 Tungsten Buckshot";
        descriptionShort = "40mm Tungsten Buckshot<br/>18-pellet anti-personnel pattern; effective ~100 m";
        ammo = "FA_40mm_Mk389_TBK";
        initSpeed = 180;
    };
    class FA_3Rnd_40mm_Mk389_TBK: 3Rnd_HE_Grenade_shell {
        author = QAUTHOR;
        displayName = "[Ghost] 40mm Mk389 Tungsten Buckshot x3";
        descriptionShort = "40mm Tungsten Buckshot<br/>18-pellet anti-personnel pattern; effective ~100 m";
        ammo = "FA_40mm_Mk389_TBK";
        initSpeed = 180;
    };
};
