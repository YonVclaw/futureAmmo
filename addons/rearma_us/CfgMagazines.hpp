// FA rounds on rearma's own US magazine bodies, so the arsenal and the weapon
// show the right model. Every magazine joins the rearma well its body already
// lives in (CfgMagazinewells.hpp); the M250 and KAC AMG belts get new wells,
// wired in CfgWeapons.hpp. Rifle / MG loads carry the full tracer set; shot,
// PDW, pistol and underwater loads have none. Belt bodies that fire a tracer
// every third round are reset so tracers only come from the _T_ variants.
class CfgMagazines {
    class 20Rnd_680x51TVCM_Mag_Blk_F;
    class 20Rnd_680x51TVCM_Mag_Tan_F;
    class 30Rnd_680x51TVCM_Mag_Blk_F;
    class 30Rnd_680x51TVCM_Mag_Tan_F;
    class 50Rnd_680x51TVCM_Drum_F;
    class 100Rnd_680x51_Mag;
    class 20Rnd_680x51UW_Mag_F;
    class 20Rnd_6x38_MAG_F;
    class 30Rnd_6x38_PMAG_Blk_F;
    class 30Rnd_6x38_PMAG_Tan_F;
    class 50Rnd_6x38_PMAG_Blk_F;
    class 150Rnd_6x38TVCM_F;
    class 30Rnd_556x45_Stanag_Blk_F;
    class 30Rnd_556x45_Stanag_Tan_F;
    class 30Rnd_556x45_PMAG_Blk_F;
    class 30Rnd_556x45_PMAG_Tan_F;
    class CA_Magazine;
    class 18Rnd_9x19_Mag;
    class m72a7_mag;

    // ===== 20Rnd 6.8x51 - M7 / RM277 - body 20Rnd_680x51TVCM_Mag_Blk_F =====
    class FA_rearma_20Rnd_680x51_Mk400_HV: 20Rnd_680x51TVCM_Mag_Blk_F {
        author = QAUTHOR;
        displayName = "[Ghost] 20Rnd Mk400 HV";
        displayNameShort = "Mk400 HV";
        descriptionShort = "Mk400 HV - 6.8x51 hybrid-case general purpose";
        ammo = "FA_b_680_Mk400_HV";
        initSpeed = 950;
    };
    class FA_rearma_20Rnd_680x51_Mk400_HV_T_Red: FA_rearma_20Rnd_680x51_Mk400_HV { displayName = "[Ghost] 20Rnd Mk400 HV Red Tracer"; descriptionShort = "Mk400 HV - 6.8x51 hybrid-case general purpose"; ammo = "FA_b_680_Mk400_HV_T_Red"; tracersEvery = 4; };
    class FA_rearma_20Rnd_680x51_Mk400_HV_T_Yellow: FA_rearma_20Rnd_680x51_Mk400_HV { displayName = "[Ghost] 20Rnd Mk400 HV Yellow Tracer"; descriptionShort = "Mk400 HV - 6.8x51 hybrid-case general purpose"; ammo = "FA_b_680_Mk400_HV_T_Yellow"; tracersEvery = 4; };
    class FA_rearma_20Rnd_680x51_Mk400_HV_T_Green: FA_rearma_20Rnd_680x51_Mk400_HV { displayName = "[Ghost] 20Rnd Mk400 HV Green Tracer"; descriptionShort = "Mk400 HV - 6.8x51 hybrid-case general purpose"; ammo = "FA_b_680_Mk400_HV_T_Green"; tracersEvery = 4; };
    class FA_rearma_20Rnd_680x51_Mk400_HV_T_White: FA_rearma_20Rnd_680x51_Mk400_HV { displayName = "[Ghost] 20Rnd Mk400 HV White Tracer"; descriptionShort = "Mk400 HV - 6.8x51 hybrid-case general purpose"; ammo = "FA_b_680_Mk400_HV_T_White"; tracersEvery = 4; };
    class FA_rearma_20Rnd_680x51_Mk400_HV_T_Blue: FA_rearma_20Rnd_680x51_Mk400_HV { displayName = "[Ghost] 20Rnd Mk400 HV Blue Tracer"; descriptionShort = "Mk400 HV - 6.8x51 hybrid-case general purpose"; ammo = "FA_b_680_Mk400_HV_T_Blue"; tracersEvery = 4; };
    class FA_rearma_20Rnd_680x51_Mk400_HV_T_Orange: FA_rearma_20Rnd_680x51_Mk400_HV { displayName = "[Ghost] 20Rnd Mk400 HV Orange Tracer"; descriptionShort = "Mk400 HV - 6.8x51 hybrid-case general purpose"; ammo = "FA_b_680_Mk400_HV_T_Orange"; tracersEvery = 4; };
    class FA_rearma_20Rnd_680x51_Mk400_HV_T_IR: FA_rearma_20Rnd_680x51_Mk400_HV { displayName = "[Ghost] 20Rnd Mk400 HV IR Tracer"; descriptionShort = "Mk400 HV - 6.8x51 hybrid-case general purpose"; ammo = "FA_b_680_Mk400_HV_T_IR"; tracersEvery = 4; };
    class FA_rearma_20Rnd_680x51_Mk401_AP: 20Rnd_680x51TVCM_Mag_Blk_F {
        author = QAUTHOR;
        displayName = "[Ghost] 20Rnd Mk401 AP";
        displayNameShort = "Mk401 AP";
        descriptionShort = "Mk401 AP - 6.8x51 tungsten armour piercer";
        ammo = "FA_b_680_Mk401_AP";
        initSpeed = 925;
    };
    class FA_rearma_20Rnd_680x51_Mk401_AP_T_Red: FA_rearma_20Rnd_680x51_Mk401_AP { displayName = "[Ghost] 20Rnd Mk401 AP Red Tracer"; descriptionShort = "Mk401 AP - 6.8x51 tungsten armour piercer"; ammo = "FA_b_680_Mk401_AP_T_Red"; tracersEvery = 4; };
    class FA_rearma_20Rnd_680x51_Mk401_AP_T_Yellow: FA_rearma_20Rnd_680x51_Mk401_AP { displayName = "[Ghost] 20Rnd Mk401 AP Yellow Tracer"; descriptionShort = "Mk401 AP - 6.8x51 tungsten armour piercer"; ammo = "FA_b_680_Mk401_AP_T_Yellow"; tracersEvery = 4; };
    class FA_rearma_20Rnd_680x51_Mk401_AP_T_Green: FA_rearma_20Rnd_680x51_Mk401_AP { displayName = "[Ghost] 20Rnd Mk401 AP Green Tracer"; descriptionShort = "Mk401 AP - 6.8x51 tungsten armour piercer"; ammo = "FA_b_680_Mk401_AP_T_Green"; tracersEvery = 4; };
    class FA_rearma_20Rnd_680x51_Mk401_AP_T_White: FA_rearma_20Rnd_680x51_Mk401_AP { displayName = "[Ghost] 20Rnd Mk401 AP White Tracer"; descriptionShort = "Mk401 AP - 6.8x51 tungsten armour piercer"; ammo = "FA_b_680_Mk401_AP_T_White"; tracersEvery = 4; };
    class FA_rearma_20Rnd_680x51_Mk401_AP_T_Blue: FA_rearma_20Rnd_680x51_Mk401_AP { displayName = "[Ghost] 20Rnd Mk401 AP Blue Tracer"; descriptionShort = "Mk401 AP - 6.8x51 tungsten armour piercer"; ammo = "FA_b_680_Mk401_AP_T_Blue"; tracersEvery = 4; };
    class FA_rearma_20Rnd_680x51_Mk401_AP_T_Orange: FA_rearma_20Rnd_680x51_Mk401_AP { displayName = "[Ghost] 20Rnd Mk401 AP Orange Tracer"; descriptionShort = "Mk401 AP - 6.8x51 tungsten armour piercer"; ammo = "FA_b_680_Mk401_AP_T_Orange"; tracersEvery = 4; };
    class FA_rearma_20Rnd_680x51_Mk401_AP_T_IR: FA_rearma_20Rnd_680x51_Mk401_AP { displayName = "[Ghost] 20Rnd Mk401 AP IR Tracer"; descriptionShort = "Mk401 AP - 6.8x51 tungsten armour piercer"; ammo = "FA_b_680_Mk401_AP_T_IR"; tracersEvery = 4; };
    class FA_rearma_20Rnd_680x51_Mk402_PAB: 20Rnd_680x51TVCM_Mag_Blk_F {
        author = QAUTHOR;
        displayName = "[Ghost] 20Rnd Mk402 PAB";
        displayNameShort = "Mk402 PAB";
        descriptionShort = "Mk402 PAB airburst, counter-UAS";
        ammo = "FA_b_680_Mk402_PAB";
        initSpeed = 935;
    };
    class FA_rearma_20Rnd_680x51_Mk402_PAB_T_Red: FA_rearma_20Rnd_680x51_Mk402_PAB { displayName = "[Ghost] 20Rnd Mk402 PAB Red Tracer"; descriptionShort = "Mk402 PAB airburst, counter-UAS"; ammo = "FA_b_680_Mk402_PAB_T_Red"; tracersEvery = 4; };
    class FA_rearma_20Rnd_680x51_Mk402_PAB_T_Yellow: FA_rearma_20Rnd_680x51_Mk402_PAB { displayName = "[Ghost] 20Rnd Mk402 PAB Yellow Tracer"; descriptionShort = "Mk402 PAB airburst, counter-UAS"; ammo = "FA_b_680_Mk402_PAB_T_Yellow"; tracersEvery = 4; };
    class FA_rearma_20Rnd_680x51_Mk402_PAB_T_Green: FA_rearma_20Rnd_680x51_Mk402_PAB { displayName = "[Ghost] 20Rnd Mk402 PAB Green Tracer"; descriptionShort = "Mk402 PAB airburst, counter-UAS"; ammo = "FA_b_680_Mk402_PAB_T_Green"; tracersEvery = 4; };
    class FA_rearma_20Rnd_680x51_Mk402_PAB_T_White: FA_rearma_20Rnd_680x51_Mk402_PAB { displayName = "[Ghost] 20Rnd Mk402 PAB White Tracer"; descriptionShort = "Mk402 PAB airburst, counter-UAS"; ammo = "FA_b_680_Mk402_PAB_T_White"; tracersEvery = 4; };
    class FA_rearma_20Rnd_680x51_Mk402_PAB_T_Blue: FA_rearma_20Rnd_680x51_Mk402_PAB { displayName = "[Ghost] 20Rnd Mk402 PAB Blue Tracer"; descriptionShort = "Mk402 PAB airburst, counter-UAS"; ammo = "FA_b_680_Mk402_PAB_T_Blue"; tracersEvery = 4; };
    class FA_rearma_20Rnd_680x51_Mk402_PAB_T_Orange: FA_rearma_20Rnd_680x51_Mk402_PAB { displayName = "[Ghost] 20Rnd Mk402 PAB Orange Tracer"; descriptionShort = "Mk402 PAB airburst, counter-UAS"; ammo = "FA_b_680_Mk402_PAB_T_Orange"; tracersEvery = 4; };
    class FA_rearma_20Rnd_680x51_Mk402_PAB_T_IR: FA_rearma_20Rnd_680x51_Mk402_PAB { displayName = "[Ghost] 20Rnd Mk402 PAB IR Tracer"; descriptionShort = "Mk402 PAB airburst, counter-UAS"; ammo = "FA_b_680_Mk402_PAB_T_IR"; tracersEvery = 4; };

    // ===== 20Rnd 6.8x51 tan - M7 / RM277 - body 20Rnd_680x51TVCM_Mag_Tan_F =====
    class FA_rearma_20Rnd_680x51_Tan_Mk400_HV: 20Rnd_680x51TVCM_Mag_Tan_F {
        author = QAUTHOR;
        displayName = "[Ghost] 20Rnd Mk400 HV Tan Mag";
        displayNameShort = "Mk400 HV";
        descriptionShort = "Mk400 HV - 6.8x51 hybrid-case general purpose";
        ammo = "FA_b_680_Mk400_HV";
        initSpeed = 950;
    };
    class FA_rearma_20Rnd_680x51_Tan_Mk400_HV_T_Red: FA_rearma_20Rnd_680x51_Tan_Mk400_HV { displayName = "[Ghost] 20Rnd Mk400 HV Tan Mag Red Tracer"; descriptionShort = "Mk400 HV - 6.8x51 hybrid-case general purpose"; ammo = "FA_b_680_Mk400_HV_T_Red"; tracersEvery = 4; };
    class FA_rearma_20Rnd_680x51_Tan_Mk400_HV_T_Yellow: FA_rearma_20Rnd_680x51_Tan_Mk400_HV { displayName = "[Ghost] 20Rnd Mk400 HV Tan Mag Yellow Tracer"; descriptionShort = "Mk400 HV - 6.8x51 hybrid-case general purpose"; ammo = "FA_b_680_Mk400_HV_T_Yellow"; tracersEvery = 4; };
    class FA_rearma_20Rnd_680x51_Tan_Mk400_HV_T_Green: FA_rearma_20Rnd_680x51_Tan_Mk400_HV { displayName = "[Ghost] 20Rnd Mk400 HV Tan Mag Green Tracer"; descriptionShort = "Mk400 HV - 6.8x51 hybrid-case general purpose"; ammo = "FA_b_680_Mk400_HV_T_Green"; tracersEvery = 4; };
    class FA_rearma_20Rnd_680x51_Tan_Mk400_HV_T_White: FA_rearma_20Rnd_680x51_Tan_Mk400_HV { displayName = "[Ghost] 20Rnd Mk400 HV Tan Mag White Tracer"; descriptionShort = "Mk400 HV - 6.8x51 hybrid-case general purpose"; ammo = "FA_b_680_Mk400_HV_T_White"; tracersEvery = 4; };
    class FA_rearma_20Rnd_680x51_Tan_Mk400_HV_T_Blue: FA_rearma_20Rnd_680x51_Tan_Mk400_HV { displayName = "[Ghost] 20Rnd Mk400 HV Tan Mag Blue Tracer"; descriptionShort = "Mk400 HV - 6.8x51 hybrid-case general purpose"; ammo = "FA_b_680_Mk400_HV_T_Blue"; tracersEvery = 4; };
    class FA_rearma_20Rnd_680x51_Tan_Mk400_HV_T_Orange: FA_rearma_20Rnd_680x51_Tan_Mk400_HV { displayName = "[Ghost] 20Rnd Mk400 HV Tan Mag Orange Tracer"; descriptionShort = "Mk400 HV - 6.8x51 hybrid-case general purpose"; ammo = "FA_b_680_Mk400_HV_T_Orange"; tracersEvery = 4; };
    class FA_rearma_20Rnd_680x51_Tan_Mk400_HV_T_IR: FA_rearma_20Rnd_680x51_Tan_Mk400_HV { displayName = "[Ghost] 20Rnd Mk400 HV Tan Mag IR Tracer"; descriptionShort = "Mk400 HV - 6.8x51 hybrid-case general purpose"; ammo = "FA_b_680_Mk400_HV_T_IR"; tracersEvery = 4; };
    class FA_rearma_20Rnd_680x51_Tan_Mk401_AP: 20Rnd_680x51TVCM_Mag_Tan_F {
        author = QAUTHOR;
        displayName = "[Ghost] 20Rnd Mk401 AP Tan Mag";
        displayNameShort = "Mk401 AP";
        descriptionShort = "Mk401 AP - 6.8x51 tungsten armour piercer";
        ammo = "FA_b_680_Mk401_AP";
        initSpeed = 925;
    };
    class FA_rearma_20Rnd_680x51_Tan_Mk401_AP_T_Red: FA_rearma_20Rnd_680x51_Tan_Mk401_AP { displayName = "[Ghost] 20Rnd Mk401 AP Tan Mag Red Tracer"; descriptionShort = "Mk401 AP - 6.8x51 tungsten armour piercer"; ammo = "FA_b_680_Mk401_AP_T_Red"; tracersEvery = 4; };
    class FA_rearma_20Rnd_680x51_Tan_Mk401_AP_T_Yellow: FA_rearma_20Rnd_680x51_Tan_Mk401_AP { displayName = "[Ghost] 20Rnd Mk401 AP Tan Mag Yellow Tracer"; descriptionShort = "Mk401 AP - 6.8x51 tungsten armour piercer"; ammo = "FA_b_680_Mk401_AP_T_Yellow"; tracersEvery = 4; };
    class FA_rearma_20Rnd_680x51_Tan_Mk401_AP_T_Green: FA_rearma_20Rnd_680x51_Tan_Mk401_AP { displayName = "[Ghost] 20Rnd Mk401 AP Tan Mag Green Tracer"; descriptionShort = "Mk401 AP - 6.8x51 tungsten armour piercer"; ammo = "FA_b_680_Mk401_AP_T_Green"; tracersEvery = 4; };
    class FA_rearma_20Rnd_680x51_Tan_Mk401_AP_T_White: FA_rearma_20Rnd_680x51_Tan_Mk401_AP { displayName = "[Ghost] 20Rnd Mk401 AP Tan Mag White Tracer"; descriptionShort = "Mk401 AP - 6.8x51 tungsten armour piercer"; ammo = "FA_b_680_Mk401_AP_T_White"; tracersEvery = 4; };
    class FA_rearma_20Rnd_680x51_Tan_Mk401_AP_T_Blue: FA_rearma_20Rnd_680x51_Tan_Mk401_AP { displayName = "[Ghost] 20Rnd Mk401 AP Tan Mag Blue Tracer"; descriptionShort = "Mk401 AP - 6.8x51 tungsten armour piercer"; ammo = "FA_b_680_Mk401_AP_T_Blue"; tracersEvery = 4; };
    class FA_rearma_20Rnd_680x51_Tan_Mk401_AP_T_Orange: FA_rearma_20Rnd_680x51_Tan_Mk401_AP { displayName = "[Ghost] 20Rnd Mk401 AP Tan Mag Orange Tracer"; descriptionShort = "Mk401 AP - 6.8x51 tungsten armour piercer"; ammo = "FA_b_680_Mk401_AP_T_Orange"; tracersEvery = 4; };
    class FA_rearma_20Rnd_680x51_Tan_Mk401_AP_T_IR: FA_rearma_20Rnd_680x51_Tan_Mk401_AP { displayName = "[Ghost] 20Rnd Mk401 AP Tan Mag IR Tracer"; descriptionShort = "Mk401 AP - 6.8x51 tungsten armour piercer"; ammo = "FA_b_680_Mk401_AP_T_IR"; tracersEvery = 4; };
    class FA_rearma_20Rnd_680x51_Tan_Mk402_PAB: 20Rnd_680x51TVCM_Mag_Tan_F {
        author = QAUTHOR;
        displayName = "[Ghost] 20Rnd Mk402 PAB Tan Mag";
        displayNameShort = "Mk402 PAB";
        descriptionShort = "Mk402 PAB airburst, counter-UAS";
        ammo = "FA_b_680_Mk402_PAB";
        initSpeed = 935;
    };
    class FA_rearma_20Rnd_680x51_Tan_Mk402_PAB_T_Red: FA_rearma_20Rnd_680x51_Tan_Mk402_PAB { displayName = "[Ghost] 20Rnd Mk402 PAB Tan Mag Red Tracer"; descriptionShort = "Mk402 PAB airburst, counter-UAS"; ammo = "FA_b_680_Mk402_PAB_T_Red"; tracersEvery = 4; };
    class FA_rearma_20Rnd_680x51_Tan_Mk402_PAB_T_Yellow: FA_rearma_20Rnd_680x51_Tan_Mk402_PAB { displayName = "[Ghost] 20Rnd Mk402 PAB Tan Mag Yellow Tracer"; descriptionShort = "Mk402 PAB airburst, counter-UAS"; ammo = "FA_b_680_Mk402_PAB_T_Yellow"; tracersEvery = 4; };
    class FA_rearma_20Rnd_680x51_Tan_Mk402_PAB_T_Green: FA_rearma_20Rnd_680x51_Tan_Mk402_PAB { displayName = "[Ghost] 20Rnd Mk402 PAB Tan Mag Green Tracer"; descriptionShort = "Mk402 PAB airburst, counter-UAS"; ammo = "FA_b_680_Mk402_PAB_T_Green"; tracersEvery = 4; };
    class FA_rearma_20Rnd_680x51_Tan_Mk402_PAB_T_White: FA_rearma_20Rnd_680x51_Tan_Mk402_PAB { displayName = "[Ghost] 20Rnd Mk402 PAB Tan Mag White Tracer"; descriptionShort = "Mk402 PAB airburst, counter-UAS"; ammo = "FA_b_680_Mk402_PAB_T_White"; tracersEvery = 4; };
    class FA_rearma_20Rnd_680x51_Tan_Mk402_PAB_T_Blue: FA_rearma_20Rnd_680x51_Tan_Mk402_PAB { displayName = "[Ghost] 20Rnd Mk402 PAB Tan Mag Blue Tracer"; descriptionShort = "Mk402 PAB airburst, counter-UAS"; ammo = "FA_b_680_Mk402_PAB_T_Blue"; tracersEvery = 4; };
    class FA_rearma_20Rnd_680x51_Tan_Mk402_PAB_T_Orange: FA_rearma_20Rnd_680x51_Tan_Mk402_PAB { displayName = "[Ghost] 20Rnd Mk402 PAB Tan Mag Orange Tracer"; descriptionShort = "Mk402 PAB airburst, counter-UAS"; ammo = "FA_b_680_Mk402_PAB_T_Orange"; tracersEvery = 4; };
    class FA_rearma_20Rnd_680x51_Tan_Mk402_PAB_T_IR: FA_rearma_20Rnd_680x51_Tan_Mk402_PAB { displayName = "[Ghost] 20Rnd Mk402 PAB Tan Mag IR Tracer"; descriptionShort = "Mk402 PAB airburst, counter-UAS"; ammo = "FA_b_680_Mk402_PAB_T_IR"; tracersEvery = 4; };

