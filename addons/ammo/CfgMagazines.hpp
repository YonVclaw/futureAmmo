// Generates 6 tracer magazine variants. MBASE inherits all properties (count,
// mass, initSpeed, etc.); only ammo class and displayName are overridden.
// D must be unquoted tokens — QUOTE wraps it with the color suffix.
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
    class 10Rnd_338_Mag;
    class 200Rnd_338_Mag;
    class 130Rnd_338_Mag;
    class 30Rnd_65x39_caseless_mag;

    // =========================================================
    // 5.56x45mm — Mk327 HV (hybrid case, feeds existing 5.56 wells)
    // =========================================================
    class futureAmmo_30Rnd_556_Mk327_HV: 30Rnd_556x45_Stanag {
        author = QAUTHOR;
        displayName = "30Rnd 5.56 Mk327 HV";
        descriptionShort = "5.56x45 Mk327 EPR-HV (2033)<br/>Hybrid case, 70gr tungsten";
        ammo = "futureAmmo_556_Mk327_HV";
        initSpeed = 1000;
        mass = 8;
    };
    ALL_TMAGS(futureAmmo_30Rnd_556_Mk327_HV, futureAmmo_556_Mk327_HV, 30Rnd 5.56 Mk327 HV);

    // =========================================================
    // 5.56x45mm — XM891 CTEP (cased-telescoped, needs rated well)
    // =========================================================
    class futureAmmo_30Rnd_556_XM891_CTEP: 30Rnd_556x45_Stanag {
        author = QAUTHOR;
        displayName = "30Rnd 5.56 XM891 CTEP";
        descriptionShort = "5.56x45 XM891 CTEP (2039)<br/>Cased-telescoped, 68gr 2-stage tungsten";
        ammo = "futureAmmo_556_XM891_CTEP";
        initSpeed = 1015;
        mass = 6;
    };
    ALL_TMAGS(futureAmmo_30Rnd_556_XM891_CTEP, futureAmmo_556_XM891_CTEP, 30Rnd 5.56 XM891 CTEP);

    // =========================================================
    // 7.62x51mm — M80A2 HV (hybrid case, feeds existing 7.62 wells)
    // =========================================================
    class futureAmmo_20Rnd_762_M80A2_HV: 20Rnd_762x51_Mag {
        author = QAUTHOR;
        displayName = "20Rnd 7.62 M80A2 HV";
        descriptionShort = "7.62x51 M80A2 HV-EPR (2032)<br/>Hybrid case, 135gr tungsten";
        ammo = "futureAmmo_762_M80A2_HV";
        initSpeed = 940;
        mass = 16;
    };
    ALL_TMAGS(futureAmmo_20Rnd_762_M80A2_HV, futureAmmo_762_M80A2_HV, 20Rnd 7.62 M80A2 HV);

    // =========================================================
    // 7.62x51mm — XM751 CTEP (cased-telescoped, needs rated well)
    // =========================================================
    class futureAmmo_20Rnd_762_XM751_CTEP: 20Rnd_762x51_Mag {
        author = QAUTHOR;
        displayName = "20Rnd 7.62 XM751 CTEP";
        descriptionShort = "7.62x51 XM751 CTEP (2039)<br/>Cased-telescoped, 140gr 2-stage tungsten";
        ammo = "futureAmmo_762_XM751_CTEP";
        initSpeed = 960;
        mass = 12;
    };
    ALL_TMAGS(futureAmmo_20Rnd_762_XM751_CTEP, futureAmmo_762_XM751_CTEP, 20Rnd 7.62 XM751 CTEP);

    // =========================================================
    // .300 BLK (subsonic) — Mk341 SUB-AP
    // =========================================================
    class futureAmmo_30Rnd_300_Mk341_SubAP: 30Rnd_556x45_Stanag {
        author = QAUTHOR;
        displayName = "30Rnd 300BLK Mk341 SUB-AP";
        descriptionShort = ".300 BLK Mk341 SUB-AP (2033)<br/>Subsonic, 210gr tungsten, suppressed AP";
        ammo = "futureAmmo_300_Mk341_SubAP";
        initSpeed = 315;
        mass = 11;
    };
    ALL_TMAGS(futureAmmo_30Rnd_300_Mk341_SubAP, futureAmmo_300_Mk341_SubAP, 30Rnd 300BLK Mk341 SUB-AP);

    // =========================================================
    // .300 BLK (subsonic) — XM345 SUB-AP2
    // =========================================================
    class futureAmmo_30Rnd_300_XM345_SubAP2: 30Rnd_556x45_Stanag {
        author = QAUTHOR;
        displayName = "30Rnd 300BLK XM345 SUB-AP2";
        descriptionShort = ".300 BLK XM345 SUB-AP2 (2039)<br/>Subsonic, 220gr 2-stage tungsten";
        ammo = "futureAmmo_300_XM345_SubAP2";
        initSpeed = 312;
        mass = 11;
    };
    ALL_TMAGS(futureAmmo_30Rnd_300_XM345_SubAP2, futureAmmo_300_XM345_SubAP2, 30Rnd 300BLK XM345 SUB-AP2);

    // =========================================================
    // .338 LM — Mk371 LRP Mod 0 (250gr, fast)
    // =========================================================
    class futureAmmo_10Rnd_338_Mk371_250gr: 10Rnd_338_Mag {
        author = QAUTHOR;
        displayName = "10Rnd .338 Mk371 LRP (250gr)";
        descriptionShort = ".338 LM Mk371 LRP-250 (2033)<br/>Hybrid case, 250gr tungsten - fast";
        ammo = "futureAmmo_338_Mk371_250gr";
        initSpeed = 905;
        mass = 8;
    };
    ALL_TMAGS(futureAmmo_10Rnd_338_Mk371_250gr, futureAmmo_338_Mk371_250gr, 10Rnd .338 Mk371 LRP 250gr);

    // =========================================================
    // .338 LM — Mk371 LRP Mod 1 (285gr, balanced)
    // =========================================================
    class futureAmmo_10Rnd_338_Mk371_285gr: 10Rnd_338_Mag {
        author = QAUTHOR;
        displayName = "10Rnd .338 Mk371 LRP (285gr)";
        descriptionShort = ".338 LM Mk371 LRP-285 (2033)<br/>Hybrid case, 285gr tungsten - balanced";
        ammo = "futureAmmo_338_Mk371_285gr";
        initSpeed = 870;
        mass = 9;
    };
    ALL_TMAGS(futureAmmo_10Rnd_338_Mk371_285gr, futureAmmo_338_Mk371_285gr, 10Rnd .338 Mk371 LRP 285gr);

    // =========================================================
    // .338 LM — Mk371 LRP Mod 2 (300gr, extreme range)
    // =========================================================
    class futureAmmo_10Rnd_338_Mk371_300gr: 10Rnd_338_Mag {
        author = QAUTHOR;
        displayName = "10Rnd .338 Mk371 LRP (300gr)";
        descriptionShort = ".338 LM Mk371 LRP-300 (2033)<br/>Hybrid case, 300gr tungsten - extreme range";
        ammo = "futureAmmo_338_Mk371_300gr";
        initSpeed = 830;
        mass = 10;
    };
    ALL_TMAGS(futureAmmo_10Rnd_338_Mk371_300gr, futureAmmo_338_Mk371_300gr, 10Rnd .338 Mk371 LRP 300gr);

    // =========================================================
    // .300 BLK (supersonic) — Mk335 (110gr light)
    // =========================================================
    class futureAmmo_30Rnd_300_Mk335: 30Rnd_556x45_Stanag {
        author = QAUTHOR;
        displayName = "30Rnd 300BLK Mk335 (110gr)";
        descriptionShort = ".300 BLK Mk335 (2033)<br/>110gr light supersonic";
        ammo = "futureAmmo_300_Mk335";
        initSpeed = 725;
        mass = 7;
    };
    ALL_TMAGS(futureAmmo_30Rnd_300_Mk335, futureAmmo_300_Mk335, 30Rnd 300BLK Mk335 110gr);

    // =========================================================
    // .300 BLK (supersonic) — Mk336 (125gr standard)
    // =========================================================
    class futureAmmo_30Rnd_300_Mk336: 30Rnd_556x45_Stanag {
        author = QAUTHOR;
        displayName = "30Rnd 300BLK Mk336 (125gr)";
        descriptionShort = ".300 BLK Mk336 (2033)<br/>125gr standard supersonic";
        ammo = "futureAmmo_300_Mk336";
        initSpeed = 675;
        mass = 8;
    };
    ALL_TMAGS(futureAmmo_30Rnd_300_Mk336, futureAmmo_300_Mk336, 30Rnd 300BLK Mk336 125gr);

    // =========================================================
    // .300 BLK (supersonic) — Mk337 (150gr heavy)
    // =========================================================
    class futureAmmo_30Rnd_300_Mk337: 30Rnd_556x45_Stanag {
        author = QAUTHOR;
        displayName = "30Rnd 300BLK Mk337 (150gr)";
        descriptionShort = ".300 BLK Mk337 (2033)<br/>150gr heavy supersonic";
        ammo = "futureAmmo_300_Mk337";
        initSpeed = 620;
        mass = 9;
    };
    ALL_TMAGS(futureAmmo_30Rnd_300_Mk337, futureAmmo_300_Mk337, 30Rnd 300BLK Mk337 150gr);

    // =========================================================
    // .300 BLK (subsonic) — Mk342 (190gr)
    // =========================================================
    class futureAmmo_30Rnd_300_Mk342_Sub: 30Rnd_556x45_Stanag {
        author = QAUTHOR;
        displayName = "30Rnd 300BLK Mk342 Sub (190gr)";
        descriptionShort = ".300 BLK Mk342 Sub (2033)<br/>190gr subsonic, suppressed";
        ammo = "futureAmmo_300_Mk342_Sub";
        initSpeed = 318;
        mass = 10;
    };
    ALL_TMAGS(futureAmmo_30Rnd_300_Mk342_Sub, futureAmmo_300_Mk342_Sub, 30Rnd 300BLK Mk342 Sub 190gr);

    // =========================================================
    // .300 BLK (subsonic) — Mk343 (220gr heavy)
    // =========================================================
    class futureAmmo_30Rnd_300_Mk343_Sub: 30Rnd_556x45_Stanag {
        author = QAUTHOR;
        displayName = "30Rnd 300BLK Mk343 Sub (220gr)";
        descriptionShort = ".300 BLK Mk343 Sub (2033)<br/>220gr heavy subsonic, best BC";
        ammo = "futureAmmo_300_Mk343_Sub";
        initSpeed = 305;
        mass = 11;
    };
    ALL_TMAGS(futureAmmo_30Rnd_300_Mk343_Sub, futureAmmo_300_Mk343_Sub, 30Rnd 300BLK Mk343 Sub 220gr);

    // =========================================================
    // .338 NM — Mk372 MMG 250gr — 200Rnd belt
    // =========================================================
    class futureAmmo_200Rnd_338_Mk372_250gr: 200Rnd_338_Mag {
        author = QAUTHOR;
        displayName = "200Rnd .338NM Mk372 MMG (250gr)";
        descriptionShort = ".338 Norma Mk372 MMG-250 (2033)<br/>Hybrid case, 250gr tungsten - fast";
        ammo = "futureAmmo_338_Mk372_250gr";
        initSpeed = 872;
        mass = 40;
    };
    ALL_TMAGS(futureAmmo_200Rnd_338_Mk372_250gr, futureAmmo_338_Mk372_250gr, 200Rnd .338NM Mk372 MMG 250gr);

    // =========================================================
    // .338 NM — Mk372 MMG 300gr — 200Rnd belt
    // =========================================================
    class futureAmmo_200Rnd_338_Mk372_300gr: 200Rnd_338_Mag {
        author = QAUTHOR;
        displayName = "200Rnd .338NM Mk372 MMG (300gr)";
        descriptionShort = ".338 Norma Mk372 MMG-300 (2033)<br/>Hybrid case, 300gr tungsten - extreme range";
        ammo = "futureAmmo_338_Mk372_300gr";
        initSpeed = 810;
        mass = 46;
    };
    ALL_TMAGS(futureAmmo_200Rnd_338_Mk372_300gr, futureAmmo_338_Mk372_300gr, 200Rnd .338NM Mk372 MMG 300gr);

    // =========================================================
    // .338 NM — Mk372 MMG 250gr — 130Rnd belt
    // =========================================================
    class futureAmmo_130Rnd_338_Mk372_250gr: 130Rnd_338_Mag {
        author = QAUTHOR;
        displayName = "130Rnd .338NM Mk372 MMG (250gr)";
        descriptionShort = ".338 Norma Mk372 MMG-250 (2033)<br/>Hybrid case, 250gr tungsten - fast";
        ammo = "futureAmmo_338_Mk372_250gr";
        initSpeed = 872;
        mass = 28;
    };
    ALL_TMAGS(futureAmmo_130Rnd_338_Mk372_250gr, futureAmmo_338_Mk372_250gr, 130Rnd .338NM Mk372 MMG 250gr);

    // =========================================================
    // .338 NM — Mk372 MMG 300gr — 130Rnd belt
    // =========================================================
    class futureAmmo_130Rnd_338_Mk372_300gr: 130Rnd_338_Mag {
        author = QAUTHOR;
        displayName = "130Rnd .338NM Mk372 MMG (300gr)";
        descriptionShort = ".338 Norma Mk372 MMG-300 (2033)<br/>Hybrid case, 300gr tungsten - extreme range";
        ammo = "futureAmmo_338_Mk372_300gr";
        initSpeed = 810;
        mass = 32;
    };
    ALL_TMAGS(futureAmmo_130Rnd_338_Mk372_300gr, futureAmmo_338_Mk372_300gr, 130Rnd .338NM Mk372 MMG 300gr);

    // =========================================================
    // 6.5x39 Caseless EPR — MX family only
    // =========================================================
    class futureAmmo_30Rnd_65_EPR: 30Rnd_65x39_caseless_mag {
        author = QAUTHOR;
        displayName = "30Rnd 6.5 Caseless EPR";
        descriptionShort = "6.5x39 Caseless EPR (2035)<br/>Tungsten, MX family only";
        ammo = "futureAmmo_65_EPR";
        initSpeed = 820;
        mass = 7;
    };
    ALL_TMAGS(futureAmmo_30Rnd_65_EPR, futureAmmo_65_EPR, 30Rnd 6.5 Caseless EPR);

    #include "CfgMagazines_VanillaTracers.hpp"
};
