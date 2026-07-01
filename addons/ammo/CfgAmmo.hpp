class CfgAmmo {
    class B_556x45_Ball;
    class B_762x51_Ball;
    class B_762x39_Ball_F;
    class B_93x64_Ball;
    class B_127x108_Ball;
    class B_127x99_Ball;
    class B_45ACP_Ball;
    class BulletBase;
    class B_338_Mag: BulletBase {};
    class B_338_LM_Ball: B_338_Mag {};
    class B_338_NM_Ball: B_338_Mag {};
    class B_65x39_Caseless;
    class B_12Gauge_Pellets_Submunition;
    class B_12Gauge_Pellets_Submunition_Cartridge: B_12Gauge_Pellets_Submunition {};
    class B_12Gauge_Slug;

    // =========================================================
    // 5.56x45mm
    // =========================================================

    // Release 1 (~2033) — Mk327 Mod 0 EPR-HV, hybrid case, ~83 kpsi, 70gr tungsten
    class FA_556_Mk327_HV: B_556x45_Ball {
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
    class FA_556_Mk327_HV_T_Red: FA_556_Mk327_HV { tracer = 1; tracerColor[] = {1.0, 0.0, 0.0, 1.0}; };
    class FA_556_Mk327_HV_T_Yellow: FA_556_Mk327_HV { tracer = 1; tracerColor[] = {1.0, 1.0, 0.0, 1.0}; };
    class FA_556_Mk327_HV_T_Green: FA_556_Mk327_HV { tracer = 1; tracerColor[] = {0.0, 1.0, 0.0, 1.0}; };
    class FA_556_Mk327_HV_T_White: FA_556_Mk327_HV { tracer = 1; tracerColor[] = {1.0, 1.0, 1.0, 1.0}; };
    class FA_556_Mk327_HV_T_Blue: FA_556_Mk327_HV { tracer = 1; tracerColor[] = {0.0, 0.3, 1.0, 1.0}; };
    class FA_556_Mk327_HV_T_Orange: FA_556_Mk327_HV { tracer = 1; tracerColor[] = {1.0, 0.4, 0.0, 1.0}; };
    class FA_556_Mk327_HV_T_IR: FA_556_Mk327_HV { tracer = 1; nvgOnly = 1; tracerColor[] = {0.2, 1.0, 0.2, 1.0}; };

    // Release 2 (~2039) — XM891 CTEP, cased-telescoped composite, ~85 kpsi, 68gr 2-stage tungsten
    class FA_556_XM891_CTEP: B_556x45_Ball {
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
    class FA_556_XM891_CTEP_T_Red: FA_556_XM891_CTEP { tracer = 1; tracerColor[] = {1.0, 0.0, 0.0, 1.0}; };
    class FA_556_XM891_CTEP_T_Yellow: FA_556_XM891_CTEP { tracer = 1; tracerColor[] = {1.0, 1.0, 0.0, 1.0}; };
    class FA_556_XM891_CTEP_T_Green: FA_556_XM891_CTEP { tracer = 1; tracerColor[] = {0.0, 1.0, 0.0, 1.0}; };
    class FA_556_XM891_CTEP_T_White: FA_556_XM891_CTEP { tracer = 1; tracerColor[] = {1.0, 1.0, 1.0, 1.0}; };
    class FA_556_XM891_CTEP_T_Blue: FA_556_XM891_CTEP { tracer = 1; tracerColor[] = {0.0, 0.3, 1.0, 1.0}; };
    class FA_556_XM891_CTEP_T_Orange: FA_556_XM891_CTEP { tracer = 1; tracerColor[] = {1.0, 0.4, 0.0, 1.0}; };
    class FA_556_XM891_CTEP_T_IR: FA_556_XM891_CTEP { tracer = 1; nvgOnly = 1; tracerColor[] = {0.2, 1.0, 0.2, 1.0}; };

    // =========================================================
    // 7.62x51mm
    // =========================================================

    // Release 1 (~2032) — M80A2 HV-EPR, hybrid case, ~78 kpsi, 135gr tungsten
    class FA_762_M80A2_HV: B_762x51_Ball {
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
    class FA_762_M80A2_HV_T_Red: FA_762_M80A2_HV { tracer = 1; tracerColor[] = {1.0, 0.0, 0.0, 1.0}; };
    class FA_762_M80A2_HV_T_Yellow: FA_762_M80A2_HV { tracer = 1; tracerColor[] = {1.0, 1.0, 0.0, 1.0}; };
    class FA_762_M80A2_HV_T_Green: FA_762_M80A2_HV { tracer = 1; tracerColor[] = {0.0, 1.0, 0.0, 1.0}; };
    class FA_762_M80A2_HV_T_White: FA_762_M80A2_HV { tracer = 1; tracerColor[] = {1.0, 1.0, 1.0, 1.0}; };
    class FA_762_M80A2_HV_T_Blue: FA_762_M80A2_HV { tracer = 1; tracerColor[] = {0.0, 0.3, 1.0, 1.0}; };
    class FA_762_M80A2_HV_T_Orange: FA_762_M80A2_HV { tracer = 1; tracerColor[] = {1.0, 0.4, 0.0, 1.0}; };
    class FA_762_M80A2_HV_T_IR: FA_762_M80A2_HV { tracer = 1; nvgOnly = 1; tracerColor[] = {0.2, 1.0, 0.2, 1.0}; };

    // Release 2 (~2039) — XM751 CTEP, cased-telescoped, ~82 kpsi, 140gr 2-stage tungsten
    class FA_762_XM751_CTEP: B_762x51_Ball {
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
    class FA_762_XM751_CTEP_T_Red: FA_762_XM751_CTEP { tracer = 1; tracerColor[] = {1.0, 0.0, 0.0, 1.0}; };
    class FA_762_XM751_CTEP_T_Yellow: FA_762_XM751_CTEP { tracer = 1; tracerColor[] = {1.0, 1.0, 0.0, 1.0}; };
    class FA_762_XM751_CTEP_T_Green: FA_762_XM751_CTEP { tracer = 1; tracerColor[] = {0.0, 1.0, 0.0, 1.0}; };
    class FA_762_XM751_CTEP_T_White: FA_762_XM751_CTEP { tracer = 1; tracerColor[] = {1.0, 1.0, 1.0, 1.0}; };
    class FA_762_XM751_CTEP_T_Blue: FA_762_XM751_CTEP { tracer = 1; tracerColor[] = {0.0, 0.3, 1.0, 1.0}; };
    class FA_762_XM751_CTEP_T_Orange: FA_762_XM751_CTEP { tracer = 1; tracerColor[] = {1.0, 0.4, 0.0, 1.0}; };
    class FA_762_XM751_CTEP_T_IR: FA_762_XM751_CTEP { tracer = 1; nvgOnly = 1; tracerColor[] = {0.2, 1.0, 0.2, 1.0}; };

    // =========================================================
    // 7.62x67mm (.300 Win Mag) — Mk248 family
    // No vanilla .300 WM base — inherits B_762x51_Ball (.308 bore) as a
    // structural placeholder; ACE ballistics drive the real behaviour.
    // =========================================================
    // Mk248 Mod 2 — 220gr hybrid + tungsten, extreme long range
    class FA_762x67_Mk248Mod2: B_762x51_Ball {
        hit = 13;
        caliber = 3.6;
        typicalSpeed = 900;
        airFriction = -0.00080;
        deflecting = 12;
        tracerScale = 0.8;
        ACE_caliber = 0.308;
        ACE_bulletLength = 1.50;
        ACE_bulletMass = 220;
        ACE_ballisticCoefficients[] = {0.330};
        ACE_velocityBoundaries[] = {};
        ACE_standardAtmosphere = "ICAO";
        ACE_dragModel = 7;
        ACE_muzzleVelocities[] = {850, 890, 900};
        ACE_barrelLengths[]    = {508, 609.6, 660.4};
    };
    class FA_762x67_Mk248Mod2_T_Red:    FA_762x67_Mk248Mod2 { tracer = 1; tracerColor[] = {1.0, 0.0, 0.0, 1.0}; };
    class FA_762x67_Mk248Mod2_T_Yellow: FA_762x67_Mk248Mod2 { tracer = 1; tracerColor[] = {1.0, 1.0, 0.0, 1.0}; };
    class FA_762x67_Mk248Mod2_T_Green:  FA_762x67_Mk248Mod2 { tracer = 1; tracerColor[] = {0.0, 1.0, 0.0, 1.0}; };
    class FA_762x67_Mk248Mod2_T_White:  FA_762x67_Mk248Mod2 { tracer = 1; tracerColor[] = {1.0, 1.0, 1.0, 1.0}; };
    class FA_762x67_Mk248Mod2_T_Blue:   FA_762x67_Mk248Mod2 { tracer = 1; tracerColor[] = {0.0, 0.3, 1.0, 1.0}; };
    class FA_762x67_Mk248Mod2_T_Orange: FA_762x67_Mk248Mod2 { tracer = 1; tracerColor[] = {1.0, 0.4, 0.0, 1.0}; };
    class FA_762x67_Mk248Mod2_T_IR:     FA_762x67_Mk248Mod2 { tracer = 1; nvgOnly = 1; tracerColor[] = {0.2, 1.0, 0.2, 1.0}; };

    // Mk248 LV — 190gr light, fast, flat-shooting
    class FA_762x67_Mk248LV: B_762x51_Ball {
        hit = 12;
        caliber = 3.2;
        typicalSpeed = 965;
        airFriction = -0.00090;
        deflecting = 13;
        tracerScale = 0.8;
        ACE_caliber = 0.308;
        ACE_bulletLength = 1.30;
        ACE_bulletMass = 190;
        ACE_ballisticCoefficients[] = {0.275};
        ACE_velocityBoundaries[] = {};
        ACE_standardAtmosphere = "ICAO";
        ACE_dragModel = 7;
        ACE_muzzleVelocities[] = {910, 950, 965};
        ACE_barrelLengths[]    = {508, 609.6, 660.4};
    };
    class FA_762x67_Mk248LV_T_Red:    FA_762x67_Mk248LV { tracer = 1; tracerColor[] = {1.0, 0.0, 0.0, 1.0}; };
    class FA_762x67_Mk248LV_T_Yellow: FA_762x67_Mk248LV { tracer = 1; tracerColor[] = {1.0, 1.0, 0.0, 1.0}; };
    class FA_762x67_Mk248LV_T_Green:  FA_762x67_Mk248LV { tracer = 1; tracerColor[] = {0.0, 1.0, 0.0, 1.0}; };
    class FA_762x67_Mk248LV_T_White:  FA_762x67_Mk248LV { tracer = 1; tracerColor[] = {1.0, 1.0, 1.0, 1.0}; };
    class FA_762x67_Mk248LV_T_Blue:   FA_762x67_Mk248LV { tracer = 1; tracerColor[] = {0.0, 0.3, 1.0, 1.0}; };
    class FA_762x67_Mk248LV_T_Orange: FA_762x67_Mk248LV { tracer = 1; tracerColor[] = {1.0, 0.4, 0.0, 1.0}; };
    class FA_762x67_Mk248LV_T_IR:     FA_762x67_Mk248LV { tracer = 1; nvgOnly = 1; tracerColor[] = {0.2, 1.0, 0.2, 1.0}; };

    // =========================================================
    // .300 BLK (subsonic) — velocity-capped, improves via mass/material only
    // =========================================================

    // Release 1 (~2033) — Mk341 SUB-AP, conventional brass, ~48 kpsi, 210gr tungsten
    class FA_300_Mk341_SubAP: B_762x51_Ball {
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
    class FA_300_Mk341_SubAP_T_Red: FA_300_Mk341_SubAP { tracer = 1; tracerColor[] = {1.0, 0.0, 0.0, 1.0}; };
    class FA_300_Mk341_SubAP_T_Yellow: FA_300_Mk341_SubAP { tracer = 1; tracerColor[] = {1.0, 1.0, 0.0, 1.0}; };
    class FA_300_Mk341_SubAP_T_Green: FA_300_Mk341_SubAP { tracer = 1; tracerColor[] = {0.0, 1.0, 0.0, 1.0}; };
    class FA_300_Mk341_SubAP_T_White: FA_300_Mk341_SubAP { tracer = 1; tracerColor[] = {1.0, 1.0, 1.0, 1.0}; };
    class FA_300_Mk341_SubAP_T_Blue: FA_300_Mk341_SubAP { tracer = 1; tracerColor[] = {0.0, 0.3, 1.0, 1.0}; };
    class FA_300_Mk341_SubAP_T_Orange: FA_300_Mk341_SubAP { tracer = 1; tracerColor[] = {1.0, 0.4, 0.0, 1.0}; };
    class FA_300_Mk341_SubAP_T_IR: FA_300_Mk341_SubAP { tracer = 1; nvgOnly = 1; tracerColor[] = {0.2, 1.0, 0.2, 1.0}; };

    // Release 2 (~2039) — XM345 SUB-AP2, conventional brass, ~49 kpsi, 220gr 2-stage tungsten
    class FA_300_XM345_SubAP2: B_762x51_Ball {
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
    class FA_300_XM345_SubAP2_T_Red: FA_300_XM345_SubAP2 { tracer = 1; tracerColor[] = {1.0, 0.0, 0.0, 1.0}; };
    class FA_300_XM345_SubAP2_T_Yellow: FA_300_XM345_SubAP2 { tracer = 1; tracerColor[] = {1.0, 1.0, 0.0, 1.0}; };
    class FA_300_XM345_SubAP2_T_Green: FA_300_XM345_SubAP2 { tracer = 1; tracerColor[] = {0.0, 1.0, 0.0, 1.0}; };
    class FA_300_XM345_SubAP2_T_White: FA_300_XM345_SubAP2 { tracer = 1; tracerColor[] = {1.0, 1.0, 1.0, 1.0}; };
    class FA_300_XM345_SubAP2_T_Blue: FA_300_XM345_SubAP2 { tracer = 1; tracerColor[] = {0.0, 0.3, 1.0, 1.0}; };
    class FA_300_XM345_SubAP2_T_Orange: FA_300_XM345_SubAP2 { tracer = 1; tracerColor[] = {1.0, 0.4, 0.0, 1.0}; };
    class FA_300_XM345_SubAP2_T_IR: FA_300_XM345_SubAP2 { tracer = 1; nvgOnly = 1; tracerColor[] = {0.2, 1.0, 0.2, 1.0}; };

    // =========================================================
    // .338 Lapua Magnum — Mk371 LRP (hybrid case, tungsten)
    // All three Mods share the MAR-10 magazine well.
    // =========================================================

    // Mod 0 — 250gr, fastest, flattest near-to-mid
    class FA_338_Mk371_250gr: B_338_LM_Ball {
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
    class FA_338_Mk371_250gr_T_Red: FA_338_Mk371_250gr { tracer = 1; tracerColor[] = {1.0, 0.0, 0.0, 1.0}; };
    class FA_338_Mk371_250gr_T_Yellow: FA_338_Mk371_250gr { tracer = 1; tracerColor[] = {1.0, 1.0, 0.0, 1.0}; };
    class FA_338_Mk371_250gr_T_Green: FA_338_Mk371_250gr { tracer = 1; tracerColor[] = {0.0, 1.0, 0.0, 1.0}; };
    class FA_338_Mk371_250gr_T_White: FA_338_Mk371_250gr { tracer = 1; tracerColor[] = {1.0, 1.0, 1.0, 1.0}; };
    class FA_338_Mk371_250gr_T_Blue: FA_338_Mk371_250gr { tracer = 1; tracerColor[] = {0.0, 0.3, 1.0, 1.0}; };
    class FA_338_Mk371_250gr_T_Orange: FA_338_Mk371_250gr { tracer = 1; tracerColor[] = {1.0, 0.4, 0.0, 1.0}; };
    class FA_338_Mk371_250gr_T_IR: FA_338_Mk371_250gr { tracer = 1; nvgOnly = 1; tracerColor[] = {0.2, 1.0, 0.2, 1.0}; };

    // Mod 1 — 285gr, balanced BC vs speed
    class FA_338_Mk371_285gr: B_338_LM_Ball {
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
    class FA_338_Mk371_285gr_T_Red: FA_338_Mk371_285gr { tracer = 1; tracerColor[] = {1.0, 0.0, 0.0, 1.0}; };
    class FA_338_Mk371_285gr_T_Yellow: FA_338_Mk371_285gr { tracer = 1; tracerColor[] = {1.0, 1.0, 0.0, 1.0}; };
    class FA_338_Mk371_285gr_T_Green: FA_338_Mk371_285gr { tracer = 1; tracerColor[] = {0.0, 1.0, 0.0, 1.0}; };
    class FA_338_Mk371_285gr_T_White: FA_338_Mk371_285gr { tracer = 1; tracerColor[] = {1.0, 1.0, 1.0, 1.0}; };
    class FA_338_Mk371_285gr_T_Blue: FA_338_Mk371_285gr { tracer = 1; tracerColor[] = {0.0, 0.3, 1.0, 1.0}; };
    class FA_338_Mk371_285gr_T_Orange: FA_338_Mk371_285gr { tracer = 1; tracerColor[] = {1.0, 0.4, 0.0, 1.0}; };
    class FA_338_Mk371_285gr_T_IR: FA_338_Mk371_285gr { tracer = 1; nvgOnly = 1; tracerColor[] = {0.2, 1.0, 0.2, 1.0}; };

    // Mod 2 — 300gr, extreme range, best retained velocity
    class FA_338_Mk371_300gr: B_338_LM_Ball {
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
    class FA_338_Mk371_300gr_T_Red: FA_338_Mk371_300gr { tracer = 1; tracerColor[] = {1.0, 0.0, 0.0, 1.0}; };
    class FA_338_Mk371_300gr_T_Yellow: FA_338_Mk371_300gr { tracer = 1; tracerColor[] = {1.0, 1.0, 0.0, 1.0}; };
    class FA_338_Mk371_300gr_T_Green: FA_338_Mk371_300gr { tracer = 1; tracerColor[] = {0.0, 1.0, 0.0, 1.0}; };
    class FA_338_Mk371_300gr_T_White: FA_338_Mk371_300gr { tracer = 1; tracerColor[] = {1.0, 1.0, 1.0, 1.0}; };
    class FA_338_Mk371_300gr_T_Blue: FA_338_Mk371_300gr { tracer = 1; tracerColor[] = {0.0, 0.3, 1.0, 1.0}; };
    class FA_338_Mk371_300gr_T_Orange: FA_338_Mk371_300gr { tracer = 1; tracerColor[] = {1.0, 0.4, 0.0, 1.0}; };
    class FA_338_Mk371_300gr_T_IR: FA_338_Mk371_300gr { tracer = 1; nvgOnly = 1; tracerColor[] = {0.2, 1.0, 0.2, 1.0}; };

    // =========================================================
    // .300 BLK (supersonic) — Mk335 / Mk336 / Mk337
    // STANAG-compatible; gate to .300 BLK rated weapons for balance.
    // =========================================================

    // Mk335 — 110gr light supersonic
    class FA_300_Mk335: B_762x51_Ball {
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
    class FA_300_Mk335_T_Red: FA_300_Mk335 { tracer = 1; tracerColor[] = {1.0, 0.0, 0.0, 1.0}; };
    class FA_300_Mk335_T_Yellow: FA_300_Mk335 { tracer = 1; tracerColor[] = {1.0, 1.0, 0.0, 1.0}; };
    class FA_300_Mk335_T_Green: FA_300_Mk335 { tracer = 1; tracerColor[] = {0.0, 1.0, 0.0, 1.0}; };
    class FA_300_Mk335_T_White: FA_300_Mk335 { tracer = 1; tracerColor[] = {1.0, 1.0, 1.0, 1.0}; };
    class FA_300_Mk335_T_Blue: FA_300_Mk335 { tracer = 1; tracerColor[] = {0.0, 0.3, 1.0, 1.0}; };
    class FA_300_Mk335_T_Orange: FA_300_Mk335 { tracer = 1; tracerColor[] = {1.0, 0.4, 0.0, 1.0}; };
    class FA_300_Mk335_T_IR: FA_300_Mk335 { tracer = 1; nvgOnly = 1; tracerColor[] = {0.2, 1.0, 0.2, 1.0}; };

    // Mk336 — 125gr standard supersonic
    class FA_300_Mk336: B_762x51_Ball {
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
    class FA_300_Mk336_T_Red: FA_300_Mk336 { tracer = 1; tracerColor[] = {1.0, 0.0, 0.0, 1.0}; };
    class FA_300_Mk336_T_Yellow: FA_300_Mk336 { tracer = 1; tracerColor[] = {1.0, 1.0, 0.0, 1.0}; };
    class FA_300_Mk336_T_Green: FA_300_Mk336 { tracer = 1; tracerColor[] = {0.0, 1.0, 0.0, 1.0}; };
    class FA_300_Mk336_T_White: FA_300_Mk336 { tracer = 1; tracerColor[] = {1.0, 1.0, 1.0, 1.0}; };
    class FA_300_Mk336_T_Blue: FA_300_Mk336 { tracer = 1; tracerColor[] = {0.0, 0.3, 1.0, 1.0}; };
    class FA_300_Mk336_T_Orange: FA_300_Mk336 { tracer = 1; tracerColor[] = {1.0, 0.4, 0.0, 1.0}; };
    class FA_300_Mk336_T_IR: FA_300_Mk336 { tracer = 1; nvgOnly = 1; tracerColor[] = {0.2, 1.0, 0.2, 1.0}; };

    // Mk337 — 150gr heavy supersonic (drops subsonic at distance)
    class FA_300_Mk337: B_762x51_Ball {
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
    class FA_300_Mk337_T_Red: FA_300_Mk337 { tracer = 1; tracerColor[] = {1.0, 0.0, 0.0, 1.0}; };
    class FA_300_Mk337_T_Yellow: FA_300_Mk337 { tracer = 1; tracerColor[] = {1.0, 1.0, 0.0, 1.0}; };
    class FA_300_Mk337_T_Green: FA_300_Mk337 { tracer = 1; tracerColor[] = {0.0, 1.0, 0.0, 1.0}; };
    class FA_300_Mk337_T_White: FA_300_Mk337 { tracer = 1; tracerColor[] = {1.0, 1.0, 1.0, 1.0}; };
    class FA_300_Mk337_T_Blue: FA_300_Mk337 { tracer = 1; tracerColor[] = {0.0, 0.3, 1.0, 1.0}; };
    class FA_300_Mk337_T_Orange: FA_300_Mk337 { tracer = 1; tracerColor[] = {1.0, 0.4, 0.0, 1.0}; };
    class FA_300_Mk337_T_IR: FA_300_Mk337 { tracer = 1; nvgOnly = 1; tracerColor[] = {0.2, 1.0, 0.2, 1.0}; };

    // =========================================================
    // .300 BLK (subsonic) — Mk342 / Mk343 (non-AP variants)
    // Complement to Mk341 SUB-AP / XM345 SUB-AP2; no tungsten core.
    // =========================================================

    // Mk342 — 190gr subsonic
    class FA_300_Mk342_Sub: B_762x51_Ball {
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
    class FA_300_Mk342_Sub_T_Red: FA_300_Mk342_Sub { tracer = 1; tracerColor[] = {1.0, 0.0, 0.0, 1.0}; };
    class FA_300_Mk342_Sub_T_Yellow: FA_300_Mk342_Sub { tracer = 1; tracerColor[] = {1.0, 1.0, 0.0, 1.0}; };
    class FA_300_Mk342_Sub_T_Green: FA_300_Mk342_Sub { tracer = 1; tracerColor[] = {0.0, 1.0, 0.0, 1.0}; };
    class FA_300_Mk342_Sub_T_White: FA_300_Mk342_Sub { tracer = 1; tracerColor[] = {1.0, 1.0, 1.0, 1.0}; };
    class FA_300_Mk342_Sub_T_Blue: FA_300_Mk342_Sub { tracer = 1; tracerColor[] = {0.0, 0.3, 1.0, 1.0}; };
    class FA_300_Mk342_Sub_T_Orange: FA_300_Mk342_Sub { tracer = 1; tracerColor[] = {1.0, 0.4, 0.0, 1.0}; };
    class FA_300_Mk342_Sub_T_IR: FA_300_Mk342_Sub { tracer = 1; nvgOnly = 1; tracerColor[] = {0.2, 1.0, 0.2, 1.0}; };

    // Mk343 — 220gr heavy subsonic (best BC, quietest)
    class FA_300_Mk343_Sub: B_762x51_Ball {
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
    class FA_300_Mk343_Sub_T_Red: FA_300_Mk343_Sub { tracer = 1; tracerColor[] = {1.0, 0.0, 0.0, 1.0}; };
    class FA_300_Mk343_Sub_T_Yellow: FA_300_Mk343_Sub { tracer = 1; tracerColor[] = {1.0, 1.0, 0.0, 1.0}; };
    class FA_300_Mk343_Sub_T_Green: FA_300_Mk343_Sub { tracer = 1; tracerColor[] = {0.0, 1.0, 0.0, 1.0}; };
    class FA_300_Mk343_Sub_T_White: FA_300_Mk343_Sub { tracer = 1; tracerColor[] = {1.0, 1.0, 1.0, 1.0}; };
    class FA_300_Mk343_Sub_T_Blue: FA_300_Mk343_Sub { tracer = 1; tracerColor[] = {0.0, 0.3, 1.0, 1.0}; };
    class FA_300_Mk343_Sub_T_Orange: FA_300_Mk343_Sub { tracer = 1; tracerColor[] = {1.0, 0.4, 0.0, 1.0}; };
    class FA_300_Mk343_Sub_T_IR: FA_300_Mk343_Sub { tracer = 1; nvgOnly = 1; tracerColor[] = {0.2, 1.0, 0.2, 1.0}; };

    // =========================================================
    // .338 Norma Magnum — Mk372 MMG (hybrid case, tungsten)
    // Belt-fed medium MG role; pairs with Mk371 LRP (precision).
    // Base: B_338_NM_Ball (vanilla SPMG round).
    // =========================================================

    // Mk372 — 300gr, high BC, best sustained-fire reach (single load)
    class FA_338_Mk372: B_338_NM_Ball {
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
    class FA_338_Mk372_T_Red: FA_338_Mk372 { tracer = 1; tracerColor[] = {1.0, 0.0, 0.0, 1.0}; };
    class FA_338_Mk372_T_Yellow: FA_338_Mk372 { tracer = 1; tracerColor[] = {1.0, 1.0, 0.0, 1.0}; };
    class FA_338_Mk372_T_Green: FA_338_Mk372 { tracer = 1; tracerColor[] = {0.0, 1.0, 0.0, 1.0}; };
    class FA_338_Mk372_T_White: FA_338_Mk372 { tracer = 1; tracerColor[] = {1.0, 1.0, 1.0, 1.0}; };
    class FA_338_Mk372_T_Blue: FA_338_Mk372 { tracer = 1; tracerColor[] = {0.0, 0.3, 1.0, 1.0}; };
    class FA_338_Mk372_T_Orange: FA_338_Mk372 { tracer = 1; tracerColor[] = {1.0, 0.4, 0.0, 1.0}; };
    class FA_338_Mk372_T_IR: FA_338_Mk372 { tracer = 1; nvgOnly = 1; tracerColor[] = {0.2, 1.0, 0.2, 1.0}; };

    // =========================================================
    // 6.5x39 Caseless (Arma 3 canon, 2035)
    // Inherits vanilla caseless; gate to MX family via magazineWell.
    // =========================================================

    // =========================================================
    // 5.8x42mm Chinese (Type 95/97 family)
    // =========================================================

    // Ball HV (~2033) — 64gr tungsten-core, ~940 m/s
    class FA_580_Ball_HV: B_556x45_Ball {
        displayName = "5.8x42mm Ball HV";
        hit = 11;
        caliber = 2.2;
        typicalSpeed = 940;
        airFriction = -0.00095;
        deflecting = 18;
        tracerScale = 0.6;
        ACE_caliber = 0.228;
        ACE_bulletLength = 0.89;
        ACE_bulletMass = 64;
        ACE_ballisticCoefficients[] = {0.200};
        ACE_velocityBoundaries[] = {};
        ACE_standardAtmosphere = "ICAO";
        ACE_dragModel = 7;
        ACE_muzzleVelocities[] = {895, 925, 940, 960};
        ACE_barrelLengths[] = {368, 406, 463, 508};
    };
    class FA_580_Ball_HV_T_Red: FA_580_Ball_HV { tracer = 1; tracerColor[] = {1.0, 0.0, 0.0, 1.0}; };
    class FA_580_Ball_HV_T_Yellow: FA_580_Ball_HV { tracer = 1; tracerColor[] = {1.0, 1.0, 0.0, 1.0}; };
    class FA_580_Ball_HV_T_Green: FA_580_Ball_HV { tracer = 1; tracerColor[] = {0.0, 1.0, 0.0, 1.0}; };
    class FA_580_Ball_HV_T_White: FA_580_Ball_HV { tracer = 1; tracerColor[] = {1.0, 1.0, 1.0, 1.0}; };
    class FA_580_Ball_HV_T_Blue: FA_580_Ball_HV { tracer = 1; tracerColor[] = {0.0, 0.3, 1.0, 1.0}; };
    class FA_580_Ball_HV_T_Orange: FA_580_Ball_HV { tracer = 1; tracerColor[] = {1.0, 0.4, 0.0, 1.0}; };
    class FA_580_Ball_HV_T_IR: FA_580_Ball_HV { tracer = 1; nvgOnly = 1; tracerColor[] = {0.2, 1.0, 0.2, 1.0}; };

    // =========================================================
    // 7.62x54R (PKM/PKP family — belt-fed LMG)
    // =========================================================

    // Ball HV (~2033) — 145gr tungsten-core, ~855 m/s
    class FA_762x54R_Ball_HV: B_762x51_Ball {
        displayName = "7.62x54R Ball HV";
        hit = 15;
        caliber = 3.2;
        typicalSpeed = 855;
        airFriction = -0.00078;
        deflecting = 15;
        tracerScale = 0.8;
        ACE_caliber = 0.312;
        ACE_bulletLength = 1.22;
        ACE_bulletMass = 145;
        ACE_ballisticCoefficients[] = {0.231};
        ACE_velocityBoundaries[] = {};
        ACE_standardAtmosphere = "ICAO";
        ACE_dragModel = 7;
        ACE_muzzleVelocities[] = {820, 845, 855, 865};
        ACE_barrelLengths[] = {525, 590, 658, 720};
    };
    class FA_762x54R_Ball_HV_T_Red: FA_762x54R_Ball_HV { tracer = 1; tracerColor[] = {1.0, 0.0, 0.0, 1.0}; };
    class FA_762x54R_Ball_HV_T_Yellow: FA_762x54R_Ball_HV { tracer = 1; tracerColor[] = {1.0, 1.0, 0.0, 1.0}; };
    class FA_762x54R_Ball_HV_T_Green: FA_762x54R_Ball_HV { tracer = 1; tracerColor[] = {0.0, 1.0, 0.0, 1.0}; };
    class FA_762x54R_Ball_HV_T_White: FA_762x54R_Ball_HV { tracer = 1; tracerColor[] = {1.0, 1.0, 1.0, 1.0}; };
    class FA_762x54R_Ball_HV_T_Blue: FA_762x54R_Ball_HV { tracer = 1; tracerColor[] = {0.0, 0.3, 1.0, 1.0}; };
    class FA_762x54R_Ball_HV_T_Orange: FA_762x54R_Ball_HV { tracer = 1; tracerColor[] = {1.0, 0.4, 0.0, 1.0}; };
    class FA_762x54R_Ball_HV_T_IR: FA_762x54R_Ball_HV { tracer = 1; nvgOnly = 1; tracerColor[] = {0.2, 1.0, 0.2, 1.0}; };

    // =========================================================
    // 6.5x39 Caseless (Arma 3 canon, 2035)
    // Inherits vanilla caseless; gate to MX family via magazineWell.
    // =========================================================

    // 6.5mm Caseless EPR (~2035) — caseless, ~75 kpsi (fictional), 120gr tungsten
    class FA_65_EPR: B_65x39_Caseless {
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
    class FA_65_EPR_T_Red: FA_65_EPR { tracer = 1; tracerColor[] = {1.0, 0.0, 0.0, 1.0}; };
    class FA_65_EPR_T_Yellow: FA_65_EPR { tracer = 1; tracerColor[] = {1.0, 1.0, 0.0, 1.0}; };
    class FA_65_EPR_T_Green: FA_65_EPR { tracer = 1; tracerColor[] = {0.0, 1.0, 0.0, 1.0}; };
    class FA_65_EPR_T_White: FA_65_EPR { tracer = 1; tracerColor[] = {1.0, 1.0, 1.0, 1.0}; };
    class FA_65_EPR_T_Blue: FA_65_EPR { tracer = 1; tracerColor[] = {0.0, 0.3, 1.0, 1.0}; };
    class FA_65_EPR_T_Orange: FA_65_EPR { tracer = 1; tracerColor[] = {1.0, 0.4, 0.0, 1.0}; };
    class FA_65_EPR_T_IR: FA_65_EPR { tracer = 1; nvgOnly = 1; tracerColor[] = {0.2, 1.0, 0.2, 1.0}; };

    // =========================================================
    // 7.62x39mm (AK family — AK-12, RPK-12)
    // =========================================================

    // 7N43 "Kremen" (~2034) — hybrid case, tungsten core, ~70 kpsi
    class FA_762x39_7N43: B_762x39_Ball_F {
        displayName = "7.62x39 7N43 Kremen";
        hit = 12;
        caliber = 2.8;
        typicalSpeed = 820;
        airFriction = -0.00130;
        deflecting = 16;
        tracerScale = 0.7;
        ACE_caliber = 0.311;
        ACE_bulletLength = 1.02;
        ACE_bulletMass = 116;
        ACE_ballisticCoefficients[] = {0.150};
        ACE_velocityBoundaries[] = {};
        ACE_standardAtmosphere = "ICAO";
        ACE_dragModel = 7;
        ACE_muzzleVelocities[] = {750, 795, 820};
        ACE_barrelLengths[] = {255, 415, 590};
    };
    class FA_762x39_7N43_T_Red: FA_762x39_7N43 { tracer = 1; tracerColor[] = {1.0, 0.0, 0.0, 1.0}; };
    class FA_762x39_7N43_T_Yellow: FA_762x39_7N43 { tracer = 1; tracerColor[] = {1.0, 1.0, 0.0, 1.0}; };
    class FA_762x39_7N43_T_Green: FA_762x39_7N43 { tracer = 1; tracerColor[] = {0.0, 1.0, 0.0, 1.0}; };
    class FA_762x39_7N43_T_White: FA_762x39_7N43 { tracer = 1; tracerColor[] = {1.0, 1.0, 1.0, 1.0}; };
    class FA_762x39_7N43_T_Blue: FA_762x39_7N43 { tracer = 1; tracerColor[] = {0.0, 0.3, 1.0, 1.0}; };
    class FA_762x39_7N43_T_Orange: FA_762x39_7N43 { tracer = 1; tracerColor[] = {1.0, 0.4, 0.0, 1.0}; };
    class FA_762x39_7N43_T_IR: FA_762x39_7N43 { tracer = 1; nvgOnly = 1; tracerColor[] = {0.2, 1.0, 0.2, 1.0}; };

    // 7N47 "Kremen-2" (~2040) — cased-telescoped, 2-stage tungsten, ~75 kpsi
    class FA_762x39_7N47_CT: B_762x39_Ball_F {
        displayName = "7.62x39 7N47 Kremen-2 CT";
        hit = 12;
        caliber = 3.2;
        typicalSpeed = 840;
        airFriction = -0.00120;
        deflecting = 15;
        tracerScale = 0.7;
        ACE_caliber = 0.311;
        ACE_bulletLength = 1.06;
        ACE_bulletMass = 118;
        ACE_ballisticCoefficients[] = {0.165};
        ACE_velocityBoundaries[] = {};
        ACE_standardAtmosphere = "ICAO";
        ACE_dragModel = 7;
        ACE_muzzleVelocities[] = {775, 820, 845};
        ACE_barrelLengths[] = {255, 415, 590};
    };
    class FA_762x39_7N47_CT_T_Red: FA_762x39_7N47_CT { tracer = 1; tracerColor[] = {1.0, 0.0, 0.0, 1.0}; };
    class FA_762x39_7N47_CT_T_Yellow: FA_762x39_7N47_CT { tracer = 1; tracerColor[] = {1.0, 1.0, 0.0, 1.0}; };
    class FA_762x39_7N47_CT_T_Green: FA_762x39_7N47_CT { tracer = 1; tracerColor[] = {0.0, 1.0, 0.0, 1.0}; };
    class FA_762x39_7N47_CT_T_White: FA_762x39_7N47_CT { tracer = 1; tracerColor[] = {1.0, 1.0, 1.0, 1.0}; };
    class FA_762x39_7N47_CT_T_Blue: FA_762x39_7N47_CT { tracer = 1; tracerColor[] = {0.0, 0.3, 1.0, 1.0}; };
    class FA_762x39_7N47_CT_T_Orange: FA_762x39_7N47_CT { tracer = 1; tracerColor[] = {1.0, 0.4, 0.0, 1.0}; };
    class FA_762x39_7N47_CT_T_IR: FA_762x39_7N47_CT { tracer = 1; nvgOnly = 1; tracerColor[] = {0.2, 1.0, 0.2, 1.0}; };

    // 7U4 "Tishina-2" — subsonic tungsten AP, velocity-capped
    class FA_762x39_7U4_Sub: B_762x39_Ball_F {
        displayName = "7.62x39 7U4 Tishina-2 SubAP";
        hit = 11;
        caliber = 2.0;
        typicalSpeed = 300;
        airFriction = -0.00060;
        deflecting = 13;
        tracerScale = 0.5;
        ACE_caliber = 0.311;
        ACE_bulletLength = 1.34;
        ACE_bulletMass = 210;
        ACE_ballisticCoefficients[] = {0.180};
        ACE_velocityBoundaries[] = {};
        ACE_standardAtmosphere = "ICAO";
        ACE_dragModel = 7;
        ACE_muzzleVelocities[] = {290, 298, 302};
        ACE_barrelLengths[] = {255, 415, 590};
    };
    class FA_762x39_7U4_Sub_T_Red: FA_762x39_7U4_Sub { tracer = 1; tracerColor[] = {1.0, 0.0, 0.0, 1.0}; };
    class FA_762x39_7U4_Sub_T_Yellow: FA_762x39_7U4_Sub { tracer = 1; tracerColor[] = {1.0, 1.0, 0.0, 1.0}; };
    class FA_762x39_7U4_Sub_T_Green: FA_762x39_7U4_Sub { tracer = 1; tracerColor[] = {0.0, 1.0, 0.0, 1.0}; };
    class FA_762x39_7U4_Sub_T_White: FA_762x39_7U4_Sub { tracer = 1; tracerColor[] = {1.0, 1.0, 1.0, 1.0}; };
    class FA_762x39_7U4_Sub_T_Blue: FA_762x39_7U4_Sub { tracer = 1; tracerColor[] = {0.0, 0.3, 1.0, 1.0}; };
    class FA_762x39_7U4_Sub_T_Orange: FA_762x39_7U4_Sub { tracer = 1; tracerColor[] = {1.0, 0.4, 0.0, 1.0}; };
    class FA_762x39_7U4_Sub_T_IR: FA_762x39_7U4_Sub { tracer = 1; nvgOnly = 1; tracerColor[] = {0.2, 1.0, 0.2, 1.0}; };

    // =========================================================
    // 5.45x39mm (AK-74 / AK-12 family) — GRAU-designated next-gen
    // Not vanilla — inherits B_762x39_Ball_F as a structural placeholder;
    // ACE ballistics drive the real 5.45 behaviour.
    // =========================================================
    // 7N44 "Osa" — hybrid case, tungsten core, high-pressure
    class FA_545x39_7N44_HP: B_762x39_Ball_F {
        hit = 10;
        caliber = 2.3;
        typicalSpeed = 925;
        airFriction = -0.00125;
        deflecting = 17;
        tracerScale = 0.8;
        ACE_caliber = 0.2205;
        ACE_bulletLength = 1.00;
        ACE_bulletMass = 56;
        ACE_ballisticCoefficients[] = {0.130};
        ACE_velocityBoundaries[] = {};
        ACE_standardAtmosphere = "ICAO";
        ACE_dragModel = 7;
        ACE_muzzleVelocities[] = {850, 905, 925};
        ACE_barrelLengths[]    = {206, 415, 590};
    };
    class FA_545x39_7N44_HP_T_Red:    FA_545x39_7N44_HP { tracer = 1; tracerColor[] = {1.0, 0.0, 0.0, 1.0}; };
    class FA_545x39_7N44_HP_T_Yellow: FA_545x39_7N44_HP { tracer = 1; tracerColor[] = {1.0, 1.0, 0.0, 1.0}; };
    class FA_545x39_7N44_HP_T_Green:  FA_545x39_7N44_HP { tracer = 1; tracerColor[] = {0.0, 1.0, 0.0, 1.0}; };
    class FA_545x39_7N44_HP_T_White:  FA_545x39_7N44_HP { tracer = 1; tracerColor[] = {1.0, 1.0, 1.0, 1.0}; };
    class FA_545x39_7N44_HP_T_Blue:   FA_545x39_7N44_HP { tracer = 1; tracerColor[] = {0.0, 0.3, 1.0, 1.0}; };
    class FA_545x39_7N44_HP_T_Orange: FA_545x39_7N44_HP { tracer = 1; tracerColor[] = {1.0, 0.4, 0.0, 1.0}; };
    class FA_545x39_7N44_HP_T_IR:     FA_545x39_7N44_HP { tracer = 1; nvgOnly = 1; tracerColor[] = {0.2, 1.0, 0.2, 1.0}; };

    // 7N48 "Osa-2" — cased-telescoped, 2-stage tungsten
    class FA_545x39_7N48_CT: B_762x39_Ball_F {
        hit = 10;
        caliber = 2.6;
        typicalSpeed = 950;
        airFriction = -0.00118;
        deflecting = 16;
        tracerScale = 0.8;
        ACE_caliber = 0.2205;
        ACE_bulletLength = 1.04;
        ACE_bulletMass = 57;
        ACE_ballisticCoefficients[] = {0.150};
        ACE_velocityBoundaries[] = {};
        ACE_standardAtmosphere = "ICAO";
        ACE_dragModel = 7;
        ACE_muzzleVelocities[] = {875, 930, 950};
        ACE_barrelLengths[]    = {206, 415, 590};
    };
    class FA_545x39_7N48_CT_T_Red:    FA_545x39_7N48_CT { tracer = 1; tracerColor[] = {1.0, 0.0, 0.0, 1.0}; };
    class FA_545x39_7N48_CT_T_Yellow: FA_545x39_7N48_CT { tracer = 1; tracerColor[] = {1.0, 1.0, 0.0, 1.0}; };
    class FA_545x39_7N48_CT_T_Green:  FA_545x39_7N48_CT { tracer = 1; tracerColor[] = {0.0, 1.0, 0.0, 1.0}; };
    class FA_545x39_7N48_CT_T_White:  FA_545x39_7N48_CT { tracer = 1; tracerColor[] = {1.0, 1.0, 1.0, 1.0}; };
    class FA_545x39_7N48_CT_T_Blue:   FA_545x39_7N48_CT { tracer = 1; tracerColor[] = {0.0, 0.3, 1.0, 1.0}; };
    class FA_545x39_7N48_CT_T_Orange: FA_545x39_7N48_CT { tracer = 1; tracerColor[] = {1.0, 0.4, 0.0, 1.0}; };
    class FA_545x39_7N48_CT_T_IR:     FA_545x39_7N48_CT { tracer = 1; nvgOnly = 1; tracerColor[] = {0.2, 1.0, 0.2, 1.0}; };

    // 7U5 "Tishina-5" — subsonic tungsten (suppressed, niche)
    class FA_545x39_7U5_SubAP: B_762x39_Ball_F {
        hit = 8;
        caliber = 1.6;
        typicalSpeed = 303;
        airFriction = -0.00075;
        deflecting = 14;
        tracerScale = 0.8;
        ACE_caliber = 0.2205;
        ACE_bulletLength = 1.30;
        ACE_bulletMass = 85;
        ACE_ballisticCoefficients[] = {0.120};
        ACE_velocityBoundaries[] = {};
        ACE_standardAtmosphere = "ICAO";
        ACE_dragModel = 7;
        ACE_muzzleVelocities[] = {295, 300, 303};
        ACE_barrelLengths[]    = {206, 415, 590};
    };
    class FA_545x39_7U5_SubAP_T_Red:    FA_545x39_7U5_SubAP { tracer = 1; tracerColor[] = {1.0, 0.0, 0.0, 1.0}; };
    class FA_545x39_7U5_SubAP_T_Yellow: FA_545x39_7U5_SubAP { tracer = 1; tracerColor[] = {1.0, 1.0, 0.0, 1.0}; };
    class FA_545x39_7U5_SubAP_T_Green:  FA_545x39_7U5_SubAP { tracer = 1; tracerColor[] = {0.0, 1.0, 0.0, 1.0}; };
    class FA_545x39_7U5_SubAP_T_White:  FA_545x39_7U5_SubAP { tracer = 1; tracerColor[] = {1.0, 1.0, 1.0, 1.0}; };
    class FA_545x39_7U5_SubAP_T_Blue:   FA_545x39_7U5_SubAP { tracer = 1; tracerColor[] = {0.0, 0.3, 1.0, 1.0}; };
    class FA_545x39_7U5_SubAP_T_Orange: FA_545x39_7U5_SubAP { tracer = 1; tracerColor[] = {1.0, 0.4, 0.0, 1.0}; };
    class FA_545x39_7U5_SubAP_T_IR:     FA_545x39_7U5_SubAP { tracer = 1; nvgOnly = 1; tracerColor[] = {0.2, 1.0, 0.2, 1.0}; };

    // =========================================================
    // 9.3x64 "Type 40" — CSAT precision marksman, hybrid case + tungsten
    // =========================================================
    class FA_93x64_Type40: B_93x64_Ball {
        hit = 26;
        caliber = 3.8;
        typicalSpeed = 882;
        airFriction = -0.00075;
        deflecting = 8;
        tracerScale = 0.7;
        ACE_caliber = 0.365;
        ACE_bulletLength = 1.50;
        ACE_bulletMass = 270;
        ACE_ballisticCoefficients[] = {0.300};
        ACE_velocityBoundaries[] = {};
        ACE_standardAtmosphere = "ICAO";
        ACE_dragModel = 7;
        ACE_muzzleVelocities[] = {850, 872, 882};
        ACE_barrelLengths[]    = {508, 609.6, 660.4};
    };
    class FA_93x64_Type40_T_Red:    FA_93x64_Type40 { tracer = 1; tracerColor[] = {1.0, 0.0, 0.0, 1.0}; };
    class FA_93x64_Type40_T_Yellow: FA_93x64_Type40 { tracer = 1; tracerColor[] = {1.0, 1.0, 0.0, 1.0}; };
    class FA_93x64_Type40_T_Green:  FA_93x64_Type40 { tracer = 1; tracerColor[] = {0.0, 1.0, 0.0, 1.0}; };
    class FA_93x64_Type40_T_White:  FA_93x64_Type40 { tracer = 1; tracerColor[] = {1.0, 1.0, 1.0, 1.0}; };
    class FA_93x64_Type40_T_Blue:   FA_93x64_Type40 { tracer = 1; tracerColor[] = {0.0, 0.3, 1.0, 1.0}; };
    class FA_93x64_Type40_T_Orange: FA_93x64_Type40 { tracer = 1; tracerColor[] = {1.0, 0.4, 0.0, 1.0}; };
    class FA_93x64_Type40_T_IR:     FA_93x64_Type40 { tracer = 1; nvgOnly = 1; tracerColor[] = {0.2, 1.0, 0.2, 1.0}; };

    // =========================================================
    // .408 CheyTac "Mk240 LRP" — extreme-range precision, hybrid + tungsten
    // =========================================================
    class FA_408_Mk240: B_338_LM_Ball {
        hit = 30;
        caliber = 4.2;
        typicalSpeed = 965;
        airFriction = -0.00050;
        deflecting = 7;
        tracerScale = 0.7;
        ACE_caliber = 0.408;
        ACE_bulletLength = 1.97;
        ACE_bulletMass = 340;
        ACE_ballisticCoefficients[] = {0.420};
        ACE_velocityBoundaries[] = {};
        ACE_standardAtmosphere = "ICAO";
        ACE_dragModel = 7;
        ACE_muzzleVelocities[] = {930, 955, 965};
        ACE_barrelLengths[]    = {660.4, 711.2, 762};
    };
    class FA_408_Mk240_T_Red:    FA_408_Mk240 { tracer = 1; tracerColor[] = {1.0, 0.0, 0.0, 1.0}; };
    class FA_408_Mk240_T_Yellow: FA_408_Mk240 { tracer = 1; tracerColor[] = {1.0, 1.0, 0.0, 1.0}; };
    class FA_408_Mk240_T_Green:  FA_408_Mk240 { tracer = 1; tracerColor[] = {0.0, 1.0, 0.0, 1.0}; };
    class FA_408_Mk240_T_White:  FA_408_Mk240 { tracer = 1; tracerColor[] = {1.0, 1.0, 1.0, 1.0}; };
    class FA_408_Mk240_T_Blue:   FA_408_Mk240 { tracer = 1; tracerColor[] = {0.0, 0.3, 1.0, 1.0}; };
    class FA_408_Mk240_T_Orange: FA_408_Mk240 { tracer = 1; tracerColor[] = {1.0, 0.4, 0.0, 1.0}; };
    class FA_408_Mk240_T_IR:     FA_408_Mk240 { tracer = 1; nvgOnly = 1; tracerColor[] = {0.2, 1.0, 0.2, 1.0}; };

    // =========================================================
    // .408 CheyTac "Mk241 ELR" — heavy high-BC extreme long range
    // =========================================================
    class FA_408_Mk241_ELR: B_338_LM_Ball {
        hit = 32;
        caliber = 4.0;
        typicalSpeed = 905;
        airFriction = -0.00044;
        deflecting = 7;
        tracerScale = 0.7;
        ACE_caliber = 0.408;
        ACE_bulletLength = 2.10;
        ACE_bulletMass = 419;
        ACE_ballisticCoefficients[] = {0.460};
        ACE_velocityBoundaries[] = {};
        ACE_standardAtmosphere = "ICAO";
        ACE_dragModel = 7;
        ACE_muzzleVelocities[] = {870, 895, 905};
        ACE_barrelLengths[]    = {660.4, 711.2, 762};
    };
    class FA_408_Mk241_ELR_T_Red:    FA_408_Mk241_ELR { tracer = 1; tracerColor[] = {1.0, 0.0, 0.0, 1.0}; };
    class FA_408_Mk241_ELR_T_Yellow: FA_408_Mk241_ELR { tracer = 1; tracerColor[] = {1.0, 1.0, 0.0, 1.0}; };
    class FA_408_Mk241_ELR_T_Green:  FA_408_Mk241_ELR { tracer = 1; tracerColor[] = {0.0, 1.0, 0.0, 1.0}; };
    class FA_408_Mk241_ELR_T_White:  FA_408_Mk241_ELR { tracer = 1; tracerColor[] = {1.0, 1.0, 1.0, 1.0}; };
    class FA_408_Mk241_ELR_T_Blue:   FA_408_Mk241_ELR { tracer = 1; tracerColor[] = {0.0, 0.3, 1.0, 1.0}; };
    class FA_408_Mk241_ELR_T_Orange: FA_408_Mk241_ELR { tracer = 1; tracerColor[] = {1.0, 0.4, 0.0, 1.0}; };
    class FA_408_Mk241_ELR_T_IR:     FA_408_Mk241_ELR { tracer = 1; nvgOnly = 1; tracerColor[] = {0.2, 1.0, 0.2, 1.0}; };

    // =========================================================
    // .408 CheyTac "Mk242 HV" — light, fast, flat-shooting
    // =========================================================
    class FA_408_Mk242_HV: B_338_LM_Ball {
        hit = 28;
        caliber = 3.8;
        typicalSpeed = 1015;
        airFriction = -0.00060;
        deflecting = 7;
        tracerScale = 0.7;
        ACE_caliber = 0.408;
        ACE_bulletLength = 1.78;
        ACE_bulletMass = 305;
        ACE_ballisticCoefficients[] = {0.350};
        ACE_velocityBoundaries[] = {};
        ACE_standardAtmosphere = "ICAO";
        ACE_dragModel = 7;
        ACE_muzzleVelocities[] = {975, 1005, 1015};
        ACE_barrelLengths[]    = {660.4, 711.2, 762};
    };
    class FA_408_Mk242_HV_T_Red:    FA_408_Mk242_HV { tracer = 1; tracerColor[] = {1.0, 0.0, 0.0, 1.0}; };
    class FA_408_Mk242_HV_T_Yellow: FA_408_Mk242_HV { tracer = 1; tracerColor[] = {1.0, 1.0, 0.0, 1.0}; };
    class FA_408_Mk242_HV_T_Green:  FA_408_Mk242_HV { tracer = 1; tracerColor[] = {0.0, 1.0, 0.0, 1.0}; };
    class FA_408_Mk242_HV_T_White:  FA_408_Mk242_HV { tracer = 1; tracerColor[] = {1.0, 1.0, 1.0, 1.0}; };
    class FA_408_Mk242_HV_T_Blue:   FA_408_Mk242_HV { tracer = 1; tracerColor[] = {0.0, 0.3, 1.0, 1.0}; };
    class FA_408_Mk242_HV_T_Orange: FA_408_Mk242_HV { tracer = 1; tracerColor[] = {1.0, 0.4, 0.0, 1.0}; };
    class FA_408_Mk242_HV_T_IR:     FA_408_Mk242_HV { tracer = 1; nvgOnly = 1; tracerColor[] = {0.2, 1.0, 0.2, 1.0}; };

    // =========================================================
    // .408 CheyTac "Mk243 AP" — tungsten penetrator, anti-materiel
    // =========================================================
    class FA_408_Mk243_AP: B_338_LM_Ball {
        hit = 30;
        caliber = 6.0;
        typicalSpeed = 980;
        airFriction = -0.00052;
        deflecting = 6;
        tracerScale = 0.7;
        ACE_caliber = 0.408;
        ACE_bulletLength = 1.90;
        ACE_bulletMass = 324;
        ACE_ballisticCoefficients[] = {0.400};
        ACE_velocityBoundaries[] = {};
        ACE_standardAtmosphere = "ICAO";
        ACE_dragModel = 7;
        ACE_muzzleVelocities[] = {945, 970, 980};
        ACE_barrelLengths[]    = {660.4, 711.2, 762};
    };
    class FA_408_Mk243_AP_T_Red:    FA_408_Mk243_AP { tracer = 1; tracerColor[] = {1.0, 0.0, 0.0, 1.0}; };
    class FA_408_Mk243_AP_T_Yellow: FA_408_Mk243_AP { tracer = 1; tracerColor[] = {1.0, 1.0, 0.0, 1.0}; };
    class FA_408_Mk243_AP_T_Green:  FA_408_Mk243_AP { tracer = 1; tracerColor[] = {0.0, 1.0, 0.0, 1.0}; };
    class FA_408_Mk243_AP_T_White:  FA_408_Mk243_AP { tracer = 1; tracerColor[] = {1.0, 1.0, 1.0, 1.0}; };
    class FA_408_Mk243_AP_T_Blue:   FA_408_Mk243_AP { tracer = 1; tracerColor[] = {0.0, 0.3, 1.0, 1.0}; };
    class FA_408_Mk243_AP_T_Orange: FA_408_Mk243_AP { tracer = 1; tracerColor[] = {1.0, 0.4, 0.0, 1.0}; };
    class FA_408_Mk243_AP_T_IR:     FA_408_Mk243_AP { tracer = 1; nvgOnly = 1; tracerColor[] = {0.2, 1.0, 0.2, 1.0}; };

    // =========================================================
    // 12.7x108 "Mk250 LRP" — .50 precision / match
    // =========================================================
    class FA_127x108_Mk250: B_127x108_Ball {
        hit = 42;
        caliber = 5.5;
        typicalSpeed = 870;
        airFriction = -0.00045;
        deflecting = 6;
        tracerScale = 0.8;
        ACE_caliber = 0.510;
        ACE_bulletLength = 2.28;
        ACE_bulletMass = 740;
        ACE_ballisticCoefficients[] = {0.370};
        ACE_velocityBoundaries[] = {};
        ACE_standardAtmosphere = "ICAO";
        ACE_dragModel = 7;
        ACE_muzzleVelocities[] = {840, 860, 870};
        ACE_barrelLengths[]    = {660.4, 711.2, 737};
    };
    class FA_127x108_Mk250_T_Red:    FA_127x108_Mk250 { tracer = 1; tracerColor[] = {1.0, 0.0, 0.0, 1.0}; };
    class FA_127x108_Mk250_T_Yellow: FA_127x108_Mk250 { tracer = 1; tracerColor[] = {1.0, 1.0, 0.0, 1.0}; };
    class FA_127x108_Mk250_T_Green:  FA_127x108_Mk250 { tracer = 1; tracerColor[] = {0.0, 1.0, 0.0, 1.0}; };
    class FA_127x108_Mk250_T_White:  FA_127x108_Mk250 { tracer = 1; tracerColor[] = {1.0, 1.0, 1.0, 1.0}; };
    class FA_127x108_Mk250_T_Blue:   FA_127x108_Mk250 { tracer = 1; tracerColor[] = {0.0, 0.3, 1.0, 1.0}; };
    class FA_127x108_Mk250_T_Orange: FA_127x108_Mk250 { tracer = 1; tracerColor[] = {1.0, 0.4, 0.0, 1.0}; };
    class FA_127x108_Mk250_T_IR:     FA_127x108_Mk250 { tracer = 1; nvgOnly = 1; tracerColor[] = {0.2, 1.0, 0.2, 1.0}; };

    // =========================================================
    // 12.7x108 "Mk211 Mod 2" — .50 HEIAP anti-materiel
    // =========================================================
    class FA_127x108_Mk211Mod2: B_127x108_Ball {
        hit = 48;
        caliber = 8.0;
        typicalSpeed = 900;
        airFriction = -0.00040;
        deflecting = 5;
        tracerScale = 0.8;
        ACE_caliber = 0.510;
        ACE_bulletLength = 2.36;
        ACE_bulletMass = 680;
        ACE_ballisticCoefficients[] = {0.330};
        ACE_velocityBoundaries[] = {};
        ACE_standardAtmosphere = "ICAO";
        ACE_dragModel = 7;
        ACE_muzzleVelocities[] = {870, 890, 900};
        ACE_barrelLengths[]    = {660.4, 711.2, 737};
    };
    class FA_127x108_Mk211Mod2_T_Red:    FA_127x108_Mk211Mod2 { tracer = 1; tracerColor[] = {1.0, 0.0, 0.0, 1.0}; };
    class FA_127x108_Mk211Mod2_T_Yellow: FA_127x108_Mk211Mod2 { tracer = 1; tracerColor[] = {1.0, 1.0, 0.0, 1.0}; };
    class FA_127x108_Mk211Mod2_T_Green:  FA_127x108_Mk211Mod2 { tracer = 1; tracerColor[] = {0.0, 1.0, 0.0, 1.0}; };
    class FA_127x108_Mk211Mod2_T_White:  FA_127x108_Mk211Mod2 { tracer = 1; tracerColor[] = {1.0, 1.0, 1.0, 1.0}; };
    class FA_127x108_Mk211Mod2_T_Blue:   FA_127x108_Mk211Mod2 { tracer = 1; tracerColor[] = {0.0, 0.3, 1.0, 1.0}; };
    class FA_127x108_Mk211Mod2_T_Orange: FA_127x108_Mk211Mod2 { tracer = 1; tracerColor[] = {1.0, 0.4, 0.0, 1.0}; };
    class FA_127x108_Mk211Mod2_T_IR:     FA_127x108_Mk211Mod2 { tracer = 1; nvgOnly = 1; tracerColor[] = {0.2, 1.0, 0.2, 1.0}; };

    // =========================================================
    // 12.7x99 (.50 BMG) "Mk258 LRP" — precision / match (AS50)
    // =========================================================
    class FA_127x99_Mk258_LRP: B_127x99_Ball {
        hit = 42;
        caliber = 5.5;
        typicalSpeed = 860;
        airFriction = -0.00044;
        deflecting = 6;
        tracerScale = 0.8;
        ACE_caliber = 0.510;
        ACE_bulletLength = 2.30;
        ACE_bulletMass = 750;
        ACE_ballisticCoefficients[] = {0.380};
        ACE_velocityBoundaries[] = {};
        ACE_standardAtmosphere = "ICAO";
        ACE_dragModel = 7;
        ACE_muzzleVelocities[] = {820, 850, 860};
        ACE_barrelLengths[]    = {736.6, 736.6, 736.6};
    };
    class FA_127x99_Mk258_LRP_T_Red:    FA_127x99_Mk258_LRP { tracer = 1; tracerColor[] = {1.0, 0.0, 0.0, 1.0}; };
    class FA_127x99_Mk258_LRP_T_Yellow: FA_127x99_Mk258_LRP { tracer = 1; tracerColor[] = {1.0, 1.0, 0.0, 1.0}; };
    class FA_127x99_Mk258_LRP_T_Green:  FA_127x99_Mk258_LRP { tracer = 1; tracerColor[] = {0.0, 1.0, 0.0, 1.0}; };
    class FA_127x99_Mk258_LRP_T_White:  FA_127x99_Mk258_LRP { tracer = 1; tracerColor[] = {1.0, 1.0, 1.0, 1.0}; };
    class FA_127x99_Mk258_LRP_T_Blue:   FA_127x99_Mk258_LRP { tracer = 1; tracerColor[] = {0.0, 0.3, 1.0, 1.0}; };
    class FA_127x99_Mk258_LRP_T_Orange: FA_127x99_Mk258_LRP { tracer = 1; tracerColor[] = {1.0, 0.4, 0.0, 1.0}; };
    class FA_127x99_Mk258_LRP_T_IR:     FA_127x99_Mk258_LRP { tracer = 1; nvgOnly = 1; tracerColor[] = {0.2, 1.0, 0.2, 1.0}; };

    // =========================================================
    // 12.7x99 (.50 BMG) "Mk211 Mod 0" — Raufoss HEIAP anti-materiel (AS50)
    // =========================================================
    class FA_127x99_Mk211Mod0_AP: B_127x99_Ball {
        hit = 48;
        caliber = 8.0;
        typicalSpeed = 890;
        airFriction = -0.00040;
        deflecting = 5;
        tracerScale = 0.8;
        ACE_caliber = 0.510;
        ACE_bulletLength = 2.31;
        ACE_bulletMass = 671;
        ACE_ballisticCoefficients[] = {0.330};
        ACE_velocityBoundaries[] = {};
        ACE_standardAtmosphere = "ICAO";
        ACE_dragModel = 7;
        ACE_muzzleVelocities[] = {850, 880, 890};
        ACE_barrelLengths[]    = {736.6, 736.6, 736.6};
    };
    class FA_127x99_Mk211Mod0_AP_T_Red:    FA_127x99_Mk211Mod0_AP { tracer = 1; tracerColor[] = {1.0, 0.0, 0.0, 1.0}; };
    class FA_127x99_Mk211Mod0_AP_T_Yellow: FA_127x99_Mk211Mod0_AP { tracer = 1; tracerColor[] = {1.0, 1.0, 0.0, 1.0}; };
    class FA_127x99_Mk211Mod0_AP_T_Green:  FA_127x99_Mk211Mod0_AP { tracer = 1; tracerColor[] = {0.0, 1.0, 0.0, 1.0}; };
    class FA_127x99_Mk211Mod0_AP_T_White:  FA_127x99_Mk211Mod0_AP { tracer = 1; tracerColor[] = {1.0, 1.0, 1.0, 1.0}; };
    class FA_127x99_Mk211Mod0_AP_T_Blue:   FA_127x99_Mk211Mod0_AP { tracer = 1; tracerColor[] = {0.0, 0.3, 1.0, 1.0}; };
    class FA_127x99_Mk211Mod0_AP_T_Orange: FA_127x99_Mk211Mod0_AP { tracer = 1; tracerColor[] = {1.0, 0.4, 0.0, 1.0}; };
    class FA_127x99_Mk211Mod0_AP_T_IR:     FA_127x99_Mk211Mod0_AP { tracer = 1; nvgOnly = 1; tracerColor[] = {0.2, 1.0, 0.2, 1.0}; };

    // =========================================================
    // .45 ACP "Mk421 SUB-AP" — subsonic tungsten-core AP, CQB suppressed
    // =========================================================
    class FA_45ACP_Mk421_SubAP: B_45ACP_Ball {
        hit = 12;
        caliber = 1.4;
        typicalSpeed = 290;
        airFriction = -0.00090;
        deflecting = 22;
        tracerScale = 0.5;
        ACE_caliber = 0.452;
        ACE_bulletLength = 0.681;
        ACE_bulletMass = 232;
        ACE_ballisticCoefficients[] = {0.195};
        ACE_velocityBoundaries[] = {};
        ACE_standardAtmosphere = "ICAO";
        ACE_dragModel = 1;
        ACE_muzzleVelocities[] = {255, 280, 290};
        ACE_barrelLengths[]    = {127, 200, 254};
    };
    class FA_45ACP_Mk421_SubAP_T_Red:    FA_45ACP_Mk421_SubAP { tracer = 1; tracerColor[] = {1.0, 0.0, 0.0, 1.0}; };
    class FA_45ACP_Mk421_SubAP_T_Yellow: FA_45ACP_Mk421_SubAP { tracer = 1; tracerColor[] = {1.0, 1.0, 0.0, 1.0}; };
    class FA_45ACP_Mk421_SubAP_T_Green:  FA_45ACP_Mk421_SubAP { tracer = 1; tracerColor[] = {0.0, 1.0, 0.0, 1.0}; };
    class FA_45ACP_Mk421_SubAP_T_White:  FA_45ACP_Mk421_SubAP { tracer = 1; tracerColor[] = {1.0, 1.0, 1.0, 1.0}; };
    class FA_45ACP_Mk421_SubAP_T_Blue:   FA_45ACP_Mk421_SubAP { tracer = 1; tracerColor[] = {0.0, 0.3, 1.0, 1.0}; };
    class FA_45ACP_Mk421_SubAP_T_Orange: FA_45ACP_Mk421_SubAP { tracer = 1; tracerColor[] = {1.0, 0.4, 0.0, 1.0}; };
    class FA_45ACP_Mk421_SubAP_T_IR:     FA_45ACP_Mk421_SubAP { tracer = 1; nvgOnly = 1; tracerColor[] = {0.2, 1.0, 0.2, 1.0}; };

    // =========================================================
    // 12 Gauge — LOT M1014 shotgun ammunition (Mk35x / Mk360 / Mk363)
    // Magazines and magwells for these live in the lot addon.
    // =========================================================

    // ---- Mk350 TBS — Tungsten Buckshot ----
    // Denser, harder pellets: more penetration and less velocity
    // bleed than lead — effective to ~50 m vs. soft targets.
    class FA_12G_Mk350_TBS_Sub: B_12Gauge_Pellets_Submunition {
        hit = 8;
        caliber = 1.0;
        airFriction = -0.0120;
        typicalSpeed = 400;
    };
    class FA_12G_Mk350_TBS: B_12Gauge_Pellets_Submunition_Cartridge {
        displayName = "12g Mk350 Tungsten Buckshot";
        submunitionAmmo = "FA_12G_Mk350_TBS_Sub";
        submunitionConeAngle = 3.0;
        ACE_barrelLengths[] = {470, 508};
        ACE_muzzleVelocities[] = {392, 400};
    };

    // ---- Mk351 FLE — Tungsten Flechette ----
    // Fin-stabilised darts: tight pattern, low drag, high
    // penetration. Effective to ~80 m; passes light cover.
    class FA_12G_Mk351_FLE_Sub: B_12Gauge_Pellets_Submunition {
        hit = 5;
        caliber = 1.6;
        airFriction = -0.0060;
        typicalSpeed = 450;
    };
    class FA_12G_Mk351_FLE: B_12Gauge_Pellets_Submunition_Cartridge {
        displayName = "12g Mk351 Tungsten Flechette";
        submunitionAmmo = "FA_12G_Mk351_FLE_Sub";
        submunitionConeAngle = 1.3;
        ACE_barrelLengths[] = {470, 508};
        ACE_muzzleVelocities[] = {442, 450};
    };

    // ---- Mk352 APS — Tungsten AP Slug ----
    // Single heavy projectile; tungsten core for light-armor /
    // hard-cover defeat at close range.
    class FA_12G_Mk352_APS: B_12Gauge_Slug {
        displayName = "12g Mk352 Tungsten AP Slug";
        hit = 30;
        caliber = 2.2;
        airFriction = -0.0050;
        typicalSpeed = 450;
        ACE_barrelLengths[] = {470, 508};
        ACE_muzzleVelocities[] = {440, 450};
    };

    // ---- Mk353 BRC — Frangible Breaching Round ----
    // Defeats a lock or hinge up close then sheds energy fast:
    // near-zero over-penetration. Door breach is handled by
    // FA_ammo_fnc_breach (gated by CBA setting).
    class FA_12G_Mk353_BRC: B_12Gauge_Slug {
        displayName = "12g Mk353 Frangible Breaching";
        hit = 35;
        caliber = 0.15;
        airFriction = -0.0800;
        typicalSpeed = 320;
        deflecting = 4;
        ACE_barrelLengths[] = {470, 508};
        ACE_muzzleVelocities[] = {312, 320};
    };

    // ---- Mk360 AD — Anti-Drone Shot ----
    // Dense tungsten pattern tuned for FPV/quad intercept at
    // close range (~40-50 m). Config-only; no script needed.
    class FA_12G_Mk360_AD_Sub: B_12Gauge_Pellets_Submunition {
        hit = 6;
        caliber = 0.9;
        airFriction = -0.0110;
        typicalSpeed = 410;
    };
    class FA_12G_Mk360_AD: B_12Gauge_Pellets_Submunition_Cartridge {
        displayName = "12g Mk360 Anti-Drone Shot";
        submunitionAmmo = "FA_12G_Mk360_AD_Sub";
        submunitionConeAngle = 2.2;
        ACE_barrelLengths[] = {470, 508};
        ACE_muzzleVelocities[] = {402, 410};
    };

    // ---- Mk363 PABS — Proximity Airburst Slug (script-driven) ----
    // Flies as a slug; proximity script detonates it near a UAV
    // for anti-drone reach the shot pattern can't achieve.
    // Hook: add ["FA_12G_Mk363_PABS", [6, 4, 1.0]] to the
    // antidrone AD_params table.
    class FA_12G_Mk363_PABS: B_12Gauge_Slug {
        displayName = "12g Mk363 Proximity Airburst";
        hit = 4;
        caliber = 0.8;
        airFriction = -0.0050;
        typicalSpeed = 430;
        airLock = 1;
        ACE_barrelLengths[] = {470, 508};
        ACE_muzzleVelocities[] = {420, 430};
    };

    // =========================================================
    // Mk389 TBK — 40mm Tungsten Buckshot (UGL anti-personnel)
    // 18 low-drag tungsten pellets fired flat at high velocity.
    // Tight 1.5 deg cone keeps the pattern lethal out to ~100 m,
    // far past a conventional 40mm buckshot (~30-40 m).
    // Pellets/magazines/magwells all live in the ammo addon.
    // =========================================================
    class FA_40mm_Mk389_TBK_Sub: B_12Gauge_Pellets_Submunition {
        hit = 11;
        caliber = 1.3;
        airFriction = -0.0045;   // low drag: holds energy to 100 m
        typicalSpeed = 180;
    };
    class FA_40mm_Mk389_TBK: B_12Gauge_Pellets_Submunition_Cartridge {
        displayName = "40mm Mk389 Tungsten Buckshot";
        triggerTime = 0;
        submunitionAmmo = "FA_40mm_Mk389_TBK_Sub";
        submunitionConeAngle = 1.5;                       // ~2.6 m pattern radius at 100 m
        submunitionConeType[] = {"poissondisccenter", 18}; // 18 pellets
        typicalSpeed = 180;
    };
};
