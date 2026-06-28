class CfgAmmo {
    class G_40mm_HE;

    // Inert carrier: flies like a 40mm grenade but does no damage.
    // Deleted at apex or ground contact; the SQF framework deploys the payload.
    class futureAmmo_40mm_Carrier_Base: G_40mm_HE {
        hit = 0; indirectHit = 0; indirectHitRange = 0; explosive = 0;
        cost = 0; airLock = 0; deflecting = 0;
        soundHit1[] = {"",1,1}; explosionEffects = "";
    };

    class futureAmmo_40mm_Mk380_NRP:    futureAmmo_40mm_Carrier_Base {};
    class futureAmmo_40mm_Mk381_SPARCS: futureAmmo_40mm_Carrier_Base {};
    class futureAmmo_40mm_Mk382_GLUAS:  futureAmmo_40mm_Carrier_Base {};
    class futureAmmo_40mm_Mk383_EMP:    futureAmmo_40mm_Carrier_Base {};
    class futureAmmo_40mm_Mk384_MSmoke: futureAmmo_40mm_Carrier_Base {};
    class futureAmmo_40mm_Mk385_Decoy:  futureAmmo_40mm_Carrier_Base {};
    class futureAmmo_40mm_Mk386_UGS:    futureAmmo_40mm_Carrier_Base {};
    class futureAmmo_40mm_Mk387_Desig:  futureAmmo_40mm_Carrier_Base {};
    class futureAmmo_40mm_Mk388_Jammer: futureAmmo_40mm_Carrier_Base {};
};
