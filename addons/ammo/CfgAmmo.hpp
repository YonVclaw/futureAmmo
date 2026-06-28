// Generates 6 tracer variants that inherit all ballistic properties from BASE.
// tracerScale is set on the base class so tracers inherit it.
#define DEF_TRACER(BASE, SUFFIX, R, G, B) \
class BASE##SUFFIX: BASE { tracer = 1; tracerColor[] = {R, G, B, 1.0}; }

#define ALL_TRACERS(BASE) \
DEF_TRACER(BASE, _T_Red,    1.0, 0.0, 0.0) \
DEF_TRACER(BASE, _T_Yellow, 1.0, 1.0, 0.0) \
DEF_TRACER(BASE, _T_Green,  0.0, 1.0, 0.0) \
DEF_TRACER(BASE, _T_White,  1.0, 1.0, 1.0) \
DEF_TRACER(BASE, _T_Blue,   0.0, 0.3, 1.0) \
DEF_TRACER(BASE, _T_Orange, 1.0, 0.4, 0.0)

class CfgAmmo {
    class B_556x45_Ball;
    class B_762x51_Ball;
    class B_338_LM_Ball;
    class B_338_NM_Ball;
    class B_65x39_Caseless;

    // =========================================================
    // 5.56x45mm
    // =========================================================

    // Release 1 (~2033) — Mk327 Mod 0 EPR-HV, hybrid case, ~83 kpsi, 70gr tungsten
    class futureAmmo_556_Mk327_HV: B_556x45_Ball {
        hit = 11;
        caliber = 2.4;
        typicalSpeed = 1000;
        airFriction = -0.00092;
        deflecting = 18;
        tracerScale = 0.6;
        ACE_caliber = 0.224;
        ACE_bulletLength = 0.95;
        ACE_bulletMass = 70;
        ACE_ballisticCoefficients[] = {0.205};
        ACE_velocityBoundaries[] = {};
        ACE_standardAtmosphere = "ICAO";
        ACE_dragModel = 7;
        ACE_muzzleVelocities[] = {925, 965, 1000, 1020};
        ACE_barrelLengths[] = {368, 406, 508, 610};
    };
    ALL_TRACERS(futureAmmo_556_Mk327_HV);

    // Release 2 (~2039) — XM891 CTEP, cased-telescoped composite, ~85 kpsi, 68gr 2-stage tungsten
    class futureAmmo_556_XM891_CTEP: B_556x45_Ball {
        hit = 12;
        caliber = 2.6;
        typicalSpeed = 1015;
        airFriction = -0.00086;
        deflecting = 16;
        tracerScale = 0.6;
        ACE_caliber = 0.224;
        ACE_bulletLength = 0.93;
        ACE_bulletMass = 68;
        ACE_ballisticCoefficients[] = {0.218};
        ACE_velocityBoundaries[] = {};
        ACE_standardAtmosphere = "ICAO";
        ACE_dragModel = 7;
        ACE_muzzleVelocities[] = {945, 985, 1015, 1040};
        ACE_barrelLengths[] = {368, 406, 508, 610};
    };
    ALL_TRACERS(futureAmmo_556_XM891_CTEP);

    // =========================================================
    // 7.62x51mm
    // =========================================================

    // Release 1 (~2032) — M80A2 HV-EPR, hybrid case, ~78 kpsi, 135gr tungsten
    class futureAmmo_762_M80A2_HV: B_762x51_Ball {
        hit = 14;
        caliber = 3.0;
        typicalSpeed = 940;
        airFriction = -0.00082;
        deflecting = 15;
        tracerScale = 0.8;
        ACE_caliber = 0.308;
        ACE_bulletLength = 1.15;
        ACE_bulletMass = 135;
        ACE_ballisticCoefficients[] = {0.228};
        ACE_velocityBoundaries[] = {};
        ACE_standardAtmosphere = "ICAO";
        ACE_dragModel = 7;
        ACE_muzzleVelocities[] = {885, 920, 940, 955};
        ACE_barrelLengths[] = {406, 508, 610, 660};
    };
    ALL_TRACERS(futureAmmo_762_M80A2_HV);