    // ===== 30Rnd 6.8x51 - M7 / RM277 - body 30Rnd_680x51TVCM_Mag_Blk_F =====
    class FA_rearma_30Rnd_680x51_Mk400_HV: 30Rnd_680x51TVCM_Mag_Blk_F {
        author = QAUTHOR;
        displayName = "[Ghost] 30Rnd Mk400 HV";
        displayNameShort = "Mk400 HV";
        descriptionShort = "Mk400 HV - 6.8x51 hybrid-case general purpose";
        ammo = "FA_b_680_Mk400_HV";
        initSpeed = 950;
    };
    class FA_rearma_30Rnd_680x51_Mk400_HV_T_Red: FA_rearma_30Rnd_680x51_Mk400_HV { displayName = "[Ghost] 30Rnd Mk400 HV Red Tracer"; descriptionShort = "Mk400 HV - 6.8x51 hybrid-case general purpose"; ammo = "FA_b_680_Mk400_HV_T_Red"; tracersEvery = 4; };
    class FA_rearma_30Rnd_680x51_Mk400_HV_T_Yellow: FA_rearma_30Rnd_680x51_Mk400_HV { displayName = "[Ghost] 30Rnd Mk400 HV Yellow Tracer"; descriptionShort = "Mk400 HV - 6.8x51 hybrid-case general purpose"; ammo = "FA_b_680_Mk400_HV_T_Yellow"; tracersEvery = 4; };
    class FA_rearma_30Rnd_680x51_Mk400_HV_T_Green: FA_rearma_30Rnd_680x51_Mk400_HV { displayName = "[Ghost] 30Rnd Mk400 HV Green Tracer"; descriptionShort = "Mk400 HV - 6.8x51 hybrid-case general purpose"; ammo = "FA_b_680_Mk400_HV_T_Green"; tracersEvery = 4; };
    class FA_rearma_30Rnd_680x51_Mk400_HV_T_White: FA_rearma_30Rnd_680x51_Mk400_HV { displayName = "[Ghost] 30Rnd Mk400 HV White Tracer"; descriptionShort = "Mk400 HV - 6.8x51 hybrid-case general purpose"; ammo = "FA_b_680_Mk400_HV_T_White"; tracersEvery = 4; };
    class FA_rearma_30Rnd_680x51_Mk400_HV_T_Blue: FA_rearma_30Rnd_680x51_Mk400_HV { displayName = "[Ghost] 30Rnd Mk400 HV Blue Tracer"; descriptionShort = "Mk400 HV - 6.8x51 hybrid-case general purpose"; ammo = "FA_b_680_Mk400_HV_T_Blue"; tracersEvery = 4; };
    class FA_rearma_30Rnd_680x51_Mk400_HV_T_Orange: FA_rearma_30Rnd_680x51_Mk400_HV { displayName = "[Ghost] 30Rnd Mk400 HV Orange Tracer"; descriptionShort = "Mk400 HV - 6.8x51 hybrid-case general purpose"; ammo = "FA_b_680_Mk400_HV_T_Orange"; tracersEvery = 4; };
    class FA_rearma_30Rnd_680x51_Mk400_HV_T_IR: FA_rearma_30Rnd_680x51_Mk400_HV { displayName = "[Ghost] 30Rnd Mk400 HV IR Tracer"; descriptionShort = "Mk400 HV - 6.8x51 hybrid-case general purpose"; ammo = "FA_b_680_Mk400_HV_T_IR"; tracersEvery = 4; };
    class FA_rearma_30Rnd_680x51_Mk401_AP: 30Rnd_680x51TVCM_Mag_Blk_F {
        author = QAUTHOR;
        displayName = "[Ghost] 30Rnd Mk401 AP";
        displayNameShort = "Mk401 AP";
        descriptionShort = "Mk401 AP - 6.8x51 tungsten armour piercer";
        ammo = "FA_b_680_Mk401_AP";
        initSpeed = 925;
    };
    class FA_rearma_30Rnd_680x51_Mk401_AP_T_Red: FA_rearma_30Rnd_680x51_Mk401_AP { displayName = "[Ghost] 30Rnd Mk401 AP Red Tracer"; descriptionShort = "Mk401 AP - 6.8x51 tungsten armour piercer"; ammo = "FA_b_680_Mk401_AP_T_Red"; tracersEvery = 4; };
    class FA_rearma_30Rnd_680x51_Mk401_AP_T_Yellow: FA_rearma_30Rnd_680x51_Mk401_AP { displayName = "[Ghost] 30Rnd Mk401 AP Yellow Tracer"; descriptionShort = "Mk401 AP - 6.8x51 tungsten armour piercer"; ammo = "FA_b_680_Mk401_AP_T_Yellow"; tracersEvery = 4; };
    class FA_rearma_30Rnd_680x51_Mk401_AP_T_Green: FA_rearma_30Rnd_680x51_Mk401_AP { displayName = "[Ghost] 30Rnd Mk401 AP Green Tracer"; descriptionShort = "Mk401 AP - 6.8x51 tungsten armour piercer"; ammo = "FA_b_680_Mk401_AP_T_Green"; tracersEvery = 4; };
    class FA_rearma_30Rnd_680x51_Mk401_AP_T_White: FA_rearma_30Rnd_680x51_Mk401_AP { displayName = "[Ghost] 30Rnd Mk401 AP White Tracer"; descriptionShort = "Mk401 AP - 6.8x51 tungsten armour piercer"; ammo = "FA_b_680_Mk401_AP_T_White"; tracersEvery = 4; };
    class FA_rearma_30Rnd_680x51_Mk401_AP_T_Blue: FA_rearma_30Rnd_680x51_Mk401_AP { displayName = "[Ghost] 30Rnd Mk401 AP Blue Tracer"; descriptionShort = "Mk401 AP - 6.8x51 tungsten armour piercer"; ammo = "FA_b_680_Mk401_AP_T_Blue"; tracersEvery = 4; };
    class FA_rearma_30Rnd_680x51_Mk401_AP_T_Orange: FA_rearma_30Rnd_680x51_Mk401_AP { displayName = "[Ghost] 30Rnd Mk401 AP Orange Tracer"; descriptionShort = "Mk401 AP - 6.8x51 tungsten armour piercer"; ammo = "FA_b_680_Mk401_AP_T_Orange"; tracersEvery = 4; };
    class FA_rearma_30Rnd_680x51_Mk401_AP_T_IR: FA_rearma_30Rnd_680x51_Mk401_AP { displayName = "[Ghost] 30Rnd Mk401 AP IR Tracer"; descriptionShort = "Mk401 AP - 6.8x51 tungsten armour piercer"; ammo = "FA_b_680_Mk401_AP_T_IR"; tracersEvery = 4; };
    class FA_rearma_30Rnd_680x51_Mk402_PAB: 30Rnd_680x51TVCM_Mag_Blk_F {
        author = QAUTHOR;
        displayName = "[Ghost] 30Rnd Mk402 PAB";
        displayNameShort = "Mk402 PAB";
        descriptionShort = "Mk402 PAB airburst, counter-UAS";
        ammo = "FA_b_680_Mk402_PAB";
        initSpeed = 935;
    };
    class FA_rearma_30Rnd_680x51_Mk402_PAB_T_Red: FA_rearma_30Rnd_680x51_Mk402_PAB { displayName = "[Ghost] 30Rnd Mk402 PAB Red Tracer"; descriptionShort = "Mk402 PAB airburst, counter-UAS"; ammo = "FA_b_680_Mk402_PAB_T_Red"; tracersEvery = 4; };
    class FA_rearma_30Rnd_680x51_Mk402_PAB_T_Yellow: FA_rearma_30Rnd_680x51_Mk402_PAB { displayName = "[Ghost] 30Rnd Mk402 PAB Yellow Tracer"; descriptionShort = "Mk402 PAB airburst, counter-UAS"; ammo = "FA_b_680_Mk402_PAB_T_Yellow"; tracersEvery = 4; };
    class FA_rearma_30Rnd_680x51_Mk402_PAB_T_Green: FA_rearma_30Rnd_680x51_Mk402_PAB { displayName = "[Ghost] 30Rnd Mk402 PAB Green Tracer"; descriptionShort = "Mk402 PAB airburst, counter-UAS"; ammo = "FA_b_680_Mk402_PAB_T_Green"; tracersEvery = 4; };
    class FA_rearma_30Rnd_680x51_Mk402_PAB_T_White: FA_rearma_30Rnd_680x51_Mk402_PAB { displayName = "[Ghost] 30Rnd Mk402 PAB White Tracer"; descriptionShort = "Mk402 PAB airburst, counter-UAS"; ammo = "FA_b_680_Mk402_PAB_T_White"; tracersEvery = 4; };
    class FA_rearma_30Rnd_680x51_Mk402_PAB_T_Blue: FA_rearma_30Rnd_680x51_Mk402_PAB { displayName = "[Ghost] 30Rnd Mk402 PAB Blue Tracer"; descriptionShort = "Mk402 PAB airburst, counter-UAS"; ammo = "FA_b_680_Mk402_PAB_T_Blue"; tracersEvery = 4; };
    class FA_rearma_30Rnd_680x51_Mk402_PAB_T_Orange: FA_rearma_30Rnd_680x51_Mk402_PAB { displayName = "[Ghost] 30Rnd Mk402 PAB Orange Tracer"; descriptionShort = "Mk402 PAB airburst, counter-UAS"; ammo = "FA_b_680_Mk402_PAB_T_Orange"; tracersEvery = 4; };
    class FA_rearma_30Rnd_680x51_Mk402_PAB_T_IR: FA_rearma_30Rnd_680x51_Mk402_PAB { displayName = "[Ghost] 30Rnd Mk402 PAB IR Tracer"; descriptionShort = "Mk402 PAB airburst, counter-UAS"; ammo = "FA_b_680_Mk402_PAB_T_IR"; tracersEvery = 4; };

    // ===== 30Rnd 6.8x51 tan - M7 / RM277 - body 30Rnd_680x51TVCM_Mag_Tan_F =====
    class FA_rearma_30Rnd_680x51_Tan_Mk400_HV: 30Rnd_680x51TVCM_Mag_Tan_F {
        author = QAUTHOR;
        displayName = "[Ghost] 30Rnd Mk400 HV Tan Mag";
        displayNameShort = "Mk400 HV";
        descriptionShort = "Mk400 HV - 6.8x51 hybrid-case general purpose";
        ammo = "FA_b_680_Mk400_HV";
        initSpeed = 950;
    };
    class FA_rearma_30Rnd_680x51_Tan_Mk400_HV_T_Red: FA_rearma_30Rnd_680x51_Tan_Mk400_HV { displayName = "[Ghost] 30Rnd Mk400 HV Tan Mag Red Tracer"; descriptionShort = "Mk400 HV - 6.8x51 hybrid-case general purpose"; ammo = "FA_b_680_Mk400_HV_T_Red"; tracersEvery = 4; };
    class FA_rearma_30Rnd_680x51_Tan_Mk400_HV_T_Yellow: FA_rearma_30Rnd_680x51_Tan_Mk400_HV { displayName = "[Ghost] 30Rnd Mk400 HV Tan Mag Yellow Tracer"; descriptionShort = "Mk400 HV - 6.8x51 hybrid-case general purpose"; ammo = "FA_b_680_Mk400_HV_T_Yellow"; tracersEvery = 4; };
    class FA_rearma_30Rnd_680x51_Tan_Mk400_HV_T_Green: FA_rearma_30Rnd_680x51_Tan_Mk400_HV { displayName = "[Ghost] 30Rnd Mk400 HV Tan Mag Green Tracer"; descriptionShort = "Mk400 HV - 6.8x51 hybrid-case general purpose"; ammo = "FA_b_680_Mk400_HV_T_Green"; tracersEvery = 4; };
    class FA_rearma_30Rnd_680x51_Tan_Mk400_HV_T_White: FA_rearma_30Rnd_680x51_Tan_Mk400_HV { displayName = "[Ghost] 30Rnd Mk400 HV Tan Mag White Tracer"; descriptionShort = "Mk400 HV - 6.8x51 hybrid-case general purpose"; ammo = "FA_b_680_Mk400_HV_T_White"; tracersEvery = 4; };
    class FA_rearma_30Rnd_680x51_Tan_Mk400_HV_T_Blue: FA_rearma_30Rnd_680x51_Tan_Mk400_HV { displayName = "[Ghost] 30Rnd Mk400 HV Tan Mag Blue Tracer"; descriptionShort = "Mk400 HV - 6.8x51 hybrid-case general purpose"; ammo = "FA_b_680_Mk400_HV_T_Blue"; tracersEvery = 4; };
    class FA_rearma_30Rnd_680x51_Tan_Mk400_HV_T_Orange: FA_rearma_30Rnd_680x51_Tan_Mk400_HV { displayName = "[Ghost] 30Rnd Mk400 HV Tan Mag Orange Tracer"; descriptionShort = "Mk400 HV - 6.8x51 hybrid-case general purpose"; ammo = "FA_b_680_Mk400_HV_T_Orange"; tracersEvery = 4; };
    class FA_rearma_30Rnd_680x51_Tan_Mk400_HV_T_IR: FA_rearma_30Rnd_680x51_Tan_Mk400_HV { displayName = "[Ghost] 30Rnd Mk400 HV Tan Mag IR Tracer"; descriptionShort = "Mk400 HV - 6.8x51 hybrid-case general purpose"; ammo = "FA_b_680_Mk400_HV_T_IR"; tracersEvery = 4; };
    class FA_rearma_30Rnd_680x51_Tan_Mk401_AP: 30Rnd_680x51TVCM_Mag_Tan_F {
        author = QAUTHOR;
        displayName = "[Ghost] 30Rnd Mk401 AP Tan Mag";
        displayNameShort = "Mk401 AP";
        descriptionShort = "Mk401 AP - 6.8x51 tungsten armour piercer";
        ammo = "FA_b_680_Mk401_AP";
        initSpeed = 925;
    };
    class FA_rearma_30Rnd_680x51_Tan_Mk401_AP_T_Red: FA_rearma_30Rnd_680x51_Tan_Mk401_AP { displayName = "[Ghost] 30Rnd Mk401 AP Tan Mag Red Tracer"; descriptionShort = "Mk401 AP - 6.8x51 tungsten armour piercer"; ammo = "FA_b_680_Mk401_AP_T_Red"; tracersEvery = 4; };
    class FA_rearma_30Rnd_680x51_Tan_Mk401_AP_T_Yellow: FA_rearma_30Rnd_680x51_Tan_Mk401_AP { displayName = "[Ghost] 30Rnd Mk401 AP Tan Mag Yellow Tracer"; descriptionShort = "Mk401 AP - 6.8x51 tungsten armour piercer"; ammo = "FA_b_680_Mk401_AP_T_Yellow"; tracersEvery = 4; };
    class FA_rearma_30Rnd_680x51_Tan_Mk401_AP_T_Green: FA_rearma_30Rnd_680x51_Tan_Mk401_AP { displayName = "[Ghost] 30Rnd Mk401 AP Tan Mag Green Tracer"; descriptionShort = "Mk401 AP - 6.8x51 tungsten armour piercer"; ammo = "FA_b_680_Mk401_AP_T_Green"; tracersEvery = 4; };
    class FA_rearma_30Rnd_680x51_Tan_Mk401_AP_T_White: FA_rearma_30Rnd_680x51_Tan_Mk401_AP { displayName = "[Ghost] 30Rnd Mk401 AP Tan Mag White Tracer"; descriptionShort = "Mk401 AP - 6.8x51 tungsten armour piercer"; ammo = "FA_b_680_Mk401_AP_T_White"; tracersEvery = 4; };
    class FA_rearma_30Rnd_680x51_Tan_Mk401_AP_T_Blue: FA_rearma_30Rnd_680x51_Tan_Mk401_AP { displayName = "[Ghost] 30Rnd Mk401 AP Tan Mag Blue Tracer"; descriptionShort = "Mk401 AP - 6.8x51 tungsten armour piercer"; ammo = "FA_b_680_Mk401_AP_T_Blue"; tracersEvery = 4; };
    class FA_rearma_30Rnd_680x51_Tan_Mk401_AP_T_Orange: FA_rearma_30Rnd_680x51_Tan_Mk401_AP { displayName = "[Ghost] 30Rnd Mk401 AP Tan Mag Orange Tracer"; descriptionShort = "Mk401 AP - 6.8x51 tungsten armour piercer"; ammo = "FA_b_680_Mk401_AP_T_Orange"; tracersEvery = 4; };
    class FA_rearma_30Rnd_680x51_Tan_Mk401_AP_T_IR: FA_rearma_30Rnd_680x51_Tan_Mk401_AP { displayName = "[Ghost] 30Rnd Mk401 AP Tan Mag IR Tracer"; descriptionShort = "Mk401 AP - 6.8x51 tungsten armour piercer"; ammo = "FA_b_680_Mk401_AP_T_IR"; tracersEvery = 4; };
    class FA_rearma_30Rnd_680x51_Tan_Mk402_PAB: 30Rnd_680x51TVCM_Mag_Tan_F {
        author = QAUTHOR;
        displayName = "[Ghost] 30Rnd Mk402 PAB Tan Mag";
        displayNameShort = "Mk402 PAB";
        descriptionShort = "Mk402 PAB airburst, counter-UAS";
        ammo = "FA_b_680_Mk402_PAB";
        initSpeed = 935;
    };
    class FA_rearma_30Rnd_680x51_Tan_Mk402_PAB_T_Red: FA_rearma_30Rnd_680x51_Tan_Mk402_PAB { displayName = "[Ghost] 30Rnd Mk402 PAB Tan Mag Red Tracer"; descriptionShort = "Mk402 PAB airburst, counter-UAS"; ammo = "FA_b_680_Mk402_PAB_T_Red"; tracersEvery = 4; };
    class FA_rearma_30Rnd_680x51_Tan_Mk402_PAB_T_Yellow: FA_rearma_30Rnd_680x51_Tan_Mk402_PAB { displayName = "[Ghost] 30Rnd Mk402 PAB Tan Mag Yellow Tracer"; descriptionShort = "Mk402 PAB airburst, counter-UAS"; ammo = "FA_b_680_Mk402_PAB_T_Yellow"; tracersEvery = 4; };
    class FA_rearma_30Rnd_680x51_Tan_Mk402_PAB_T_Green: FA_rearma_30Rnd_680x51_Tan_Mk402_PAB { displayName = "[Ghost] 30Rnd Mk402 PAB Tan Mag Green Tracer"; descriptionShort = "Mk402 PAB airburst, counter-UAS"; ammo = "FA_b_680_Mk402_PAB_T_Green"; tracersEvery = 4; };
    class FA_rearma_30Rnd_680x51_Tan_Mk402_PAB_T_White: FA_rearma_30Rnd_680x51_Tan_Mk402_PAB { displayName = "[Ghost] 30Rnd Mk402 PAB Tan Mag White Tracer"; descriptionShort = "Mk402 PAB airburst, counter-UAS"; ammo = "FA_b_680_Mk402_PAB_T_White"; tracersEvery = 4; };
    class FA_rearma_30Rnd_680x51_Tan_Mk402_PAB_T_Blue: FA_rearma_30Rnd_680x51_Tan_Mk402_PAB { displayName = "[Ghost] 30Rnd Mk402 PAB Tan Mag Blue Tracer"; descriptionShort = "Mk402 PAB airburst, counter-UAS"; ammo = "FA_b_680_Mk402_PAB_T_Blue"; tracersEvery = 4; };
    class FA_rearma_30Rnd_680x51_Tan_Mk402_PAB_T_Orange: FA_rearma_30Rnd_680x51_Tan_Mk402_PAB { displayName = "[Ghost] 30Rnd Mk402 PAB Tan Mag Orange Tracer"; descriptionShort = "Mk402 PAB airburst, counter-UAS"; ammo = "FA_b_680_Mk402_PAB_T_Orange"; tracersEvery = 4; };
    class FA_rearma_30Rnd_680x51_Tan_Mk402_PAB_T_IR: FA_rearma_30Rnd_680x51_Tan_Mk402_PAB { displayName = "[Ghost] 30Rnd Mk402 PAB Tan Mag IR Tracer"; descriptionShort = "Mk402 PAB airburst, counter-UAS"; ammo = "FA_b_680_Mk402_PAB_T_IR"; tracersEvery = 4; };

