// RF 120mm Twin Mortar — 2040 ammo, per-side (West base + East _O / Ind _I so
// each side is a distinct, identifiable round). The FA-authored natures (HE-ER,
// TB, STRIX) tune the RF ship-cannon base; the reskin natures (GPS, laser,
// smoke, AP/AT mines, SFM) are thin per-side subclasses of the RF ammo.
class CfgAmmo {
    class ammo_Penetrator_Base;
    class ammo_ShipCannon_120mm_HE;
    class ammo_ShipCannon_120mm_HE_guided;
    class ammo_ShipCannon_120mm_HE_LG;
    class ammo_ShipCannon_120mm_smoke;
    class ammo_ShipCannon_120mm_mine;
    class ammo_ShipCannon_120mm_AT_mine;
    class ammo_ShipCannon_120mm_HE_cluster;

    // HE-ER — extended-range prefragmented HE. ~30 m lethal.
    class FA_120_heer: ammo_ShipCannon_120mm_HE {
        displayName = "M934E1 HE-ER";
        indirectHit = 130; indirectHitRange = 30;
        ace_frag_metal = 4200; ace_frag_charge = 1100; ace_frag_gurney_c = 2700; ace_frag_gurney_k = 0.5;
        ace_frag_classes[] = {"ace_frag_medium", "ace_frag_medium_HD", "ace_frag_large"};
    };
    class FA_120_heer_O: FA_120_heer { displayName = "Type 120-1 HE"; };
    class FA_120_heer_I: FA_120_heer { displayName = "AF-120E"; };

    // TB — thermobaric / enhanced-blast. ~40 m lethal.
    class FA_120_tb: ammo_ShipCannon_120mm_HE {
        displayName = "M-TB 120";
        indirectHit = 150; indirectHitRange = 40;
        ace_frag_metal = 1000; ace_frag_charge = 5000; ace_frag_gurney_c = 2400; ace_frag_gurney_k = 0.3;
        ace_frag_classes[] = {"ace_frag_tiny", "ace_frag_tiny_HD"};
    };
    class FA_120_tb_O: FA_120_tb { displayName = "Type 120TB"; };
    class FA_120_tb_I: FA_120_tb { displayName = "AF-120T"; };

    // STRIX — terminal top-attack AT (RF guided sim + HEAT penetrator). 650mm RHA.
    class FA_ammo_Penetrator_120_strix: ammo_Penetrator_Base { caliber = 43.3; warheadName = "HEAT"; hit = 450; };
    class FA_120_strix: ammo_ShipCannon_120mm_HE_guided {
        displayName = "M-STRIX 120";
        warheadName = "HEAT"; submunitionAmmo = "FA_ammo_Penetrator_120_strix";
        hit = 90; indirectHit = 30; indirectHitRange = 6;
    };
    class FA_120_strix_O: FA_120_strix { displayName = "Type 120K Kitolov"; };
    class FA_120_strix_I: FA_120_strix { displayName = "AF-120K"; };

    // GPS precision (reskin of RF guided)
    class FA_120_gps: ammo_ShipCannon_120mm_HE_guided { displayName = "XM1113-P"; };
    class FA_120_gps_O: FA_120_gps { displayName = "Type 120-GN"; };
    class FA_120_gps_I: FA_120_gps { displayName = "AF-120P"; };

    // Laser-guided
    class FA_120_lgm: ammo_ShipCannon_120mm_HE_LG { displayName = "M-LGM120"; };
    class FA_120_lgm_O: FA_120_lgm { displayName = "Type 120G Gran"; };
    class FA_120_lgm_I: FA_120_lgm { displayName = "AF-120L"; };

    // MS smoke
    class FA_120_smk: ammo_ShipCannon_120mm_smoke { displayName = "M-SMK 120"; };
    class FA_120_smk_O: FA_120_smk { displayName = "Type 120D"; };
    class FA_120_smk_I: FA_120_smk { displayName = "AF-120S"; };

    // Scatterable AP mines
    class FA_120_apmine: ammo_ShipCannon_120mm_mine { displayName = "RAAM-P"; };
    class FA_120_apmine_O: FA_120_apmine { displayName = "Type 120-PP"; };
    class FA_120_apmine_I: FA_120_apmine { displayName = "AF-120MP"; };

    // Scatterable AT mines
    class FA_120_atmine: ammo_ShipCannon_120mm_AT_mine { displayName = "RAAM-AT"; };
    class FA_120_atmine_O: FA_120_atmine { displayName = "Type 120-PT"; };
    class FA_120_atmine_I: FA_120_atmine { displayName = "AF-120MT"; };

