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
    class G_40mm_HE;
    class B_127x99_Ball;
    class B_338_LM_Ball;
    class B_65x39_Caseless;

    // =========================================================
    // Mk361 PAB — 5.56x45 Proximity AirBurst
    // Flies as standard 5.56; kill applied by proximity script.
    // tracerScale small so visible in flight for tracking.
    // =========================================================
    class futureAmmo_556_Mk361_PAB: B_556x45_Ball {
        tracerScale = 0.6;
    };
    ALL_TRACERS(futureAmmo_556_Mk361_PAB);

    // =========================================================
    // Mk362 PAB — 7.62x51 Proximity AirBurst
    // =========================================================
    class futureAmmo_762_Mk362_PAB: B_762x51_Ball {
        tracerScale = 0.8;
    };
    ALL_TRACERS(futureAmmo_762_Mk362_PAB);

    // =========================================================
    // Mk363 PAB — .300 BLK Supersonic Proximity AirBurst
    // Short-to-mid range; useful for tight-quarters UAV denial.
    // =========================================================
    class futureAmmo_300_Mk363_PAB: B_762x51_Ball {
        typicalSpeed = 675;
        tracerScale = 0.7;
    };
    ALL_TRACERS(futureAmmo_300_Mk363_PAB);

    // =========================================================
    // Mk364 PAB — 40mm UGL Programmable AirBurst (C-UAS)
    // Retains HE blast on impact; airburst near drones via script.
    // No tracer variants — grenade flight is visible by itself.
    // =========================================================
    class futureAmmo_40mm_Mk364_PAB: G_40mm_HE {};

    // =========================================================
    // Mk366 PAB — 12.7x99 (.50) HMG Proximity AirBurst
    // Heavy burst radius; intended for vehicle-mounted HMG use.
    // =========================================================
    class futureAmmo_127_Mk366_PAB: B_127x99_Ball {
        tracerScale = 1.2;
    };
    ALL_TRACERS(futureAmmo_127_Mk366_PAB);

    // =========================================================
    // Mk367 PAB — 6.5x39 Caseless Proximity AirBurst
    // Caseless; MX family only. Lightweight anti-drone option
    // for units already carrying 6.5 caseless platforms.
    // =========================================================
    class futureAmmo_65_Mk367_PAB: B_65x39_Caseless {
        tracerScale = 0.7;
    };
    ALL_TRACERS(futureAmmo_65_Mk367_PAB);

    // =========================================================
    // Mk373 PAB — .338 LM Precision Proximity AirBurst
    // (Note: Mk371 is reserved for the LRP ball family.)
    // Long-range UAV denial from a designated marksman position.
    // =========================================================
    class futureAmmo_338_Mk373_PAB: B_338_LM_Ball {
        tracerScale = 1.0;
    };
    ALL_TRACERS(futureAmmo_338_Mk373_PAB);
};