    // ===== 50Rnd 6.8x51 drum - RM277 AR - body 50Rnd_680x51TVCM_Drum_F =====
    class FA_rearma_50Rnd_680x51_Mk400_HV: 50Rnd_680x51TVCM_Drum_F {
        author = QAUTHOR;
        displayName = "[Ghost] 50Rnd Mk400 HV";
        displayNameShort = "Mk400 HV";
        descriptionShort = "Mk400 HV - 6.8x51 hybrid-case general purpose";
        ammo = "FA_b_680_Mk400_HV";
        initSpeed = 950;
    };
    class FA_rearma_50Rnd_680x51_Mk400_HV_T_Red: FA_rearma_50Rnd_680x51_Mk400_HV { displayName = "[Ghost] 50Rnd Mk400 HV Red Tracer"; descriptionShort = "Mk400 HV - 6.8x51 hybrid-case general purpose"; ammo = "FA_b_680_Mk400_HV_T_Red"; tracersEvery = 4; };
    class FA_rearma_50Rnd_680x51_Mk400_HV_T_Yellow: FA_rearma_50Rnd_680x51_Mk400_HV { displayName = "[Ghost] 50Rnd Mk400 HV Yellow Tracer"; descriptionShort = "Mk400 HV - 6.8x51 hybrid-case general purpose"; ammo = "FA_b_680_Mk400_HV_T_Yellow"; tracersEvery = 4; };
    class FA_rearma_50Rnd_680x51_Mk400_HV_T_Green: FA_rearma_50Rnd_680x51_Mk400_HV { displayName = "[Ghost] 50Rnd Mk400 HV Green Tracer"; descriptionShort = "Mk400 HV - 6.8x51 hybrid-case general purpose"; ammo = "FA_b_680_Mk400_HV_T_Green"; tracersEvery = 4; };
    class FA_rearma_50Rnd_680x51_Mk400_HV_T_White: FA_rearma_50Rnd_680x51_Mk400_HV { displayName = "[Ghost] 50Rnd Mk400 HV White Tracer"; descriptionShort = "Mk400 HV - 6.8x51 hybrid-case general purpose"; ammo = "FA_b_680_Mk400_HV_T_White"; tracersEvery = 4; };
    class FA_rearma_50Rnd_680x51_Mk400_HV_T_Blue: FA_rearma_50Rnd_680x51_Mk400_HV { displayName = "[Ghost] 50Rnd Mk400 HV Blue Tracer"; descriptionShort = "Mk400 HV - 6.8x51 hybrid-case general purpose"; ammo = "FA_b_680_Mk400_HV_T_Blue"; tracersEvery = 4; };
    class FA_rearma_50Rnd_680x51_Mk400_HV_T_Orange: FA_rearma_50Rnd_680x51_Mk400_HV { displayName = "[Ghost] 50Rnd Mk400 HV Orange Tracer"; descriptionShort = "Mk400 HV - 6.8x51 hybrid-case general purpose"; ammo = "FA_b_680_Mk400_HV_T_Orange"; tracersEvery = 4; };
    class FA_rearma_50Rnd_680x51_Mk400_HV_T_IR: FA_rearma_50Rnd_680x51_Mk400_HV { displayName = "[Ghost] 50Rnd Mk400 HV IR Tracer"; descriptionShort = "Mk400 HV - 6.8x51 hybrid-case general purpose"; ammo = "FA_b_680_Mk400_HV_T_IR"; tracersEvery = 4; };
    class FA_rearma_50Rnd_680x51_Mk401_AP: 50Rnd_680x51TVCM_Drum_F {
        author = QAUTHOR;
        displayName = "[Ghost] 50Rnd Mk401 AP";
        displayNameShort = "Mk401 AP";
        descriptionShort = "Mk401 AP - 6.8x51 tungsten armour piercer";
        ammo = "FA_b_680_Mk401_AP";
        initSpeed = 925;
    };
    class FA_rearma_50Rnd_680x51_Mk401_AP_T_Red: FA_rearma_50Rnd_680x51_Mk401_AP { displayName = "[Ghost] 50Rnd Mk401 AP Red Tracer"; descriptionShort = "Mk401 AP - 6.8x51 tungsten armour piercer"; ammo = "FA_b_680_Mk401_AP_T_Red"; tracersEvery = 4; };
    class FA_rearma_50Rnd_680x51_Mk401_AP_T_Yellow: FA_rearma_50Rnd_680x51_Mk401_AP { displayName = "[Ghost] 50Rnd Mk401 AP Yellow Tracer"; descriptionShort = "Mk401 AP - 6.8x51 tungsten armour piercer"; ammo = "FA_b_680_Mk401_AP_T_Yellow"; tracersEvery = 4; };
    class FA_rearma_50Rnd_680x51_Mk401_AP_T_Green: FA_rearma_50Rnd_680x51_Mk401_AP { displayName = "[Ghost] 50Rnd Mk401 AP Green Tracer"; descriptionShort = "Mk401 AP - 6.8x51 tungsten armour piercer"; ammo = "FA_b_680_Mk401_AP_T_Green"; tracersEvery = 4; };
    class FA_rearma_50Rnd_680x51_Mk401_AP_T_White: FA_rearma_50Rnd_680x51_Mk401_AP { displayName = "[Ghost] 50Rnd Mk401 AP White Tracer"; descriptionShort = "Mk401 AP - 6.8x51 tungsten armour piercer"; ammo = "FA_b_680_Mk401_AP_T_White"; tracersEvery = 4; };
    class FA_rearma_50Rnd_680x51_Mk401_AP_T_Blue: FA_rearma_50Rnd_680x51_Mk401_AP { displayName = "[Ghost] 50Rnd Mk401 AP Blue Tracer"; descriptionShort = "Mk401 AP - 6.8x51 tungsten armour piercer"; ammo = "FA_b_680_Mk401_AP_T_Blue"; tracersEvery = 4; };
    class FA_rearma_50Rnd_680x51_Mk401_AP_T_Orange: FA_rearma_50Rnd_680x51_Mk401_AP { displayName = "[Ghost] 50Rnd Mk401 AP Orange Tracer"; descriptionShort = "Mk401 AP - 6.8x51 tungsten armour piercer"; ammo = "FA_b_680_Mk401_AP_T_Orange"; tracersEvery = 4; };
    class FA_rearma_50Rnd_680x51_Mk401_AP_T_IR: FA_rearma_50Rnd_680x51_Mk401_AP { displayName = "[Ghost] 50Rnd Mk401 AP IR Tracer"; descriptionShort = "Mk401 AP - 6.8x51 tungsten armour piercer"; ammo = "FA_b_680_Mk401_AP_T_IR"; tracersEvery = 4; };
    class FA_rearma_50Rnd_680x51_Mk402_PAB: 50Rnd_680x51TVCM_Drum_F {
        author = QAUTHOR;
        displayName = "[Ghost] 50Rnd Mk402 PAB";
        displayNameShort = "Mk402 PAB";
        descriptionShort = "Mk402 PAB airburst, counter-UAS";
        ammo = "FA_b_680_Mk402_PAB";
        initSpeed = 935;
    };
    class FA_rearma_50Rnd_680x51_Mk402_PAB_T_Red: FA_rearma_50Rnd_680x51_Mk402_PAB { displayName = "[Ghost] 50Rnd Mk402 PAB Red Tracer"; descriptionShort = "Mk402 PAB airburst, counter-UAS"; ammo = "FA_b_680_Mk402_PAB_T_Red"; tracersEvery = 4; };
    class FA_rearma_50Rnd_680x51_Mk402_PAB_T_Yellow: FA_rearma_50Rnd_680x51_Mk402_PAB { displayName = "[Ghost] 50Rnd Mk402 PAB Yellow Tracer"; descriptionShort = "Mk402 PAB airburst, counter-UAS"; ammo = "FA_b_680_Mk402_PAB_T_Yellow"; tracersEvery = 4; };
    class FA_rearma_50Rnd_680x51_Mk402_PAB_T_Green: FA_rearma_50Rnd_680x51_Mk402_PAB { displayName = "[Ghost] 50Rnd Mk402 PAB Green Tracer"; descriptionShort = "Mk402 PAB airburst, counter-UAS"; ammo = "FA_b_680_Mk402_PAB_T_Green"; tracersEvery = 4; };
    class FA_rearma_50Rnd_680x51_Mk402_PAB_T_White: FA_rearma_50Rnd_680x51_Mk402_PAB { displayName = "[Ghost] 50Rnd Mk402 PAB White Tracer"; descriptionShort = "Mk402 PAB airburst, counter-UAS"; ammo = "FA_b_680_Mk402_PAB_T_White"; tracersEvery = 4; };
    class FA_rearma_50Rnd_680x51_Mk402_PAB_T_Blue: FA_rearma_50Rnd_680x51_Mk402_PAB { displayName = "[Ghost] 50Rnd Mk402 PAB Blue Tracer"; descriptionShort = "Mk402 PAB airburst, counter-UAS"; ammo = "FA_b_680_Mk402_PAB_T_Blue"; tracersEvery = 4; };
    class FA_rearma_50Rnd_680x51_Mk402_PAB_T_Orange: FA_rearma_50Rnd_680x51_Mk402_PAB { displayName = "[Ghost] 50Rnd Mk402 PAB Orange Tracer"; descriptionShort = "Mk402 PAB airburst, counter-UAS"; ammo = "FA_b_680_Mk402_PAB_T_Orange"; tracersEvery = 4; };
    class FA_rearma_50Rnd_680x51_Mk402_PAB_T_IR: FA_rearma_50Rnd_680x51_Mk402_PAB { displayName = "[Ghost] 50Rnd Mk402 PAB IR Tracer"; descriptionShort = "Mk402 PAB airburst, counter-UAS"; ammo = "FA_b_680_Mk402_PAB_T_IR"; tracersEvery = 4; };

    // ===== 100Rnd 6.8x51 belt - M250 - body 100Rnd_680x51_Mag =====
    class FA_rearma_100Rnd_680x51_Mk400_HV: 100Rnd_680x51_Mag {
        author = QAUTHOR;
        displayName = "[Ghost] 100Rnd Mk400 HV";
        displayNameShort = "Mk400 HV";
        descriptionShort = "Mk400 HV - 6.8x51 hybrid-case general purpose";
        ammo = "FA_b_680_Mk400_HV";
        initSpeed = 950;
    };
    class FA_rearma_100Rnd_680x51_Mk400_HV_T_Red: FA_rearma_100Rnd_680x51_Mk400_HV { displayName = "[Ghost] 100Rnd Mk400 HV Red Tracer"; descriptionShort = "Mk400 HV - 6.8x51 hybrid-case general purpose"; ammo = "FA_b_680_Mk400_HV_T_Red"; tracersEvery = 4; };
    class FA_rearma_100Rnd_680x51_Mk400_HV_T_Yellow: FA_rearma_100Rnd_680x51_Mk400_HV { displayName = "[Ghost] 100Rnd Mk400 HV Yellow Tracer"; descriptionShort = "Mk400 HV - 6.8x51 hybrid-case general purpose"; ammo = "FA_b_680_Mk400_HV_T_Yellow"; tracersEvery = 4; };
    class FA_rearma_100Rnd_680x51_Mk400_HV_T_Green: FA_rearma_100Rnd_680x51_Mk400_HV { displayName = "[Ghost] 100Rnd Mk400 HV Green Tracer"; descriptionShort = "Mk400 HV - 6.8x51 hybrid-case general purpose"; ammo = "FA_b_680_Mk400_HV_T_Green"; tracersEvery = 4; };
    class FA_rearma_100Rnd_680x51_Mk400_HV_T_White: FA_rearma_100Rnd_680x51_Mk400_HV { displayName = "[Ghost] 100Rnd Mk400 HV White Tracer"; descriptionShort = "Mk400 HV - 6.8x51 hybrid-case general purpose"; ammo = "FA_b_680_Mk400_HV_T_White"; tracersEvery = 4; };
    class FA_rearma_100Rnd_680x51_Mk400_HV_T_Blue: FA_rearma_100Rnd_680x51_Mk400_HV { displayName = "[Ghost] 100Rnd Mk400 HV Blue Tracer"; descriptionShort = "Mk400 HV - 6.8x51 hybrid-case general purpose"; ammo = "FA_b_680_Mk400_HV_T_Blue"; tracersEvery = 4; };
    class FA_rearma_100Rnd_680x51_Mk400_HV_T_Orange: FA_rearma_100Rnd_680x51_Mk400_HV { displayName = "[Ghost] 100Rnd Mk400 HV Orange Tracer"; descriptionShort = "Mk400 HV - 6.8x51 hybrid-case general purpose"; ammo = "FA_b_680_Mk400_HV_T_Orange"; tracersEvery = 4; };
    class FA_rearma_100Rnd_680x51_Mk400_HV_T_IR: FA_rearma_100Rnd_680x51_Mk400_HV { displayName = "[Ghost] 100Rnd Mk400 HV IR Tracer"; descriptionShort = "Mk400 HV - 6.8x51 hybrid-case general purpose"; ammo = "FA_b_680_Mk400_HV_T_IR"; tracersEvery = 4; };
    class FA_rearma_100Rnd_680x51_Mk401_AP: 100Rnd_680x51_Mag {
        author = QAUTHOR;
        displayName = "[Ghost] 100Rnd Mk401 AP";
        displayNameShort = "Mk401 AP";
        descriptionShort = "Mk401 AP - 6.8x51 tungsten armour piercer";
        ammo = "FA_b_680_Mk401_AP";
        initSpeed = 925;
    };
    class FA_rearma_100Rnd_680x51_Mk401_AP_T_Red: FA_rearma_100Rnd_680x51_Mk401_AP { displayName = "[Ghost] 100Rnd Mk401 AP Red Tracer"; descriptionShort = "Mk401 AP - 6.8x51 tungsten armour piercer"; ammo = "FA_b_680_Mk401_AP_T_Red"; tracersEvery = 4; };
    class FA_rearma_100Rnd_680x51_Mk401_AP_T_Yellow: FA_rearma_100Rnd_680x51_Mk401_AP { displayName = "[Ghost] 100Rnd Mk401 AP Yellow Tracer"; descriptionShort = "Mk401 AP - 6.8x51 tungsten armour piercer"; ammo = "FA_b_680_Mk401_AP_T_Yellow"; tracersEvery = 4; };
    class FA_rearma_100Rnd_680x51_Mk401_AP_T_Green: FA_rearma_100Rnd_680x51_Mk401_AP { displayName = "[Ghost] 100Rnd Mk401 AP Green Tracer"; descriptionShort = "Mk401 AP - 6.8x51 tungsten armour piercer"; ammo = "FA_b_680_Mk401_AP_T_Green"; tracersEvery = 4; };
    class FA_rearma_100Rnd_680x51_Mk401_AP_T_White: FA_rearma_100Rnd_680x51_Mk401_AP { displayName = "[Ghost] 100Rnd Mk401 AP White Tracer"; descriptionShort = "Mk401 AP - 6.8x51 tungsten armour piercer"; ammo = "FA_b_680_Mk401_AP_T_White"; tracersEvery = 4; };
    class FA_rearma_100Rnd_680x51_Mk401_AP_T_Blue: FA_rearma_100Rnd_680x51_Mk401_AP { displayName = "[Ghost] 100Rnd Mk401 AP Blue Tracer"; descriptionShort = "Mk401 AP - 6.8x51 tungsten armour piercer"; ammo = "FA_b_680_Mk401_AP_T_Blue"; tracersEvery = 4; };
    class FA_rearma_100Rnd_680x51_Mk401_AP_T_Orange: FA_rearma_100Rnd_680x51_Mk401_AP { displayName = "[Ghost] 100Rnd Mk401 AP Orange Tracer"; descriptionShort = "Mk401 AP - 6.8x51 tungsten armour piercer"; ammo = "FA_b_680_Mk401_AP_T_Orange"; tracersEvery = 4; };
    class FA_rearma_100Rnd_680x51_Mk401_AP_T_IR: FA_rearma_100Rnd_680x51_Mk401_AP { displayName = "[Ghost] 100Rnd Mk401 AP IR Tracer"; descriptionShort = "Mk401 AP - 6.8x51 tungsten armour piercer"; ammo = "FA_b_680_Mk401_AP_T_IR"; tracersEvery = 4; };
    class FA_rearma_100Rnd_680x51_Mk402_PAB: 100Rnd_680x51_Mag {
        author = QAUTHOR;
        displayName = "[Ghost] 100Rnd Mk402 PAB";
        displayNameShort = "Mk402 PAB";
        descriptionShort = "Mk402 PAB airburst, counter-UAS";
        ammo = "FA_b_680_Mk402_PAB";
        initSpeed = 935;
    };
    class FA_rearma_100Rnd_680x51_Mk402_PAB_T_Red: FA_rearma_100Rnd_680x51_Mk402_PAB { displayName = "[Ghost] 100Rnd Mk402 PAB Red Tracer"; descriptionShort = "Mk402 PAB airburst, counter-UAS"; ammo = "FA_b_680_Mk402_PAB_T_Red"; tracersEvery = 4; };
    class FA_rearma_100Rnd_680x51_Mk402_PAB_T_Yellow: FA_rearma_100Rnd_680x51_Mk402_PAB { displayName = "[Ghost] 100Rnd Mk402 PAB Yellow Tracer"; descriptionShort = "Mk402 PAB airburst, counter-UAS"; ammo = "FA_b_680_Mk402_PAB_T_Yellow"; tracersEvery = 4; };
    class FA_rearma_100Rnd_680x51_Mk402_PAB_T_Green: FA_rearma_100Rnd_680x51_Mk402_PAB { displayName = "[Ghost] 100Rnd Mk402 PAB Green Tracer"; descriptionShort = "Mk402 PAB airburst, counter-UAS"; ammo = "FA_b_680_Mk402_PAB_T_Green"; tracersEvery = 4; };
    class FA_rearma_100Rnd_680x51_Mk402_PAB_T_White: FA_rearma_100Rnd_680x51_Mk402_PAB { displayName = "[Ghost] 100Rnd Mk402 PAB White Tracer"; descriptionShort = "Mk402 PAB airburst, counter-UAS"; ammo = "FA_b_680_Mk402_PAB_T_White"; tracersEvery = 4; };
    class FA_rearma_100Rnd_680x51_Mk402_PAB_T_Blue: FA_rearma_100Rnd_680x51_Mk402_PAB { displayName = "[Ghost] 100Rnd Mk402 PAB Blue Tracer"; descriptionShort = "Mk402 PAB airburst, counter-UAS"; ammo = "FA_b_680_Mk402_PAB_T_Blue"; tracersEvery = 4; };
    class FA_rearma_100Rnd_680x51_Mk402_PAB_T_Orange: FA_rearma_100Rnd_680x51_Mk402_PAB { displayName = "[Ghost] 100Rnd Mk402 PAB Orange Tracer"; descriptionShort = "Mk402 PAB airburst, counter-UAS"; ammo = "FA_b_680_Mk402_PAB_T_Orange"; tracersEvery = 4; };
    class FA_rearma_100Rnd_680x51_Mk402_PAB_T_IR: FA_rearma_100Rnd_680x51_Mk402_PAB { displayName = "[Ghost] 100Rnd Mk402 PAB IR Tracer"; descriptionShort = "Mk402 PAB airburst, counter-UAS"; ammo = "FA_b_680_Mk402_PAB_T_IR"; tracersEvery = 4; };

    // ===== 20Rnd 6.8x51 underwater - RM277 UW - body 20Rnd_680x51UW_Mag_F =====
    class FA_rearma_20Rnd_680x51_UW_Mk408_UW: 20Rnd_680x51UW_Mag_F {
        author = QAUTHOR;
        displayName = "[Ghost] 20Rnd Mk408 UW";
        displayNameShort = "Mk408 UW";
        descriptionShort = "Mk408 UW - 6.8x51 underwater dart";
        ammo = "FA_b_680_Mk408_UW";
        initSpeed = 330;
    };