    // Release 2 (~2039) — XM751 CTEP, cased-telescoped, ~82 kpsi, 140gr 2-stage tungsten
    class futureAmmo_762_XM751_CTEP: B_762x51_Ball {
        hit = 15;
        caliber = 3.4;
        typicalSpeed = 960;
        airFriction = -0.00078;
        deflecting = 14;
        tracerScale = 0.8;
        ACE_caliber = 0.308;
        ACE_bulletLength = 1.20;
        ACE_bulletMass = 140;
        ACE_ballisticCoefficients[] = {0.245};
        ACE_velocityBoundaries[] = {};
        ACE_standardAtmosphere = "ICAO";
        ACE_dragModel = 7;
        ACE_muzzleVelocities[] = {905, 945, 960, 975};
        ACE_barrelLengths[] = {406, 508, 610, 660};
    };
    ALL_TRACERS(futureAmmo_762_XM751_CTEP);

    // =========================================================
    // .300 BLK (subsonic) — velocity-capped, improves via mass/material only
    // =========================================================

    // Release 1 (~2033) — Mk341 SUB-AP, conventional brass, ~48 kpsi, 210gr tungsten
    class futureAmmo_300_Mk341_SubAP: B_762x51_Ball {
        hit = 10;
        caliber = 2.3;
        typicalSpeed = 315;
        airFriction = -0.00055;
        deflecting = 14;
        tracerScale = 0.7;
        ACE_caliber = 0.308;
        ACE_bulletLength = 1.36;
        ACE_bulletMass = 210;
        ACE_ballisticCoefficients[] = {0.290};
        ACE_velocityBoundaries[] = {};
        ACE_standardAtmosphere = "ICAO";
        ACE_dragModel = 7;
        ACE_muzzleVelocities[] = {300, 310, 315};
        ACE_barrelLengths[] = {229, 305, 406};
    };
    ALL_TRACERS(futureAmmo_300_Mk341_SubAP);

    // Release 2 (~2039) — XM345 SUB-AP2, conventional brass, ~49 kpsi, 220gr 2-stage tungsten
    class futureAmmo_300_XM345_SubAP2: B_762x51_Ball {
        hit = 11;
        caliber = 2.7;
        typicalSpeed = 312;
        airFriction = -0.00052;
        deflecting = 13;
        tracerScale = 0.7;
        ACE_caliber = 0.308;
        ACE_bulletLength = 1.40;
        ACE_bulletMass = 220;
        ACE_ballisticCoefficients[] = {0.310};
        ACE_velocityBoundaries[] = {};
        ACE_standardAtmosphere = "ICAO";
        ACE_dragModel = 7;
        ACE_muzzleVelocities[] = {298, 308, 312};
        ACE_barrelLengths[] = {229, 305, 406};
    };
    ALL_TRACERS(futureAmmo_300_XM345_SubAP2);

    // =========================================================
    // .338 Lapua Magnum — Mk371 LRP (hybrid case, tungsten)
    // All three Mods share the MAR-10 magazine well.
    // =========================================================

    // Mod 0 — 250gr, fastest, flattest near-to-mid
    class futureAmmo_338_Mk371_250gr: B_338_LM_Ball {
        hit = 22;
        caliber = 3.6;
        typicalSpeed = 905;
        airFriction = -0.00055;
        deflecting = 12;
        tracerScale = 1.0;
        ACE_caliber = 0.338;
        ACE_bulletLength = 1.457;
        ACE_bulletMass = 250;
        ACE_ballisticCoefficients[] = {0.322};
        ACE_velocityBoundaries[] = {};
        ACE_standardAtmosphere = "ICAO";
        ACE_dragModel = 7;
        ACE_muzzleVelocities[] = {875, 895, 905};
        ACE_barrelLengths[] = {610, 660, 686};
    };
    ALL_TRACERS(futureAmmo_338_Mk371_250gr);

    // Mod 1 — 285gr, balanced BC vs speed
    class futureAmmo_338_Mk371_285gr: B_338_LM_Ball {
        hit = 24;
        caliber = 3.8;
        typicalSpeed = 870;
        airFriction = -0.00050;
        deflecting = 11;
        tracerScale = 1.0;
        ACE_caliber = 0.338;
        ACE_bulletLength = 1.64;
        ACE_bulletMass = 285;
        ACE_ballisticCoefficients[] = {0.380};
        ACE_velocityBoundaries[] = {};
        ACE_standardAtmosphere = "ICAO";
        ACE_dragModel = 7;
        ACE_muzzleVelocities[] = {840, 862, 870};
        ACE_barrelLengths[] = {610, 660, 686};
    };
    ALL_TRACERS(futureAmmo_338_Mk371_285gr);

