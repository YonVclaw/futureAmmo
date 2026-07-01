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
    };

    // =========================================================
    // Mk362 PAB — 7.62x51 Proximity AirBurst
    // =========================================================
    class FA_762_Mk362_PAB: B_762x51_Ball {
        displayName = "7.62mm Mk362 PAB";
        tracerScale = 0.8;
    };

    // =========================================================
    // Mk363 PAB — .300 BLK Supersonic Proximity AirBurst
    // Short-to-mid range; useful for tight-quarters UAV denial.
    // =========================================================
    class FA_300_Mk363_PAB: B_762x51_Ball {
        displayName = ".300 BLK Mk363 PAB";
        typicalSpeed = 675;
        tracerScale = 0.7;
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
    };

    // =========================================================
    // Mk366 PAB — 12.7x99 (.50) HMG Proximity AirBurst
    // Heavy burst radius; intended for vehicle-mounted HMG use.
    // =========================================================
    class FA_127_Mk366_PAB: B_127x99_Ball {
        displayName = "12.7mm Mk366 PAB";
        tracerScale = 1.2;
    };

    // =========================================================
    // Mk367 PAB — 6.5x39 Caseless Proximity AirBurst
    // Caseless; MX family only. Lightweight anti-drone option
    // for units already carrying 6.5 caseless platforms.
    // =========================================================
    class FA_65_Mk367_PAB: B_65x39_Caseless {
        displayName = "6.5mm Mk367 PAB";
        tracerScale = 0.7;
    };

    // =========================================================
    // Mk373 PAB — .338 LM Precision Proximity AirBurst
    // (Note: Mk371 is reserved for the LRP ball family.)
    // Long-range UAV denial from a designated marksman position.
    // =========================================================
    class FA_338_Mk373_PAB: B_338_LM_Ball {
        displayName = ".338 LM Mk373 PAB";
        tracerScale = 1.0;
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