    // ===== 20Rnd 6x38 - NX family - body 20Rnd_6x38_MAG_F =====
    class FA_rearma_20Rnd_6x38_Mk405_HV: 20Rnd_6x38_MAG_F {
        author = QAUTHOR;
        displayName = "[Ghost] 20Rnd Mk405 HV";
        displayNameShort = "Mk405 HV";
        descriptionShort = "Mk405 HV - 6x38 hybrid-case general purpose";
        ammo = "FA_b_6x38_Mk405_HV";
        initSpeed = 930;
    };
    class FA_rearma_20Rnd_6x38_Mk405_HV_T_Red: FA_rearma_20Rnd_6x38_Mk405_HV { displayName = "[Ghost] 20Rnd Mk405 HV Red Tracer"; descriptionShort = "Mk405 HV - 6x38 hybrid-case general purpose"; ammo = "FA_b_6x38_Mk405_HV_T_Red"; tracersEvery = 4; };
    class FA_rearma_20Rnd_6x38_Mk405_HV_T_Yellow: FA_rearma_20Rnd_6x38_Mk405_HV { displayName = "[Ghost] 20Rnd Mk405 HV Yellow Tracer"; descriptionShort = "Mk405 HV - 6x38 hybrid-case general purpose"; ammo = "FA_b_6x38_Mk405_HV_T_Yellow"; tracersEvery = 4; };
    class FA_rearma_20Rnd_6x38_Mk405_HV_T_Green: FA_rearma_20Rnd_6x38_Mk405_HV { displayName = "[Ghost] 20Rnd Mk405 HV Green Tracer"; descriptionShort = "Mk405 HV - 6x38 hybrid-case general purpose"; ammo = "FA_b_6x38_Mk405_HV_T_Green"; tracersEvery = 4; };
    class FA_rearma_20Rnd_6x38_Mk405_HV_T_White: FA_rearma_20Rnd_6x38_Mk405_HV { displayName = "[Ghost] 20Rnd Mk405 HV White Tracer"; descriptionShort = "Mk405 HV - 6x38 hybrid-case general purpose"; ammo = "FA_b_6x38_Mk405_HV_T_White"; tracersEvery = 4; };
    class FA_rearma_20Rnd_6x38_Mk405_HV_T_Blue: FA_rearma_20Rnd_6x38_Mk405_HV { displayName = "[Ghost] 20Rnd Mk405 HV Blue Tracer"; descriptionShort = "Mk405 HV - 6x38 hybrid-case general purpose"; ammo = "FA_b_6x38_Mk405_HV_T_Blue"; tracersEvery = 4; };
    class FA_rearma_20Rnd_6x38_Mk405_HV_T_Orange: FA_rearma_20Rnd_6x38_Mk405_HV { displayName = "[Ghost] 20Rnd Mk405 HV Orange Tracer"; descriptionShort = "Mk405 HV - 6x38 hybrid-case general purpose"; ammo = "FA_b_6x38_Mk405_HV_T_Orange"; tracersEvery = 4; };
    class FA_rearma_20Rnd_6x38_Mk405_HV_T_IR: FA_rearma_20Rnd_6x38_Mk405_HV { displayName = "[Ghost] 20Rnd Mk405 HV IR Tracer"; descriptionShort = "Mk405 HV - 6x38 hybrid-case general purpose"; ammo = "FA_b_6x38_Mk405_HV_T_IR"; tracersEvery = 4; };
    class FA_rearma_20Rnd_6x38_Mk406_AP: 20Rnd_6x38_MAG_F {
        author = QAUTHOR;
        displayName = "[Ghost] 20Rnd Mk406 AP";
        displayNameShort = "Mk406 AP";
        descriptionShort = "Mk406 AP - 6x38 tungsten armour piercer";
        ammo = "FA_b_6x38_Mk406_AP";
        initSpeed = 905;
    };
    class FA_rearma_20Rnd_6x38_Mk406_AP_T_Red: FA_rearma_20Rnd_6x38_Mk406_AP { displayName = "[Ghost] 20Rnd Mk406 AP Red Tracer"; descriptionShort = "Mk406 AP - 6x38 tungsten armour piercer"; ammo = "FA_b_6x38_Mk406_AP_T_Red"; tracersEvery = 4; };
    class FA_rearma_20Rnd_6x38_Mk406_AP_T_Yellow: FA_rearma_20Rnd_6x38_Mk406_AP { displayName = "[Ghost] 20Rnd Mk406 AP Yellow Tracer"; descriptionShort = "Mk406 AP - 6x38 tungsten armour piercer"; ammo = "FA_b_6x38_Mk406_AP_T_Yellow"; tracersEvery = 4; };
    class FA_rearma_20Rnd_6x38_Mk406_AP_T_Green: FA_rearma_20Rnd_6x38_Mk406_AP { displayName = "[Ghost] 20Rnd Mk406 AP Green Tracer"; descriptionShort = "Mk406 AP - 6x38 tungsten armour piercer"; ammo = "FA_b_6x38_Mk406_AP_T_Green"; tracersEvery = 4; };
    class FA_rearma_20Rnd_6x38_Mk406_AP_T_White: FA_rearma_20Rnd_6x38_Mk406_AP { displayName = "[Ghost] 20Rnd Mk406 AP White Tracer"; descriptionShort = "Mk406 AP - 6x38 tungsten armour piercer"; ammo = "FA_b_6x38_Mk406_AP_T_White"; tracersEvery = 4; };
    class FA_rearma_20Rnd_6x38_Mk406_AP_T_Blue: FA_rearma_20Rnd_6x38_Mk406_AP { displayName = "[Ghost] 20Rnd Mk406 AP Blue Tracer"; descriptionShort = "Mk406 AP - 6x38 tungsten armour piercer"; ammo = "FA_b_6x38_Mk406_AP_T_Blue"; tracersEvery = 4; };
    class FA_rearma_20Rnd_6x38_Mk406_AP_T_Orange: FA_rearma_20Rnd_6x38_Mk406_AP { displayName = "[Ghost] 20Rnd Mk406 AP Orange Tracer"; descriptionShort = "Mk406 AP - 6x38 tungsten armour piercer"; ammo = "FA_b_6x38_Mk406_AP_T_Orange"; tracersEvery = 4; };
    class FA_rearma_20Rnd_6x38_Mk406_AP_T_IR: FA_rearma_20Rnd_6x38_Mk406_AP { displayName = "[Ghost] 20Rnd Mk406 AP IR Tracer"; descriptionShort = "Mk406 AP - 6x38 tungsten armour piercer"; ammo = "FA_b_6x38_Mk406_AP_T_IR"; tracersEvery = 4; };
    class FA_rearma_20Rnd_6x38_Mk407_PAB: 20Rnd_6x38_MAG_F {
        author = QAUTHOR;
        displayName = "[Ghost] 20Rnd Mk407 PAB";
        displayNameShort = "Mk407 PAB";
        descriptionShort = "Mk407 PAB airburst, counter-UAS";
        ammo = "FA_b_6x38_Mk407_PAB";
        initSpeed = 915;
    };
    class FA_rearma_20Rnd_6x38_Mk407_PAB_T_Red: FA_rearma_20Rnd_6x38_Mk407_PAB { displayName = "[Ghost] 20Rnd Mk407 PAB Red Tracer"; descriptionShort = "Mk407 PAB airburst, counter-UAS"; ammo = "FA_b_6x38_Mk407_PAB_T_Red"; tracersEvery = 4; };
    class FA_rearma_20Rnd_6x38_Mk407_PAB_T_Yellow: FA_rearma_20Rnd_6x38_Mk407_PAB { displayName = "[Ghost] 20Rnd Mk407 PAB Yellow Tracer"; descriptionShort = "Mk407 PAB airburst, counter-UAS"; ammo = "FA_b_6x38_Mk407_PAB_T_Yellow"; tracersEvery = 4; };
    class FA_rearma_20Rnd_6x38_Mk407_PAB_T_Green: FA_rearma_20Rnd_6x38_Mk407_PAB { displayName = "[Ghost] 20Rnd Mk407 PAB Green Tracer"; descriptionShort = "Mk407 PAB airburst, counter-UAS"; ammo = "FA_b_6x38_Mk407_PAB_T_Green"; tracersEvery = 4; };
    class FA_rearma_20Rnd_6x38_Mk407_PAB_T_White: FA_rearma_20Rnd_6x38_Mk407_PAB { displayName = "[Ghost] 20Rnd Mk407 PAB White Tracer"; descriptionShort = "Mk407 PAB airburst, counter-UAS"; ammo = "FA_b_6x38_Mk407_PAB_T_White"; tracersEvery = 4; };
    class FA_rearma_20Rnd_6x38_Mk407_PAB_T_Blue: FA_rearma_20Rnd_6x38_Mk407_PAB { displayName = "[Ghost] 20Rnd Mk407 PAB Blue Tracer"; descriptionShort = "Mk407 PAB airburst, counter-UAS"; ammo = "FA_b_6x38_Mk407_PAB_T_Blue"; tracersEvery = 4; };
    class FA_rearma_20Rnd_6x38_Mk407_PAB_T_Orange: FA_rearma_20Rnd_6x38_Mk407_PAB { displayName = "[Ghost] 20Rnd Mk407 PAB Orange Tracer"; descriptionShort = "Mk407 PAB airburst, counter-UAS"; ammo = "FA_b_6x38_Mk407_PAB_T_Orange"; tracersEvery = 4; };
    class FA_rearma_20Rnd_6x38_Mk407_PAB_T_IR: FA_rearma_20Rnd_6x38_Mk407_PAB { displayName = "[Ghost] 20Rnd Mk407 PAB IR Tracer"; descriptionShort = "Mk407 PAB airburst, counter-UAS"; ammo = "FA_b_6x38_Mk407_PAB_T_IR"; tracersEvery = 4; };

    // ===== 30Rnd 6x38 PMAG - NX family - body 30Rnd_6x38_PMAG_Blk_F =====
    class FA_rearma_30Rnd_6x38_Mk405_HV: 30Rnd_6x38_PMAG_Blk_F {
        author = QAUTHOR;
        displayName = "[Ghost] 30Rnd Mk405 HV";
        displayNameShort = "Mk405 HV";
        descriptionShort = "Mk405 HV - 6x38 hybrid-case general purpose";
        ammo = "FA_b_6x38_Mk405_HV";
        initSpeed = 930;
    };
    class FA_rearma_30Rnd_6x38_Mk405_HV_T_Red: FA_rearma_30Rnd_6x38_Mk405_HV { displayName = "[Ghost] 30Rnd Mk405 HV Red Tracer"; descriptionShort = "Mk405 HV - 6x38 hybrid-case general purpose"; ammo = "FA_b_6x38_Mk405_HV_T_Red"; tracersEvery = 4; };
    class FA_rearma_30Rnd_6x38_Mk405_HV_T_Yellow: FA_rearma_30Rnd_6x38_Mk405_HV { displayName = "[Ghost] 30Rnd Mk405 HV Yellow Tracer"; descriptionShort = "Mk405 HV - 6x38 hybrid-case general purpose"; ammo = "FA_b_6x38_Mk405_HV_T_Yellow"; tracersEvery = 4; };
    class FA_rearma_30Rnd_6x38_Mk405_HV_T_Green: FA_rearma_30Rnd_6x38_Mk405_HV { displayName = "[Ghost] 30Rnd Mk405 HV Green Tracer"; descriptionShort = "Mk405 HV - 6x38 hybrid-case general purpose"; ammo = "FA_b_6x38_Mk405_HV_T_Green"; tracersEvery = 4; };
    class FA_rearma_30Rnd_6x38_Mk405_HV_T_White: FA_rearma_30Rnd_6x38_Mk405_HV { displayName = "[Ghost] 30Rnd Mk405 HV White Tracer"; descriptionShort = "Mk405 HV - 6x38 hybrid-case general purpose"; ammo = "FA_b_6x38_Mk405_HV_T_White"; tracersEvery = 4; };
    class FA_rearma_30Rnd_6x38_Mk405_HV_T_Blue: FA_rearma_30Rnd_6x38_Mk405_HV { displayName = "[Ghost] 30Rnd Mk405 HV Blue Tracer"; descriptionShort = "Mk405 HV - 6x38 hybrid-case general purpose"; ammo = "FA_b_6x38_Mk405_HV_T_Blue"; tracersEvery = 4; };
    class FA_rearma_30Rnd_6x38_Mk405_HV_T_Orange: FA_rearma_30Rnd_6x38_Mk405_HV { displayName = "[Ghost] 30Rnd Mk405 HV Orange Tracer"; descriptionShort = "Mk405 HV - 6x38 hybrid-case general purpose"; ammo = "FA_b_6x38_Mk405_HV_T_Orange"; tracersEvery = 4; };
    class FA_rearma_30Rnd_6x38_Mk405_HV_T_IR: FA_rearma_30Rnd_6x38_Mk405_HV { displayName = "[Ghost] 30Rnd Mk405 HV IR Tracer"; descriptionShort = "Mk405 HV - 6x38 hybrid-case general purpose"; ammo = "FA_b_6x38_Mk405_HV_T_IR"; tracersEvery = 4; };
    class FA_rearma_30Rnd_6x38_Mk406_AP: 30Rnd_6x38_PMAG_Blk_F {
        author = QAUTHOR;
        displayName = "[Ghost] 30Rnd Mk406 AP";
        displayNameShort = "Mk406 AP";
        descriptionShort = "Mk406 AP - 6x38 tungsten armour piercer";
        ammo = "FA_b_6x38_Mk406_AP";
        initSpeed = 905;
    };
    class FA_rearma_30Rnd_6x38_Mk406_AP_T_Red: FA_rearma_30Rnd_6x38_Mk406_AP { displayName = "[Ghost] 30Rnd Mk406 AP Red Tracer"; descriptionShort = "Mk406 AP - 6x38 tungsten armour piercer"; ammo = "FA_b_6x38_Mk406_AP_T_Red"; tracersEvery = 4; };
    class FA_rearma_30Rnd_6x38_Mk406_AP_T_Yellow: FA_rearma_30Rnd_6x38_Mk406_AP { displayName = "[Ghost] 30Rnd Mk406 AP Yellow Tracer"; descriptionShort = "Mk406 AP - 6x38 tungsten armour piercer"; ammo = "FA_b_6x38_Mk406_AP_T_Yellow"; tracersEvery = 4; };
    class FA_rearma_30Rnd_6x38_Mk406_AP_T_Green: FA_rearma_30Rnd_6x38_Mk406_AP { displayName = "[Ghost] 30Rnd Mk406 AP Green Tracer"; descriptionShort = "Mk406 AP - 6x38 tungsten armour piercer"; ammo = "FA_b_6x38_Mk406_AP_T_Green"; tracersEvery = 4; };
    class FA_rearma_30Rnd_6x38_Mk406_AP_T_White: FA_rearma_30Rnd_6x38_Mk406_AP { displayName = "[Ghost] 30Rnd Mk406 AP White Tracer"; descriptionShort = "Mk406 AP - 6x38 tungsten armour piercer"; ammo = "FA_b_6x38_Mk406_AP_T_White"; tracersEvery = 4; };
    class FA_rearma_30Rnd_6x38_Mk406_AP_T_Blue: FA_rearma_30Rnd_6x38_Mk406_AP { displayName = "[Ghost] 30Rnd Mk406 AP Blue Tracer"; descriptionShort = "Mk406 AP - 6x38 tungsten armour piercer"; ammo = "FA_b_6x38_Mk406_AP_T_Blue"; tracersEvery = 4; };
    class FA_rearma_30Rnd_6x38_Mk406_AP_T_Orange: FA_rearma_30Rnd_6x38_Mk406_AP { displayName = "[Ghost] 30Rnd Mk406 AP Orange Tracer"; descriptionShort = "Mk406 AP - 6x38 tungsten armour piercer"; ammo = "FA_b_6x38_Mk406_AP_T_Orange"; tracersEvery = 4; };
    class FA_rearma_30Rnd_6x38_Mk406_AP_T_IR: FA_rearma_30Rnd_6x38_Mk406_AP { displayName = "[Ghost] 30Rnd Mk406 AP IR Tracer"; descriptionShort = "Mk406 AP - 6x38 tungsten armour piercer"; ammo = "FA_b_6x38_Mk406_AP_T_IR"; tracersEvery = 4; };
    class FA_rearma_30Rnd_6x38_Mk407_PAB: 30Rnd_6x38_PMAG_Blk_F {
        author = QAUTHOR;
        displayName = "[Ghost] 30Rnd Mk407 PAB";
        displayNameShort = "Mk407 PAB";
        descriptionShort = "Mk407 PAB airburst, counter-UAS";
        ammo = "FA_b_6x38_Mk407_PAB";
        initSpeed = 915;
    };
    class FA_rearma_30Rnd_6x38_Mk407_PAB_T_Red: FA_rearma_30Rnd_6x38_Mk407_PAB { displayName = "[Ghost] 30Rnd Mk407 PAB Red Tracer"; descriptionShort = "Mk407 PAB airburst, counter-UAS"; ammo = "FA_b_6x38_Mk407_PAB_T_Red"; tracersEvery = 4; };
    class FA_rearma_30Rnd_6x38_Mk407_PAB_T_Yellow: FA_rearma_30Rnd_6x38_Mk407_PAB { displayName = "[Ghost] 30Rnd Mk407 PAB Yellow Tracer"; descriptionShort = "Mk407 PAB airburst, counter-UAS"; ammo = "FA_b_6x38_Mk407_PAB_T_Yellow"; tracersEvery = 4; };
    class FA_rearma_30Rnd_6x38_Mk407_PAB_T_Green: FA_rearma_30Rnd_6x38_Mk407_PAB { displayName = "[Ghost] 30Rnd Mk407 PAB Green Tracer"; descriptionShort = "Mk407 PAB airburst, counter-UAS"; ammo = "FA_b_6x38_Mk407_PAB_T_Green"; tracersEvery = 4; };
    class FA_rearma_30Rnd_6x38_Mk407_PAB_T_White: FA_rearma_30Rnd_6x38_Mk407_PAB { displayName = "[Ghost] 30Rnd Mk407 PAB White Tracer"; descriptionShort = "Mk407 PAB airburst, counter-UAS"; ammo = "FA_b_6x38_Mk407_PAB_T_White"; tracersEvery = 4; };
    class FA_rearma_30Rnd_6x38_Mk407_PAB_T_Blue: FA_rearma_30Rnd_6x38_Mk407_PAB { displayName = "[Ghost] 30Rnd Mk407 PAB Blue Tracer"; descriptionShort = "Mk407 PAB airburst, counter-UAS"; ammo = "FA_b_6x38_Mk407_PAB_T_Blue"; tracersEvery = 4; };
    class FA_rearma_30Rnd_6x38_Mk407_PAB_T_Orange: FA_rearma_30Rnd_6x38_Mk407_PAB { displayName = "[Ghost] 30Rnd Mk407 PAB Orange Tracer"; descriptionShort = "Mk407 PAB airburst, counter-UAS"; ammo = "FA_b_6x38_Mk407_PAB_T_Orange"; tracersEvery = 4; };
    class FA_rearma_30Rnd_6x38_Mk407_PAB_T_IR: FA_rearma_30Rnd_6x38_Mk407_PAB { displayName = "[Ghost] 30Rnd Mk407 PAB IR Tracer"; descriptionShort = "Mk407 PAB airburst, counter-UAS"; ammo = "FA_b_6x38_Mk407_PAB_T_IR"; tracersEvery = 4; };

