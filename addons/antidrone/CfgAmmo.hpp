class CfgAmmo {
    class B_556x45_Ball;
    class B_762x51_Ball;
    class G_40mm_HE;
    class B_127x99_Ball;
    class BulletBase;
    class B_338_Mag: BulletBase {};
    class B_338_LM_Ball: B_338_Mag {};
    class B_65x39_Caseless;

    // =========================================================
    // Mk361 PAB — 5.56x45 Proximity AirBurst
    // Flies as standard 5.56; kill applied by proximity script.
    // tracerScale small so visible in flight for tracking.
    // =========================================================
    class FA_556_Mk361_PAB: B_556x45_Ball {
        displayName = "5.56mm Mk361 PAB";
        tracerScale = 0.6;
        // ACE frag: this round has no real explosive charge — the kill is a
        // scripted proximity detonation (fnc_detonateAD.sqf), which calls
        // ace_frag_fnc_frago directly at the burst point using these values.
        // Fabricated frag sleeve behind the projectile tip, sized as the
        // bullet's share of the 40mm HE warhead: 1.73% of 40mm mass
        // (right.json percent_of_40mm_mass) -> metal 200 g x1.73% = 3.5 g,
        // charge 32 g x1.73% = 0.55 g.
        indirectHitRange = 1.2;
        ace_frag_metal = 3.5;
        ace_frag_charge = 0.55;
        ace_frag_gurney_c = 2700;
        ace_frag_gurney_k = 0.5;
        ace_frag_classes[] = {"ace_frag_tiny", "ace_frag_tiny_HD"};
    };

    // =========================================================
    // Mk362 PAB — 7.62x51 Proximity AirBurst
    // =========================================================
    class FA_762_Mk362_PAB: B_762x51_Ball {
        displayName = "7.62mm Mk362 PAB";
        tracerScale = 0.8;
        // ACE frag: see FA_556_Mk361_PAB above — fabricated frag sleeve, no
        // real warhead. 4.08% of the 40mm warhead (right.json): metal 8.2 g,
        // charge 1.3 g. Detonated manually via ace_frag_fnc_frago.
        indirectHitRange = 1.5;
        ace_frag_metal = 8.2;
        ace_frag_charge = 1.3;
        ace_frag_gurney_c = 2700;
        ace_frag_gurney_k = 0.5;
        ace_frag_classes[] = {"ace_frag_tiny", "ace_frag_tiny_HD"};
    };

    // =========================================================
    // Mk363 PAB — .300 BLK Supersonic Proximity AirBurst
    // Short-to-mid range; useful for tight-quarters UAV denial.
    // =========================================================
    class FA_300_Mk363_PAB: B_762x51_Ball {
        displayName = ".300 BLK Mk363 PAB";
        typicalSpeed = 675;
        tracerScale = 0.7;
        // ACE frag: see FA_556_Mk361_PAB above — fabricated frag sleeve, no
        // real warhead. 3.49% of the 40mm warhead (right.json): metal 7.0 g,
        // charge 1.1 g. Detonated manually via ace_frag_fnc_frago.
        indirectHitRange = 1.2;
        ace_frag_metal = 7.0;
        ace_frag_charge = 1.1;
        ace_frag_gurney_c = 2700;
        ace_frag_gurney_k = 0.5;
        ace_frag_classes[] = {"ace_frag_tiny", "ace_frag_tiny_HD"};
    };

    // =========================================================
    // Mk364 PAB — 40mm UGL Programmable AirBurst (C-UAS)
    // Retains HE blast on impact; airburst near drones via script.
    // No tracer variants — grenade flight is visible by itself.
    // =========================================================
    class FA_40mm_Mk364_PAB: G_40mm_HE {
        displayName = "40mm Mk364 PAB";
        // Medium-velocity C-UAS load: flatter, faster trajectory so the
        // proximity airburst stays effective well past 100 m.
        typicalSpeed = 130;
        // ACE frag: real HE warhead, carried straight through from G_40mm_HE
        // (no terminal-frag ceiling applied — this round's warhead isn't
        // buffed, only its trajectory). These are the reference base numbers
        // in right.json (grenade_40mm.fragmentation); every bullet PAB sleeve
        // above is scaled off this warhead by percent_of_40mm_mass.
        ace_frag_metal = 200;
        ace_frag_charge = 32;
        ace_frag_gurney_c = 2700;
        ace_frag_gurney_k = 0.6; // 3/5
        ace_frag_classes[] = {"ace_frag_small_HD", "ace_frag_tiny_HD", "ace_frag_small_HD"};
    };

    // =========================================================
    // Mk366 PAB — 12.7x99 (.50) HMG Proximity AirBurst
    // Heavy burst radius; intended for vehicle-mounted HMG use.
    // =========================================================
    class FA_127_Mk366_PAB: B_127x99_Ball {
        displayName = "12.7mm Mk366 PAB";
        tracerScale = 1.2;
        // ACE frag: see FA_556_Mk361_PAB above — fabricated frag sleeve, no
        // real warhead. 18.08% of the 40mm warhead (right2.json): metal 36.2 g,
        // charge 5.8 g. Detonated manually via ace_frag_fnc_frago.
        indirectHitRange = 2.2;
        ace_frag_metal = 36.2;
        ace_frag_charge = 5.8;
        ace_frag_gurney_c = 2700;
        ace_frag_gurney_k = 0.5;
        ace_frag_classes[] = {"ace_frag_tiny_HD", "ace_frag_small_HD"};
    };

    // =========================================================
    // Mk367 PAB — 6.5x39 Caseless Proximity AirBurst
    // Caseless; MX family only. Lightweight anti-drone option
    // for units already carrying 6.5 caseless platforms.
    // =========================================================
    class FA_65_Mk367_PAB: B_65x39_Caseless {
        displayName = "6.5mm Mk367 PAB";
        tracerScale = 0.7;
        // ACE frag: see FA_556_Mk361_PAB above — fabricated frag sleeve, no
        // real warhead. 3.44% of the 40mm warhead (right2.json): metal 6.9 g,
        // charge 1.1 g. Detonated manually via ace_frag_fnc_frago.
        indirectHitRange = 1.3;
        ace_frag_metal = 6.9;
        ace_frag_charge = 1.1;
        ace_frag_gurney_c = 2700;
        ace_frag_gurney_k = 0.5;
        ace_frag_classes[] = {"ace_frag_tiny", "ace_frag_tiny_HD"};
    };

    // =========================================================
    // Mk373 PAB — .338 LM Precision Proximity AirBurst
    // (Note: Mk371 is reserved for the LRP ball family.)
    // Long-range UAV denial from a designated marksman position.
    // =========================================================
    class FA_338_Mk373_PAB: B_338_LM_Ball {
        displayName = ".338 LM Mk373 PAB";
        tracerScale = 1.0;
        // ACE frag: see FA_556_Mk361_PAB above — fabricated frag sleeve, no
        // real warhead. 6.98% of the 40mm warhead (right2.json): metal 14.0 g,
        // charge 2.2 g. Detonated manually via ace_frag_fnc_frago.
        indirectHitRange = 1.8;
        ace_frag_metal = 14.0;
        ace_frag_charge = 2.2;
        ace_frag_gurney_c = 2700;
        ace_frag_gurney_k = 0.5;
        ace_frag_classes[] = {"ace_frag_tiny_HD", "ace_frag_small_HD"};
    };

    // PAB tracer variants (script airburst via AD_params; tracersEvery on mags)
    class FA_556_Mk361_PAB_T_Red: FA_556_Mk361_PAB { tracer = 1; tracerColor[] = {1.0, 0.0, 0.0, 1.0}; };
    class FA_556_Mk361_PAB_T_Yellow: FA_556_Mk361_PAB { tracer = 1; tracerColor[] = {1.0, 1.0, 0.0, 1.0}; };
    class FA_556_Mk361_PAB_T_Green: FA_556_Mk361_PAB { tracer = 1; tracerColor[] = {0.0, 1.0, 0.0, 1.0}; };
    class FA_556_Mk361_PAB_T_White: FA_556_Mk361_PAB { tracer = 1; tracerColor[] = {1.0, 1.0, 1.0, 1.0}; };
    class FA_556_Mk361_PAB_T_Blue: FA_556_Mk361_PAB { tracer = 1; tracerColor[] = {0.0, 0.3, 1.0, 1.0}; };
    class FA_556_Mk361_PAB_T_Orange: FA_556_Mk361_PAB { tracer = 1; tracerColor[] = {1.0, 0.4, 0.0, 1.0}; };
    class FA_762_Mk362_PAB_T_Red: FA_762_Mk362_PAB { tracer = 1; tracerColor[] = {1.0, 0.0, 0.0, 1.0}; };
    class FA_762_Mk362_PAB_T_Yellow: FA_762_Mk362_PAB { tracer = 1; tracerColor[] = {1.0, 1.0, 0.0, 1.0}; };
    class FA_762_Mk362_PAB_T_Green: FA_762_Mk362_PAB { tracer = 1; tracerColor[] = {0.0, 1.0, 0.0, 1.0}; };
    class FA_762_Mk362_PAB_T_White: FA_762_Mk362_PAB { tracer = 1; tracerColor[] = {1.0, 1.0, 1.0, 1.0}; };
    class FA_762_Mk362_PAB_T_Blue: FA_762_Mk362_PAB { tracer = 1; tracerColor[] = {0.0, 0.3, 1.0, 1.0}; };
    class FA_762_Mk362_PAB_T_Orange: FA_762_Mk362_PAB { tracer = 1; tracerColor[] = {1.0, 0.4, 0.0, 1.0}; };
    class FA_300_Mk363_PAB_T_Red: FA_300_Mk363_PAB { tracer = 1; tracerColor[] = {1.0, 0.0, 0.0, 1.0}; };
    class FA_300_Mk363_PAB_T_Yellow: FA_300_Mk363_PAB { tracer = 1; tracerColor[] = {1.0, 1.0, 0.0, 1.0}; };
    class FA_300_Mk363_PAB_T_Green: FA_300_Mk363_PAB { tracer = 1; tracerColor[] = {0.0, 1.0, 0.0, 1.0}; };
    class FA_300_Mk363_PAB_T_White: FA_300_Mk363_PAB { tracer = 1; tracerColor[] = {1.0, 1.0, 1.0, 1.0}; };
    class FA_300_Mk363_PAB_T_Blue: FA_300_Mk363_PAB { tracer = 1; tracerColor[] = {0.0, 0.3, 1.0, 1.0}; };
    class FA_300_Mk363_PAB_T_Orange: FA_300_Mk363_PAB { tracer = 1; tracerColor[] = {1.0, 0.4, 0.0, 1.0}; };
    class FA_127_Mk366_PAB_T_Red: FA_127_Mk366_PAB { tracer = 1; tracerColor[] = {1.0, 0.0, 0.0, 1.0}; };
    class FA_127_Mk366_PAB_T_Yellow: FA_127_Mk366_PAB { tracer = 1; tracerColor[] = {1.0, 1.0, 0.0, 1.0}; };
    class FA_127_Mk366_PAB_T_Green: FA_127_Mk366_PAB { tracer = 1; tracerColor[] = {0.0, 1.0, 0.0, 1.0}; };
    class FA_127_Mk366_PAB_T_White: FA_127_Mk366_PAB { tracer = 1; tracerColor[] = {1.0, 1.0, 1.0, 1.0}; };
    class FA_127_Mk366_PAB_T_Blue: FA_127_Mk366_PAB { tracer = 1; tracerColor[] = {0.0, 0.3, 1.0, 1.0}; };
    class FA_127_Mk366_PAB_T_Orange: FA_127_Mk366_PAB { tracer = 1; tracerColor[] = {1.0, 0.4, 0.0, 1.0}; };
    class FA_65_Mk367_PAB_T_Red: FA_65_Mk367_PAB { tracer = 1; tracerColor[] = {1.0, 0.0, 0.0, 1.0}; };
    class FA_65_Mk367_PAB_T_Yellow: FA_65_Mk367_PAB { tracer = 1; tracerColor[] = {1.0, 1.0, 0.0, 1.0}; };
    class FA_65_Mk367_PAB_T_Green: FA_65_Mk367_PAB { tracer = 1; tracerColor[] = {0.0, 1.0, 0.0, 1.0}; };
    class FA_65_Mk367_PAB_T_White: FA_65_Mk367_PAB { tracer = 1; tracerColor[] = {1.0, 1.0, 1.0, 1.0}; };
    class FA_65_Mk367_PAB_T_Blue: FA_65_Mk367_PAB { tracer = 1; tracerColor[] = {0.0, 0.3, 1.0, 1.0}; };
    class FA_65_Mk367_PAB_T_Orange: FA_65_Mk367_PAB { tracer = 1; tracerColor[] = {1.0, 0.4, 0.0, 1.0}; };
    class FA_338_Mk373_PAB_T_Red: FA_338_Mk373_PAB { tracer = 1; tracerColor[] = {1.0, 0.0, 0.0, 1.0}; };
    class FA_338_Mk373_PAB_T_Yellow: FA_338_Mk373_PAB { tracer = 1; tracerColor[] = {1.0, 1.0, 0.0, 1.0}; };
    class FA_338_Mk373_PAB_T_Green: FA_338_Mk373_PAB { tracer = 1; tracerColor[] = {0.0, 1.0, 0.0, 1.0}; };
    class FA_338_Mk373_PAB_T_White: FA_338_Mk373_PAB { tracer = 1; tracerColor[] = {1.0, 1.0, 1.0, 1.0}; };
    class FA_338_Mk373_PAB_T_Blue: FA_338_Mk373_PAB { tracer = 1; tracerColor[] = {0.0, 0.3, 1.0, 1.0}; };
    class FA_338_Mk373_PAB_T_Orange: FA_338_Mk373_PAB { tracer = 1; tracerColor[] = {1.0, 0.4, 0.0, 1.0}; };
};