    // Sensor-fuzed submunition
    class FA_120_sfm: ammo_ShipCannon_120mm_HE_cluster { displayName = "M-SFM"; };
    class FA_120_sfm_O: FA_120_sfm { displayName = "Type 120-SF"; };
    class FA_120_sfm_I: FA_120_sfm { displayName = "AF-120SF"; };

    // =========================================================
    // CSAT 12.7x55 (ASh-12) — 2040. Heavy subsonic/transonic caliber. Ammo is
    // self-contained on the vanilla .50 base; the ACE metric props (mm / g)
    // drive Advanced Ballistics. Magazines + weapon wiring pending RF classnames.
    // =========================================================
    class B_127x99_Ball;
    // 7N52 Molot — tungsten AP, transonic. Barrier / light-armor at short range.
    class FA_ammo_127x55_7N52: B_127x99_Ball {
        displayName = "7N52 Molot";
        caliber = 3.5; hit = 22; typicalSpeed = 430; airFriction = -0.0011;
        ACE_caliber = 12.95; ACE_bulletLength = 35.0; ACE_bulletMass = 20.0;
        ACE_dragModel = 7; ACE_ballisticCoefficients[] = {0.15};
        ACE_muzzleVelocities[] = {430}; ACE_barrelLengths[] = {230};
    };
    // 7U13 Molot-S — subsonic tungsten AP. Suppressed, quiet, hits hard.
    class FA_ammo_127x55_7U13: B_127x99_Ball {
        displayName = "7U13 Molot-S";
        caliber = 2.8; hit = 26; typicalSpeed = 290; airFriction = -0.0009;
        ACE_caliber = 12.95; ACE_bulletLength = 33.0; ACE_bulletMass = 22.0;
        ACE_dragModel = 1; ACE_ballisticCoefficients[] = {0.20};
        ACE_muzzleVelocities[] = {290}; ACE_barrelLengths[] = {230};
    };
    // 7U14 Uragan — subsonic heavy HP. Suppressed anti-personnel, massive bullet.
    class FA_ammo_127x55_7U14: B_127x99_Ball {
        displayName = "7U14 Uragan";
        caliber = 1.6; hit = 35; typicalSpeed = 290; airFriction = -0.0008;
        ACE_caliber = 12.95; ACE_bulletLength = 40.0; ACE_bulletMass = 33.0;
        ACE_dragModel = 1; ACE_ballisticCoefficients[] = {0.25};
        ACE_muzzleVelocities[] = {290}; ACE_barrelLengths[] = {230};
    };

    // =========================================================
    // CSAT RC40 revolver GL (ASh-12 GL) — 2040. Self-contained on the vanilla
    // 40mm UGL bases. HE-P airburst shares the Mk364 dial; AD hooks the PAB
    // script (both registered in XEH_postInit.sqf). Magazines pending RF names.
    // =========================================================
    class G_40mm_HE;
    class G_40mm_Smoke;
    // RC40 HE-P — programmable airburst HE (3-mode impact/delay/airburst)
    class FA_ammo_RC40_HEP: G_40mm_HE {
        displayName = "RC40 HE-P";
        indirectHit = 22; indirectHitRange = 8;
        ace_frag_metal = 90; ace_frag_charge = 40; ace_frag_gurney_c = 2700; ace_frag_gurney_k = 0.6;
        ace_frag_classes[] = {"ace_frag_small", "ace_frag_small_HD"};
    };
    // RC40 MS — multispectral smoke (visual + thermal)
    class FA_ammo_RC40_MS: G_40mm_Smoke {
        displayName = "RC40 MS";
    };
    // RC40 AD — anti-drone proximity (PAB script; plain HE if not loaded)
    class FA_ammo_RC40_AD: G_40mm_HE {
        displayName = "RC40 AD";
        indirectHit = 18; indirectHitRange = 6;
        ace_frag_metal = 110; ace_frag_charge = 35; ace_frag_gurney_c = 2700; ace_frag_gurney_k = 0.5;
        ace_frag_classes[] = {"ace_frag_small", "ace_frag_small_HD"};
    };
    // RC40 DP — dual-purpose HEDP, ~50mm RHA + fragmentation
    class FA_ammo_RC40_DP: G_40mm_HE {
        displayName = "RC40 DP";
        warheadName = "HEAT"; caliber = 3.3;
        hit = 60; indirectHit = 14; indirectHitRange = 5;
    };
};