    // ===== 30Rnd 6x38 tan PMAG - NX family - body 30Rnd_6x38_PMAG_Tan_F =====
    class FA_rearma_30Rnd_6x38_Tan_Mk405_HV: 30Rnd_6x38_PMAG_Tan_F {
        author = QAUTHOR;
        displayName = "[Ghost] 30Rnd Mk405 HV Tan PMAG";
        displayNameShort = "Mk405 HV";
        descriptionShort = "Mk405 HV - 6x38 hybrid-case general purpose";
        ammo = "FA_b_6x38_Mk405_HV";
        initSpeed = 930;
    };
    class FA_rearma_30Rnd_6x38_Tan_Mk405_HV_T_Red: FA_rearma_30Rnd_6x38_Tan_Mk405_HV { displayName = "[Ghost] 30Rnd Mk405 HV Tan PMAG Red Tracer"; descriptionShort = "Mk405 HV - 6x38 hybrid-case general purpose"; ammo = "FA_b_6x38_Mk405_HV_T_Red"; tracersEvery = 4; };
    class FA_rearma_30Rnd_6x38_Tan_Mk405_HV_T_Yellow: FA_rearma_30Rnd_6x38_Tan_Mk405_HV { displayName = "[Ghost] 30Rnd Mk405 HV Tan PMAG Yellow Tracer"; descriptionShort = "Mk405 HV - 6x38 hybrid-case general purpose"; ammo = "FA_b_6x38_Mk405_HV_T_Yellow"; tracersEvery = 4; };
    class FA_rearma_30Rnd_6x38_Tan_Mk405_HV_T_Green: FA_rearma_30Rnd_6x38_Tan_Mk405_HV { displayName = "[Ghost] 30Rnd Mk405 HV Tan PMAG Green Tracer"; descriptionShort = "Mk405 HV - 6x38 hybrid-case general purpose"; ammo = "FA_b_6x38_Mk405_HV_T_Green"; tracersEvery = 4; };
    class FA_rearma_30Rnd_6x38_Tan_Mk405_HV_T_White: FA_rearma_30Rnd_6x38_Tan_Mk405_HV { displayName = "[Ghost] 30Rnd Mk405 HV Tan PMAG White Tracer"; descriptionShort = "Mk405 HV - 6x38 hybrid-case general purpose"; ammo = "FA_b_6x38_Mk405_HV_T_White"; tracersEvery = 4; };
    class FA_rearma_30Rnd_6x38_Tan_Mk405_HV_T_Blue: FA_rearma_30Rnd_6x38_Tan_Mk405_HV { displayName = "[Ghost] 30Rnd Mk405 HV Tan PMAG Blue Tracer"; descriptionShort = "Mk405 HV - 6x38 hybrid-case general purpose"; ammo = "FA_b_6x38_Mk405_HV_T_Blue"; tracersEvery = 4; };
    class FA_rearma_30Rnd_6x38_Tan_Mk405_HV_T_Orange: FA_rearma_30Rnd_6x38_Tan_Mk405_HV { displayName = "[Ghost] 30Rnd Mk405 HV Tan PMAG Orange Tracer"; descriptionShort = "Mk405 HV - 6x38 hybrid-case general purpose"; ammo = "FA_b_6x38_Mk405_HV_T_Orange"; tracersEvery = 4; };
    class FA_rearma_30Rnd_6x38_Tan_Mk405_HV_T_IR: FA_rearma_30Rnd_6x38_Tan_Mk405_HV { displayName = "[Ghost] 30Rnd Mk405 HV Tan PMAG IR Tracer"; descriptionShort = "Mk405 HV - 6x38 hybrid-case general purpose"; ammo = "FA_b_6x38_Mk405_HV_T_IR"; tracersEvery = 4; };
    class FA_rearma_30Rnd_6x38_Tan_Mk406_AP: 30Rnd_6x38_PMAG_Tan_F {
        author = QAUTHOR;
        displayName = "[Ghost] 30Rnd Mk406 AP Tan PMAG";
        displayNameShort = "Mk406 AP";
        descriptionShort = "Mk406 AP - 6x38 tungsten armour piercer";
        ammo = "FA_b_6x38_Mk406_AP";
        initSpeed = 905;
    };
    class FA_rearma_30Rnd_6x38_Tan_Mk406_AP_T_Red: FA_rearma_30Rnd_6x38_Tan_Mk406_AP { displayName = "[Ghost] 30Rnd Mk406 AP Tan PMAG Red Tracer"; descriptionShort = "Mk406 AP - 6x38 tungsten armour piercer"; ammo = "FA_b_6x38_Mk406_AP_T_Red"; tracersEvery = 4; };
    class FA_rearma_30Rnd_6x38_Tan_Mk406_AP_T_Yellow: FA_rearma_30Rnd_6x38_Tan_Mk406_AP { displayName = "[Ghost] 30Rnd Mk406 AP Tan PMAG Yellow Tracer"; descriptionShort = "Mk406 AP - 6x38 tungsten armour piercer"; ammo = "FA_b_6x38_Mk406_AP_T_Yellow"; tracersEvery = 4; };
    class FA_rearma_30Rnd_6x38_Tan_Mk406_AP_T_Green: FA_rearma_30Rnd_6x38_Tan_Mk406_AP { displayName = "[Ghost] 30Rnd Mk406 AP Tan PMAG Green Tracer"; descriptionShort = "Mk406 AP - 6x38 tungsten armour piercer"; ammo = "FA_b_6x38_Mk406_AP_T_Green"; tracersEvery = 4; };
    class FA_rearma_30Rnd_6x38_Tan_Mk406_AP_T_White: FA_rearma_30Rnd_6x38_Tan_Mk406_AP { displayName = "[Ghost] 30Rnd Mk406 AP Tan PMAG White Tracer"; descriptionShort = "Mk406 AP - 6x38 tungsten armour piercer"; ammo = "FA_b_6x38_Mk406_AP_T_White"; tracersEvery = 4; };
    class FA_rearma_30Rnd_6x38_Tan_Mk406_AP_T_Blue: FA_rearma_30Rnd_6x38_Tan_Mk406_AP { displayName = "[Ghost] 30Rnd Mk406 AP Tan PMAG Blue Tracer"; descriptionShort = "Mk406 AP - 6x38 tungsten armour piercer"; ammo = "FA_b_6x38_Mk406_AP_T_Blue"; tracersEvery = 4; };
    class FA_rearma_30Rnd_6x38_Tan_Mk406_AP_T_Orange: FA_rearma_30Rnd_6x38_Tan_Mk406_AP { displayName = "[Ghost] 30Rnd Mk406 AP Tan PMAG Orange Tracer"; descriptionShort = "Mk406 AP - 6x38 tungsten armour piercer"; ammo = "FA_b_6x38_Mk406_AP_T_Orange"; tracersEvery = 4; };
    class FA_rearma_30Rnd_6x38_Tan_Mk406_AP_T_IR: FA_rearma_30Rnd_6x38_Tan_Mk406_AP { displayName = "[Ghost] 30Rnd Mk406 AP Tan PMAG IR Tracer"; descriptionShort = "Mk406 AP - 6x38 tungsten armour piercer"; ammo = "FA_b_6x38_Mk406_AP_T_IR"; tracersEvery = 4; };
    class FA_rearma_30Rnd_6x38_Tan_Mk407_PAB: 30Rnd_6x38_PMAG_Tan_F {
        author = QAUTHOR;
        displayName = "[Ghost] 30Rnd Mk407 PAB Tan PMAG";
        displayNameShort = "Mk407 PAB";
        descriptionShort = "Mk407 PAB airburst, counter-UAS";
        ammo = "FA_b_6x38_Mk407_PAB";
        initSpeed = 915;
    };
    class FA_rearma_30Rnd_6x38_Tan_Mk407_PAB_T_Red: FA_rearma_30Rnd_6x38_Tan_Mk407_PAB { displayName = "[Ghost] 30Rnd Mk407 PAB Tan PMAG Red Tracer"; descriptionShort = "Mk407 PAB airburst, counter-UAS"; ammo = "FA_b_6x38_Mk407_PAB_T_Red"; tracersEvery = 4; };
    class FA_rearma_30Rnd_6x38_Tan_Mk407_PAB_T_Yellow: FA_rearma_30Rnd_6x38_Tan_Mk407_PAB { displayName = "[Ghost] 30Rnd Mk407 PAB Tan PMAG Yellow Tracer"; descriptionShort = "Mk407 PAB airburst, counter-UAS"; ammo = "FA_b_6x38_Mk407_PAB_T_Yellow"; tracersEvery = 4; };
    class FA_rearma_30Rnd_6x38_Tan_Mk407_PAB_T_Green: FA_rearma_30Rnd_6x38_Tan_Mk407_PAB { displayName = "[Ghost] 30Rnd Mk407 PAB Tan PMAG Green Tracer"; descriptionShort = "Mk407 PAB airburst, counter-UAS"; ammo = "FA_b_6x38_Mk407_PAB_T_Green"; tracersEvery = 4; };
    class FA_rearma_30Rnd_6x38_Tan_Mk407_PAB_T_White: FA_rearma_30Rnd_6x38_Tan_Mk407_PAB { displayName = "[Ghost] 30Rnd Mk407 PAB Tan PMAG White Tracer"; descriptionShort = "Mk407 PAB airburst, counter-UAS"; ammo = "FA_b_6x38_Mk407_PAB_T_White"; tracersEvery = 4; };
    class FA_rearma_30Rnd_6x38_Tan_Mk407_PAB_T_Blue: FA_rearma_30Rnd_6x38_Tan_Mk407_PAB { displayName = "[Ghost] 30Rnd Mk407 PAB Tan PMAG Blue Tracer"; descriptionShort = "Mk407 PAB airburst, counter-UAS"; ammo = "FA_b_6x38_Mk407_PAB_T_Blue"; tracersEvery = 4; };
    class FA_rearma_30Rnd_6x38_Tan_Mk407_PAB_T_Orange: FA_rearma_30Rnd_6x38_Tan_Mk407_PAB { displayName = "[Ghost] 30Rnd Mk407 PAB Tan PMAG Orange Tracer"; descriptionShort = "Mk407 PAB airburst, counter-UAS"; ammo = "FA_b_6x38_Mk407_PAB_T_Orange"; tracersEvery = 4; };
    class FA_rearma_30Rnd_6x38_Tan_Mk407_PAB_T_IR: FA_rearma_30Rnd_6x38_Tan_Mk407_PAB { displayName = "[Ghost] 30Rnd Mk407 PAB Tan PMAG IR Tracer"; descriptionShort = "Mk407 PAB airburst, counter-UAS"; ammo = "FA_b_6x38_Mk407_PAB_T_IR"; tracersEvery = 4; };

    // ===== 50Rnd 6x38 drum - NX family - body 50Rnd_6x38_PMAG_Blk_F =====
    class FA_rearma_50Rnd_6x38_Mk405_HV: 50Rnd_6x38_PMAG_Blk_F {
        author = QAUTHOR;
        displayName = "[Ghost] 50Rnd Mk405 HV";
        displayNameShort = "Mk405 HV";
        descriptionShort = "Mk405 HV - 6x38 hybrid-case general purpose";
        ammo = "FA_b_6x38_Mk405_HV";
        initSpeed = 930;
    };
    class FA_rearma_50Rnd_6x38_Mk405_HV_T_Red: FA_rearma_50Rnd_6x38_Mk405_HV { displayName = "[Ghost] 50Rnd Mk405 HV Red Tracer"; descriptionShort = "Mk405 HV - 6x38 hybrid-case general purpose"; ammo = "FA_b_6x38_Mk405_HV_T_Red"; tracersEvery = 4; };
    class FA_rearma_50Rnd_6x38_Mk405_HV_T_Yellow: FA_rearma_50Rnd_6x38_Mk405_HV { displayName = "[Ghost] 50Rnd Mk405 HV Yellow Tracer"; descriptionShort = "Mk405 HV - 6x38 hybrid-case general purpose"; ammo = "FA_b_6x38_Mk405_HV_T_Yellow"; tracersEvery = 4; };
    class FA_rearma_50Rnd_6x38_Mk405_HV_T_Green: FA_rearma_50Rnd_6x38_Mk405_HV { displayName = "[Ghost] 50Rnd Mk405 HV Green Tracer"; descriptionShort = "Mk405 HV - 6x38 hybrid-case general purpose"; ammo = "FA_b_6x38_Mk405_HV_T_Green"; tracersEvery = 4; };
    class FA_rearma_50Rnd_6x38_Mk405_HV_T_White: FA_rearma_50Rnd_6x38_Mk405_HV { displayName = "[Ghost] 50Rnd Mk405 HV White Tracer"; descriptionShort = "Mk405 HV - 6x38 hybrid-case general purpose"; ammo = "FA_b_6x38_Mk405_HV_T_White"; tracersEvery = 4; };
    class FA_rearma_50Rnd_6x38_Mk405_HV_T_Blue: FA_rearma_50Rnd_6x38_Mk405_HV { displayName = "[Ghost] 50Rnd Mk405 HV Blue Tracer"; descriptionShort = "Mk405 HV - 6x38 hybrid-case general purpose"; ammo = "FA_b_6x38_Mk405_HV_T_Blue"; tracersEvery = 4; };
    class FA_rearma_50Rnd_6x38_Mk405_HV_T_Orange: FA_rearma_50Rnd_6x38_Mk405_HV { displayName = "[Ghost] 50Rnd Mk405 HV Orange Tracer"; descriptionShort = "Mk405 HV - 6x38 hybrid-case general purpose"; ammo = "FA_b_6x38_Mk405_HV_T_Orange"; tracersEvery = 4; };
    class FA_rearma_50Rnd_6x38_Mk405_HV_T_IR: FA_rearma_50Rnd_6x38_Mk405_HV { displayName = "[Ghost] 50Rnd Mk405 HV IR Tracer"; descriptionShort = "Mk405 HV - 6x38 hybrid-case general purpose"; ammo = "FA_b_6x38_Mk405_HV_T_IR"; tracersEvery = 4; };
    class FA_rearma_50Rnd_6x38_Mk406_AP: 50Rnd_6x38_PMAG_Blk_F {
        author = QAUTHOR;
        displayName = "[Ghost] 50Rnd Mk406 AP";
        displayNameShort = "Mk406 AP";
        descriptionShort = "Mk406 AP - 6x38 tungsten armour piercer";
        ammo = "FA_b_6x38_Mk406_AP";
        initSpeed = 905;
    };
    class FA_rearma_50Rnd_6x38_Mk406_AP_T_Red: FA_rearma_50Rnd_6x38_Mk406_AP { displayName = "[Ghost] 50Rnd Mk406 AP Red Tracer"; descriptionShort = "Mk406 AP - 6x38 tungsten armour piercer"; ammo = "FA_b_6x38_Mk406_AP_T_Red"; tracersEvery = 4; };
    class FA_rearma_50Rnd_6x38_Mk406_AP_T_Yellow: FA_rearma_50Rnd_6x38_Mk406_AP { displayName = "[Ghost] 50Rnd Mk406 AP Yellow Tracer"; descriptionShort = "Mk406 AP - 6x38 tungsten armour piercer"; ammo = "FA_b_6x38_Mk406_AP_T_Yellow"; tracersEvery = 4; };
    class FA_rearma_50Rnd_6x38_Mk406_AP_T_Green: FA_rearma_50Rnd_6x38_Mk406_AP { displayName = "[Ghost] 50Rnd Mk406 AP Green Tracer"; descriptionShort = "Mk406 AP - 6x38 tungsten armour piercer"; ammo = "FA_b_6x38_Mk406_AP_T_Green"; tracersEvery = 4; };
    class FA_rearma_50Rnd_6x38_Mk406_AP_T_White: FA_rearma_50Rnd_6x38_Mk406_AP { displayName = "[Ghost] 50Rnd Mk406 AP White Tracer"; descriptionShort = "Mk406 AP - 6x38 tungsten armour piercer"; ammo = "FA_b_6x38_Mk406_AP_T_White"; tracersEvery = 4; };
    class FA_rearma_50Rnd_6x38_Mk406_AP_T_Blue: FA_rearma_50Rnd_6x38_Mk406_AP { displayName = "[Ghost] 50Rnd Mk406 AP Blue Tracer"; descriptionShort = "Mk406 AP - 6x38 tungsten armour piercer"; ammo = "FA_b_6x38_Mk406_AP_T_Blue"; tracersEvery = 4; };
    class FA_rearma_50Rnd_6x38_Mk406_AP_T_Orange: FA_rearma_50Rnd_6x38_Mk406_AP { displayName = "[Ghost] 50Rnd Mk406 AP Orange Tracer"; descriptionShort = "Mk406 AP - 6x38 tungsten armour piercer"; ammo = "FA_b_6x38_Mk406_AP_T_Orange"; tracersEvery = 4; };
    class FA_rearma_50Rnd_6x38_Mk406_AP_T_IR: FA_rearma_50Rnd_6x38_Mk406_AP { displayName = "[Ghost] 50Rnd Mk406 AP IR Tracer"; descriptionShort = "Mk406 AP - 6x38 tungsten armour piercer"; ammo = "FA_b_6x38_Mk406_AP_T_IR"; tracersEvery = 4; };
    class FA_rearma_50Rnd_6x38_Mk407_PAB: 50Rnd_6x38_PMAG_Blk_F {
        author = QAUTHOR;
        displayName = "[Ghost] 50Rnd Mk407 PAB";
        displayNameShort = "Mk407 PAB";
        descriptionShort = "Mk407 PAB airburst, counter-UAS";
        ammo = "FA_b_6x38_Mk407_PAB";
        initSpeed = 915;
    };
    class FA_rearma_50Rnd_6x38_Mk407_PAB_T_Red: FA_rearma_50Rnd_6x38_Mk407_PAB { displayName = "[Ghost] 50Rnd Mk407 PAB Red Tracer"; descriptionShort = "Mk407 PAB airburst, counter-UAS"; ammo = "FA_b_6x38_Mk407_PAB_T_Red"; tracersEvery = 4; };
    class FA_rearma_50Rnd_6x38_Mk407_PAB_T_Yellow: FA_rearma_50Rnd_6x38_Mk407_PAB { displayName = "[Ghost] 50Rnd Mk407 PAB Yellow Tracer"; descriptionShort = "Mk407 PAB airburst, counter-UAS"; ammo = "FA_b_6x38_Mk407_PAB_T_Yellow"; tracersEvery = 4; };
    class FA_rearma_50Rnd_6x38_Mk407_PAB_T_Green: FA_rearma_50Rnd_6x38_Mk407_PAB { displayName = "[Ghost] 50Rnd Mk407 PAB Green Tracer"; descriptionShort = "Mk407 PAB airburst, counter-UAS"; ammo = "FA_b_6x38_Mk407_PAB_T_Green"; tracersEvery = 4; };
    class FA_rearma_50Rnd_6x38_Mk407_PAB_T_White: FA_rearma_50Rnd_6x38_Mk407_PAB { displayName = "[Ghost] 50Rnd Mk407 PAB White Tracer"; descriptionShort = "Mk407 PAB airburst, counter-UAS"; ammo = "FA_b_6x38_Mk407_PAB_T_White"; tracersEvery = 4; };
    class FA_rearma_50Rnd_6x38_Mk407_PAB_T_Blue: FA_rearma_50Rnd_6x38_Mk407_PAB { displayName = "[Ghost] 50Rnd Mk407 PAB Blue Tracer"; descriptionShort = "Mk407 PAB airburst, counter-UAS"; ammo = "FA_b_6x38_Mk407_PAB_T_Blue"; tracersEvery = 4; };
    class FA_rearma_50Rnd_6x38_Mk407_PAB_T_Orange: FA_rearma_50Rnd_6x38_Mk407_PAB { displayName = "[Ghost] 50Rnd Mk407 PAB Orange Tracer"; descriptionShort = "Mk407 PAB airburst, counter-UAS"; ammo = "FA_b_6x38_Mk407_PAB_T_Orange"; tracersEvery = 4; };
    class FA_rearma_50Rnd_6x38_Mk407_PAB_T_IR: FA_rearma_50Rnd_6x38_Mk407_PAB { displayName = "[Ghost] 50Rnd Mk407 PAB IR Tracer"; descriptionShort = "Mk407 PAB airburst, counter-UAS"; ammo = "FA_b_6x38_Mk407_PAB_T_IR"; tracersEvery = 4; };

    // ===== 150Rnd 6x38 belt - KAC AMG - body 150Rnd_6x38TVCM_F =====
    class FA_rearma_150Rnd_6x38_Mk405_HV: 150Rnd_6x38TVCM_F {
        author = QAUTHOR;
        displayName = "[Ghost] 150Rnd Mk405 HV";
        displayNameShort = "Mk405 HV";
        descriptionShort = "Mk405 HV - 6x38 hybrid-case general purpose";
        ammo = "FA_b_6x38_Mk405_HV";
        initSpeed = 930;
        tracersEvery = 0;
    };
    class FA_rearma_150Rnd_6x38_Mk405_HV_T_Red: FA_rearma_150Rnd_6x38_Mk405_HV { displayName = "[Ghost] 150Rnd Mk405 HV Red Tracer"; descriptionShort = "Mk405 HV - 6x38 hybrid-case general purpose"; ammo = "FA_b_6x38_Mk405_HV_T_Red"; tracersEvery = 4; };
    class FA_rearma_150Rnd_6x38_Mk405_HV_T_Yellow: FA_rearma_150Rnd_6x38_Mk405_HV { displayName = "[Ghost] 150Rnd Mk405 HV Yellow Tracer"; descriptionShort = "Mk405 HV - 6x38 hybrid-case general purpose"; ammo = "FA_b_6x38_Mk405_HV_T_Yellow"; tracersEvery = 4; };
    class FA_rearma_150Rnd_6x38_Mk405_HV_T_Green: FA_rearma_150Rnd_6x38_Mk405_HV { displayName = "[Ghost] 150Rnd Mk405 HV Green Tracer"; descriptionShort = "Mk405 HV - 6x38 hybrid-case general purpose"; ammo = "FA_b_6x38_Mk405_HV_T_Green"; tracersEvery = 4; };
    class FA_rearma_150Rnd_6x38_Mk405_HV_T_White: FA_rearma_150Rnd_6x38_Mk405_HV { displayName = "[Ghost] 150Rnd Mk405 HV White Tracer"; descriptionShort = "Mk405 HV - 6x38 hybrid-case general purpose"; ammo = "FA_b_6x38_Mk405_HV_T_White"; tracersEvery = 4; };
    class FA_rearma_150Rnd_6x38_Mk405_HV_T_Blue: FA_rearma_150Rnd_6x38_Mk405_HV { displayName = "[Ghost] 150Rnd Mk405 HV Blue Tracer"; descriptionShort = "Mk405 HV - 6x38 hybrid-case general purpose"; ammo = "FA_b_6x38_Mk405_HV_T_Blue"; tracersEvery = 4; };
    class FA_rearma_150Rnd_6x38_Mk405_HV_T_Orange: FA_rearma_150Rnd_6x38_Mk405_HV { displayName = "[Ghost] 150Rnd Mk405 HV Orange Tracer"; descriptionShort = "Mk405 HV - 6x38 hybrid-case general purpose"; ammo = "FA_b_6x38_Mk405_HV_T_Orange"; tracersEvery = 4; };
    class FA_rearma_150Rnd_6x38_Mk405_HV_T_IR: FA_rearma_150Rnd_6x38_Mk405_HV { displayName = "[Ghost] 150Rnd Mk405 HV IR Tracer"; descriptionShort = "Mk405 HV - 6x38 hybrid-case general purpose"; ammo = "FA_b_6x38_Mk405_HV_T_IR"; tracersEvery = 4; };
    class FA_rearma_150Rnd_6x38_Mk406_AP: 150Rnd_6x38TVCM_F {
        author = QAUTHOR;
        displayName = "[Ghost] 150Rnd Mk406 AP";
        displayNameShort = "Mk406 AP";
        descriptionShort = "Mk406 AP - 6x38 tungsten armour piercer";
        ammo = "FA_b_6x38_Mk406_AP";
        initSpeed = 905;
        tracersEvery = 0;
    };
    class FA_rearma_150Rnd_6x38_Mk406_AP_T_Red: FA_rearma_150Rnd_6x38_Mk406_AP { displayName = "[Ghost] 150Rnd Mk406 AP Red Tracer"; descriptionShort = "Mk406 AP - 6x38 tungsten armour piercer"; ammo = "FA_b_6x38_Mk406_AP_T_Red"; tracersEvery = 4; };
    class FA_rearma_150Rnd_6x38_Mk406_AP_T_Yellow: FA_rearma_150Rnd_6x38_Mk406_AP { displayName = "[Ghost] 150Rnd Mk406 AP Yellow Tracer"; descriptionShort = "Mk406 AP - 6x38 tungsten armour piercer"; ammo = "FA_b_6x38_Mk406_AP_T_Yellow"; tracersEvery = 4; };
    class FA_rearma_150Rnd_6x38_Mk406_AP_T_Green: FA_rearma_150Rnd_6x38_Mk406_AP { displayName = "[Ghost] 150Rnd Mk406 AP Green Tracer"; descriptionShort = "Mk406 AP - 6x38 tungsten armour piercer"; ammo = "FA_b_6x38_Mk406_AP_T_Green"; tracersEvery = 4; };
    class FA_rearma_150Rnd_6x38_Mk406_AP_T_White: FA_rearma_150Rnd_6x38_Mk406_AP { displayName = "[Ghost] 150Rnd Mk406 AP White Tracer"; descriptionShort = "Mk406 AP - 6x38 tungsten armour piercer"; ammo = "FA_b_6x38_Mk406_AP_T_White"; tracersEvery = 4; };
    class FA_rearma_150Rnd_6x38_Mk406_AP_T_Blue: FA_rearma_150Rnd_6x38_Mk406_AP { displayName = "[Ghost] 150Rnd Mk406 AP Blue Tracer"; descriptionShort = "Mk406 AP - 6x38 tungsten armour piercer"; ammo = "FA_b_6x38_Mk406_AP_T_Blue"; tracersEvery = 4; };
    class FA_rearma_150Rnd_6x38_Mk406_AP_T_Orange: FA_rearma_150Rnd_6x38_Mk406_AP { displayName = "[Ghost] 150Rnd Mk406 AP Orange Tracer"; descriptionShort = "Mk406 AP - 6x38 tungsten armour piercer"; ammo = "FA_b_6x38_Mk406_AP_T_Orange"; tracersEvery = 4; };
    class FA_rearma_150Rnd_6x38_Mk406_AP_T_IR: FA_rearma_150Rnd_6x38_Mk406_AP { displayName = "[Ghost] 150Rnd Mk406 AP IR Tracer"; descriptionShort = "Mk406 AP - 6x38 tungsten armour piercer"; ammo = "FA_b_6x38_Mk406_AP_T_IR"; tracersEvery = 4; };
    class FA_rearma_150Rnd_6x38_Mk407_PAB: 150Rnd_6x38TVCM_F {
        author = QAUTHOR;
        displayName = "[Ghost] 150Rnd Mk407 PAB";
        displayNameShort = "Mk407 PAB";
        descriptionShort = "Mk407 PAB airburst, counter-UAS";
        ammo = "FA_b_6x38_Mk407_PAB";
        initSpeed = 915;
        tracersEvery = 0;
    };
    class FA_rearma_150Rnd_6x38_Mk407_PAB_T_Red: FA_rearma_150Rnd_6x38_Mk407_PAB { displayName = "[Ghost] 150Rnd Mk407 PAB Red Tracer"; descriptionShort = "Mk407 PAB airburst, counter-UAS"; ammo = "FA_b_6x38_Mk407_PAB_T_Red"; tracersEvery = 4; };
    class FA_rearma_150Rnd_6x38_Mk407_PAB_T_Yellow: FA_rearma_150Rnd_6x38_Mk407_PAB { displayName = "[Ghost] 150Rnd Mk407 PAB Yellow Tracer"; descriptionShort = "Mk407 PAB airburst, counter-UAS"; ammo = "FA_b_6x38_Mk407_PAB_T_Yellow"; tracersEvery = 4; };
    class FA_rearma_150Rnd_6x38_Mk407_PAB_T_Green: FA_rearma_150Rnd_6x38_Mk407_PAB { displayName = "[Ghost] 150Rnd Mk407 PAB Green Tracer"; descriptionShort = "Mk407 PAB airburst, counter-UAS"; ammo = "FA_b_6x38_Mk407_PAB_T_Green"; tracersEvery = 4; };
    class FA_rearma_150Rnd_6x38_Mk407_PAB_T_White: FA_rearma_150Rnd_6x38_Mk407_PAB { displayName = "[Ghost] 150Rnd Mk407 PAB White Tracer"; descriptionShort = "Mk407 PAB airburst, counter-UAS"; ammo = "FA_b_6x38_Mk407_PAB_T_White"; tracersEvery = 4; };
    class FA_rearma_150Rnd_6x38_Mk407_PAB_T_Blue: FA_rearma_150Rnd_6x38_Mk407_PAB { displayName = "[Ghost] 150Rnd Mk407 PAB Blue Tracer"; descriptionShort = "Mk407 PAB airburst, counter-UAS"; ammo = "FA_b_6x38_Mk407_PAB_T_Blue"; tracersEvery = 4; };
    class FA_rearma_150Rnd_6x38_Mk407_PAB_T_Orange: FA_rearma_150Rnd_6x38_Mk407_PAB { displayName = "[Ghost] 150Rnd Mk407 PAB Orange Tracer"; descriptionShort = "Mk407 PAB airburst, counter-UAS"; ammo = "FA_b_6x38_Mk407_PAB_T_Orange"; tracersEvery = 4; };
    class FA_rearma_150Rnd_6x38_Mk407_PAB_T_IR: FA_rearma_150Rnd_6x38_Mk407_PAB { displayName = "[Ghost] 150Rnd Mk407 PAB IR Tracer"; descriptionShort = "Mk407 PAB airburst, counter-UAS"; ammo = "FA_b_6x38_Mk407_PAB_T_IR"; tracersEvery = 4; };

