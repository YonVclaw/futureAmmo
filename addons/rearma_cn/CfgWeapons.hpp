// Weapon patches and the FA disposable-launcher variants. A single-use tube
// can't take a different round, so each FA round gets its own launcher:
// a _Loaded class holding the round, the arsenal class CBA shows until it
// is fired, and rearma's own _Used tube (CBA_DisposableLaunchers.hpp).
class CfgWeapons {
    class launch_RPG32_F;
    // The PF-89A is built on the vanilla RPG-32 and sets no magazineWell, so it
    // inherited the "RPG32" well and listed every RPG-32 rocket (vanilla and FA)
    // as loadable into a single-use tube. Clear it; the WPF-89 inherits the fix.
    class launch_PF89_Loaded: launch_RPG32_F {
        class WeaponSlotsInfo;
        magazineWell[] = {};
    };
    class launch_WPF89_Loaded: launch_PF89_Loaded {
        class WeaponSlotsInfo;
    };

    // ===== PF-89A 80mm - PF-89C TNDM =====
    class FA_rearma_launch_PF89C_TNDM_Loaded: launch_PF89_Loaded {
        author = QAUTHOR;
        displayName = "[Ghost] PF-89C TNDM";
        descriptionShort = "80mm PF-89C TNDM (2040)<br/>Tandem HEAT - ~675 mm RHA, 300 m";
        baseWeapon = "FA_rearma_launch_PF89C_TNDM";
        magazines[] = {"FA_rearma_PF89C_TNDM"};
        magazineWell[] = {};
    };
    class FA_rearma_launch_PF89C_TNDM: FA_rearma_launch_PF89C_TNDM_Loaded {
        scope = 2;
        scopeArsenal = 2;
        baseWeapon = "FA_rearma_launch_PF89C_TNDM";
        magazines[] = {"CBA_FakeLauncherMagazine"};
        class WeaponSlotsInfo: WeaponSlotsInfo {
            mass = 50;
        };
    };

    // ===== PF-89A 80mm - PF-89K PROX =====
    class FA_rearma_launch_PF89K_PROX_Loaded: launch_PF89_Loaded {
        author = QAUTHOR;
        displayName = "[Ghost] PF-89K PROX";
        descriptionShort = "80mm PF-89K PROX (2040)<br/>C-UAS proximity airburst - scripted fuze, 250 m";
        baseWeapon = "FA_rearma_launch_PF89K_PROX";
        magazines[] = {"FA_rearma_PF89K_PROX"};
        magazineWell[] = {};
    };
    class FA_rearma_launch_PF89K_PROX: FA_rearma_launch_PF89K_PROX_Loaded {
        scope = 2;
        scopeArsenal = 2;
        baseWeapon = "FA_rearma_launch_PF89K_PROX";
        magazines[] = {"CBA_FakeLauncherMagazine"};
        class WeaponSlotsInfo: WeaponSlotsInfo {
            mass = 50;
        };
    };

    // ===== WPF-89 80mm - WPF-89C TBX =====
    class FA_rearma_launch_WPF89C_TBX_Loaded: launch_WPF89_Loaded {
        author = QAUTHOR;
        displayName = "[Ghost] WPF-89C TBX";
        descriptionShort = "80mm WPF-89C TBX (2040)<br/>Thermobaric, anti-structure / anti-personnel - 300 m";
        baseWeapon = "FA_rearma_launch_WPF89C_TBX";
        magazines[] = {"FA_rearma_WPF89C_TBX"};
        magazineWell[] = {};
    };
    class FA_rearma_launch_WPF89C_TBX: FA_rearma_launch_WPF89C_TBX_Loaded {
        scope = 2;
        scopeArsenal = 2;
        baseWeapon = "FA_rearma_launch_WPF89C_TBX";
        magazines[] = {"CBA_FakeLauncherMagazine"};
        class WeaponSlotsInfo: WeaponSlotsInfo {
            mass = 65;
        };
    };
};
