// Magazines on vanilla PLACEHOLDER bodies (reparent to the real mod mag for
// correct model). counts/initSpeed set per caliber; each joins its CBA
// magazineWell (see CfgMagazinewells.hpp).
class CfgMagazines {
    class 30Rnd_762x39_Mag_F;      // 9x39 placeholder body
    class 30Rnd_556x45_Stanag;     // 5.7x28 placeholder body
    class 5Rnd_127x108_APDS_Mag;   // 14.5x114 placeholder body

    // 9x39 — AS Val / VSS 20-round
    class FA_20Rnd_9x39_7U15: 30Rnd_762x39_Mag_F { author = QAUTHOR; count = 20; initSpeed = 295; ammo = "FA_ammo_9x39_7U15"; displayName = "[Ghost] 20Rnd 7U15"; descriptionShort = "7U15"; };
    class FA_20Rnd_9x39_7U16: 30Rnd_762x39_Mag_F { author = QAUTHOR; count = 20; initSpeed = 295; ammo = "FA_ammo_9x39_7U16"; displayName = "[Ghost] 20Rnd 7U16"; descriptionShort = "7U16"; };

    // 5.7x28 — P90 50-round
    class FA_50Rnd_57x28_Mk430: 30Rnd_556x45_Stanag { author = QAUTHOR; count = 50; initSpeed = 715; ammo = "FA_ammo_57_Mk430"; displayName = "[Ghost] 50Rnd Mk430 AP"; descriptionShort = "Mk430 AP"; };
    class FA_50Rnd_57x28_Mk431: 30Rnd_556x45_Stanag { author = QAUTHOR; count = 50; initSpeed = 305; ammo = "FA_ammo_57_Mk431"; displayName = "[Ghost] 50Rnd Mk431 SUB"; descriptionShort = "Mk431 SUB"; };
    // 5.7x28 — Five-seveN 20-round
    class FA_20Rnd_57x28_Mk430: 30Rnd_556x45_Stanag { author = QAUTHOR; count = 20; initSpeed = 715; ammo = "FA_ammo_57_Mk430"; displayName = "[Ghost] 20Rnd Mk430 AP"; descriptionShort = "Mk430 AP"; };
    class FA_20Rnd_57x28_Mk431: 30Rnd_556x45_Stanag { author = QAUTHOR; count = 20; initSpeed = 305; ammo = "FA_ammo_57_Mk431"; displayName = "[Ghost] 20Rnd Mk431 SUB"; descriptionShort = "Mk431 SUB"; };

    // 14.5x114 — mag-fed AM rifle 5-round (the belt-fed KPV needs its own weapon
    // patch; its classname isn't known here)
    class FA_5Rnd_145_7N60: 5Rnd_127x108_APDS_Mag { author = QAUTHOR; initSpeed = 1005; ammo = "FA_ammo_145_7N60"; displayName = "[Ghost] 5Rnd 7N60 AP-T"; descriptionShort = "7N60 AP-T"; };
    class FA_5Rnd_145_7N61: 5Rnd_127x108_APDS_Mag { author = QAUTHOR; initSpeed = 1000; ammo = "FA_ammo_145_7N61"; displayName = "[Ghost] 5Rnd 7N61 HEIAP"; descriptionShort = "7N61 HEIAP"; };
    class FA_5Rnd_145_7N62: 5Rnd_127x108_APDS_Mag { author = QAUTHOR; initSpeed = 1000; ammo = "FA_ammo_145_7N62"; displayName = "[Ghost] 5Rnd 7N62 HEAB"; descriptionShort = "7N62 HEAB"; };
    // 6.5 caseless loads now live in ghostfa_ammo (full colour/tracer matrix).
};