    // ===== 30Rnd 5.56 STANAG black - M27A5 - body 30Rnd_556x45_Stanag_Blk_F =====
    class FA_rearma_30Rnd_556x45_Stanag_Mk327_HV: 30Rnd_556x45_Stanag_Blk_F {
        author = QAUTHOR;
        displayName = "[Ghost] 30Rnd Mk327 HV Black Mag";
        displayNameShort = "Mk327 HV";
        descriptionShort = "Mk327 HV";
        ammo = "FA_b_556_Mk327_HV";
        initSpeed = 960;
    };
    class FA_rearma_30Rnd_556x45_Stanag_Mk327_HV_T_Red: FA_rearma_30Rnd_556x45_Stanag_Mk327_HV { displayName = "[Ghost] 30Rnd Mk327 HV Black Mag Red Tracer"; descriptionShort = "Mk327 HV"; ammo = "FA_b_556_Mk327_HV_T_Red"; tracersEvery = 4; };
    class FA_rearma_30Rnd_556x45_Stanag_Mk327_HV_T_Yellow: FA_rearma_30Rnd_556x45_Stanag_Mk327_HV { displayName = "[Ghost] 30Rnd Mk327 HV Black Mag Yellow Tracer"; descriptionShort = "Mk327 HV"; ammo = "FA_b_556_Mk327_HV_T_Yellow"; tracersEvery = 4; };
    class FA_rearma_30Rnd_556x45_Stanag_Mk327_HV_T_Green: FA_rearma_30Rnd_556x45_Stanag_Mk327_HV { displayName = "[Ghost] 30Rnd Mk327 HV Black Mag Green Tracer"; descriptionShort = "Mk327 HV"; ammo = "FA_b_556_Mk327_HV_T_Green"; tracersEvery = 4; };
    class FA_rearma_30Rnd_556x45_Stanag_Mk327_HV_T_White: FA_rearma_30Rnd_556x45_Stanag_Mk327_HV { displayName = "[Ghost] 30Rnd Mk327 HV Black Mag White Tracer"; descriptionShort = "Mk327 HV"; ammo = "FA_b_556_Mk327_HV_T_White"; tracersEvery = 4; };
    class FA_rearma_30Rnd_556x45_Stanag_Mk327_HV_T_Blue: FA_rearma_30Rnd_556x45_Stanag_Mk327_HV { displayName = "[Ghost] 30Rnd Mk327 HV Black Mag Blue Tracer"; descriptionShort = "Mk327 HV"; ammo = "FA_b_556_Mk327_HV_T_Blue"; tracersEvery = 4; };
    class FA_rearma_30Rnd_556x45_Stanag_Mk327_HV_T_Orange: FA_rearma_30Rnd_556x45_Stanag_Mk327_HV { displayName = "[Ghost] 30Rnd Mk327 HV Black Mag Orange Tracer"; descriptionShort = "Mk327 HV"; ammo = "FA_b_556_Mk327_HV_T_Orange"; tracersEvery = 4; };
    class FA_rearma_30Rnd_556x45_Stanag_Mk327_HV_T_IR: FA_rearma_30Rnd_556x45_Stanag_Mk327_HV { displayName = "[Ghost] 30Rnd Mk327 HV Black Mag IR Tracer"; descriptionShort = "Mk327 HV"; ammo = "FA_b_556_Mk327_HV_T_IR"; tracersEvery = 4; };
    class FA_rearma_30Rnd_556x45_Stanag_XM891_CTEP: 30Rnd_556x45_Stanag_Blk_F {
        author = QAUTHOR;
        displayName = "[Ghost] 30Rnd XM891 CTEP Black Mag";
        displayNameShort = "XM891 CTEP";
        descriptionShort = "XM891 CTEP";
        ammo = "FA_b_556_XM891_CTEP";
        initSpeed = 980;
    };
    class FA_rearma_30Rnd_556x45_Stanag_XM891_CTEP_T_Red: FA_rearma_30Rnd_556x45_Stanag_XM891_CTEP { displayName = "[Ghost] 30Rnd XM891 CTEP Black Mag Red Tracer"; descriptionShort = "XM891 CTEP"; ammo = "FA_b_556_XM891_CTEP_T_Red"; tracersEvery = 4; };
    class FA_rearma_30Rnd_556x45_Stanag_XM891_CTEP_T_Yellow: FA_rearma_30Rnd_556x45_Stanag_XM891_CTEP { displayName = "[Ghost] 30Rnd XM891 CTEP Black Mag Yellow Tracer"; descriptionShort = "XM891 CTEP"; ammo = "FA_b_556_XM891_CTEP_T_Yellow"; tracersEvery = 4; };
    class FA_rearma_30Rnd_556x45_Stanag_XM891_CTEP_T_Green: FA_rearma_30Rnd_556x45_Stanag_XM891_CTEP { displayName = "[Ghost] 30Rnd XM891 CTEP Black Mag Green Tracer"; descriptionShort = "XM891 CTEP"; ammo = "FA_b_556_XM891_CTEP_T_Green"; tracersEvery = 4; };
    class FA_rearma_30Rnd_556x45_Stanag_XM891_CTEP_T_White: FA_rearma_30Rnd_556x45_Stanag_XM891_CTEP { displayName = "[Ghost] 30Rnd XM891 CTEP Black Mag White Tracer"; descriptionShort = "XM891 CTEP"; ammo = "FA_b_556_XM891_CTEP_T_White"; tracersEvery = 4; };
    class FA_rearma_30Rnd_556x45_Stanag_XM891_CTEP_T_Blue: FA_rearma_30Rnd_556x45_Stanag_XM891_CTEP { displayName = "[Ghost] 30Rnd XM891 CTEP Black Mag Blue Tracer"; descriptionShort = "XM891 CTEP"; ammo = "FA_b_556_XM891_CTEP_T_Blue"; tracersEvery = 4; };
    class FA_rearma_30Rnd_556x45_Stanag_XM891_CTEP_T_Orange: FA_rearma_30Rnd_556x45_Stanag_XM891_CTEP { displayName = "[Ghost] 30Rnd XM891 CTEP Black Mag Orange Tracer"; descriptionShort = "XM891 CTEP"; ammo = "FA_b_556_XM891_CTEP_T_Orange"; tracersEvery = 4; };
    class FA_rearma_30Rnd_556x45_Stanag_XM891_CTEP_T_IR: FA_rearma_30Rnd_556x45_Stanag_XM891_CTEP { displayName = "[Ghost] 30Rnd XM891 CTEP Black Mag IR Tracer"; descriptionShort = "XM891 CTEP"; ammo = "FA_b_556_XM891_CTEP_T_IR"; tracersEvery = 4; };
    class FA_rearma_30Rnd_556x45_Stanag_Mk332_AP: 30Rnd_556x45_Stanag_Blk_F {
        author = QAUTHOR;
        displayName = "[Ghost] 30Rnd Mk332 AP Black Mag";
        displayNameShort = "Mk332 AP";
        descriptionShort = "Mk332 AP";
        ammo = "FA_b_556_Mk332_AP";
        initSpeed = 940;
    };
    class FA_rearma_30Rnd_556x45_Stanag_Mk332_AP_T_Red: FA_rearma_30Rnd_556x45_Stanag_Mk332_AP { displayName = "[Ghost] 30Rnd Mk332 AP Black Mag Red Tracer"; descriptionShort = "Mk332 AP"; ammo = "FA_b_556_Mk332_AP_T_Red"; tracersEvery = 4; };
    class FA_rearma_30Rnd_556x45_Stanag_Mk332_AP_T_Yellow: FA_rearma_30Rnd_556x45_Stanag_Mk332_AP { displayName = "[Ghost] 30Rnd Mk332 AP Black Mag Yellow Tracer"; descriptionShort = "Mk332 AP"; ammo = "FA_b_556_Mk332_AP_T_Yellow"; tracersEvery = 4; };
    class FA_rearma_30Rnd_556x45_Stanag_Mk332_AP_T_Green: FA_rearma_30Rnd_556x45_Stanag_Mk332_AP { displayName = "[Ghost] 30Rnd Mk332 AP Black Mag Green Tracer"; descriptionShort = "Mk332 AP"; ammo = "FA_b_556_Mk332_AP_T_Green"; tracersEvery = 4; };
    class FA_rearma_30Rnd_556x45_Stanag_Mk332_AP_T_White: FA_rearma_30Rnd_556x45_Stanag_Mk332_AP { displayName = "[Ghost] 30Rnd Mk332 AP Black Mag White Tracer"; descriptionShort = "Mk332 AP"; ammo = "FA_b_556_Mk332_AP_T_White"; tracersEvery = 4; };
    class FA_rearma_30Rnd_556x45_Stanag_Mk332_AP_T_Blue: FA_rearma_30Rnd_556x45_Stanag_Mk332_AP { displayName = "[Ghost] 30Rnd Mk332 AP Black Mag Blue Tracer"; descriptionShort = "Mk332 AP"; ammo = "FA_b_556_Mk332_AP_T_Blue"; tracersEvery = 4; };
    class FA_rearma_30Rnd_556x45_Stanag_Mk332_AP_T_Orange: FA_rearma_30Rnd_556x45_Stanag_Mk332_AP { displayName = "[Ghost] 30Rnd Mk332 AP Black Mag Orange Tracer"; descriptionShort = "Mk332 AP"; ammo = "FA_b_556_Mk332_AP_T_Orange"; tracersEvery = 4; };
    class FA_rearma_30Rnd_556x45_Stanag_Mk332_AP_T_IR: FA_rearma_30Rnd_556x45_Stanag_Mk332_AP { displayName = "[Ghost] 30Rnd Mk332 AP Black Mag IR Tracer"; descriptionShort = "Mk332 AP"; ammo = "FA_b_556_Mk332_AP_T_IR"; tracersEvery = 4; };
    class FA_rearma_30Rnd_556x45_Stanag_Mk361_PAB: 30Rnd_556x45_Stanag_Blk_F {
        author = QAUTHOR;
        displayName = "[Ghost] 30Rnd Mk361 PAB Black Mag";
        displayNameShort = "Mk361 PAB";
        descriptionShort = "Mk361 PAB airburst, counter-UAS";
        ammo = "FA_b_556_Mk361_PAB";
        initSpeed = 920;
    };
    class FA_rearma_30Rnd_556x45_Stanag_Mk361_PAB_T_Red: FA_rearma_30Rnd_556x45_Stanag_Mk361_PAB { displayName = "[Ghost] 30Rnd Mk361 PAB Black Mag Red Tracer"; descriptionShort = "Mk361 PAB airburst, counter-UAS"; ammo = "FA_b_556_Mk361_PAB_T_Red"; tracersEvery = 4; };
    class FA_rearma_30Rnd_556x45_Stanag_Mk361_PAB_T_Yellow: FA_rearma_30Rnd_556x45_Stanag_Mk361_PAB { displayName = "[Ghost] 30Rnd Mk361 PAB Black Mag Yellow Tracer"; descriptionShort = "Mk361 PAB airburst, counter-UAS"; ammo = "FA_b_556_Mk361_PAB_T_Yellow"; tracersEvery = 4; };
    class FA_rearma_30Rnd_556x45_Stanag_Mk361_PAB_T_Green: FA_rearma_30Rnd_556x45_Stanag_Mk361_PAB { displayName = "[Ghost] 30Rnd Mk361 PAB Black Mag Green Tracer"; descriptionShort = "Mk361 PAB airburst, counter-UAS"; ammo = "FA_b_556_Mk361_PAB_T_Green"; tracersEvery = 4; };
    class FA_rearma_30Rnd_556x45_Stanag_Mk361_PAB_T_White: FA_rearma_30Rnd_556x45_Stanag_Mk361_PAB { displayName = "[Ghost] 30Rnd Mk361 PAB Black Mag White Tracer"; descriptionShort = "Mk361 PAB airburst, counter-UAS"; ammo = "FA_b_556_Mk361_PAB_T_White"; tracersEvery = 4; };
    class FA_rearma_30Rnd_556x45_Stanag_Mk361_PAB_T_Blue: FA_rearma_30Rnd_556x45_Stanag_Mk361_PAB { displayName = "[Ghost] 30Rnd Mk361 PAB Black Mag Blue Tracer"; descriptionShort = "Mk361 PAB airburst, counter-UAS"; ammo = "FA_b_556_Mk361_PAB_T_Blue"; tracersEvery = 4; };
    class FA_rearma_30Rnd_556x45_Stanag_Mk361_PAB_T_Orange: FA_rearma_30Rnd_556x45_Stanag_Mk361_PAB { displayName = "[Ghost] 30Rnd Mk361 PAB Black Mag Orange Tracer"; descriptionShort = "Mk361 PAB airburst, counter-UAS"; ammo = "FA_b_556_Mk361_PAB_T_Orange"; tracersEvery = 4; };
    class FA_rearma_30Rnd_556x45_Stanag_Mk368K_AD: 30Rnd_556x45_Stanag_Blk_F {
        author = QAUTHOR;
        displayName = "[Ghost] 30Rnd Mk368K AD Black Mag";
        displayNameShort = "Mk368K AD";
        descriptionShort = "Mk368K AD 8-pellet shot, eff. 100 m";
        ammo = "FA_b_556_Mk368K_AD";
        initSpeed = 671;
        tracersEvery = 0;
        lastRoundsTracer = 0;
    };
    class FA_rearma_30Rnd_556x45_Stanag_Mk368L_AD: 30Rnd_556x45_Stanag_Blk_F {
        author = QAUTHOR;
        displayName = "[Ghost] 30Rnd Mk368L AD Black Mag";
        displayNameShort = "Mk368L AD";
        descriptionShort = "Mk368L AD 5-pellet shot, eff. 200 m";
        ammo = "FA_b_556_Mk368L_AD";
        initSpeed = 671;
        tracersEvery = 0;
        lastRoundsTracer = 0;
    };

