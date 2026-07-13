// The RF ASh-12 reads the CBA CBA_127x55_ASh12 magazine well, so the FA 12.7x55
// magazines are injected there (they appear on every ASh-12 variant with no
// weapon patching).
class CfgMagazineWells {
    class CBA_127x55_ASh12 {
        ADDON[] += {
            "FA_20Rnd_127x55_7N52",
            "FA_20Rnd_127x55_7U13",
            "FA_20Rnd_127x55_7U14",
            "FA_10Rnd_127x55_7N52",
            "FA_10Rnd_127x55_7U13",
            "FA_10Rnd_127x55_7U14"
        };
    };

    // RC40 rides the standard CBA 40mm GL wells (same as RF's own RC40 shells),
    // so the rounds appear on the ASh-12 GL (and any 40mm GL using these wells).
    class CBA_40mm_3GL {
        ADDON[] += {
            "FA_1Rnd_RC40_HEP", "FA_1Rnd_RC40_MS", "FA_1Rnd_RC40_AD", "FA_1Rnd_RC40_DP"
        };
    };
    class CBA_40mm_M203 {
        ADDON[] += {
            "FA_1Rnd_RC40_HEP", "FA_1Rnd_RC40_MS", "FA_1Rnd_RC40_AD", "FA_1Rnd_RC40_DP"
        };
    };
};
