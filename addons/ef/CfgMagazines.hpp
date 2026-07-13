class CfgMagazines {
    class EF_100Rnd_65x39_caseless_coy_mag;
    class EF_30Rnd_65x39_caseless_coy_mag;

    // EF 6.5x39 coyote — ONE base mag; every tracer colour below inherits it,
    // so they all use the single coyote mag model (no separate _Tracer body).
    class FA_EF_30Rnd_65x39_caseless_coy_mag: EF_30Rnd_65x39_caseless_coy_mag {
        author = QAUTHOR;
        displayName = "[Ghost] 30Rnd Mk330 EPR";
        descriptionShort = "Mk330 EPR";
        ammo = "FA_65_EPR";
        initSpeed = 820;
    };

    // =========================================================
    // EF 6.5x39 coyote — tracer colours (all inherit the coy_mag above)
    // =========================================================
    class FA_EF_30Rnd_65x39_caseless_coy_mag_Tracer_T_Red : FA_EF_30Rnd_65x39_caseless_coy_mag {
        author = QAUTHOR;
        displayName = "[Ghost] 30Rnd Mk330 EPR Red Tracer";
        descriptionShort = "Mk330 EPR";
        ammo = "FA_65_EPR_T_Red";
        initSpeed = 820;
    tracersEvery = 4; };
    class FA_EF_30Rnd_65x39_caseless_coy_mag_Tracer_T_Yellow : FA_EF_30Rnd_65x39_caseless_coy_mag {
        author = QAUTHOR;
        displayName = "[Ghost] 30Rnd Mk330 EPR Yellow Tracer";
        descriptionShort = "Mk330 EPR";
        ammo = "FA_65_EPR_T_Yellow";
        initSpeed = 820;
    tracersEvery = 4; };
    class FA_EF_30Rnd_65x39_caseless_coy_mag_Tracer_T_Green : FA_EF_30Rnd_65x39_caseless_coy_mag {
        author = QAUTHOR;
        displayName = "[Ghost] 30Rnd Mk330 EPR Green Tracer";
        descriptionShort = "Mk330 EPR";
        ammo = "FA_65_EPR_T_Green";
        initSpeed = 820;
    tracersEvery = 4; };
    class FA_EF_30Rnd_65x39_caseless_coy_mag_Tracer_T_White : FA_EF_30Rnd_65x39_caseless_coy_mag {
        author = QAUTHOR;
        displayName = "[Ghost] 30Rnd Mk330 EPR White Tracer";
        descriptionShort = "Mk330 EPR";
        ammo = "FA_65_EPR_T_White";
        initSpeed = 820;
    tracersEvery = 4; };
    class FA_EF_30Rnd_65x39_caseless_coy_mag_Tracer_T_Blue : FA_EF_30Rnd_65x39_caseless_coy_mag {
        author = QAUTHOR;
        displayName = "[Ghost] 30Rnd Mk330 EPR Blue Tracer";
        descriptionShort = "Mk330 EPR";
        ammo = "FA_65_EPR_T_Blue";
        initSpeed = 820;
    tracersEvery = 4; };
    class FA_EF_30Rnd_65x39_caseless_coy_mag_Tracer_T_Orange : FA_EF_30Rnd_65x39_caseless_coy_mag {
        author = QAUTHOR;
        displayName = "[Ghost] 30Rnd Mk330 EPR Orange Tracer";
        descriptionShort = "Mk330 EPR";
        ammo = "FA_65_EPR_T_Orange";
        initSpeed = 820;
    tracersEvery = 4; };
    class FA_EF_30Rnd_65x39_caseless_coy_mag_Tracer_T_IR : FA_EF_30Rnd_65x39_caseless_coy_mag {
        author = QAUTHOR;
        displayName = "[Ghost] 30Rnd Mk330 EPR IR Tracer";
        descriptionShort = "Mk330 EPR";
        ammo = "FA_65_EPR_T_IR";
        initSpeed = 820;
    tracersEvery = 4; };

    // =========================================================
    // EF 6.5x39 — EF_100Rnd_65x39_caseless_coy_mag
    // =========================================================
    class FA_EF_100Rnd_65x39_caseless_coy_mag_T_Red : EF_100Rnd_65x39_caseless_coy_mag {
        author = QAUTHOR;
        displayName = "[Ghost] 100Rnd Mk330 EPR Red Tracer";
        descriptionShort = "Mk330 EPR";
        ammo = "FA_65_EPR_T_Red";
        initSpeed = 820;
    tracersEvery = 4; };
    class FA_EF_100Rnd_65x39_caseless_coy_mag_T_Yellow : EF_100Rnd_65x39_caseless_coy_mag {
        author = QAUTHOR;
        displayName = "[Ghost] 100Rnd Mk330 EPR Yellow Tracer";
        descriptionShort = "Mk330 EPR";
        ammo = "FA_65_EPR_T_Yellow";
        initSpeed = 820;
    tracersEvery = 4; };
    class FA_EF_100Rnd_65x39_caseless_coy_mag_T_Green : EF_100Rnd_65x39_caseless_coy_mag {
        author = QAUTHOR;
        displayName = "[Ghost] 100Rnd Mk330 EPR Green Tracer";
        descriptionShort = "Mk330 EPR";
        ammo = "FA_65_EPR_T_Green";
        initSpeed = 820;
    tracersEvery = 4; };
    class FA_EF_100Rnd_65x39_caseless_coy_mag_T_White : EF_100Rnd_65x39_caseless_coy_mag {
        author = QAUTHOR;
        displayName = "[Ghost] 100Rnd Mk330 EPR White Tracer";
        descriptionShort = "Mk330 EPR";
        ammo = "FA_65_EPR_T_White";
        initSpeed = 820;
    tracersEvery = 4; };
    class FA_EF_100Rnd_65x39_caseless_coy_mag_T_Blue : EF_100Rnd_65x39_caseless_coy_mag {
        author = QAUTHOR;
        displayName = "[Ghost] 100Rnd Mk330 EPR Blue Tracer";
        descriptionShort = "Mk330 EPR";
        ammo = "FA_65_EPR_T_Blue";
        initSpeed = 820;
    tracersEvery = 4; };
    class FA_EF_100Rnd_65x39_caseless_coy_mag_T_Orange : EF_100Rnd_65x39_caseless_coy_mag {
        author = QAUTHOR;
        displayName = "[Ghost] 100Rnd Mk330 EPR Orange Tracer";
        descriptionShort = "Mk330 EPR";
        ammo = "FA_65_EPR_T_Orange";
        initSpeed = 820;
    tracersEvery = 4; };
    class FA_EF_100Rnd_65x39_caseless_coy_mag_T_IR : EF_100Rnd_65x39_caseless_coy_mag {
        author = QAUTHOR;
        displayName = "[Ghost] 100Rnd Mk330 EPR IR Tracer";
        descriptionShort = "Mk330 EPR";
        ammo = "FA_65_EPR_T_IR";
        initSpeed = 820;
    tracersEvery = 4; };

    // ===== EPR non-tracer coyote mag (100Rnd) =====
    class FA_EF_100Rnd_65x39_caseless_coy_mag: EF_100Rnd_65x39_caseless_coy_mag {
        author = QAUTHOR;
        displayName = "[Ghost] 100Rnd Mk330 EPR";
        descriptionShort = "Mk330 EPR";
        ammo = "FA_65_EPR";
        initSpeed = 820;
    };
};
