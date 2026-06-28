#define DEF_TMAG(MBASE, ABASE, SUFFIX, DNAME) \
class MBASE##SUFFIX: MBASE { ammo = QUOTE(ABASE##SUFFIX); displayName = DNAME; }

#define ALL_TMAGS(MBASE, ABASE, D) \
DEF_TMAG(MBASE, ABASE, _T_Red,    QUOTE(D (Red Tracer))) \
DEF_TMAG(MBASE, ABASE, _T_Yellow, QUOTE(D (Yellow Tracer))) \
DEF_TMAG(MBASE, ABASE, _T_Green,  QUOTE(D (Green Tracer))) \
DEF_TMAG(MBASE, ABASE, _T_White,  QUOTE(D (White Tracer))) \
DEF_TMAG(MBASE, ABASE, _T_Blue,   QUOTE(D (Blue Tracer))) \
DEF_TMAG(MBASE, ABASE, _T_Orange, QUOTE(D (Orange Tracer)))

class CfgMagazines {
    class 30Rnd_556x45_Stanag;
    class 20Rnd_762x51_Mag;
    class 1Rnd_HE_Grenade_shell;
    class 3Rnd_HE_Grenade_shell;
    class 100Rnd_127x99_mag;
    class 10Rnd_338_Mag;
    class 30Rnd_65x39_caseless_mag;

    // =========================================================
    // Mk361 PAB — 5.56x45
    // =========================================================
    class futureAmmo_30Rnd_556_Mk361_PAB: 30Rnd_556x45_Stanag {
        author = QAUTHOR;
        displayName = "30Rnd 5.56 Mk361 PAB";
        descriptionShort = "5.56x45 Mk361 PAB (Anti-Drone)<br/>Proximity airburst via script";
        ammo = "futureAmmo_556_Mk361_PAB";
        tracersEvery = 1;
        lastRoundsTracer = 0;
    };
    ALL_TMAGS(futureAmmo_30Rnd_556_Mk361_PAB, futureAmmo_556_Mk361_PAB, 30Rnd 5.56 Mk361 PAB);

    // =========================================================
    // Mk362 PAB — 7.62x51
    // =========================================================
    class futureAmmo_20Rnd_762_Mk362_PAB: 20Rnd_762x51_Mag {
        author = QAUTHOR;
        displayName = "20Rnd 7.62 Mk362 PAB";
        descriptionShort = "7.62x51 Mk362 PAB (Anti-Drone)<br/>Proximity airburst via script";
        ammo = "futureAmmo_762_Mk362_PAB";
        tracersEvery = 1;
        lastRoundsTracer = 0;
    };
    ALL_TMAGS(futureAmmo_20Rnd_762_Mk362_PAB, futureAmmo_762_Mk362_PAB, 20Rnd 7.62 Mk362 PAB);

    // =========================================================
    // Mk363 PAB — .300 BLK Supersonic
    // =========================================================
    class futureAmmo_30Rnd_300_Mk363_PAB: 30Rnd_556x45_Stanag {
        author = QAUTHOR;
        displayName = "30Rnd 300BLK Mk363 PAB";
        descriptionShort = ".300 BLK Mk363 PAB (Anti-Drone)<br/>Supersonic proximity airburst";
        ammo = "futureAmmo_300_Mk363_PAB";
        tracersEvery = 1;
        lastRoundsTracer = 0;
    };
    ALL_TMAGS(futureAmmo_30Rnd_300_Mk363_PAB, futureAmmo_300_Mk363_PAB, 30Rnd 300BLK Mk363 PAB);

    // =========================================================
    // Mk364 PAB — 40mm UGL (no tracer variants)
    // =========================================================
    class futureAmmo_1Rnd_40mm_Mk364_PAB: 1Rnd_HE_Grenade_shell {
        author = QAUTHOR;
        displayName = "40mm Mk364 PAB (C-UAS)";
        descriptionShort = "40mm Mk364 PAB (Anti-Drone)<br/>Programmable airburst; HE on impact";
        ammo = "futureAmmo_40mm_Mk364_PAB";
    };
    class futureAmmo_3Rnd_40mm_Mk364_PAB: 3Rnd_HE_Grenade_shell {
        author = QAUTHOR;
        displayName = "40mm Mk364 PAB x3 (C-UAS)";
        descriptionShort = "40mm Mk364 PAB (Anti-Drone)<br/>Programmable airburst; HE on impact";
        ammo = "futureAmmo_40mm_Mk364_PAB";
    };

    // =========================================================
    // Mk366 PAB — 12.7x99 (.50) HMG
    // =========================================================
    class futureAmmo_100Rnd_127_Mk366_PAB: 100Rnd_127x99_mag {
        author = QAUTHOR;
        displayName = "100Rnd .50 Mk366 PAB";
        descriptionShort = "12.7x99 Mk366 PAB (Anti-Drone)<br/>Heavy proximity airburst, vehicle HMG";
        ammo = "futureAmmo_127_Mk366_PAB";
        tracersEvery = 1;
        lastRoundsTracer = 0;
    };
    ALL_TMAGS(futureAmmo_100Rnd_127_Mk366_PAB, futureAmmo_127_Mk366_PAB, 100Rnd .50 Mk366 PAB);

    // =========================================================
    // Mk367 PAB — 6.5x39 Caseless (MX family only)
    // =========================================================
    class futureAmmo_30Rnd_65_Mk367_PAB: 30Rnd_65x39_caseless_mag {
        author = QAUTHOR;
        displayName = "30Rnd 6.5 Mk367 PAB";
        descriptionShort = "6.5x39 Caseless Mk367 PAB (Anti-Drone)<br/>MX family only; proximity airburst";
        ammo = "futureAmmo_65_Mk367_PAB";
        tracersEvery = 1;
        lastRoundsTracer = 0;
    };
    ALL_TMAGS(futureAmmo_30Rnd_65_Mk367_PAB, futureAmmo_65_Mk367_PAB, 30Rnd 6.5 Mk367 PAB);

    // =========================================================
    // Mk373 PAB — .338 LM Precision
    // =========================================================
    class futureAmmo_10Rnd_338_Mk373_PAB: 10Rnd_338_Mag {
        author = QAUTHOR;
        displayName = "10Rnd .338 Mk373 PAB";
        descriptionShort = ".338 LM Mk373 PAB (Anti-Drone)<br/>Precision long-range proximity airburst";
        ammo = "futureAmmo_338_Mk373_PAB";
        tracersEvery = 1;
        lastRoundsTracer = 0;
    };
    ALL_TMAGS(futureAmmo_10Rnd_338_Mk373_PAB, futureAmmo_338_Mk373_PAB, 10Rnd .338 Mk373 PAB);
};
