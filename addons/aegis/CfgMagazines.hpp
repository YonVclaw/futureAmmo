class CfgMagazines {
    // Aegis weapon-fitted mag bases (defined in A3_Aegis_Weapons_F_Aegis)
    class Aegis_10Rnd_762x54_SVD_Red_Mag_F;   // SVD Dragunov, 10Rnd 7.62x54R
    class 5Rnd_127x99_Mag;                     // WF50, 5Rnd .50 BMG (12.7x99)
    class 30Rnd_545x39_AK12_Mag_F;             // AK-12, 30Rnd 5.45x39
    class Aegis_45Rnd_545x39_Mag_F;            // RPK-74, 45Rnd 5.45x39
    class Aegis_60Rnd_545x39_Mag_F;            // AK-12 drum, 60Rnd 5.45x39

    // =========================================================
    // 7.62x54R SVD (Rahim_762x54) — FA 762x54R Ball HV
    // No FA 7.62x54R box-fed mag existed; built off the SVD mag base.
    // =========================================================
    class FA_Aegis_10Rnd_762x54_SVD_HV: Aegis_10Rnd_762x54_SVD_Red_Mag_F {
        author = QAUTHOR;
        displayName = "[Ghost] 10Rnd 7.62x54R SVD (Ball HV)";
        descriptionShort = "Caliber: 7.62x54R Ball HV<br/>Rounds: 10<br/>Used in: SVD Dragunov";
        ammo = "FA_762x54R_Ball_HV";
        lastRoundsTracer = 0;
        initSpeed = 855;
    };
    class FA_Aegis_10Rnd_762x54_SVD_HV_T_Red    : FA_Aegis_10Rnd_762x54_SVD_HV { displayName = "[Ghost] 10Rnd 7.62x54R SVD (Red Tracer)";    descriptionShort = "7.62x54R Ball HV - Red Tracer";    ammo = "FA_762x54R_Ball_HV_T_Red"; tracersEvery = 4; };
    class FA_Aegis_10Rnd_762x54_SVD_HV_T_Yellow : FA_Aegis_10Rnd_762x54_SVD_HV { displayName = "[Ghost] 10Rnd 7.62x54R SVD (Yellow Tracer)"; descriptionShort = "7.62x54R Ball HV - Yellow Tracer"; ammo = "FA_762x54R_Ball_HV_T_Yellow"; tracersEvery = 4; };
    class FA_Aegis_10Rnd_762x54_SVD_HV_T_Green  : FA_Aegis_10Rnd_762x54_SVD_HV { displayName = "[Ghost] 10Rnd 7.62x54R SVD (Green Tracer)";  descriptionShort = "7.62x54R Ball HV - Green Tracer";  ammo = "FA_762x54R_Ball_HV_T_Green"; tracersEvery = 4; };
    class FA_Aegis_10Rnd_762x54_SVD_HV_T_White  : FA_Aegis_10Rnd_762x54_SVD_HV { displayName = "[Ghost] 10Rnd 7.62x54R SVD (White Tracer)";  descriptionShort = "7.62x54R Ball HV - White Tracer";  ammo = "FA_762x54R_Ball_HV_T_White"; tracersEvery = 4; };
    class FA_Aegis_10Rnd_762x54_SVD_HV_T_Blue   : FA_Aegis_10Rnd_762x54_SVD_HV { displayName = "[Ghost] 10Rnd 7.62x54R SVD (Blue Tracer)";   descriptionShort = "7.62x54R Ball HV - Blue Tracer";   ammo = "FA_762x54R_Ball_HV_T_Blue"; tracersEvery = 4; };
    class FA_Aegis_10Rnd_762x54_SVD_HV_T_Orange : FA_Aegis_10Rnd_762x54_SVD_HV { displayName = "[Ghost] 10Rnd 7.62x54R SVD (Orange Tracer)"; descriptionShort = "7.62x54R Ball HV - Orange Tracer"; ammo = "FA_762x54R_Ball_HV_T_Orange"; tracersEvery = 4; };
    class FA_Aegis_10Rnd_762x54_SVD_HV_T_IR     : FA_Aegis_10Rnd_762x54_SVD_HV { displayName = "[Ghost] 10Rnd 7.62x54R SVD (IR Tracer)";     descriptionShort = "7.62x54R Ball HV - IR Tracer";     ammo = "FA_762x54R_Ball_HV_T_IR"; tracersEvery = 4; };

    // =========================================================
    // .50 BMG WF50 (WF50_127x99) — FA Mk258 LRP + Mk211 Mod 0
    // No FA 12.7x99 mag existed; built off the WF50 mag base.
    // =========================================================
    class FA_Aegis_5Rnd_127x99_Mk258: 5Rnd_127x99_Mag {
        author = QAUTHOR;
        displayName = "[Ghost] 5Rnd .50 WF50 Mk258 LRP";
        descriptionShort = "Caliber: 12.7x99 Mk258 LRP<br/>Rounds: 5<br/>Used in: WF50 - precision / match";
        ammo = "FA_127x99_Mk258_LRP";
        initSpeed = 860;
    };
    class FA_Aegis_5Rnd_127x99_Mk258_T_Red    : FA_Aegis_5Rnd_127x99_Mk258 { displayName = "[Ghost] 5Rnd .50 WF50 Mk258 LRP (Red Tracer)";    descriptionShort = ".50 Mk258 LRP - Red Tracer";    ammo = "FA_127x99_Mk258_LRP_T_Red"; tracersEvery = 4; };
    class FA_Aegis_5Rnd_127x99_Mk258_T_Yellow : FA_Aegis_5Rnd_127x99_Mk258 { displayName = "[Ghost] 5Rnd .50 WF50 Mk258 LRP (Yellow Tracer)"; descriptionShort = ".50 Mk258 LRP - Yellow Tracer"; ammo = "FA_127x99_Mk258_LRP_T_Yellow"; tracersEvery = 4; };
    class FA_Aegis_5Rnd_127x99_Mk258_T_Green  : FA_Aegis_5Rnd_127x99_Mk258 { displayName = "[Ghost] 5Rnd .50 WF50 Mk258 LRP (Green Tracer)";  descriptionShort = ".50 Mk258 LRP - Green Tracer";  ammo = "FA_127x99_Mk258_LRP_T_Green"; tracersEvery = 4; };
    class FA_Aegis_5Rnd_127x99_Mk258_T_White  : FA_Aegis_5Rnd_127x99_Mk258 { displayName = "[Ghost] 5Rnd .50 WF50 Mk258 LRP (White Tracer)";  descriptionShort = ".50 Mk258 LRP - White Tracer";  ammo = "FA_127x99_Mk258_LRP_T_White"; tracersEvery = 4; };
    class FA_Aegis_5Rnd_127x99_Mk258_T_Blue   : FA_Aegis_5Rnd_127x99_Mk258 { displayName = "[Ghost] 5Rnd .50 WF50 Mk258 LRP (Blue Tracer)";   descriptionShort = ".50 Mk258 LRP - Blue Tracer";   ammo = "FA_127x99_Mk258_LRP_T_Blue"; tracersEvery = 4; };
    class FA_Aegis_5Rnd_127x99_Mk258_T_Orange : FA_Aegis_5Rnd_127x99_Mk258 { displayName = "[Ghost] 5Rnd .50 WF50 Mk258 LRP (Orange Tracer)"; descriptionShort = ".50 Mk258 LRP - Orange Tracer"; ammo = "FA_127x99_Mk258_LRP_T_Orange"; tracersEvery = 4; };
    class FA_Aegis_5Rnd_127x99_Mk258_T_IR     : FA_Aegis_5Rnd_127x99_Mk258 { displayName = "[Ghost] 5Rnd .50 WF50 Mk258 LRP (IR Tracer)";     descriptionShort = ".50 Mk258 LRP - IR Tracer";     ammo = "FA_127x99_Mk258_LRP_T_IR"; tracersEvery = 4; };

    class FA_Aegis_5Rnd_127x99_Mk211Mod0: 5Rnd_127x99_Mag {
        author = QAUTHOR;
        displayName = "[Ghost] 5Rnd .50 WF50 Mk211 Mod 0 (HEIAP)";
        descriptionShort = "Caliber: 12.7x99 Mk211 Mod 0<br/>Rounds: 5<br/>Used in: WF50 - HEIAP anti-materiel";
        ammo = "FA_127x99_Mk211Mod0_AP";
        initSpeed = 890;
    };
    class FA_Aegis_5Rnd_127x99_Mk211Mod0_T_Red    : FA_Aegis_5Rnd_127x99_Mk211Mod0 { displayName = "[Ghost] 5Rnd .50 WF50 Mk211 Mod 0 (Red Tracer)";    descriptionShort = ".50 Mk211 Mod 0 - Red Tracer";    ammo = "FA_127x99_Mk211Mod0_AP_T_Red"; tracersEvery = 4; };
    class FA_Aegis_5Rnd_127x99_Mk211Mod0_T_Yellow : FA_Aegis_5Rnd_127x99_Mk211Mod0 { displayName = "[Ghost] 5Rnd .50 WF50 Mk211 Mod 0 (Yellow Tracer)"; descriptionShort = ".50 Mk211 Mod 0 - Yellow Tracer"; ammo = "FA_127x99_Mk211Mod0_AP_T_Yellow"; tracersEvery = 4; };
    class FA_Aegis_5Rnd_127x99_Mk211Mod0_T_Green  : FA_Aegis_5Rnd_127x99_Mk211Mod0 { displayName = "[Ghost] 5Rnd .50 WF50 Mk211 Mod 0 (Green Tracer)";  descriptionShort = ".50 Mk211 Mod 0 - Green Tracer";  ammo = "FA_127x99_Mk211Mod0_AP_T_Green"; tracersEvery = 4; };
    class FA_Aegis_5Rnd_127x99_Mk211Mod0_T_White  : FA_Aegis_5Rnd_127x99_Mk211Mod0 { displayName = "[Ghost] 5Rnd .50 WF50 Mk211 Mod 0 (White Tracer)";  descriptionShort = ".50 Mk211 Mod 0 - White Tracer";  ammo = "FA_127x99_Mk211Mod0_AP_T_White"; tracersEvery = 4; };
    class FA_Aegis_5Rnd_127x99_Mk211Mod0_T_Blue   : FA_Aegis_5Rnd_127x99_Mk211Mod0 { displayName = "[Ghost] 5Rnd .50 WF50 Mk211 Mod 0 (Blue Tracer)";   descriptionShort = ".50 Mk211 Mod 0 - Blue Tracer";   ammo = "FA_127x99_Mk211Mod0_AP_T_Blue"; tracersEvery = 4; };
    class FA_Aegis_5Rnd_127x99_Mk211Mod0_T_Orange : FA_Aegis_5Rnd_127x99_Mk211Mod0 { displayName = "[Ghost] 5Rnd .50 WF50 Mk211 Mod 0 (Orange Tracer)"; descriptionShort = ".50 Mk211 Mod 0 - Orange Tracer"; ammo = "FA_127x99_Mk211Mod0_AP_T_Orange"; tracersEvery = 4; };
    class FA_Aegis_5Rnd_127x99_Mk211Mod0_T_IR     : FA_Aegis_5Rnd_127x99_Mk211Mod0 { displayName = "[Ghost] 5Rnd .50 WF50 Mk211 Mod 0 (IR Tracer)";     descriptionShort = ".50 Mk211 Mod 0 - IR Tracer";     ammo = "FA_127x99_Mk211Mod0_AP_T_IR"; tracersEvery = 4; };

    // =========================================================
    // 5.45x39 AK-12 / RPK-74 (AK_545x39) — FA 7N44 / 7N48 / 7U5
    // =========================================================
    // 7N44 Osa — 30Rnd (AK-12)
    class FA_Aegis_30Rnd_545x39_7N44: 30Rnd_545x39_AK12_Mag_F {
        author = QAUTHOR;
        displayName = "[Ghost] 30Rnd 5.45x39 7N44 Osa (HP)";
        descriptionShort = "Caliber: 5.45x39 7N44 Osa<br/>Rounds: 30<br/>Hybrid case, tungsten - high pressure";
        ammo = "FA_545x39_7N44_HP";
        initSpeed = 925;
    };
    class FA_Aegis_30Rnd_545x39_7N44_T_Red    : FA_Aegis_30Rnd_545x39_7N44 { displayName = "[Ghost] 30Rnd 5.45x39 7N44 Osa (Red Tracer)";    descriptionShort = "5.45x39 7N44 Osa - Red Tracer";    ammo = "FA_545x39_7N44_HP_T_Red"; tracersEvery = 4; };
    class FA_Aegis_30Rnd_545x39_7N44_T_Yellow : FA_Aegis_30Rnd_545x39_7N44 { displayName = "[Ghost] 30Rnd 5.45x39 7N44 Osa (Yellow Tracer)"; descriptionShort = "5.45x39 7N44 Osa - Yellow Tracer"; ammo = "FA_545x39_7N44_HP_T_Yellow"; tracersEvery = 4; };
    class FA_Aegis_30Rnd_545x39_7N44_T_Green  : FA_Aegis_30Rnd_545x39_7N44 { displayName = "[Ghost] 30Rnd 5.45x39 7N44 Osa (Green Tracer)";  descriptionShort = "5.45x39 7N44 Osa - Green Tracer";  ammo = "FA_545x39_7N44_HP_T_Green"; tracersEvery = 4; };
    class FA_Aegis_30Rnd_545x39_7N44_T_White  : FA_Aegis_30Rnd_545x39_7N44 { displayName = "[Ghost] 30Rnd 5.45x39 7N44 Osa (White Tracer)";  descriptionShort = "5.45x39 7N44 Osa - White Tracer";  ammo = "FA_545x39_7N44_HP_T_White"; tracersEvery = 4; };
    class FA_Aegis_30Rnd_545x39_7N44_T_Blue   : FA_Aegis_30Rnd_545x39_7N44 { displayName = "[Ghost] 30Rnd 5.45x39 7N44 Osa (Blue Tracer)";   descriptionShort = "5.45x39 7N44 Osa - Blue Tracer";   ammo = "FA_545x39_7N44_HP_T_Blue"; tracersEvery = 4; };
    class FA_Aegis_30Rnd_545x39_7N44_T_Orange : FA_Aegis_30Rnd_545x39_7N44 { displayName = "[Ghost] 30Rnd 5.45x39 7N44 Osa (Orange Tracer)"; descriptionShort = "5.45x39 7N44 Osa - Orange Tracer"; ammo = "FA_545x39_7N44_HP_T_Orange"; tracersEvery = 4; };
    class FA_Aegis_30Rnd_545x39_7N44_T_IR     : FA_Aegis_30Rnd_545x39_7N44 { displayName = "[Ghost] 30Rnd 5.45x39 7N44 Osa (IR Tracer)";     descriptionShort = "5.45x39 7N44 Osa - IR Tracer";     ammo = "FA_545x39_7N44_HP_T_IR"; tracersEvery = 4; };

    // 7N44 Osa — 45Rnd (RPK-74)
    class FA_Aegis_45Rnd_545x39_7N44: Aegis_45Rnd_545x39_Mag_F {
        author = QAUTHOR;
        displayName = "[Ghost] 45Rnd 5.45x39 7N44 Osa (HP)";
        descriptionShort = "Caliber: 5.45x39 7N44 Osa<br/>Rounds: 45 (RPK-74)<br/>Hybrid case, tungsten - high pressure";
        ammo = "FA_545x39_7N44_HP";
        initSpeed = 925;
    };
    class FA_Aegis_45Rnd_545x39_7N44_T_Red    : FA_Aegis_45Rnd_545x39_7N44 { displayName = "[Ghost] 45Rnd 5.45x39 7N44 Osa (Red Tracer)";    descriptionShort = "5.45x39 7N44 Osa - Red Tracer";    ammo = "FA_545x39_7N44_HP_T_Red"; tracersEvery = 4; };
    class FA_Aegis_45Rnd_545x39_7N44_T_Yellow : FA_Aegis_45Rnd_545x39_7N44 { displayName = "[Ghost] 45Rnd 5.45x39 7N44 Osa (Yellow Tracer)"; descriptionShort = "5.45x39 7N44 Osa - Yellow Tracer"; ammo = "FA_545x39_7N44_HP_T_Yellow"; tracersEvery = 4; };
    class FA_Aegis_45Rnd_545x39_7N44_T_Green  : FA_Aegis_45Rnd_545x39_7N44 { displayName = "[Ghost] 45Rnd 5.45x39 7N44 Osa (Green Tracer)";  descriptionShort = "5.45x39 7N44 Osa - Green Tracer";  ammo = "FA_545x39_7N44_HP_T_Green"; tracersEvery = 4; };
    class FA_Aegis_45Rnd_545x39_7N44_T_White  : FA_Aegis_45Rnd_545x39_7N44 { displayName = "[Ghost] 45Rnd 5.45x39 7N44 Osa (White Tracer)";  descriptionShort = "5.45x39 7N44 Osa - White Tracer";  ammo = "FA_545x39_7N44_HP_T_White"; tracersEvery = 4; };
    class FA_Aegis_45Rnd_545x39_7N44_T_Blue   : FA_Aegis_45Rnd_545x39_7N44 { displayName = "[Ghost] 45Rnd 5.45x39 7N44 Osa (Blue Tracer)";   descriptionShort = "5.45x39 7N44 Osa - Blue Tracer";   ammo = "FA_545x39_7N44_HP_T_Blue"; tracersEvery = 4; };
    class FA_Aegis_45Rnd_545x39_7N44_T_Orange : FA_Aegis_45Rnd_545x39_7N44 { displayName = "[Ghost] 45Rnd 5.45x39 7N44 Osa (Orange Tracer)"; descriptionShort = "5.45x39 7N44 Osa - Orange Tracer"; ammo = "FA_545x39_7N44_HP_T_Orange"; tracersEvery = 4; };
    class FA_Aegis_45Rnd_545x39_7N44_T_IR     : FA_Aegis_45Rnd_545x39_7N44 { displayName = "[Ghost] 45Rnd 5.45x39 7N44 Osa (IR Tracer)";     descriptionShort = "5.45x39 7N44 Osa - IR Tracer";     ammo = "FA_545x39_7N44_HP_T_IR"; tracersEvery = 4; };

    // 7N44 Osa — 60Rnd (AK-12 drum)
    class FA_Aegis_60Rnd_545x39_7N44: Aegis_60Rnd_545x39_Mag_F {
        author = QAUTHOR;
        displayName = "[Ghost] 60Rnd 5.45x39 7N44 Osa (HP)";
        descriptionShort = "Caliber: 5.45x39 7N44 Osa<br/>Rounds: 60 (drum)<br/>Hybrid case, tungsten - high pressure";
        ammo = "FA_545x39_7N44_HP";
        initSpeed = 925;
    };
    class FA_Aegis_60Rnd_545x39_7N44_T_Red    : FA_Aegis_60Rnd_545x39_7N44 { displayName = "[Ghost] 60Rnd 5.45x39 7N44 Osa (Red Tracer)";    descriptionShort = "5.45x39 7N44 Osa - Red Tracer";    ammo = "FA_545x39_7N44_HP_T_Red"; tracersEvery = 4; };
    class FA_Aegis_60Rnd_545x39_7N44_T_Yellow : FA_Aegis_60Rnd_545x39_7N44 { displayName = "[Ghost] 60Rnd 5.45x39 7N44 Osa (Yellow Tracer)"; descriptionShort = "5.45x39 7N44 Osa - Yellow Tracer"; ammo = "FA_545x39_7N44_HP_T_Yellow"; tracersEvery = 4; };
    class FA_Aegis_60Rnd_545x39_7N44_T_Green  : FA_Aegis_60Rnd_545x39_7N44 { displayName = "[Ghost] 60Rnd 5.45x39 7N44 Osa (Green Tracer)";  descriptionShort = "5.45x39 7N44 Osa - Green Tracer";  ammo = "FA_545x39_7N44_HP_T_Green"; tracersEvery = 4; };
    class FA_Aegis_60Rnd_545x39_7N44_T_White  : FA_Aegis_60Rnd_545x39_7N44 { displayName = "[Ghost] 60Rnd 5.45x39 7N44 Osa (White Tracer)";  descriptionShort = "5.45x39 7N44 Osa - White Tracer";  ammo = "FA_545x39_7N44_HP_T_White"; tracersEvery = 4; };
    class FA_Aegis_60Rnd_545x39_7N44_T_Blue   : FA_Aegis_60Rnd_545x39_7N44 { displayName = "[Ghost] 60Rnd 5.45x39 7N44 Osa (Blue Tracer)";   descriptionShort = "5.45x39 7N44 Osa - Blue Tracer";   ammo = "FA_545x39_7N44_HP_T_Blue"; tracersEvery = 4; };
    class FA_Aegis_60Rnd_545x39_7N44_T_Orange : FA_Aegis_60Rnd_545x39_7N44 { displayName = "[Ghost] 60Rnd 5.45x39 7N44 Osa (Orange Tracer)"; descriptionShort = "5.45x39 7N44 Osa - Orange Tracer"; ammo = "FA_545x39_7N44_HP_T_Orange"; tracersEvery = 4; };
    class FA_Aegis_60Rnd_545x39_7N44_T_IR     : FA_Aegis_60Rnd_545x39_7N44 { displayName = "[Ghost] 60Rnd 5.45x39 7N44 Osa (IR Tracer)";     descriptionShort = "5.45x39 7N44 Osa - IR Tracer";     ammo = "FA_545x39_7N44_HP_T_IR"; tracersEvery = 4; };

    // 7N48 Osa-2 — 30Rnd (AK-12)
    class FA_Aegis_30Rnd_545x39_7N48: 30Rnd_545x39_AK12_Mag_F {
        author = QAUTHOR;
        displayName = "[Ghost] 30Rnd 5.45x39 7N48 Osa-2 (CT)";
        descriptionShort = "Caliber: 5.45x39 7N48 Osa-2<br/>Rounds: 30<br/>Cased-telescoped, 2-stage tungsten";
        ammo = "FA_545x39_7N48_CT";
        initSpeed = 950;
    };
    class FA_Aegis_30Rnd_545x39_7N48_T_Red    : FA_Aegis_30Rnd_545x39_7N48 { displayName = "[Ghost] 30Rnd 5.45x39 7N48 Osa-2 (Red Tracer)";    descriptionShort = "5.45x39 7N48 Osa-2 - Red Tracer";    ammo = "FA_545x39_7N48_CT_T_Red"; tracersEvery = 4; };
    class FA_Aegis_30Rnd_545x39_7N48_T_Yellow : FA_Aegis_30Rnd_545x39_7N48 { displayName = "[Ghost] 30Rnd 5.45x39 7N48 Osa-2 (Yellow Tracer)"; descriptionShort = "5.45x39 7N48 Osa-2 - Yellow Tracer"; ammo = "FA_545x39_7N48_CT_T_Yellow"; tracersEvery = 4; };
    class FA_Aegis_30Rnd_545x39_7N48_T_Green  : FA_Aegis_30Rnd_545x39_7N48 { displayName = "[Ghost] 30Rnd 5.45x39 7N48 Osa-2 (Green Tracer)";  descriptionShort = "5.45x39 7N48 Osa-2 - Green Tracer";  ammo = "FA_545x39_7N48_CT_T_Green"; tracersEvery = 4; };
    class FA_Aegis_30Rnd_545x39_7N48_T_White  : FA_Aegis_30Rnd_545x39_7N48 { displayName = "[Ghost] 30Rnd 5.45x39 7N48 Osa-2 (White Tracer)";  descriptionShort = "5.45x39 7N48 Osa-2 - White Tracer";  ammo = "FA_545x39_7N48_CT_T_White"; tracersEvery = 4; };
    class FA_Aegis_30Rnd_545x39_7N48_T_Blue   : FA_Aegis_30Rnd_545x39_7N48 { displayName = "[Ghost] 30Rnd 5.45x39 7N48 Osa-2 (Blue Tracer)";   descriptionShort = "5.45x39 7N48 Osa-2 - Blue Tracer";   ammo = "FA_545x39_7N48_CT_T_Blue"; tracersEvery = 4; };
    class FA_Aegis_30Rnd_545x39_7N48_T_Orange : FA_Aegis_30Rnd_545x39_7N48 { displayName = "[Ghost] 30Rnd 5.45x39 7N48 Osa-2 (Orange Tracer)"; descriptionShort = "5.45x39 7N48 Osa-2 - Orange Tracer"; ammo = "FA_545x39_7N48_CT_T_Orange"; tracersEvery = 4; };
    class FA_Aegis_30Rnd_545x39_7N48_T_IR     : FA_Aegis_30Rnd_545x39_7N48 { displayName = "[Ghost] 30Rnd 5.45x39 7N48 Osa-2 (IR Tracer)";     descriptionShort = "5.45x39 7N48 Osa-2 - IR Tracer";     ammo = "FA_545x39_7N48_CT_T_IR"; tracersEvery = 4; };

    // 7N48 Osa-2 — 45Rnd (RPK-74)
    class FA_Aegis_45Rnd_545x39_7N48: Aegis_45Rnd_545x39_Mag_F {
        author = QAUTHOR;
        displayName = "[Ghost] 45Rnd 5.45x39 7N48 Osa-2 (CT)";
        descriptionShort = "Caliber: 5.45x39 7N48 Osa-2<br/>Rounds: 45 (RPK-74)<br/>Cased-telescoped, 2-stage tungsten";
        ammo = "FA_545x39_7N48_CT";
        initSpeed = 950;
    };
    class FA_Aegis_45Rnd_545x39_7N48_T_Red    : FA_Aegis_45Rnd_545x39_7N48 { displayName = "[Ghost] 45Rnd 5.45x39 7N48 Osa-2 (Red Tracer)";    descriptionShort = "5.45x39 7N48 Osa-2 - Red Tracer";    ammo = "FA_545x39_7N48_CT_T_Red"; tracersEvery = 4; };
    class FA_Aegis_45Rnd_545x39_7N48_T_Yellow : FA_Aegis_45Rnd_545x39_7N48 { displayName = "[Ghost] 45Rnd 5.45x39 7N48 Osa-2 (Yellow Tracer)"; descriptionShort = "5.45x39 7N48 Osa-2 - Yellow Tracer"; ammo = "FA_545x39_7N48_CT_T_Yellow"; tracersEvery = 4; };
    class FA_Aegis_45Rnd_545x39_7N48_T_Green  : FA_Aegis_45Rnd_545x39_7N48 { displayName = "[Ghost] 45Rnd 5.45x39 7N48 Osa-2 (Green Tracer)";  descriptionShort = "5.45x39 7N48 Osa-2 - Green Tracer";  ammo = "FA_545x39_7N48_CT_T_Green"; tracersEvery = 4; };
    class FA_Aegis_45Rnd_545x39_7N48_T_White  : FA_Aegis_45Rnd_545x39_7N48 { displayName = "[Ghost] 45Rnd 5.45x39 7N48 Osa-2 (White Tracer)";  descriptionShort = "5.45x39 7N48 Osa-2 - White Tracer";  ammo = "FA_545x39_7N48_CT_T_White"; tracersEvery = 4; };
    class FA_Aegis_45Rnd_545x39_7N48_T_Blue   : FA_Aegis_45Rnd_545x39_7N48 { displayName = "[Ghost] 45Rnd 5.45x39 7N48 Osa-2 (Blue Tracer)";   descriptionShort = "5.45x39 7N48 Osa-2 - Blue Tracer";   ammo = "FA_545x39_7N48_CT_T_Blue"; tracersEvery = 4; };
    class FA_Aegis_45Rnd_545x39_7N48_T_Orange : FA_Aegis_45Rnd_545x39_7N48 { displayName = "[Ghost] 45Rnd 5.45x39 7N48 Osa-2 (Orange Tracer)"; descriptionShort = "5.45x39 7N48 Osa-2 - Orange Tracer"; ammo = "FA_545x39_7N48_CT_T_Orange"; tracersEvery = 4; };
    class FA_Aegis_45Rnd_545x39_7N48_T_IR     : FA_Aegis_45Rnd_545x39_7N48 { displayName = "[Ghost] 45Rnd 5.45x39 7N48 Osa-2 (IR Tracer)";     descriptionShort = "5.45x39 7N48 Osa-2 - IR Tracer";     ammo = "FA_545x39_7N48_CT_T_IR"; tracersEvery = 4; };

    // 7U5 Tishina-5 — 30Rnd (AK-12) subsonic
    class FA_Aegis_30Rnd_545x39_7U5: 30Rnd_545x39_AK12_Mag_F {
        author = QAUTHOR;
        displayName = "[Ghost] 30Rnd 5.45x39 7U5 Tishina-5 (Subsonic)";
        descriptionShort = "Caliber: 5.45x39 7U5 Tishina-5<br/>Rounds: 30<br/>Subsonic tungsten, suppressed (niche)";
        ammo = "FA_545x39_7U5_SubAP";
        initSpeed = 303;
    };
    class FA_Aegis_30Rnd_545x39_7U5_T_Red    : FA_Aegis_30Rnd_545x39_7U5 { displayName = "[Ghost] 30Rnd 5.45x39 7U5 Tishina-5 (Red Tracer)";    descriptionShort = "5.45x39 7U5 Tishina-5 - Red Tracer";    ammo = "FA_545x39_7U5_SubAP_T_Red"; tracersEvery = 4; };
    class FA_Aegis_30Rnd_545x39_7U5_T_Yellow : FA_Aegis_30Rnd_545x39_7U5 { displayName = "[Ghost] 30Rnd 5.45x39 7U5 Tishina-5 (Yellow Tracer)"; descriptionShort = "5.45x39 7U5 Tishina-5 - Yellow Tracer"; ammo = "FA_545x39_7U5_SubAP_T_Yellow"; tracersEvery = 4; };
    class FA_Aegis_30Rnd_545x39_7U5_T_Green  : FA_Aegis_30Rnd_545x39_7U5 { displayName = "[Ghost] 30Rnd 5.45x39 7U5 Tishina-5 (Green Tracer)";  descriptionShort = "5.45x39 7U5 Tishina-5 - Green Tracer";  ammo = "FA_545x39_7U5_SubAP_T_Green"; tracersEvery = 4; };
    class FA_Aegis_30Rnd_545x39_7U5_T_White  : FA_Aegis_30Rnd_545x39_7U5 { displayName = "[Ghost] 30Rnd 5.45x39 7U5 Tishina-5 (White Tracer)";  descriptionShort = "5.45x39 7U5 Tishina-5 - White Tracer";  ammo = "FA_545x39_7U5_SubAP_T_White"; tracersEvery = 4; };
    class FA_Aegis_30Rnd_545x39_7U5_T_Blue   : FA_Aegis_30Rnd_545x39_7U5 { displayName = "[Ghost] 30Rnd 5.45x39 7U5 Tishina-5 (Blue Tracer)";   descriptionShort = "5.45x39 7U5 Tishina-5 - Blue Tracer";   ammo = "FA_545x39_7U5_SubAP_T_Blue"; tracersEvery = 4; };
    class FA_Aegis_30Rnd_545x39_7U5_T_Orange : FA_Aegis_30Rnd_545x39_7U5 { displayName = "[Ghost] 30Rnd 5.45x39 7U5 Tishina-5 (Orange Tracer)"; descriptionShort = "5.45x39 7U5 Tishina-5 - Orange Tracer"; ammo = "FA_545x39_7U5_SubAP_T_Orange"; tracersEvery = 4; };
    class FA_Aegis_30Rnd_545x39_7U5_T_IR     : FA_Aegis_30Rnd_545x39_7U5 { displayName = "[Ghost] 30Rnd 5.45x39 7U5 Tishina-5 (IR Tracer)";     descriptionShort = "5.45x39 7U5 Tishina-5 - IR Tracer";     ammo = "FA_545x39_7U5_SubAP_T_IR"; tracersEvery = 4; };
};
