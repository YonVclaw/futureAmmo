class CfgMagazines {
    class 30Rnd_556x45_Stanag;
    class 20Rnd_762x51_Mag;
    class 1Rnd_HE_Grenade_shell;
    class 3Rnd_HE_Grenade_shell;
    class 100Rnd_127x99_mag;
    class 10Rnd_338_Mag;
    class 30Rnd_65x39_caseless_mag;
    class 30Rnd_65x39_caseless_khaki_mag;
    class 30Rnd_65x39_caseless_black_mag;
    class 30Rnd_65x39_caseless_msbs_mag;
    class 100Rnd_65x39_caseless_mag;
    class 100Rnd_65x39_caseless_khaki_mag;
    class 100Rnd_65x39_caseless_black_mag;
    class 200Rnd_65x39_cased_Box;

    // =========================================================
    // Mk361 PAB — 5.56x45
    // =========================================================
    class FA_30Rnd_556_Mk361_PAB: 30Rnd_556x45_Stanag {
        author = QAUTHOR;
        displayName = "[Ghost] 30Rnd 5.56 Mk361 PAB";
        descriptionShort = "5.56x45 Mk361 PAB (Anti-Drone)<br/>Proximity airburst via script";
        ammo = "FA_556_Mk361_PAB";
        tracersEvery = 1;
        lastRoundsTracer = 0;
    };

    // =========================================================
    // Mk362 PAB — 7.62x51
    // =========================================================
    class FA_20Rnd_762_Mk362_PAB: 20Rnd_762x51_Mag {
        author = QAUTHOR;
        displayName = "[Ghost] 20Rnd 7.62 Mk362 PAB";
        descriptionShort = "7.62x51 Mk362 PAB (Anti-Drone)<br/>Proximity airburst via script";
        ammo = "FA_762_Mk362_PAB";
        tracersEvery = 1;
        lastRoundsTracer = 0;
    };

    // =========================================================
    // Mk363 PAB — .300 BLK Supersonic
    // =========================================================
    class FA_30Rnd_300_Mk363_PAB: 30Rnd_556x45_Stanag {
        author = QAUTHOR;
        displayName = "[Ghost] 30Rnd 300BLK Mk363 PAB";
        descriptionShort = ".300 BLK Mk363 PAB (Anti-Drone)<br/>Supersonic proximity airburst";
        ammo = "FA_300_Mk363_PAB";
        tracersEvery = 1;
        lastRoundsTracer = 0;
    };

    // =========================================================
    // Mk364 PAB — 40mm UGL (no tracer variants)
    // =========================================================
    class FA_1Rnd_40mm_Mk364_PAB: 1Rnd_HE_Grenade_shell {
        author = QAUTHOR;
        displayName = "[Ghost] 40mm Mk364 PAB (C-UAS)";
        descriptionShort = "40mm Mk364 PAB (Anti-Drone)<br/>Programmable airburst; HE on impact";
        ammo = "FA_40mm_Mk364_PAB";
        initSpeed = 130;
    };
    class FA_3Rnd_40mm_Mk364_PAB: 3Rnd_HE_Grenade_shell {
        author = QAUTHOR;
        displayName = "[Ghost] 40mm Mk364 PAB x3 (C-UAS)";
        descriptionShort = "40mm Mk364 PAB (Anti-Drone)<br/>Programmable airburst; HE on impact";
        ammo = "FA_40mm_Mk364_PAB";
        initSpeed = 130;
    };

    // =========================================================
    // Mk366 PAB — 12.7x99 (.50) HMG
    // =========================================================
    class FA_100Rnd_127_Mk366_PAB: 100Rnd_127x99_mag {
        author = QAUTHOR;
        displayName = "[Ghost] 100Rnd .50 Mk366 PAB";
        descriptionShort = "12.7x99 Mk366 PAB (Anti-Drone)<br/>Heavy proximity airburst, vehicle HMG";
        ammo = "FA_127_Mk366_PAB";
        tracersEvery = 1;
        lastRoundsTracer = 0;
    };

    // =========================================================
    // Mk367 PAB — 6.5x39 Caseless Sand (MX family only)
    // =========================================================
    class FA_30Rnd_65_Mk367_PAB: 30Rnd_65x39_caseless_mag {
        author = QAUTHOR;
        displayName = "[Ghost] 30Rnd 6.5 Mk367 PAB (Sand)";
        descriptionShort = "6.5x39 Caseless Mk367 PAB (Anti-Drone)<br/>MX family only; proximity airburst";
        ammo = "FA_65_Mk367_PAB";
        tracersEvery = 1;
        lastRoundsTracer = 0;
    };

    // =========================================================
    // Mk367 PAB — 6.5x39 Caseless Green (MX family only)
    // =========================================================
    class FA_30Rnd_65_Mk367_PAB_Green: 30Rnd_65x39_caseless_khaki_mag {
        author = QAUTHOR;
        displayName = "[Ghost] 30Rnd 6.5 Mk367 PAB (Green)";
        descriptionShort = "6.5x39 Caseless Mk367 PAB (Anti-Drone)<br/>MX family only; proximity airburst";
        ammo = "FA_65_Mk367_PAB";
        tracersEvery = 1;
        lastRoundsTracer = 0;
    };

    // =========================================================
    // Mk367 PAB — 6.5x39 Caseless Black (MX family)
    // =========================================================
    class FA_30Rnd_65_Mk367_PAB_Black: 30Rnd_65x39_caseless_black_mag {
        author = QAUTHOR;
        displayName = "[Ghost] 30Rnd 6.5 Mk367 PAB (Black)";
        descriptionShort = "6.5x39 Caseless Mk367 PAB (Anti-Drone) — MX family only; proximity airburst";
        ammo = "FA_65_Mk367_PAB";
        tracersEvery = 1;
        lastRoundsTracer = 0;
    };

    // =========================================================
    // Mk367 PAB — 6.5x39 Caseless 100Rnd Sand (Mk200 LMG)
    // =========================================================
    class FA_100Rnd_65_Mk367_PAB: 100Rnd_65x39_caseless_mag {
        author = QAUTHOR;
        displayName = "[Ghost] 100Rnd 6.5 Mk367 PAB (Sand)";
        descriptionShort = "6.5x39 Caseless Mk367 PAB (Anti-Drone) — Mk200 LMG; proximity airburst";
        ammo = "FA_65_Mk367_PAB";
        tracersEvery = 1;
        lastRoundsTracer = 0;
    };

    // =========================================================
    // Mk367 PAB — 6.5x39 Caseless 100Rnd Khaki (Mk200 LMG)
    // =========================================================
    class FA_100Rnd_65_Mk367_PAB_Khaki: 100Rnd_65x39_caseless_khaki_mag {
        author = QAUTHOR;
        displayName = "[Ghost] 100Rnd 6.5 Mk367 PAB (Khaki)";
        descriptionShort = "6.5x39 Caseless Mk367 PAB (Anti-Drone) — Mk200 LMG; proximity airburst";
        ammo = "FA_65_Mk367_PAB";
        tracersEvery = 1;
        lastRoundsTracer = 0;
    };

    // =========================================================
    // Mk367 PAB — 6.5x39 Caseless 100Rnd Black (Mk200 LMG)
    // =========================================================
    class FA_100Rnd_65_Mk367_PAB_Black: 100Rnd_65x39_caseless_black_mag {
        author = QAUTHOR;
        displayName = "[Ghost] 100Rnd 6.5 Mk367 PAB (Black)";
        descriptionShort = "6.5x39 Caseless Mk367 PAB (Anti-Drone) — Mk200 LMG; proximity airburst";
        ammo = "FA_65_Mk367_PAB";
        tracersEvery = 1;
        lastRoundsTracer = 0;
    };

    // =========================================================
    // Mk367 PAB — 6.5x39 Cased 200Rnd Box (Mk200 LMG belt)
    // =========================================================
    class FA_200Rnd_65_Mk367_PAB: 200Rnd_65x39_cased_Box {
        author = QAUTHOR;
        displayName = "[Ghost] 200Rnd 6.5 Mk367 PAB";
        descriptionShort = "6.5x39 Caseless Mk367 PAB (Anti-Drone)<br/>Mk200 LMG belt; proximity airburst";
        ammo = "FA_65_Mk367_PAB";
        tracersEvery = 1;
        lastRoundsTracer = 0;
    };

    // =========================================================
    // Mk373 PAB — .338 LM Precision
    // =========================================================
    class FA_10Rnd_338_Mk373_PAB: 10Rnd_338_Mag {
        author = QAUTHOR;
        displayName = "[Ghost] 10Rnd .338 Mk373 PAB";
        descriptionShort = ".338 LM Mk373 PAB (Anti-Drone)<br/>Precision long-range proximity airburst";
        ammo = "FA_338_Mk373_PAB";
        tracersEvery = 1;
        lastRoundsTracer = 0;
    };

    // =========================================================
    // Mk367 PAB — 6.5x39 MSBS (30Rnd caseless MSBS)
    // =========================================================
    class FA_30Rnd_65_Mk367_PAB_MSBS: 30Rnd_65x39_caseless_msbs_mag {
        author = QAUTHOR;
        displayName = "[Ghost] 30Rnd 6.5 Mk367 PAB (MSBS)";
        descriptionShort = "6.5x39 Caseless Mk367 PAB (Anti-Drone)<br/>MSBS family";
        ammo = "FA_65_Mk367_PAB";
        tracersEvery = 1;
        lastRoundsTracer = 0;
    };

    // ===== PAB tracer mags (tracersEvery = 4) =====
    class FA_30Rnd_556_Mk361_PAB_T_Red: FA_30Rnd_556_Mk361_PAB { ammo = "FA_556_Mk361_PAB_T_Red"; displayName = "[Ghost] 5.56 Mk361 PAB (Red Tracer)"; tracersEvery = 4; lastRoundsTracer = 4; };
    class FA_30Rnd_556_Mk361_PAB_T_Yellow: FA_30Rnd_556_Mk361_PAB { ammo = "FA_556_Mk361_PAB_T_Yellow"; displayName = "[Ghost] 5.56 Mk361 PAB (Yellow Tracer)"; tracersEvery = 4; lastRoundsTracer = 4; };
    class FA_30Rnd_556_Mk361_PAB_T_Green: FA_30Rnd_556_Mk361_PAB { ammo = "FA_556_Mk361_PAB_T_Green"; displayName = "[Ghost] 5.56 Mk361 PAB (Green Tracer)"; tracersEvery = 4; lastRoundsTracer = 4; };
    class FA_30Rnd_556_Mk361_PAB_T_White: FA_30Rnd_556_Mk361_PAB { ammo = "FA_556_Mk361_PAB_T_White"; displayName = "[Ghost] 5.56 Mk361 PAB (White Tracer)"; tracersEvery = 4; lastRoundsTracer = 4; };
    class FA_30Rnd_556_Mk361_PAB_T_Blue: FA_30Rnd_556_Mk361_PAB { ammo = "FA_556_Mk361_PAB_T_Blue"; displayName = "[Ghost] 5.56 Mk361 PAB (Blue Tracer)"; tracersEvery = 4; lastRoundsTracer = 4; };
    class FA_30Rnd_556_Mk361_PAB_T_Orange: FA_30Rnd_556_Mk361_PAB { ammo = "FA_556_Mk361_PAB_T_Orange"; displayName = "[Ghost] 5.56 Mk361 PAB (Orange Tracer)"; tracersEvery = 4; lastRoundsTracer = 4; };
    class FA_20Rnd_762_Mk362_PAB_T_Red: FA_20Rnd_762_Mk362_PAB { ammo = "FA_762_Mk362_PAB_T_Red"; displayName = "[Ghost] 7.62 Mk362 PAB (Red Tracer)"; tracersEvery = 4; lastRoundsTracer = 4; };
    class FA_20Rnd_762_Mk362_PAB_T_Yellow: FA_20Rnd_762_Mk362_PAB { ammo = "FA_762_Mk362_PAB_T_Yellow"; displayName = "[Ghost] 7.62 Mk362 PAB (Yellow Tracer)"; tracersEvery = 4; lastRoundsTracer = 4; };
    class FA_20Rnd_762_Mk362_PAB_T_Green: FA_20Rnd_762_Mk362_PAB { ammo = "FA_762_Mk362_PAB_T_Green"; displayName = "[Ghost] 7.62 Mk362 PAB (Green Tracer)"; tracersEvery = 4; lastRoundsTracer = 4; };
    class FA_20Rnd_762_Mk362_PAB_T_White: FA_20Rnd_762_Mk362_PAB { ammo = "FA_762_Mk362_PAB_T_White"; displayName = "[Ghost] 7.62 Mk362 PAB (White Tracer)"; tracersEvery = 4; lastRoundsTracer = 4; };
    class FA_20Rnd_762_Mk362_PAB_T_Blue: FA_20Rnd_762_Mk362_PAB { ammo = "FA_762_Mk362_PAB_T_Blue"; displayName = "[Ghost] 7.62 Mk362 PAB (Blue Tracer)"; tracersEvery = 4; lastRoundsTracer = 4; };
    class FA_20Rnd_762_Mk362_PAB_T_Orange: FA_20Rnd_762_Mk362_PAB { ammo = "FA_762_Mk362_PAB_T_Orange"; displayName = "[Ghost] 7.62 Mk362 PAB (Orange Tracer)"; tracersEvery = 4; lastRoundsTracer = 4; };
    class FA_30Rnd_300_Mk363_PAB_T_Red: FA_30Rnd_300_Mk363_PAB { ammo = "FA_300_Mk363_PAB_T_Red"; displayName = "[Ghost] 300BLK Mk363 PAB (Red Tracer)"; tracersEvery = 4; lastRoundsTracer = 4; };
    class FA_30Rnd_300_Mk363_PAB_T_Yellow: FA_30Rnd_300_Mk363_PAB { ammo = "FA_300_Mk363_PAB_T_Yellow"; displayName = "[Ghost] 300BLK Mk363 PAB (Yellow Tracer)"; tracersEvery = 4; lastRoundsTracer = 4; };
    class FA_30Rnd_300_Mk363_PAB_T_Green: FA_30Rnd_300_Mk363_PAB { ammo = "FA_300_Mk363_PAB_T_Green"; displayName = "[Ghost] 300BLK Mk363 PAB (Green Tracer)"; tracersEvery = 4; lastRoundsTracer = 4; };
    class FA_30Rnd_300_Mk363_PAB_T_White: FA_30Rnd_300_Mk363_PAB { ammo = "FA_300_Mk363_PAB_T_White"; displayName = "[Ghost] 300BLK Mk363 PAB (White Tracer)"; tracersEvery = 4; lastRoundsTracer = 4; };
    class FA_30Rnd_300_Mk363_PAB_T_Blue: FA_30Rnd_300_Mk363_PAB { ammo = "FA_300_Mk363_PAB_T_Blue"; displayName = "[Ghost] 300BLK Mk363 PAB (Blue Tracer)"; tracersEvery = 4; lastRoundsTracer = 4; };
    class FA_30Rnd_300_Mk363_PAB_T_Orange: FA_30Rnd_300_Mk363_PAB { ammo = "FA_300_Mk363_PAB_T_Orange"; displayName = "[Ghost] 300BLK Mk363 PAB (Orange Tracer)"; tracersEvery = 4; lastRoundsTracer = 4; };
    class FA_100Rnd_127_Mk366_PAB_T_Red: FA_100Rnd_127_Mk366_PAB { ammo = "FA_127_Mk366_PAB_T_Red"; displayName = "[Ghost] .50 Mk366 PAB (Red Tracer)"; tracersEvery = 4; lastRoundsTracer = 4; };
    class FA_100Rnd_127_Mk366_PAB_T_Yellow: FA_100Rnd_127_Mk366_PAB { ammo = "FA_127_Mk366_PAB_T_Yellow"; displayName = "[Ghost] .50 Mk366 PAB (Yellow Tracer)"; tracersEvery = 4; lastRoundsTracer = 4; };
    class FA_100Rnd_127_Mk366_PAB_T_Green: FA_100Rnd_127_Mk366_PAB { ammo = "FA_127_Mk366_PAB_T_Green"; displayName = "[Ghost] .50 Mk366 PAB (Green Tracer)"; tracersEvery = 4; lastRoundsTracer = 4; };
    class FA_100Rnd_127_Mk366_PAB_T_White: FA_100Rnd_127_Mk366_PAB { ammo = "FA_127_Mk366_PAB_T_White"; displayName = "[Ghost] .50 Mk366 PAB (White Tracer)"; tracersEvery = 4; lastRoundsTracer = 4; };
    class FA_100Rnd_127_Mk366_PAB_T_Blue: FA_100Rnd_127_Mk366_PAB { ammo = "FA_127_Mk366_PAB_T_Blue"; displayName = "[Ghost] .50 Mk366 PAB (Blue Tracer)"; tracersEvery = 4; lastRoundsTracer = 4; };
    class FA_100Rnd_127_Mk366_PAB_T_Orange: FA_100Rnd_127_Mk366_PAB { ammo = "FA_127_Mk366_PAB_T_Orange"; displayName = "[Ghost] .50 Mk366 PAB (Orange Tracer)"; tracersEvery = 4; lastRoundsTracer = 4; };
    class FA_30Rnd_65_Mk367_PAB_T_Red: FA_30Rnd_65_Mk367_PAB { ammo = "FA_65_Mk367_PAB_T_Red"; displayName = "[Ghost] 6.5 Mk367 PAB Sand (Red Tracer)"; tracersEvery = 4; lastRoundsTracer = 4; };
    class FA_30Rnd_65_Mk367_PAB_T_Yellow: FA_30Rnd_65_Mk367_PAB { ammo = "FA_65_Mk367_PAB_T_Yellow"; displayName = "[Ghost] 6.5 Mk367 PAB Sand (Yellow Tracer)"; tracersEvery = 4; lastRoundsTracer = 4; };
    class FA_30Rnd_65_Mk367_PAB_T_Green: FA_30Rnd_65_Mk367_PAB { ammo = "FA_65_Mk367_PAB_T_Green"; displayName = "[Ghost] 6.5 Mk367 PAB Sand (Green Tracer)"; tracersEvery = 4; lastRoundsTracer = 4; };
    class FA_30Rnd_65_Mk367_PAB_T_White: FA_30Rnd_65_Mk367_PAB { ammo = "FA_65_Mk367_PAB_T_White"; displayName = "[Ghost] 6.5 Mk367 PAB Sand (White Tracer)"; tracersEvery = 4; lastRoundsTracer = 4; };
    class FA_30Rnd_65_Mk367_PAB_T_Blue: FA_30Rnd_65_Mk367_PAB { ammo = "FA_65_Mk367_PAB_T_Blue"; displayName = "[Ghost] 6.5 Mk367 PAB Sand (Blue Tracer)"; tracersEvery = 4; lastRoundsTracer = 4; };
    class FA_30Rnd_65_Mk367_PAB_T_Orange: FA_30Rnd_65_Mk367_PAB { ammo = "FA_65_Mk367_PAB_T_Orange"; displayName = "[Ghost] 6.5 Mk367 PAB Sand (Orange Tracer)"; tracersEvery = 4; lastRoundsTracer = 4; };
    class FA_30Rnd_65_Mk367_PAB_Green_T_Red: FA_30Rnd_65_Mk367_PAB_Green { ammo = "FA_65_Mk367_PAB_T_Red"; displayName = "[Ghost] 6.5 Mk367 PAB Green (Red Tracer)"; tracersEvery = 4; lastRoundsTracer = 4; };
    class FA_30Rnd_65_Mk367_PAB_Green_T_Yellow: FA_30Rnd_65_Mk367_PAB_Green { ammo = "FA_65_Mk367_PAB_T_Yellow"; displayName = "[Ghost] 6.5 Mk367 PAB Green (Yellow Tracer)"; tracersEvery = 4; lastRoundsTracer = 4; };
    class FA_30Rnd_65_Mk367_PAB_Green_T_Green: FA_30Rnd_65_Mk367_PAB_Green { ammo = "FA_65_Mk367_PAB_T_Green"; displayName = "[Ghost] 6.5 Mk367 PAB Green (Green Tracer)"; tracersEvery = 4; lastRoundsTracer = 4; };
    class FA_30Rnd_65_Mk367_PAB_Green_T_White: FA_30Rnd_65_Mk367_PAB_Green { ammo = "FA_65_Mk367_PAB_T_White"; displayName = "[Ghost] 6.5 Mk367 PAB Green (White Tracer)"; tracersEvery = 4; lastRoundsTracer = 4; };
    class FA_30Rnd_65_Mk367_PAB_Green_T_Blue: FA_30Rnd_65_Mk367_PAB_Green { ammo = "FA_65_Mk367_PAB_T_Blue"; displayName = "[Ghost] 6.5 Mk367 PAB Green (Blue Tracer)"; tracersEvery = 4; lastRoundsTracer = 4; };
    class FA_30Rnd_65_Mk367_PAB_Green_T_Orange: FA_30Rnd_65_Mk367_PAB_Green { ammo = "FA_65_Mk367_PAB_T_Orange"; displayName = "[Ghost] 6.5 Mk367 PAB Green (Orange Tracer)"; tracersEvery = 4; lastRoundsTracer = 4; };
    class FA_30Rnd_65_Mk367_PAB_Black_T_Red: FA_30Rnd_65_Mk367_PAB_Black { ammo = "FA_65_Mk367_PAB_T_Red"; displayName = "[Ghost] 6.5 Mk367 PAB Black (Red Tracer)"; tracersEvery = 4; lastRoundsTracer = 4; };
    class FA_30Rnd_65_Mk367_PAB_Black_T_Yellow: FA_30Rnd_65_Mk367_PAB_Black { ammo = "FA_65_Mk367_PAB_T_Yellow"; displayName = "[Ghost] 6.5 Mk367 PAB Black (Yellow Tracer)"; tracersEvery = 4; lastRoundsTracer = 4; };
    class FA_30Rnd_65_Mk367_PAB_Black_T_Green: FA_30Rnd_65_Mk367_PAB_Black { ammo = "FA_65_Mk367_PAB_T_Green"; displayName = "[Ghost] 6.5 Mk367 PAB Black (Green Tracer)"; tracersEvery = 4; lastRoundsTracer = 4; };
    class FA_30Rnd_65_Mk367_PAB_Black_T_White: FA_30Rnd_65_Mk367_PAB_Black { ammo = "FA_65_Mk367_PAB_T_White"; displayName = "[Ghost] 6.5 Mk367 PAB Black (White Tracer)"; tracersEvery = 4; lastRoundsTracer = 4; };
    class FA_30Rnd_65_Mk367_PAB_Black_T_Blue: FA_30Rnd_65_Mk367_PAB_Black { ammo = "FA_65_Mk367_PAB_T_Blue"; displayName = "[Ghost] 6.5 Mk367 PAB Black (Blue Tracer)"; tracersEvery = 4; lastRoundsTracer = 4; };
    class FA_30Rnd_65_Mk367_PAB_Black_T_Orange: FA_30Rnd_65_Mk367_PAB_Black { ammo = "FA_65_Mk367_PAB_T_Orange"; displayName = "[Ghost] 6.5 Mk367 PAB Black (Orange Tracer)"; tracersEvery = 4; lastRoundsTracer = 4; };
    class FA_100Rnd_65_Mk367_PAB_T_Red: FA_100Rnd_65_Mk367_PAB { ammo = "FA_65_Mk367_PAB_T_Red"; displayName = "[Ghost] 6.5 Mk367 PAB 100 Sand (Red Tracer)"; tracersEvery = 4; lastRoundsTracer = 4; };
    class FA_100Rnd_65_Mk367_PAB_T_Yellow: FA_100Rnd_65_Mk367_PAB { ammo = "FA_65_Mk367_PAB_T_Yellow"; displayName = "[Ghost] 6.5 Mk367 PAB 100 Sand (Yellow Tracer)"; tracersEvery = 4; lastRoundsTracer = 4; };
    class FA_100Rnd_65_Mk367_PAB_T_Green: FA_100Rnd_65_Mk367_PAB { ammo = "FA_65_Mk367_PAB_T_Green"; displayName = "[Ghost] 6.5 Mk367 PAB 100 Sand (Green Tracer)"; tracersEvery = 4; lastRoundsTracer = 4; };
    class FA_100Rnd_65_Mk367_PAB_T_White: FA_100Rnd_65_Mk367_PAB { ammo = "FA_65_Mk367_PAB_T_White"; displayName = "[Ghost] 6.5 Mk367 PAB 100 Sand (White Tracer)"; tracersEvery = 4; lastRoundsTracer = 4; };
    class FA_100Rnd_65_Mk367_PAB_T_Blue: FA_100Rnd_65_Mk367_PAB { ammo = "FA_65_Mk367_PAB_T_Blue"; displayName = "[Ghost] 6.5 Mk367 PAB 100 Sand (Blue Tracer)"; tracersEvery = 4; lastRoundsTracer = 4; };
    class FA_100Rnd_65_Mk367_PAB_T_Orange: FA_100Rnd_65_Mk367_PAB { ammo = "FA_65_Mk367_PAB_T_Orange"; displayName = "[Ghost] 6.5 Mk367 PAB 100 Sand (Orange Tracer)"; tracersEvery = 4; lastRoundsTracer = 4; };
    class FA_100Rnd_65_Mk367_PAB_Khaki_T_Red: FA_100Rnd_65_Mk367_PAB_Khaki { ammo = "FA_65_Mk367_PAB_T_Red"; displayName = "[Ghost] 6.5 Mk367 PAB 100 Khaki (Red Tracer)"; tracersEvery = 4; lastRoundsTracer = 4; };
    class FA_100Rnd_65_Mk367_PAB_Khaki_T_Yellow: FA_100Rnd_65_Mk367_PAB_Khaki { ammo = "FA_65_Mk367_PAB_T_Yellow"; displayName = "[Ghost] 6.5 Mk367 PAB 100 Khaki (Yellow Tracer)"; tracersEvery = 4; lastRoundsTracer = 4; };
    class FA_100Rnd_65_Mk367_PAB_Khaki_T_Green: FA_100Rnd_65_Mk367_PAB_Khaki { ammo = "FA_65_Mk367_PAB_T_Green"; displayName = "[Ghost] 6.5 Mk367 PAB 100 Khaki (Green Tracer)"; tracersEvery = 4; lastRoundsTracer = 4; };
    class FA_100Rnd_65_Mk367_PAB_Khaki_T_White: FA_100Rnd_65_Mk367_PAB_Khaki { ammo = "FA_65_Mk367_PAB_T_White"; displayName = "[Ghost] 6.5 Mk367 PAB 100 Khaki (White Tracer)"; tracersEvery = 4; lastRoundsTracer = 4; };
    class FA_100Rnd_65_Mk367_PAB_Khaki_T_Blue: FA_100Rnd_65_Mk367_PAB_Khaki { ammo = "FA_65_Mk367_PAB_T_Blue"; displayName = "[Ghost] 6.5 Mk367 PAB 100 Khaki (Blue Tracer)"; tracersEvery = 4; lastRoundsTracer = 4; };
    class FA_100Rnd_65_Mk367_PAB_Khaki_T_Orange: FA_100Rnd_65_Mk367_PAB_Khaki { ammo = "FA_65_Mk367_PAB_T_Orange"; displayName = "[Ghost] 6.5 Mk367 PAB 100 Khaki (Orange Tracer)"; tracersEvery = 4; lastRoundsTracer = 4; };
    class FA_100Rnd_65_Mk367_PAB_Black_T_Red: FA_100Rnd_65_Mk367_PAB_Black { ammo = "FA_65_Mk367_PAB_T_Red"; displayName = "[Ghost] 6.5 Mk367 PAB 100 Black (Red Tracer)"; tracersEvery = 4; lastRoundsTracer = 4; };
    class FA_100Rnd_65_Mk367_PAB_Black_T_Yellow: FA_100Rnd_65_Mk367_PAB_Black { ammo = "FA_65_Mk367_PAB_T_Yellow"; displayName = "[Ghost] 6.5 Mk367 PAB 100 Black (Yellow Tracer)"; tracersEvery = 4; lastRoundsTracer = 4; };
    class FA_100Rnd_65_Mk367_PAB_Black_T_Green: FA_100Rnd_65_Mk367_PAB_Black { ammo = "FA_65_Mk367_PAB_T_Green"; displayName = "[Ghost] 6.5 Mk367 PAB 100 Black (Green Tracer)"; tracersEvery = 4; lastRoundsTracer = 4; };
    class FA_100Rnd_65_Mk367_PAB_Black_T_White: FA_100Rnd_65_Mk367_PAB_Black { ammo = "FA_65_Mk367_PAB_T_White"; displayName = "[Ghost] 6.5 Mk367 PAB 100 Black (White Tracer)"; tracersEvery = 4; lastRoundsTracer = 4; };
    class FA_100Rnd_65_Mk367_PAB_Black_T_Blue: FA_100Rnd_65_Mk367_PAB_Black { ammo = "FA_65_Mk367_PAB_T_Blue"; displayName = "[Ghost] 6.5 Mk367 PAB 100 Black (Blue Tracer)"; tracersEvery = 4; lastRoundsTracer = 4; };
    class FA_100Rnd_65_Mk367_PAB_Black_T_Orange: FA_100Rnd_65_Mk367_PAB_Black { ammo = "FA_65_Mk367_PAB_T_Orange"; displayName = "[Ghost] 6.5 Mk367 PAB 100 Black (Orange Tracer)"; tracersEvery = 4; lastRoundsTracer = 4; };
    class FA_200Rnd_65_Mk367_PAB_T_Red: FA_200Rnd_65_Mk367_PAB { ammo = "FA_65_Mk367_PAB_T_Red"; displayName = "[Ghost] 6.5 Mk367 PAB 200 (Red Tracer)"; tracersEvery = 4; lastRoundsTracer = 4; };
    class FA_200Rnd_65_Mk367_PAB_T_Yellow: FA_200Rnd_65_Mk367_PAB { ammo = "FA_65_Mk367_PAB_T_Yellow"; displayName = "[Ghost] 6.5 Mk367 PAB 200 (Yellow Tracer)"; tracersEvery = 4; lastRoundsTracer = 4; };
    class FA_200Rnd_65_Mk367_PAB_T_Green: FA_200Rnd_65_Mk367_PAB { ammo = "FA_65_Mk367_PAB_T_Green"; displayName = "[Ghost] 6.5 Mk367 PAB 200 (Green Tracer)"; tracersEvery = 4; lastRoundsTracer = 4; };
    class FA_200Rnd_65_Mk367_PAB_T_White: FA_200Rnd_65_Mk367_PAB { ammo = "FA_65_Mk367_PAB_T_White"; displayName = "[Ghost] 6.5 Mk367 PAB 200 (White Tracer)"; tracersEvery = 4; lastRoundsTracer = 4; };
    class FA_200Rnd_65_Mk367_PAB_T_Blue: FA_200Rnd_65_Mk367_PAB { ammo = "FA_65_Mk367_PAB_T_Blue"; displayName = "[Ghost] 6.5 Mk367 PAB 200 (Blue Tracer)"; tracersEvery = 4; lastRoundsTracer = 4; };
    class FA_200Rnd_65_Mk367_PAB_T_Orange: FA_200Rnd_65_Mk367_PAB { ammo = "FA_65_Mk367_PAB_T_Orange"; displayName = "[Ghost] 6.5 Mk367 PAB 200 (Orange Tracer)"; tracersEvery = 4; lastRoundsTracer = 4; };
    class FA_10Rnd_338_Mk373_PAB_T_Red: FA_10Rnd_338_Mk373_PAB { ammo = "FA_338_Mk373_PAB_T_Red"; displayName = "[Ghost] .338 Mk373 PAB (Red Tracer)"; tracersEvery = 4; lastRoundsTracer = 4; };
    class FA_10Rnd_338_Mk373_PAB_T_Yellow: FA_10Rnd_338_Mk373_PAB { ammo = "FA_338_Mk373_PAB_T_Yellow"; displayName = "[Ghost] .338 Mk373 PAB (Yellow Tracer)"; tracersEvery = 4; lastRoundsTracer = 4; };
    class FA_10Rnd_338_Mk373_PAB_T_Green: FA_10Rnd_338_Mk373_PAB { ammo = "FA_338_Mk373_PAB_T_Green"; displayName = "[Ghost] .338 Mk373 PAB (Green Tracer)"; tracersEvery = 4; lastRoundsTracer = 4; };
    class FA_10Rnd_338_Mk373_PAB_T_White: FA_10Rnd_338_Mk373_PAB { ammo = "FA_338_Mk373_PAB_T_White"; displayName = "[Ghost] .338 Mk373 PAB (White Tracer)"; tracersEvery = 4; lastRoundsTracer = 4; };
    class FA_10Rnd_338_Mk373_PAB_T_Blue: FA_10Rnd_338_Mk373_PAB { ammo = "FA_338_Mk373_PAB_T_Blue"; displayName = "[Ghost] .338 Mk373 PAB (Blue Tracer)"; tracersEvery = 4; lastRoundsTracer = 4; };
    class FA_10Rnd_338_Mk373_PAB_T_Orange: FA_10Rnd_338_Mk373_PAB { ammo = "FA_338_Mk373_PAB_T_Orange"; displayName = "[Ghost] .338 Mk373 PAB (Orange Tracer)"; tracersEvery = 4; lastRoundsTracer = 4; };
    class FA_30Rnd_65_Mk367_PAB_MSBS_T_Red: FA_30Rnd_65_Mk367_PAB_MSBS { ammo = "FA_65_Mk367_PAB_T_Red"; displayName = "[Ghost] 6.5 Mk367 PAB MSBS (Red Tracer)"; tracersEvery = 4; lastRoundsTracer = 4; };
    class FA_30Rnd_65_Mk367_PAB_MSBS_T_Yellow: FA_30Rnd_65_Mk367_PAB_MSBS { ammo = "FA_65_Mk367_PAB_T_Yellow"; displayName = "[Ghost] 6.5 Mk367 PAB MSBS (Yellow Tracer)"; tracersEvery = 4; lastRoundsTracer = 4; };
    class FA_30Rnd_65_Mk367_PAB_MSBS_T_Green: FA_30Rnd_65_Mk367_PAB_MSBS { ammo = "FA_65_Mk367_PAB_T_Green"; displayName = "[Ghost] 6.5 Mk367 PAB MSBS (Green Tracer)"; tracersEvery = 4; lastRoundsTracer = 4; };
    class FA_30Rnd_65_Mk367_PAB_MSBS_T_White: FA_30Rnd_65_Mk367_PAB_MSBS { ammo = "FA_65_Mk367_PAB_T_White"; displayName = "[Ghost] 6.5 Mk367 PAB MSBS (White Tracer)"; tracersEvery = 4; lastRoundsTracer = 4; };
    class FA_30Rnd_65_Mk367_PAB_MSBS_T_Blue: FA_30Rnd_65_Mk367_PAB_MSBS { ammo = "FA_65_Mk367_PAB_T_Blue"; displayName = "[Ghost] 6.5 Mk367 PAB MSBS (Blue Tracer)"; tracersEvery = 4; lastRoundsTracer = 4; };
    class FA_30Rnd_65_Mk367_PAB_MSBS_T_Orange: FA_30Rnd_65_Mk367_PAB_MSBS { ammo = "FA_65_Mk367_PAB_T_Orange"; displayName = "[Ghost] 6.5 Mk367 PAB MSBS (Orange Tracer)"; tracersEvery = 4; lastRoundsTracer = 4; };
};