    // Mod 2 — 300gr, extreme range, best retained velocity
    class futureAmmo_338_Mk371_300gr: B_338_LM_Ball {
        hit = 25;
        caliber = 4.0;
        typicalSpeed = 830;
        airFriction = -0.00046;
        deflecting = 10;
        tracerScale = 1.0;
        ACE_caliber = 0.338;
        ACE_bulletLength = 1.72;
        ACE_bulletMass = 300;
        ACE_ballisticCoefficients[] = {0.400};
        ACE_velocityBoundaries[] = {};
        ACE_standardAtmosphere = "ICAO";
        ACE_dragModel = 7;
        ACE_muzzleVelocities[] = {805, 825, 830};
        ACE_barrelLengths[] = {610, 660, 686};
    };
    ALL_TRACERS(futureAmmo_338_Mk371_300gr);

    // =========================================================
    // .300 BLK (supersonic) — Mk335 / Mk336 / Mk337
    // STANAG-compatible; gate to .300 BLK rated weapons for balance.
    // =========================================================

    // Mk335 — 110gr light supersonic
    class futureAmmo_300_Mk335: B_762x51_Ball {
        hit = 9;
        caliber = 1.4;
        typicalSpeed = 725;
        airFriction = -0.00170;
        deflecting = 20;
        tracerScale = 0.7;
        ACE_caliber = 0.308;
        ACE_bulletLength = 0.98;
        ACE_bulletMass = 110;
        ACE_ballisticCoefficients[] = {0.130};
        ACE_velocityBoundaries[] = {};
        ACE_standardAtmosphere = "ICAO";
        ACE_dragModel = 7;
        ACE_muzzleVelocities[] = {640, 690, 725};
        ACE_barrelLengths[] = {229, 305, 406};
    };
    ALL_TRACERS(futureAmmo_300_Mk335);

    // Mk336 — 125gr standard supersonic
    class futureAmmo_300_Mk336: B_762x51_Ball {
        hit = 10;
        caliber = 1.5;
        typicalSpeed = 675;
        airFriction = -0.00150;
        deflecting = 18;
        tracerScale = 0.7;
        ACE_caliber = 0.308;
        ACE_bulletLength = 1.05;
        ACE_bulletMass = 125;
        ACE_ballisticCoefficients[] = {0.160};
        ACE_velocityBoundaries[] = {};
        ACE_standardAtmosphere = "ICAO";
        ACE_dragModel = 7;
        ACE_muzzleVelocities[] = {600, 650, 675};
        ACE_barrelLengths[] = {229, 305, 406};
    };
    ALL_TRACERS(futureAmmo_300_Mk336);

    // Mk337 — 150gr heavy supersonic (drops subsonic at distance)
    class futureAmmo_300_Mk337: B_762x51_Ball {
        hit = 11;
        caliber = 1.6;
        typicalSpeed = 620;
        airFriction = -0.00140;
        deflecting = 17;
        tracerScale = 0.7;
        ACE_caliber = 0.308;
        ACE_bulletLength = 1.10;
        ACE_bulletMass = 150;
        ACE_ballisticCoefficients[] = {0.180};
        ACE_velocityBoundaries[] = {};
        ACE_standardAtmosphere = "ICAO";
        ACE_dragModel = 7;
        ACE_muzzleVelocities[] = {560, 600, 620};
        ACE_barrelLengths[] = {229, 305, 406};
    };
    ALL_TRACERS(futureAmmo_300_Mk337);

    // =========================================================
    // .300 BLK (subsonic) — Mk342 / Mk343 (non-AP variants)
    // Complement to Mk341 SUB-AP / XM345 SUB-AP2; no tungsten core.
    // =========================================================

