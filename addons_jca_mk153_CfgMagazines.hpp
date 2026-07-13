// One rocket per tube, on the JCA Mk153 magazine bodies (JCA_MK153_HEAT_F /
// JCA_MK153_HE_F) so the FA rounds chamber and feed via the JCA_MK153 magazine
// well. AT/HEAT natures on the HEAT body, HE/thermobaric/C-UAS on the HE body.
class CfgMagazines {
    class JCA_MK153_HEAT_F;
    class JCA_MK153_HE_F;

    class FA_JCA_MK153_Mk6Mod2_HEAA: JCA_MK153_HEAT_F {
        author = QAUTHOR;
        displayName = "[Ghost] Mk153 Mk6 Mod 2 HEAA-T";
        descriptionShort = "83mm Mk6 Mod 2 HEAA-T (2040)<br/>Tandem shaped charge, anti-armor - defeats ERA, ~720mm RHA, 500 m";
        ammo = "FA_R_smaw_Mk6Mod2_HEAA";
        initSpeed = 260;
    };
    class FA_JCA_MK153_Mk3Mod2_HEDP: JCA_MK153_HE_F {
        author = QAUTHOR;
        displayName = "[Ghost] Mk153 Mk3 Mod 2 HEDP-P";
        descriptionShort = "83mm Mk3 Mod 2 HEDP-P (2040)<br/>Dual-purpose HE + shaped, programmable airburst (Mk364 keybind) - ~270mm RHA, structures, 500 m";
        ammo = "FA_R_smaw_Mk3Mod2_HEDP";
        initSpeed = 250;
    };
    class FA_JCA_MK153_Mk80Mod1_NE: JCA_MK153_HE_F {
        author = QAUTHOR;
        displayName = "[Ghost] Mk153 Mk80 Mod 1 NE";
        descriptionShort = "83mm Mk80 Mod 1 NE (2040)<br/>Enhanced novel-explosive (thermobaric) - bunker / room clearer, overpressure kill, 400 m";
        ammo = "FA_R_smaw_Mk80Mod1_NE";
        initSpeed = 240;
    };
    class FA_JCA_MK153_Mk7_CS: JCA_MK153_HEAT_F {
        author = QAUTHOR;
        displayName = "[Ghost] Mk153 Mk7 CS";
        descriptionShort = "83mm Mk7 CS (2040)<br/>Tandem HEAT, confined-space (reduced backblast, fire from enclosures) - ~600mm RHA, 300 m";
        ammo = "FA_R_smaw_Mk7_CS";
        initSpeed = 220;
    };
    class FA_JCA_MK153_Mk85_FTG: JCA_MK153_HEAT_F {
        author = QAUTHOR;
        displayName = "[Ghost] Mk153 Mk85 FTG";
        descriptionShort = "83mm Mk85 FTG (2040)<br/>Follow-through grenade - breach the wall, grenade detonates inside the room, 250 m";
        ammo = "FA_R_smaw_Mk85_FTG";
        initSpeed = 230;
    };
    class FA_JCA_MK153_Mk22_GS: JCA_MK153_HEAT_F {
        author = QAUTHOR;
        displayName = "[Ghost] Mk153 Mk22 GS";
        descriptionShort = "83mm Mk22 GS (2040)<br/>Guided precision, tandem dual-purpose - steer to the PWS crosshair, ~675mm RHA, 800 m";
        ammo = "FA_M_smaw_Mk22_GS";
        initSpeed = 260;
    };
    class FA_JCA_MK153_Mk18_ADM: JCA_MK153_HE_F {
        author = QAUTHOR;
        displayName = "[Ghost] Mk153 Mk18 ADM";
        descriptionShort = "83mm Mk18 ADM (2040)<br/>C-UAS prefragmented proximity - hard-kill drones and loitering munitions, 500 m";
        ammo = "FA_R_smaw_Mk18_ADM";
        initSpeed = 260;
    };
};