    // ===== 30Rnd 5.56 STANAG tan - M27A5 - body 30Rnd_556x45_Stanag_Tan_F =====
    class FA_rearma_30Rnd_556x45_StanagTan_Mk327_HV: 30Rnd_556x45_Stanag_Tan_F {
        author = QAUTHOR;
        displayName = "[Ghost] 30Rnd Mk327 HV Tan Mag";
        displayNameShort = "Mk327 HV";
        descriptionShort = "Mk327 HV";
        ammo = "FA_b_556_Mk327_HV";
        initSpeed = 960;
    };
    class FA_rearma_30Rnd_556x45_StanagTan_Mk327_HV_T_Red: FA_rearma_30Rnd_556x45_StanagTan_Mk327_HV { displayName = "[Ghost] 30Rnd Mk327 HV Tan Mag Red Tracer"; descriptionShort = "Mk327 HV"; ammo = "FA_b_556_Mk327_HV_T_Red"; tracersEvery = 4; };
    class FA_rearma_30Rnd_556x45_StanagTan_Mk327_HV_T_Yellow: FA_rearma_30Rnd_556x45_StanagTan_Mk327_HV { displayName = "[Ghost] 30Rnd Mk327 HV Tan Mag Yellow Tracer"; descriptionShort = "Mk327 HV"; ammo = "FA_b_556_Mk327_HV_T_Yellow"; tracersEvery = 4; };
    class FA_rearma_30Rnd_556x45_StanagTan_Mk327_HV_T_Green: FA_rearma_30Rnd_556x45_StanagTan_Mk327_HV { displayName = "[Ghost] 30Rnd Mk327 HV Tan Mag Green Tracer"; descriptionShort = "Mk327 HV"; ammo = "FA_b_556_Mk327_HV_T_Green"; tracersEvery = 4; };
    class FA_rearma_30Rnd_556x45_StanagTan_Mk327_HV_T_White: FA_rearma_30Rnd_556x45_StanagTan_Mk327_HV { displayName = "[Ghost] 30Rnd Mk327 HV Tan Mag White Tracer"; descriptionShort = "Mk327 HV"; ammo = "FA_b_556_Mk327_HV_T_White"; tracersEvery = 4; };
    class FA_rearma_30Rnd_556x45_StanagTan_Mk327_HV_T_Blue: FA_rearma_30Rnd_556x45_StanagTan_Mk327_HV { displayName = "[Ghost] 30Rnd Mk327 HV Tan Mag Blue Tracer"; descriptionShort = "Mk327 HV"; ammo = "FA_b_556_Mk327_HV_T_Blue"; tracersEvery = 4; };
    class FA_rearma_30Rnd_556x45_StanagTan_Mk327_HV_T_Orange: FA_rearma_30Rnd_556x45_StanagTan_Mk327_HV { displayName = "[Ghost] 30Rnd Mk327 HV Tan Mag Orange Tracer"; descriptionShort = "Mk327 HV"; ammo = "FA_b_556_Mk327_HV_T_Orange"; tracersEvery = 4; };
    class FA_rearma_30Rnd_556x45_StanagTan_Mk327_HV_T_IR: FA_rearma_30Rnd_556x45_StanagTan_Mk327_HV { displayName = "[Ghost] 30Rnd Mk327 HV Tan Mag IR Tracer"; descriptionShort = "Mk327 HV"; ammo = "FA_b_556_Mk327_HV_T_IR"; tracersEvery = 4; };
    class FA_rearma_30Rnd_556x45_StanagTan_XM891_CTEP: 30Rnd_556x45_Stanag_Tan_F {
        author = QAUTHOR;
        displayName = "[Ghost] 30Rnd XM891 CTEP Tan Mag";
        displayNameShort = "XM891 CTEP";
        descriptionShort = "XM891 CTEP";
        ammo = "FA_b_556_XM891_CTEP";
        initSpeed = 980;
    };
    class FA_rearma_30Rnd_556x45_StanagTan_XM891_CTEP_T_Red: FA_rearma_30Rnd_556x45_StanagTan_XM891_CTEP { displayName = "[Ghost] 30Rnd XM891 CTEP Tan Mag Red Tracer"; descriptionShort = "XM891 CTEP"; ammo = "FA_b_556_XM891_CTEP_T_Red"; tracersEvery = 4; };
    class FA_rearma_30Rnd_556x45_StanagTan_XM891_CTEP_T_Yellow: FA_rearma_30Rnd_556x45_StanagTan_XM891_CTEP { displayName = "[Ghost] 30Rnd XM891 CTEP Tan Mag Yellow Tracer"; descriptionShort = "XM891 CTEP"; ammo = "FA_b_556_XM891_CTEP_T_Yellow"; tracersEvery = 4; };
    class FA_rearma_30Rnd_556x45_StanagTan_XM891_CTEP_T_Green: FA_rearma_30Rnd_556x45_StanagTan_XM891_CTEP { displayName = "[Ghost] 30Rnd XM891 CTEP Tan Mag Green Tracer"; descriptionShort = "XM891 CTEP"; ammo = "FA_b_556_XM891_CTEP_T_Green"; tracersEvery = 4; };
    class FA_rearma_30Rnd_556x45_StanagTan_XM891_CTEP_T_White: FA_rearma_30Rnd_556x45_StanagTan_XM891_CTEP { displayName = "[Ghost] 30Rnd XM891 CTEP Tan Mag White Tracer"; descriptionShort = "XM891 CTEP"; ammo = "FA_b_556_XM891_CTEP_T_White"; tracersEvery = 4; };
    class FA_rearma_30Rnd_556x45_StanagTan_XM891_CTEP_T_Blue: FA_rearma_30Rnd_556x45_StanagTan_XM891_CTEP { displayName = "[Ghost] 30Rnd XM891 CTEP Tan Mag Blue Tracer"; descriptionShort = "XM891 CTEP"; ammo = "FA_b_556_XM891_CTEP_T_Blue"; tracersEvery = 4; };
    class FA_rearma_30Rnd_556x45_StanagTan_XM891_CTEP_T_Orange: FA_rearma_30Rnd_556x45_StanagTan_XM891_CTEP { displayName = "[Ghost] 30Rnd XM891 CTEP Tan Mag Orange Tracer"; descriptionShort = "XM891 CTEP"; ammo = "FA_b_556_XM891_CTEP_T_Orange"; tracersEvery = 4; };
    class FA_rearma_30Rnd_556x45_StanagTan_XM891_CTEP_T_IR: FA_rearma_30Rnd_556x45_StanagTan_XM891_CTEP { displayName = "[Ghost] 30Rnd XM891 CTEP Tan Mag IR Tracer"; descriptionShort = "XM891 CTEP"; ammo = "FA_b_556_XM891_CTEP_T_IR"; tracersEvery = 4; };
    class FA_rearma_30Rnd_556x45_StanagTan_Mk332_AP: 30Rnd_556x45_Stanag_Tan_F {
        author = QAUTHOR;
        displayName = "[Ghost] 30Rnd Mk332 AP Tan Mag";
        displayNameShort = "Mk332 AP";
        descriptionShort = "Mk332 AP";
        ammo = "FA_b_556_Mk332_AP";
        initSpeed = 940;
    };
    class FA_rearma_30Rnd_556x45_StanagTan_Mk332_AP_T_Red: FA_rearma_30Rnd_556x45_StanagTan_Mk332_AP { displayName = "[Ghost] 30Rnd Mk332 AP Tan Mag Red Tracer"; descriptionShort = "Mk332 AP"; ammo = "FA_b_556_Mk332_AP_T_Red"; tracersEvery = 4; };
    class FA_rearma_30Rnd_556x45_StanagTan_Mk332_AP_T_Yellow: FA_rearma_30Rnd_556x45_StanagTan_Mk332_AP { displayName = "[Ghost] 30Rnd Mk332 AP Tan Mag Yellow Tracer"; descriptionShort = "Mk332 AP"; ammo = "FA_b_556_Mk332_AP_T_Yellow"; tracersEvery = 4; };
    class FA_rearma_30Rnd_556x45_StanagTan_Mk332_AP_T_Green: FA_rearma_30Rnd_556x45_StanagTan_Mk332_AP { displayName = "[Ghost] 30Rnd Mk332 AP Tan Mag Green Tracer"; descriptionShort = "Mk332 AP"; ammo = "FA_b_556_Mk332_AP_T_Green"; tracersEvery = 4; };
    class FA_rearma_30Rnd_556x45_StanagTan_Mk332_AP_T_White: FA_rearma_30Rnd_556x45_StanagTan_Mk332_AP { displayName = "[Ghost] 30Rnd Mk332 AP Tan Mag White Tracer"; descriptionShort = "Mk332 AP"; ammo = "FA_b_556_Mk332_AP_T_White"; tracersEvery = 4; };
    class FA_rearma_30Rnd_556x45_StanagTan_Mk332_AP_T_Blue: FA_rearma_30Rnd_556x45_StanagTan_Mk332_AP { displayName = "[Ghost] 30Rnd Mk332 AP Tan Mag Blue Tracer"; descriptionShort = "Mk332 AP"; ammo = "FA_b_556_Mk332_AP_T_Blue"; tracersEvery = 4; };
    class FA_rearma_30Rnd_556x45_StanagTan_Mk332_AP_T_Orange: FA_rearma_30Rnd_556x45_StanagTan_Mk332_AP { displayName = "[Ghost] 30Rnd Mk332 AP Tan Mag Orange Tracer"; descriptionShort = "Mk332 AP"; ammo = "FA_b_556_Mk332_AP_T_Orange"; tracersEvery = 4; };
    class FA_rearma_30Rnd_556x45_StanagTan_Mk332_AP_T_IR: FA_rearma_30Rnd_556x45_StanagTan_Mk332_AP { displayName = "[Ghost] 30Rnd Mk332 AP Tan Mag IR Tracer"; descriptionShort = "Mk332 AP"; ammo = "FA_b_556_Mk332_AP_T_IR"; tracersEvery = 4; };
    class FA_rearma_30Rnd_556x45_StanagTan_Mk361_PAB: 30Rnd_556x45_Stanag_Tan_F {
        author = QAUTHOR;
        displayName = "[Ghost] 30Rnd Mk361 PAB Tan Mag";
        displayNameShort = "Mk361 PAB";
        descriptionShort = "Mk361 PAB airburst, counter-UAS";
        ammo = "FA_b_556_Mk361_PAB";
        initSpeed = 920;
    };
    class FA_rearma_30Rnd_556x45_StanagTan_Mk361_PAB_T_Red: FA_rearma_30Rnd_556x45_StanagTan_Mk361_PAB { displayName = "[Ghost] 30Rnd Mk361 PAB Tan Mag Red Tracer"; descriptionShort = "Mk361 PAB airburst, counter-UAS"; ammo = "FA_b_556_Mk361_PAB_T_Red"; tracersEvery = 4; };
    class FA_rearma_30Rnd_556x45_StanagTan_Mk361_PAB_T_Yellow: FA_rearma_30Rnd_556x45_StanagTan_Mk361_PAB { displayName = "[Ghost] 30Rnd Mk361 PAB Tan Mag Yellow Tracer"; descriptionShort = "Mk361 PAB airburst, counter-UAS"; ammo = "FA_b_556_Mk361_PAB_T_Yellow"; tracersEvery = 4; };
    class FA_rearma_30Rnd_556x45_StanagTan_Mk361_PAB_T_Green: FA_rearma_30Rnd_556x45_StanagTan_Mk361_PAB { displayName = "[Ghost] 30Rnd Mk361 PAB Tan Mag Green Tracer"; descriptionShort = "Mk361 PAB airburst, counter-UAS"; ammo = "FA_b_556_Mk361_PAB_T_Green"; tracersEvery = 4; };
    class FA_rearma_30Rnd_556x45_StanagTan_Mk361_PAB_T_White: FA_rearma_30Rnd_556x45_StanagTan_Mk361_PAB { displayName = "[Ghost] 30Rnd Mk361 PAB Tan Mag White Tracer"; descriptionShort = "Mk361 PAB airburst, counter-UAS"; ammo = "FA_b_556_Mk361_PAB_T_White"; tracersEvery = 4; };
    class FA_rearma_30Rnd_556x45_StanagTan_Mk361_PAB_T_Blue: FA_rearma_30Rnd_556x45_StanagTan_Mk361_PAB { displayName = "[Ghost] 30Rnd Mk361 PAB Tan Mag Blue Tracer"; descriptionShort = "Mk361 PAB airburst, counter-UAS"; ammo = "FA_b_556_Mk361_PAB_T_Blue"; tracersEvery = 4; };
    class FA_rearma_30Rnd_556x45_StanagTan_Mk361_PAB_T_Orange: FA_rearma_30Rnd_556x45_StanagTan_Mk361_PAB { displayName = "[Ghost] 30Rnd Mk361 PAB Tan Mag Orange Tracer"; descriptionShort = "Mk361 PAB airburst, counter-UAS"; ammo = "FA_b_556_Mk361_PAB_T_Orange"; tracersEvery = 4; };
    class FA_rearma_30Rnd_556x45_StanagTan_Mk368K_AD: 30Rnd_556x45_Stanag_Tan_F {
        author = QAUTHOR;
        displayName = "[Ghost] 30Rnd Mk368K AD Tan Mag";
        displayNameShort = "Mk368K AD";
        descriptionShort = "Mk368K AD 8-pellet shot, eff. 100 m";
        ammo = "FA_b_556_Mk368K_AD";
        initSpeed = 671;
        tracersEvery = 0;
        lastRoundsTracer = 0;
    };
    class FA_rearma_30Rnd_556x45_StanagTan_Mk368L_AD: 30Rnd_556x45_Stanag_Tan_F {
        author = QAUTHOR;
        displayName = "[Ghost] 30Rnd Mk368L AD Tan Mag";
        displayNameShort = "Mk368L AD";
        descriptionShort = "Mk368L AD 5-pellet shot, eff. 200 m";
        ammo = "FA_b_556_Mk368L_AD";
        initSpeed = 671;
        tracersEvery = 0;
        lastRoundsTracer = 0;
    };

    // ===== 30Rnd 5.56 PMAG black - M27A5 - body 30Rnd_556x45_PMAG_Blk_F =====
    class FA_rearma_30Rnd_556x45_PMAG_Mk327_HV: 30Rnd_556x45_PMAG_Blk_F {
        author = QAUTHOR;
        displayName = "[Ghost] 30Rnd Mk327 HV Black PMAG";
        displayNameShort = "Mk327 HV";
        descriptionShort = "Mk327 HV";
        ammo = "FA_b_556_Mk327_HV";
        initSpeed = 960;
    };
    class FA_rearma_30Rnd_556x45_PMAG_Mk327_HV_T_Red: FA_rearma_30Rnd_556x45_PMAG_Mk327_HV { displayName = "[Ghost] 30Rnd Mk327 HV Black PMAG Red Tracer"; descriptionShort = "Mk327 HV"; ammo = "FA_b_556_Mk327_HV_T_Red"; tracersEvery = 4; };
    class FA_rearma_30Rnd_556x45_PMAG_Mk327_HV_T_Yellow: FA_rearma_30Rnd_556x45_PMAG_Mk327_HV { displayName = "[Ghost] 30Rnd Mk327 HV Black PMAG Yellow Tracer"; descriptionShort = "Mk327 HV"; ammo = "FA_b_556_Mk327_HV_T_Yellow"; tracersEvery = 4; };
    class FA_rearma_30Rnd_556x45_PMAG_Mk327_HV_T_Green: FA_rearma_30Rnd_556x45_PMAG_Mk327_HV { displayName = "[Ghost] 30Rnd Mk327 HV Black PMAG Green Tracer"; descriptionShort = "Mk327 HV"; ammo = "FA_b_556_Mk327_HV_T_Green"; tracersEvery = 4; };
    class FA_rearma_30Rnd_556x45_PMAG_Mk327_HV_T_White: FA_rearma_30Rnd_556x45_PMAG_Mk327_HV { displayName = "[Ghost] 30Rnd Mk327 HV Black PMAG White Tracer"; descriptionShort = "Mk327 HV"; ammo = "FA_b_556_Mk327_HV_T_White"; tracersEvery = 4; };
    class FA_rearma_30Rnd_556x45_PMAG_Mk327_HV_T_Blue: FA_rearma_30Rnd_556x45_PMAG_Mk327_HV { displayName = "[Ghost] 30Rnd Mk327 HV Black PMAG Blue Tracer"; descriptionShort = "Mk327 HV"; ammo = "FA_b_556_Mk327_HV_T_Blue"; tracersEvery = 4; };
    class FA_rearma_30Rnd_556x45_PMAG_Mk327_HV_T_Orange: FA_rearma_30Rnd_556x45_PMAG_Mk327_HV { displayName = "[Ghost] 30Rnd Mk327 HV Black PMAG Orange Tracer"; descriptionShort = "Mk327 HV"; ammo = "FA_b_556_Mk327_HV_T_Orange"; tracersEvery = 4; };
    class FA_rearma_30Rnd_556x45_PMAG_Mk327_HV_T_IR: FA_rearma_30Rnd_556x45_PMAG_Mk327_HV { displayName = "[Ghost] 30Rnd Mk327 HV Black PMAG IR Tracer"; descriptionShort = "Mk327 HV"; ammo = "FA_b_556_Mk327_HV_T_IR"; tracersEvery = 4; };
    class FA_rearma_30Rnd_556x45_PMAG_XM891_CTEP: 30Rnd_556x45_PMAG_Blk_F {
        author = QAUTHOR;
        displayName = "[Ghost] 30Rnd XM891 CTEP Black PMAG";
        displayNameShort = "XM891 CTEP";
        descriptionShort = "XM891 CTEP";
        ammo = "FA_b_556_XM891_CTEP";
        initSpeed = 980;
    };
    class FA_rearma_30Rnd_556x45_PMAG_XM891_CTEP_T_Red: FA_rearma_30Rnd_556x45_PMAG_XM891_CTEP { displayName = "[Ghost] 30Rnd XM891 CTEP Black PMAG Red Tracer"; descriptionShort = "XM891 CTEP"; ammo = "FA_b_556_XM891_CTEP_T_Red"; tracersEvery = 4; };
    class FA_rearma_30Rnd_556x45_PMAG_XM891_CTEP_T_Yellow: FA_rearma_30Rnd_556x45_PMAG_XM891_CTEP { displayName = "[Ghost] 30Rnd XM891 CTEP Black PMAG Yellow Tracer"; descriptionShort = "XM891 CTEP"; ammo = "FA_b_556_XM891_CTEP_T_Yellow"; tracersEvery = 4; };
    class FA_rearma_30Rnd_556x45_PMAG_XM891_CTEP_T_Green: FA_rearma_30Rnd_556x45_PMAG_XM891_CTEP { displayName = "[Ghost] 30Rnd XM891 CTEP Black PMAG Green Tracer"; descriptionShort = "XM891 CTEP"; ammo = "FA_b_556_XM891_CTEP_T_Green"; tracersEvery = 4; };
    class FA_rearma_30Rnd_556x45_PMAG_XM891_CTEP_T_White: FA_rearma_30Rnd_556x45_PMAG_XM891_CTEP { displayName = "[Ghost] 30Rnd XM891 CTEP Black PMAG White Tracer"; descriptionShort = "XM891 CTEP"; ammo = "FA_b_556_XM891_CTEP_T_White"; tracersEvery = 4; };
    class FA_rearma_30Rnd_556x45_PMAG_XM891_CTEP_T_Blue: FA_rearma_30Rnd_556x45_PMAG_XM891_CTEP { displayName = "[Ghost] 30Rnd XM891 CTEP Black PMAG Blue Tracer"; descriptionShort = "XM891 CTEP"; ammo = "FA_b_556_XM891_CTEP_T_Blue"; tracersEvery = 4; };
    class FA_rearma_30Rnd_556x45_PMAG_XM891_CTEP_T_Orange: FA_rearma_30Rnd_556x45_PMAG_XM891_CTEP { displayName = "[Ghost] 30Rnd XM891 CTEP Black PMAG Orange Tracer"; descriptionShort = "XM891 CTEP"; ammo = "FA_b_556_XM891_CTEP_T_Orange"; tracersEvery = 4; };
    class FA_rearma_30Rnd_556x45_PMAG_XM891_CTEP_T_IR: FA_rearma_30Rnd_556x45_PMAG_XM891_CTEP { displayName = "[Ghost] 30Rnd XM891 CTEP Black PMAG IR Tracer"; descriptionShort = "XM891 CTEP"; ammo = "FA_b_556_XM891_CTEP_T_IR"; tracersEvery = 4; };
    class FA_rearma_30Rnd_556x45_PMAG_Mk332_AP: 30Rnd_556x45_PMAG_Blk_F {
        author = QAUTHOR;
        displayName = "[Ghost] 30Rnd Mk332 AP Black PMAG";
        displayNameShort = "Mk332 AP";
        descriptionShort = "Mk332 AP";
        ammo = "FA_b_556_Mk332_AP";
        initSpeed = 940;
    };
    class FA_rearma_30Rnd_556x45_PMAG_Mk332_AP_T_Red: FA_rearma_30Rnd_556x45_PMAG_Mk332_AP { displayName = "[Ghost] 30Rnd Mk332 AP Black PMAG Red Tracer"; descriptionShort = "Mk332 AP"; ammo = "FA_b_556_Mk332_AP_T_Red"; tracersEvery = 4; };
    class FA_rearma_30Rnd_556x45_PMAG_Mk332_AP_T_Yellow: FA_rearma_30Rnd_556x45_PMAG_Mk332_AP { displayName = "[Ghost] 30Rnd Mk332 AP Black PMAG Yellow Tracer"; descriptionShort = "Mk332 AP"; ammo = "FA_b_556_Mk332_AP_T_Yellow"; tracersEvery = 4; };
    class FA_rearma_30Rnd_556x45_PMAG_Mk332_AP_T_Green: FA_rearma_30Rnd_556x45_PMAG_Mk332_AP { displayName = "[Ghost] 30Rnd Mk332 AP Black PMAG Green Tracer"; descriptionShort = "Mk332 AP"; ammo = "FA_b_556_Mk332_AP_T_Green"; tracersEvery = 4; };
    class FA_rearma_30Rnd_556x45_PMAG_Mk332_AP_T_White: FA_rearma_30Rnd_556x45_PMAG_Mk332_AP { displayName = "[Ghost] 30Rnd Mk332 AP Black PMAG White Tracer"; descriptionShort = "Mk332 AP"; ammo = "FA_b_556_Mk332_AP_T_White"; tracersEvery = 4; };
    class FA_rearma_30Rnd_556x45_PMAG_Mk332_AP_T_Blue: FA_rearma_30Rnd_556x45_PMAG_Mk332_AP { displayName = "[Ghost] 30Rnd Mk332 AP Black PMAG Blue Tracer"; descriptionShort = "Mk332 AP"; ammo = "FA_b_556_Mk332_AP_T_Blue"; tracersEvery = 4; };
    class FA_rearma_30Rnd_556x45_PMAG_Mk332_AP_T_Orange: FA_rearma_30Rnd_556x45_PMAG_Mk332_AP { displayName = "[Ghost] 30Rnd Mk332 AP Black PMAG Orange Tracer"; descriptionShort = "Mk332 AP"; ammo = "FA_b_556_Mk332_AP_T_Orange"; tracersEvery = 4; };
    class FA_rearma_30Rnd_556x45_PMAG_Mk332_AP_T_IR: FA_rearma_30Rnd_556x45_PMAG_Mk332_AP { displayName = "[Ghost] 30Rnd Mk332 AP Black PMAG IR Tracer"; descriptionShort = "Mk332 AP"; ammo = "FA_b_556_Mk332_AP_T_IR"; tracersEvery = 4; };
    class FA_rearma_30Rnd_556x45_PMAG_Mk361_PAB: 30Rnd_556x45_PMAG_Blk_F {
        author = QAUTHOR;
        displayName = "[Ghost] 30Rnd Mk361 PAB Black PMAG";
        displayNameShort = "Mk361 PAB";
        descriptionShort = "Mk361 PAB airburst, counter-UAS";
        ammo = "FA_b_556_Mk361_PAB";
        initSpeed = 920;
    };
    class FA_rearma_30Rnd_556x45_PMAG_Mk361_PAB_T_Red: FA_rearma_30Rnd_556x45_PMAG_Mk361_PAB { displayName = "[Ghost] 30Rnd Mk361 PAB Black PMAG Red Tracer"; descriptionShort = "Mk361 PAB airburst, counter-UAS"; ammo = "FA_b_556_Mk361_PAB_T_Red"; tracersEvery = 4; };
    class FA_rearma_30Rnd_556x45_PMAG_Mk361_PAB_T_Yellow: FA_rearma_30Rnd_556x45_PMAG_Mk361_PAB { displayName = "[Ghost] 30Rnd Mk361 PAB Black PMAG Yellow Tracer"; descriptionShort = "Mk361 PAB airburst, counter-UAS"; ammo = "FA_b_556_Mk361_PAB_T_Yellow"; tracersEvery = 4; };
    class FA_rearma_30Rnd_556x45_PMAG_Mk361_PAB_T_Green: FA_rearma_30Rnd_556x45_PMAG_Mk361_PAB { displayName = "[Ghost] 30Rnd Mk361 PAB Black PMAG Green Tracer"; descriptionShort = "Mk361 PAB airburst, counter-UAS"; ammo = "FA_b_556_Mk361_PAB_T_Green"; tracersEvery = 4; };
    class FA_rearma_30Rnd_556x45_PMAG_Mk361_PAB_T_White: FA_rearma_30Rnd_556x45_PMAG_Mk361_PAB { displayName = "[Ghost] 30Rnd Mk361 PAB Black PMAG White Tracer"; descriptionShort = "Mk361 PAB airburst, counter-UAS"; ammo = "FA_b_556_Mk361_PAB_T_White"; tracersEvery = 4; };
    class FA_rearma_30Rnd_556x45_PMAG_Mk361_PAB_T_Blue: FA_rearma_30Rnd_556x45_PMAG_Mk361_PAB { displayName = "[Ghost] 30Rnd Mk361 PAB Black PMAG Blue Tracer"; descriptionShort = "Mk361 PAB airburst, counter-UAS"; ammo = "FA_b_556_Mk361_PAB_T_Blue"; tracersEvery = 4; };
    class FA_rearma_30Rnd_556x45_PMAG_Mk361_PAB_T_Orange: FA_rearma_30Rnd_556x45_PMAG_Mk361_PAB { displayName = "[Ghost] 30Rnd Mk361 PAB Black PMAG Orange Tracer"; descriptionShort = "Mk361 PAB airburst, counter-UAS"; ammo = "FA_b_556_Mk361_PAB_T_Orange"; tracersEvery = 4; };
    class FA_rearma_30Rnd_556x45_PMAG_Mk368K_AD: 30Rnd_556x45_PMAG_Blk_F {
        author = QAUTHOR;
        displayName = "[Ghost] 30Rnd Mk368K AD Black PMAG";
        displayNameShort = "Mk368K AD";
        descriptionShort = "Mk368K AD 8-pellet shot, eff. 100 m";
        ammo = "FA_b_556_Mk368K_AD";
        initSpeed = 671;
        tracersEvery = 0;
        lastRoundsTracer = 0;
    };
    class FA_rearma_30Rnd_556x45_PMAG_Mk368L_AD: 30Rnd_556x45_PMAG_Blk_F {
        author = QAUTHOR;
        displayName = "[Ghost] 30Rnd Mk368L AD Black PMAG";
        displayNameShort = "Mk368L AD";
        descriptionShort = "Mk368L AD 5-pellet shot, eff. 200 m";
        ammo = "FA_b_556_Mk368L_AD";
        initSpeed = 671;
        tracersEvery = 0;
        lastRoundsTracer = 0;
    };