    // Mk342 — 190gr subsonic
    class futureAmmo_300_Mk342_Sub: B_762x51_Ball {
        hit = 8;
        caliber = 1.7;
        typicalSpeed = 318;
        airFriction = -0.00060;
        deflecting = 15;
        tracerScale = 0.7;
        ACE_caliber = 0.308;
        ACE_bulletLength = 1.28;
        ACE_bulletMass = 190;
        ACE_ballisticCoefficients[] = {0.250};
        ACE_velocityBoundaries[] = {};
        ACE_standardAtmosphere = "ICAO";
        ACE_dragModel = 7;
        ACE_muzzleVelocities[] = {300, 312, 318};
        ACE_barrelLengths[] = {229, 305, 406};
    };
    ALL_TRACERS(futureAmmo_300_Mk342_Sub);

    // Mk343 — 220gr heavy subsonic (best BC, quietest)
    class futureAmmo_300_Mk343_Sub: B_762x51_Ball {
        hit = 9;
        caliber = 1.9;
        typicalSpeed = 305;
        airFriction = -0.00055;
        deflecting = 14;
        tracerScale = 0.7;
        ACE_caliber = 0.308;
        ACE_bulletLength = 1.36;
        ACE_bulletMass = 220;
        ACE_ballisticCoefficients[] = {0.300};
        ACE_velocityBoundaries[] = {};
        ACE_standardAtmosphere = "ICAO";
        ACE_dragModel = 7;
        ACE_muzzleVelocities[] = {295, 303, 305};
        ACE_barrelLengths[] = {229, 305, 406};
    };
    ALL_TRACERS(futureAmmo_300_Mk343_Sub);

    // =========================================================
    // .338 Norma Magnum — Mk372 MMG (hybrid case, tungsten)
    // Belt-fed medium MG role; pairs with Mk371 LRP (precision).
    // Base: B_338_NM_Ball (vanilla SPMG round).
    // =========================================================

    // Mk372 250gr — faster load, flatter to mid range
    class futureAmmo_338_Mk372_250gr: B_338_NM_Ball {
        hit = 22;
        caliber = 3.6;
        typicalSpeed = 872;
        airFriction = -0.00052;
        deflecting = 12;
        tracerScale = 1.0;
        ACE_caliber = 0.338;
        ACE_bulletLength = 1.457;
        ACE_bulletMass = 250;
        ACE_ballisticCoefficients[] = {0.340};
        ACE_velocityBoundaries[] = {};
        ACE_standardAtmosphere = "ICAO";
        ACE_dragModel = 7;
        ACE_muzzleVelocities[] = {840, 860, 872};
        ACE_barrelLengths[] = {600, 640, 680};
    };
    ALL_TRACERS(futureAmmo_338_Mk372_250gr);

    // Mk372 300gr — high BC, best sustained-fire reach
    class futureAmmo_338_Mk372_300gr: B_338_NM_Ball {
        hit = 25;
        caliber = 4.0;
        typicalSpeed = 810;
        airFriction = -0.00046;
        deflecting = 10;
        tracerScale = 1.0;
        ACE_caliber = 0.338;
        ACE_bulletLength = 1.72;
        ACE_bulletMass = 300;
        ACE_ballisticCoefficients[] = {0.400};
        ACE_velocityBoundaries[] = {};
        ACE_standardAtmosphere = "ICAO";
        ACE_dragModel = 7;
        ACE_muzzleVelocities[] = {780, 800, 810};
        ACE_barrelLengths[] = {600, 640, 680};
    };
    ALL_TRACERS(futureAmmo_338_Mk372_300gr);

    // =========================================================
    // 6.5x39 Caseless (Arma 3 canon, 2035)
    // Inherits vanilla caseless; gate to MX family via magazineWell.
    // =========================================================

    // 6.5mm Caseless EPR (~2035) — caseless, ~75 kpsi (fictional), 120gr tungsten
    class futureAmmo_65_EPR: B_65x39_Caseless {
        hit = 12;
        caliber = 2.4;
        typicalSpeed = 820;
        airFriction = -0.00075;
        deflecting = 16;
        tracerScale = 0.7;
        ACE_caliber = 0.264;
        ACE_bulletLength = 1.20;
        ACE_bulletMass = 120;
        ACE_ballisticCoefficients[] = {0.263};
        ACE_velocityBoundaries[] = {};
        ACE_standardAtmosphere = "ICAO";
        ACE_dragModel = 7;
        ACE_muzzleVelocities[] = {780, 810, 820, 835};
        ACE_barrelLengths[] = {406, 457, 508, 559};
    };
    ALL_TRACERS(futureAmmo_65_EPR);
};
