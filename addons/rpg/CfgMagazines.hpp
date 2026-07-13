// One round per tube, vanilla rocket bodies. initSpeed follows the muzzle
// velocity of each nature; the heavier tandem/thermobaric RPG-7 rounds launch
// slower than the vanilla PG-7 (134).
class CfgMagazines {
    class RPG32_F;
    class RPG32_HE_F;
    class RPG7_F;

    // =========================================================
    // RPG-32
    // =========================================================
    class FA_RPG32_PG32V2: RPG32_F {
        author = QAUTHOR;
        displayName = "[Ghost] RPG-32 PG-32V-2";
        descriptionShort = "105mm PG-32V-2 (2040)<br/>Tandem HEAT — 700mm RHA, 500 m";
        ammo = "FA_R_RPG32_PG32V2";
        mass = 62;
    };
    class FA_RPG32_TBG32V2: RPG32_HE_F {
        author = QAUTHOR;
        displayName = "[Ghost] RPG-32 TBG-32V-2";
        descriptionShort = "105mm TBG-32V-2 (2040)<br/>Thermobaric, anti-structure / anti-personnel — 400 m";
        ammo = "FA_R_RPG32_TBG32V2";
        mass = 42;
    };
    class FA_RPG32_AB32: RPG32_HE_F {
        author = QAUTHOR;
        displayName = "[Ghost] RPG-32 AB-32 PROX";
        descriptionShort = "105mm AB-32 PROX (2040)<br/>C-UAS proximity airburst — scripted fuze, 300 m";
        ammo = "FA_R_RPG32_AB32";
        initSpeed = 150;
        mass = 40;
    };

    // =========================================================
    // RPG-7
    // =========================================================
    class FA_RPG7_PG7VR2: RPG7_F {
        author = QAUTHOR;
        displayName = "[Ghost] RPG-7 PG-7VR-2";
        descriptionShort = "PG-7VR-2 (2040)<br/>Tandem HEAT — 550mm RHA, 330 m";
        ammo = "FA_R_RPG7_PG7VR2";
        initSpeed = 115;
        mass = 45;
    };
    class FA_RPG7_TBG7V2: RPG7_F {
        author = QAUTHOR;
        displayName = "[Ghost] RPG-7 TBG-7V-2";
        descriptionShort = "TBG-7V-2 (2040)<br/>Thermobaric, room-clearer / bunker-buster — 200 m";
        ammo = "FA_R_RPG7_TBG7V2";
        initSpeed = 115;
        mass = 44;
    };
    class FA_RPG7_AB7: RPG7_F {
        author = QAUTHOR;
        displayName = "[Ghost] RPG-7 AB-7 PROX";
        descriptionShort = "AB-7 PROX (2040)<br/>C-UAS proximity airburst — scripted fuze, 200 m";
        ammo = "FA_R_RPG7_AB7";
        initSpeed = 120;
        mass = 42;
    };
};