    // ===== 30Rnd 5.56 PMAG tan - M27A5 - body 30Rnd_556x45_PMAG_Tan_F =====
    class FA_rearma_30Rnd_556x45_PMAGTan_Mk327_HV: 30Rnd_556x45_PMAG_Tan_F {
        author = QAUTHOR;
        displayName = "[Ghost] 30Rnd Mk327 HV Tan PMAG";
        displayNameShort = "Mk327 HV";
        descriptionShort = "Mk327 HV";
        ammo = "FA_b_556_Mk327_HV";
        initSpeed = 960;
    };
    class FA_rearma_30Rnd_556x45_PMAGTan_Mk327_HV_T_Red: FA_rearma_30Rnd_556x45_PMAGTan_Mk327_HV { displayName = "[Ghost] 30Rnd Mk327 HV Tan PMAG Red Tracer"; descriptionShort = "Mk327 HV"; ammo = "FA_b_556_Mk327_HV_T_Red"; tracersEvery = 4; };
    class FA_rearma_30Rnd_556x45_PMAGTan_Mk327_HV_T_Yellow: FA_rearma_30Rnd_556x45_PMAGTan_Mk327_HV { displayName = "[Ghost] 30Rnd Mk327 HV Tan PMAG Yellow Tracer"; descriptionShort = "Mk327 HV"; ammo = "FA_b_556_Mk327_HV_T_Yellow"; tracersEvery = 4; };
    class FA_rearma_30Rnd_556x45_PMAGTan_Mk327_HV_T_Green: FA_rearma_30Rnd_556x45_PMAGTan_Mk327_HV { displayName = "[Ghost] 30Rnd Mk327 HV Tan PMAG Green Tracer"; descriptionShort = "Mk327 HV"; ammo = "FA_b_556_Mk327_HV_T_Green"; tracersEvery = 4; };
    class FA_rearma_30Rnd_556x45_PMAGTan_Mk327_HV_T_White: FA_rearma_30Rnd_556x45_PMAGTan_Mk327_HV { displayName = "[Ghost] 30Rnd Mk327 HV Tan PMAG White Tracer"; descriptionShort = "Mk327 HV"; ammo = "FA_b_556_Mk327_HV_T_White"; tracersEvery = 4; };
    class FA_rearma_30Rnd_556x45_PMAGTan_Mk327_HV_T_Blue: FA_rearma_30Rnd_556x45_PMAGTan_Mk327_HV { displayName = "[Ghost] 30Rnd Mk327 HV Tan PMAG Blue Tracer"; descriptionShort = "Mk327 HV"; ammo = "FA_b_556_Mk327_HV_T_Blue"; tracersEvery = 4; };
    class FA_rearma_30Rnd_556x45_PMAGTan_Mk327_HV_T_Orange: FA_rearma_30Rnd_556x45_PMAGTan_Mk327_HV { displayName = "[Ghost] 30Rnd Mk327 HV Tan PMAG Orange Tracer"; descriptionShort = "Mk327 HV"; ammo = "FA_b_556_Mk327_HV_T_Orange"; tracersEvery = 4; };
    class FA_rearma_30Rnd_556x45_PMAGTan_Mk327_HV_T_IR: FA_rearma_30Rnd_556x45_PMAGTan_Mk327_HV { displayName = "[Ghost] 30Rnd Mk327 HV Tan PMAG IR Tracer"; descriptionShort = "Mk327 HV"; ammo = "FA_b_556_Mk327_HV_T_IR"; tracersEvery = 4; };
    class FA_rearma_30Rnd_556x45_PMAGTan_XM891_CTEP: 30Rnd_556x45_PMAG_Tan_F {
        author = QAUTHOR;
        displayName = "[Ghost] 30Rnd XM891 CTEP Tan PMAG";
        displayNameShort = "XM891 CTEP";
        descriptionShort = "XM891 CTEP";
        ammo = "FA_b_556_XM891_CTEP";
        initSpeed = 980;
    };
    class FA_rearma_30Rnd_556x45_PMAGTan_XM891_CTEP_T_Red: FA_rearma_30Rnd_556x45_PMAGTan_XM891_CTEP { displayName = "[Ghost] 30Rnd XM891 CTEP Tan PMAG Red Tracer"; descriptionShort = "XM891 CTEP"; ammo = "FA_b_556_XM891_CTEP_T_Red"; tracersEvery = 4; };
    class FA_rearma_30Rnd_556x45_PMAGTan_XM891_CTEP_T_Yellow: FA_rearma_30Rnd_556x45_PMAGTan_XM891_CTEP { displayName = "[Ghost] 30Rnd XM891 CTEP Tan PMAG Yellow Tracer"; descriptionShort = "XM891 CTEP"; ammo = "FA_b_556_XM891_CTEP_T_Yellow"; tracersEvery = 4; };
    class FA_rearma_30Rnd_556x45_PMAGTan_XM891_CTEP_T_Green: FA_rearma_30Rnd_556x45_PMAGTan_XM891_CTEP { displayName = "[Ghost] 30Rnd XM891 CTEP Tan PMAG Green Tracer"; descriptionShort = "XM891 CTEP"; ammo = "FA_b_556_XM891_CTEP_T_Green"; tracersEvery = 4; };
    class FA_rearma_30Rnd_556x45_PMAGTan_XM891_CTEP_T_White: FA_rearma_30Rnd_556x45_PMAGTan_XM891_CTEP { displayName = "[Ghost] 30Rnd XM891 CTEP Tan PMAG White Tracer"; descriptionShort = "XM891 CTEP"; ammo = "FA_b_556_XM891_CTEP_T_White"; tracersEvery = 4; };
    class FA_rearma_30Rnd_556x45_PMAGTan_XM891_CTEP_T_Blue: FA_rearma_30Rnd_556x45_PMAGTan_XM891_CTEP { displayName = "[Ghost] 30Rnd XM891 CTEP Tan PMAG Blue Tracer"; descriptionShort = "XM891 CTEP"; ammo = "FA_b_556_XM891_CTEP_T_Blue"; tracersEvery = 4; };
    class FA_rearma_30Rnd_556x45_PMAGTan_XM891_CTEP_T_Orange: FA_rearma_30Rnd_556x45_PMAGTan_XM891_CTEP { displayName = "[Ghost] 30Rnd XM891 CTEP Tan PMAG Orange Tracer"; descriptionShort = "XM891 CTEP"; ammo = "FA_b_556_XM891_CTEP_T_Orange"; tracersEvery = 4; };
    class FA_rearma_30Rnd_556x45_PMAGTan_XM891_CTEP_T_IR: FA_rearma_30Rnd_556x45_PMAGTan_XM891_CTEP { displayName = "[Ghost] 30Rnd XM891 CTEP Tan PMAG IR Tracer"; descriptionShort = "XM891 CTEP"; ammo = "FA_b_556_XM891_CTEP_T_IR"; tracersEvery = 4; };
    class FA_rearma_30Rnd_556x45_PMAGTan_Mk332_AP: 30Rnd_556x45_PMAG_Tan_F {
        author = QAUTHOR;
        displayName = "[Ghost] 30Rnd Mk332 AP Tan PMAG";
        displayNameShort = "Mk332 AP";
        descriptionShort = "Mk332 AP";
        ammo = "FA_b_556_Mk332_AP";
        initSpeed = 940;
    };
    class FA_rearma_30Rnd_556x45_PMAGTan_Mk332_AP_T_Red: FA_rearma_30Rnd_556x45_PMAGTan_Mk332_AP { displayName = "[Ghost] 30Rnd Mk332 AP Tan PMAG Red Tracer"; descriptionShort = "Mk332 AP"; ammo = "FA_b_556_Mk332_AP_T_Red"; tracersEvery = 4; };
    class FA_rearma_30Rnd_556x45_PMAGTan_Mk332_AP_T_Yellow: FA_rearma_30Rnd_556x45_PMAGTan_Mk332_AP { displayName = "[Ghost] 30Rnd Mk332 AP Tan PMAG Yellow Tracer"; descriptionShort = "Mk332 AP"; ammo = "FA_b_556_Mk332_AP_T_Yellow"; tracersEvery = 4; };
    class FA_rearma_30Rnd_556x45_PMAGTan_Mk332_AP_T_Green: FA_rearma_30Rnd_556x45_PMAGTan_Mk332_AP { displayName = "[Ghost] 30Rnd Mk332 AP Tan PMAG Green Tracer"; descriptionShort = "Mk332 AP"; ammo = "FA_b_556_Mk332_AP_T_Green"; tracersEvery = 4; };
    class FA_rearma_30Rnd_556x45_PMAGTan_Mk332_AP_T_White: FA_rearma_30Rnd_556x45_PMAGTan_Mk332_AP { displayName = "[Ghost] 30Rnd Mk332 AP Tan PMAG White Tracer"; descriptionShort = "Mk332 AP"; ammo = "FA_b_556_Mk332_AP_T_White"; tracersEvery = 4; };
    class FA_rearma_30Rnd_556x45_PMAGTan_Mk332_AP_T_Blue: FA_rearma_30Rnd_556x45_PMAGTan_Mk332_AP { displayName = "[Ghost] 30Rnd Mk332 AP Tan PMAG Blue Tracer"; descriptionShort = "Mk332 AP"; ammo = "FA_b_556_Mk332_AP_T_Blue"; tracersEvery = 4; };
    class FA_rearma_30Rnd_556x45_PMAGTan_Mk332_AP_T_Orange: FA_rearma_30Rnd_556x45_PMAGTan_Mk332_AP { displayName = "[Ghost] 30Rnd Mk332 AP Tan PMAG Orange Tracer"; descriptionShort = "Mk332 AP"; ammo = "FA_b_556_Mk332_AP_T_Orange"; tracersEvery = 4; };
    class FA_rearma_30Rnd_556x45_PMAGTan_Mk332_AP_T_IR: FA_rearma_30Rnd_556x45_PMAGTan_Mk332_AP { displayName = "[Ghost] 30Rnd Mk332 AP Tan PMAG IR Tracer"; descriptionShort = "Mk332 AP"; ammo = "FA_b_556_Mk332_AP_T_IR"; tracersEvery = 4; };
    class FA_rearma_30Rnd_556x45_PMAGTan_Mk361_PAB: 30Rnd_556x45_PMAG_Tan_F {
        author = QAUTHOR;
        displayName = "[Ghost] 30Rnd Mk361 PAB Tan PMAG";
        displayNameShort = "Mk361 PAB";
        descriptionShort = "Mk361 PAB airburst, counter-UAS";
        ammo = "FA_b_556_Mk361_PAB";
        initSpeed = 920;
    };
    class FA_rearma_30Rnd_556x45_PMAGTan_Mk361_PAB_T_Red: FA_rearma_30Rnd_556x45_PMAGTan_Mk361_PAB { displayName = "[Ghost] 30Rnd Mk361 PAB Tan PMAG Red Tracer"; descriptionShort = "Mk361 PAB airburst, counter-UAS"; ammo = "FA_b_556_Mk361_PAB_T_Red"; tracersEvery = 4; };
    class FA_rearma_30Rnd_556x45_PMAGTan_Mk361_PAB_T_Yellow: FA_rearma_30Rnd_556x45_PMAGTan_Mk361_PAB { displayName = "[Ghost] 30Rnd Mk361 PAB Tan PMAG Yellow Tracer"; descriptionShort = "Mk361 PAB airburst, counter-UAS"; ammo = "FA_b_556_Mk361_PAB_T_Yellow"; tracersEvery = 4; };
    class FA_rearma_30Rnd_556x45_PMAGTan_Mk361_PAB_T_Green: FA_rearma_30Rnd_556x45_PMAGTan_Mk361_PAB { displayName = "[Ghost] 30Rnd Mk361 PAB Tan PMAG Green Tracer"; descriptionShort = "Mk361 PAB airburst, counter-UAS"; ammo = "FA_b_556_Mk361_PAB_T_Green"; tracersEvery = 4; };
    class FA_rearma_30Rnd_556x45_PMAGTan_Mk361_PAB_T_White: FA_rearma_30Rnd_556x45_PMAGTan_Mk361_PAB { displayName = "[Ghost] 30Rnd Mk361 PAB Tan PMAG White Tracer"; descriptionShort = "Mk361 PAB airburst, counter-UAS"; ammo = "FA_b_556_Mk361_PAB_T_White"; tracersEvery = 4; };
    class FA_rearma_30Rnd_556x45_PMAGTan_Mk361_PAB_T_Blue: FA_rearma_30Rnd_556x45_PMAGTan_Mk361_PAB { displayName = "[Ghost] 30Rnd Mk361 PAB Tan PMAG Blue Tracer"; descriptionShort = "Mk361 PAB airburst, counter-UAS"; ammo = "FA_b_556_Mk361_PAB_T_Blue"; tracersEvery = 4; };
    class FA_rearma_30Rnd_556x45_PMAGTan_Mk361_PAB_T_Orange: FA_rearma_30Rnd_556x45_PMAGTan_Mk361_PAB { displayName = "[Ghost] 30Rnd Mk361 PAB Tan PMAG Orange Tracer"; descriptionShort = "Mk361 PAB airburst, counter-UAS"; ammo = "FA_b_556_Mk361_PAB_T_Orange"; tracersEvery = 4; };
    class FA_rearma_30Rnd_556x45_PMAGTan_Mk368K_AD: 30Rnd_556x45_PMAG_Tan_F {
        author = QAUTHOR;
        displayName = "[Ghost] 30Rnd Mk368K AD Tan PMAG";
        displayNameShort = "Mk368K AD";
        descriptionShort = "Mk368K AD 8-pellet shot, eff. 100 m";
        ammo = "FA_b_556_Mk368K_AD";
        initSpeed = 671;
        tracersEvery = 0;
        lastRoundsTracer = 0;
    };
    class FA_rearma_30Rnd_556x45_PMAGTan_Mk368L_AD: 30Rnd_556x45_PMAG_Tan_F {
        author = QAUTHOR;
        displayName = "[Ghost] 30Rnd Mk368L AD Tan PMAG";
        displayNameShort = "Mk368L AD";
        descriptionShort = "Mk368L AD 5-pellet shot, eff. 200 m";
        ammo = "FA_b_556_Mk368L_AD";
        initSpeed = 671;
        tracersEvery = 0;
        lastRoundsTracer = 0;
    };

    // ===== 20Rnd 4.6x30 - MP7A2 (body data copied from 20Rnd_46x30_AP_Mag_F) - parent CA_Magazine =====
    class FA_rearma_20Rnd_46x30_Mk432_AP: CA_Magazine {
        author = QAUTHOR;
        scope = 2;
        scopeArsenal = 2;
        model = "\us_weapon\smgs\magazine_20rnd.p3d";
        modelSpecial = "\us_weapon\smgs\mp7_magazine_20rnd_f.p3d";
        modelSpecialIsProxy = 1;
        picture = "\us_weapon\smgs\data\ui\ui_mp7_20rnd.paa";
        count = 20;
        mass = 4;
        displayName = "[Ghost] 20Rnd Mk432 AP";
        displayNameShort = "Mk432 AP";
        descriptionShort = "Mk432 AP";
        ammo = "FA_b_46x30_Mk432_AP";
        initSpeed = 725;
    };
    class FA_rearma_20Rnd_46x30_Mk433_SUB: CA_Magazine {
        author = QAUTHOR;
        scope = 2;
        scopeArsenal = 2;
        model = "\us_weapon\smgs\magazine_20rnd.p3d";
        modelSpecial = "\us_weapon\smgs\mp7_magazine_20rnd_f.p3d";
        modelSpecialIsProxy = 1;
        picture = "\us_weapon\smgs\data\ui\ui_mp7_20rnd.paa";
        count = 20;
        mass = 4;
        displayName = "[Ghost] 20Rnd Mk433 SUB";
        displayNameShort = "Mk433 SUB";
        descriptionShort = "Mk433 SUB";
        ammo = "FA_b_46x30_Mk433_SUB";
        initSpeed = 300;
    };

    // ===== 40Rnd 4.6x30 - MP7A2 (body data copied from 40Rnd_46x30_AP_Mag_F) - parent CA_Magazine =====
    class FA_rearma_40Rnd_46x30_Mk432_AP: CA_Magazine {
        author = QAUTHOR;
        scope = 2;
        scopeArsenal = 2;
        model = "\us_weapon\smgs\magazine_40rnd.p3d";
        modelSpecial = "\us_weapon\smgs\mp7_magazine_40rnd_f.p3d";
        modelSpecialIsProxy = 1;
        picture = "\us_weapon\smgs\data\ui\ui_mp7_40rnd.paa";
        count = 40;
        mass = 8;
        displayName = "[Ghost] 40Rnd Mk432 AP";
        displayNameShort = "Mk432 AP";
        descriptionShort = "Mk432 AP";
        ammo = "FA_b_46x30_Mk432_AP";
        initSpeed = 725;
    };
    class FA_rearma_40Rnd_46x30_Mk433_SUB: CA_Magazine {
        author = QAUTHOR;
        scope = 2;
        scopeArsenal = 2;
        model = "\us_weapon\smgs\magazine_40rnd.p3d";
        modelSpecial = "\us_weapon\smgs\mp7_magazine_40rnd_f.p3d";
        modelSpecialIsProxy = 1;
        picture = "\us_weapon\smgs\data\ui\ui_mp7_40rnd.paa";
        count = 40;
        mass = 8;
        displayName = "[Ghost] 40Rnd Mk433 SUB";
        displayNameShort = "Mk433 SUB";
        descriptionShort = "Mk433 SUB";
        ammo = "FA_b_46x30_Mk433_SUB";
        initSpeed = 300;
    };

    // ===== 17Rnd 9x19 - M17 / M18 (rearma's "18Rnd" body holds 17) - body 18Rnd_9x19_Mag =====
    class FA_rearma_17Rnd_9x19_Mk422_AP: 18Rnd_9x19_Mag {
        author = QAUTHOR;
        displayName = "[Ghost] 17Rnd Mk422 AP";
        displayNameShort = "Mk422 AP";
        descriptionShort = "Mk422 AP";
        ammo = "FA_b_9x19_Mk422_AP";
        initSpeed = 400;
    };
    class FA_rearma_17Rnd_9x19_Mk423_SUB: 18Rnd_9x19_Mag {
        author = QAUTHOR;
        displayName = "[Ghost] 17Rnd Mk423 SUB";
        displayNameShort = "Mk423 SUB";
        descriptionShort = "Mk423 SUB";
        ammo = "FA_b_9x19_Mk423_SUB";
        initSpeed = 300;
    };

    // ===== M72A7 66mm - FA disposable variants, body m72a7_mag =====
    class FA_rearma_M72A10_TNDM: m72a7_mag {
        author = QAUTHOR;
        scope = 1;
        displayName = "[Ghost] M72A10 TNDM";
        descriptionShort = "66mm M72A10 TNDM (2040)<br/>Tandem HEAT - ~350 mm RHA, 300 m";
        ammo = "FA_R_M72A10_TNDM";
    };
    class FA_rearma_M72A11_TBX: m72a7_mag {
        author = QAUTHOR;
        scope = 1;
        displayName = "[Ghost] M72A11 TBX";
        descriptionShort = "66mm M72A11 TBX (2040)<br/>Thermobaric, room / bunker clearing - 250 m";
        ammo = "FA_R_M72A11_TBX";
    };
    class FA_rearma_M72A12_PROX: m72a7_mag {
        author = QAUTHOR;
        scope = 1;
        displayName = "[Ghost] M72A12 PROX";
        descriptionShort = "66mm M72A12 PROX (2040)<br/>C-UAS proximity airburst - scripted fuze, 200 m";
        ammo = "FA_R_M72A12_PROX";
    };
};
