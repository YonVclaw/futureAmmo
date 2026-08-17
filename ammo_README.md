# Arma 3 Vanilla Weapons Reference (CfgWeapons)

Cleaned-up Markdown conversion of the Bohemia wiki **Arma 3 CfgWeapons** asset table (generated for Arma 3 v2.17, Aug 2024, by R3vo). Source wikitext: `ammo.md`.

453 weapons. *Used by* counts placed units per side (BLUFOR / OPFOR / Independent / Civilian); blank = arsenal/crate only. Magazine lists are the config defaults, not FA additions.

## Contents

- [By Caliber](#by-caliber)
- [Assault Rifle](#assault-rifle) (230)
- [Marksman Rifle](#marksman-rifle) (70)
- [Sniper Rifle](#sniper-rifle) (16)
- [Light Machine Gun](#light-machine-gun) (36)
- [Medium Machine Gun](#medium-machine-gun) (8)
- [Submachine Gun](#submachine-gun) (29)
- [Handgun](#handgun) (24)
- [Shotgun](#shotgun) (2)
- [Rocket Launcher](#rocket-launcher) (26)
- [Missile Launcher](#missile-launcher) (2)
- [Non-combat Gun](#non-combat-gun) (1)
- [Other / Non-Weapon Entries](#other--non-weapon-entries) (6)
- [Underwater Gun](#underwater-gun) (1)

## By Caliber

Every caliber, the weapon families chambered for it (cosmetic variants collapsed), and the vanilla magazines. GL rifles are listed under their rifle caliber; 40 mm UGL payloads (HE/flare/smoke shells) are excluded. Per side (b = BLUFOR, o = OPFOR, i = Independent): the FA ammo families for that side, the vanilla magazines that side's weapons use, and how many FA magazines this mod builds on each vanilla mag body. FA mags on third-party bodies (JCA / SPS / RHS / E22 / Aegis / LOT / RF) are not counted here.

| Caliber | Weapons | b_ammo | b_magazines | fa-b_magazines | o_ammo | o_magazines | fa-o_magazines | i_ammo | i_magazines | fa-i_magazines |
|---|---|---|---|---|---|---|---|---|---|---|
| **5.45x39 mm** | AKS-74U 5.45 mm | — | — | — | 7N44 HP · 7N48 CT · 7U5 SUB-AP | — | — | — | `30Rnd_545x39_Mag_F`<br>`30Rnd_545x39_Mag_Green_F`<br>`30Rnd_545x39_Mag_Tracer_F`<br>`30Rnd_545x39_Mag_Tracer_Green_F` | — |
| **5.56x45 mm** | LIM-85 5.56 mm<br>Mk20 5.56 mm<br>Mk20 EGLM 5.56 mm<br>Mk20C 5.56 mm<br>SPAR-16 5.56 mm<br>SPAR-16 GL 5.56 mm<br>SPAR-16S 5.56 mm<br>TRG-20 5.56 mm<br>TRG-21 5.56 mm<br>TRG-21 EGLM 5.56 mm | Mk327 HV · XM891 CTEP · Mk332 AP · Mk361 PAB · Mk368K/L AD | `30Rnd_556x45_Stanag`<br>`30Rnd_556x45_Stanag_Tracer_Red`<br>`30Rnd_556x45_Stanag_Tracer_Green`<br>`30Rnd_556x45_Stanag_Tracer_Yellow`<br>`30Rnd_556x45_Stanag_red`<br>`30Rnd_556x45_Stanag_green`<br>`30Rnd_556x45_Stanag_Sand`<br>`30Rnd_556x45_Stanag_Sand_green`<br>`30Rnd_556x45_Stanag_Sand_red`<br>`30Rnd_556x45_Stanag_Sand_Tracer_Red`<br>`30Rnd_556x45_Stanag_Sand_Tracer_Green`<br>`30Rnd_556x45_Stanag_Sand_Tracer_Yellow`<br>`150Rnd_556x45_Drum_Mag_F`<br>`150Rnd_556x45_Drum_Mag_Tracer_F`<br>`150Rnd_556x45_Drum_Sand_Mag_F`<br>`150Rnd_556x45_Drum_Sand_Mag_Tracer_F` | `30Rnd_556x45_Stanag` → 124 FA | — | `30Rnd_556x45_Stanag`<br>`30Rnd_556x45_Stanag_Tracer_Red`<br>`30Rnd_556x45_Stanag_Tracer_Green`<br>`30Rnd_556x45_Stanag_Tracer_Yellow`<br>`30Rnd_556x45_Stanag_red`<br>`30Rnd_556x45_Stanag_green` | `30Rnd_556x45_Stanag` → 124 FA | AF-556 HV · AF-556C CT · AF-556P AP | `30Rnd_556x45_Stanag`<br>`30Rnd_556x45_Stanag_Tracer_Red`<br>`30Rnd_556x45_Stanag_Tracer_Green`<br>`30Rnd_556x45_Stanag_Tracer_Yellow`<br>`30Rnd_556x45_Stanag_red`<br>`30Rnd_556x45_Stanag_green`<br>`200Rnd_556x45_Box_F`<br>`200Rnd_556x45_Box_Red_F`<br>`200Rnd_556x45_Box_Tracer_F`<br>`200Rnd_556x45_Box_Tracer_Red_F` | `30Rnd_556x45_Stanag` → 124 FA<br>`200Rnd_556x45_Box_F` → 48 FA |
| **5.8x42 mm** | CAR-95 5.8 mm<br>CAR-95 GL 5.8 mm<br>CAR-95-1 5.8mm | — | — | — | Ball HV · DBP-39 CT · DBP-40 AP | `30Rnd_580x42_Mag_F`<br>`30Rnd_580x42_Mag_Tracer_F`<br>`100Rnd_580x42_Mag_F`<br>`100Rnd_580x42_Mag_Tracer_F`<br>`100Rnd_580x42_ghex_Mag_F`<br>`100Rnd_580x42_ghex_Mag_Tracer_F`<br>`100Rnd_580x42_hex_Mag_F`<br>`100Rnd_580x42_hex_Mag_Tracer_F` | `30Rnd_580x42_Mag_F` → 24 FA | — | — | — |
| **6.5x39 mm** | CMR-76 6.5 mm<br>Katiba 6.5 mm<br>Katiba Carbine 6.5 mm<br>Katiba GL 6.5 mm<br>MX 3GL 6.5 mm<br>MX 6.5 mm<br>MX SW 6.5 mm<br>MXC 6.5 mm<br>MXM 6.5 mm<br>Mk200 6.5 mm<br>Promet 6.5 mm<br>Promet GL 6.5 mm<br>Promet MR 6.5 mm<br>Promet SG 6.5 mm | Mk330 EPR · Mk331 AP · Mk328 HV · Mk329 LR · XM892/XM893 CTEP · Mk367 PAB | `30Rnd_65x39_caseless_mag`<br>`30Rnd_65x39_caseless_black_mag`<br>`30Rnd_65x39_caseless_khaki_mag`<br>`100Rnd_65x39_caseless_black_mag`<br>`100Rnd_65x39_caseless_mag`<br>`100Rnd_65x39_caseless_khaki_mag`<br>`200Rnd_65x39_cased_Box`<br>`200Rnd_65x39_cased_Box_Tracer`<br>`200Rnd_65x39_cased_Box_Red`<br>`200Rnd_65x39_cased_Box_Tracer_Red`<br>`200Rnd_65x39_belt_Tracer_Green`<br>`200Rnd_65x39_belt_Tracer_Red`<br>`200Rnd_65x39_belt_Tracer_Yellow` | `30Rnd_65x39_caseless_mag` → 15 FA<br>`30Rnd_65x39_caseless_black_mag` → 15 FA<br>`30Rnd_65x39_caseless_khaki_mag` → 15 FA<br>`100Rnd_65x39_caseless_black_mag` → 15 FA<br>`100Rnd_65x39_caseless_mag` → 15 FA<br>`100Rnd_65x39_caseless_khaki_mag` → 15 FA<br>`200Rnd_65x39_cased_Box` → 15 FA | Type 41 EPR · Type 42 CT · Type 43 AP<br>6.2x40 caseless: DBP-25 · DBP-26 AP · DBP-88B · DBJ-25 PAB | `30Rnd_65x39_caseless_green`<br>`30Rnd_65x39_caseless_green_mag_Tracer`<br>`20Rnd_650x39_Cased_Mag_F`<br>`200Rnd_65x39_cased_Box`<br>`200Rnd_65x39_cased_Box_Tracer`<br>`200Rnd_65x39_cased_Box_Red`<br>`200Rnd_65x39_cased_Box_Tracer_Red`<br>`200Rnd_65x39_belt_Tracer_Green`<br>`200Rnd_65x39_belt_Tracer_Red`<br>`200Rnd_65x39_belt_Tracer_Yellow` | `30Rnd_65x39_caseless_green` → 56 FA<br>`200Rnd_65x39_cased_Box` → 15 FA | — | `30Rnd_65x39_caseless_msbs_mag`<br>`200Rnd_65x39_cased_Box`<br>`200Rnd_65x39_cased_Box_Tracer`<br>`200Rnd_65x39_cased_Box_Red`<br>`200Rnd_65x39_cased_Box_Tracer_Red`<br>`200Rnd_65x39_belt_Tracer_Green`<br>`200Rnd_65x39_belt_Tracer_Red`<br>`200Rnd_65x39_belt_Tracer_Yellow` | `30Rnd_65x39_caseless_msbs_mag` → 15 FA<br>`200Rnd_65x39_cased_Box` → 15 FA |
| **6.5x39 mm / .50 BW** | Type 115 6.5 mm | — | — | — | 6.5 and 6.2 loads via the caseless wells | `30Rnd_65x39_caseless_green`<br>`30Rnd_65x39_caseless_green_mag_Tracer`<br>`10Rnd_50BW_Mag_F` | `30Rnd_65x39_caseless_green` → 56 FA | — | — | — |
| **7.62x39 mm** | AK-12 7.62 mm<br>AK-12 GL 7.62 mm<br>AKM 7.62 mm<br>AKU-12 7.62 mm<br>RPK-12 7.62 mm | — | `30Rnd_762x39_Mag_F`<br>`30Rnd_762x39_Mag_Green_F`<br>`30Rnd_762x39_Mag_Tracer_F`<br>`30Rnd_762x39_Mag_Tracer_Green_F` | `30Rnd_762x39_Mag_F` → 26 FA<br>`30Rnd_762x39_Mag_Green_F` → 24 FA | 7N43 HP · 7N47 CT · 7U4 SUB | `30Rnd_762x39_AK12_Arid_Mag_F`<br>`30Rnd_762x39_AK12_Arid_Mag_Tracer_F`<br>`30Rnd_762x39_AK12_Mag_F`<br>`30Rnd_762x39_AK12_Lush_Mag_F`<br>`30Rnd_762x39_AK12_Lush_Mag_Tracer_F`<br>`75rnd_762x39_AK12_Arid_Mag_F`<br>`75rnd_762x39_AK12_Arid_Mag_Tracer_F`<br>`75rnd_762x39_AK12_Mag_F`<br>`75rnd_762x39_AK12_Lush_Mag_F`<br>`75rnd_762x39_AK12_Lush_Mag_Tracer_F` | `30Rnd_762x39_AK12_Arid_Mag_F` → 24 FA<br>`30Rnd_762x39_AK12_Mag_F` → 24 FA<br>`30Rnd_762x39_AK12_Lush_Mag_F` → 24 FA<br>`75rnd_762x39_AK12_Arid_Mag_F` → 24 FA<br>`75rnd_762x39_AK12_Mag_F` → 24 FA<br>`75rnd_762x39_AK12_Lush_Mag_F` → 24 FA | — | `30Rnd_762x39_AK12_Arid_Mag_F`<br>`30Rnd_762x39_AK12_Arid_Mag_Tracer_F`<br>`30Rnd_762x39_AK12_Mag_F`<br>`30Rnd_762x39_AK12_Lush_Mag_F`<br>`30Rnd_762x39_AK12_Lush_Mag_Tracer_F`<br>`30Rnd_762x39_Mag_F`<br>`30Rnd_762x39_Mag_Green_F`<br>`30Rnd_762x39_Mag_Tracer_F`<br>`30Rnd_762x39_Mag_Tracer_Green_F` | `30Rnd_762x39_AK12_Arid_Mag_F` → 24 FA<br>`30Rnd_762x39_AK12_Mag_F` → 24 FA<br>`30Rnd_762x39_AK12_Lush_Mag_F` → 24 FA<br>`30Rnd_762x39_Mag_F` → 26 FA<br>`30Rnd_762x39_Mag_Green_F` → 24 FA |
| **7.62x51 mm** | Mk-I EMR 7.62 mm<br>Mk-I EMR 7.62 mm (Woodland)<br>Mk14 7.62 mm<br>Mk14 7.62 mm (Classic)<br>Mk18 ABR 7.62 mm<br>SPAR-17 7.62 mm | M80A2 HV · XM751 CTEP · Mk362 PAB · Mk369K/L AD | `20Rnd_762x51_Mag` | `20Rnd_762x51_Mag` → 49 FA | — | `20Rnd_762x51_Mag` | `20Rnd_762x51_Mag` → 49 FA | AF-762 HV · AF-762C CT · AF-762P AP | `20Rnd_762x51_Mag`<br>`10Rnd_Mk14_762x51_Mag` | `20Rnd_762x51_Mag` → 49 FA |
| **7.62x54 mm** | Rahim 7.62 mm<br>Zafir 7.62 mm | — | `150Rnd_762x54_Box`<br>`150Rnd_762x54_Box_Tracer` | `150Rnd_762x54_Box` → 8 FA | Ball HV | `10Rnd_762x54_Mag`<br>`150Rnd_762x54_Box`<br>`150Rnd_762x54_Box_Tracer` | `150Rnd_762x54_Box` → 8 FA | — | — | — |
| **.338 Lapua Magnum** | MAR-10 .338 | Mk371 LRP (250/285/300 gr) · Mk373 PAB | `10Rnd_338_Mag` | `10Rnd_338_Mag` → 39 FA | — | — | — | — | — | — |
| **.338 Norma Magnum** | SPMG .338 | Mk372 MMG | `130Rnd_338_Mag` | `130Rnd_338_Mag` → 8 FA<br>`200Rnd_338_Mag` → 8 FA | — | — | — | — | — | — |
| **9x21 mm** | P07 9 mm<br>PDW2000 9 mm<br>PM 9 mm<br>Protector 9 mm<br>Rook-40 9 mm<br>Sting 9 mm | — | `30Rnd_9x21_Mag`<br>`30Rnd_9x21_Red_Mag`<br>`30Rnd_9x21_Yellow_Mag`<br>`30Rnd_9x21_Green_Mag`<br>`16Rnd_9x21_Mag`<br>`16Rnd_9x21_red_Mag`<br>`16Rnd_9x21_green_Mag`<br>`16Rnd_9x21_yellow_Mag`<br>`30Rnd_9x21_Mag_SMG_02`<br>`30Rnd_9x21_Mag_SMG_02_Tracer_Red`<br>`30Rnd_9x21_Mag_SMG_02_Tracer_Yellow`<br>`30Rnd_9x21_Mag_SMG_02_Tracer_Green` | — | — | `30Rnd_9x21_Mag_SMG_02`<br>`30Rnd_9x21_Mag_SMG_02_Tracer_Red`<br>`30Rnd_9x21_Mag_SMG_02_Tracer_Yellow`<br>`30Rnd_9x21_Mag_SMG_02_Tracer_Green`<br>`30Rnd_9x21_Mag`<br>`30Rnd_9x21_Red_Mag`<br>`30Rnd_9x21_Yellow_Mag`<br>`30Rnd_9x21_Green_Mag`<br>`16Rnd_9x21_Mag`<br>`16Rnd_9x21_red_Mag`<br>`16Rnd_9x21_green_Mag`<br>`16Rnd_9x21_yellow_Mag` | — | — | `30Rnd_9x21_Mag`<br>`30Rnd_9x21_Red_Mag`<br>`30Rnd_9x21_Yellow_Mag`<br>`30Rnd_9x21_Green_Mag`<br>`16Rnd_9x21_Mag`<br>`16Rnd_9x21_red_Mag`<br>`16Rnd_9x21_green_Mag`<br>`16Rnd_9x21_yellow_Mag`<br>`10Rnd_9x21_Mag` | — |
| **9.3x64 mm** | Cyrus 9.3 mm<br>Navid 9.3 mm | — | — | — | Type 40 | `10Rnd_93x64_DMR_05_Mag`<br>`150Rnd_93x64_Mag` | `10Rnd_93x64_Mag` → 8 FA | — | — | — |
| **.408** | M320 LRR .408 | Mk240 LRP · Mk241 ELR · Mk242 HV · Mk243 AP | `7Rnd_408_Mag` | — | — | — | — | — | — | — |
| **.45 ACP** | 4-five .45 ACP<br>ACP-C2 .45 ACP<br>Vermin SMG .45 ACP<br>Zubr .45 ACP | Mk421 SUB-AP | `30Rnd_45ACP_Mag_SMG_01`<br>`30Rnd_45ACP_Mag_SMG_01_tracer_green`<br>`30Rnd_45ACP_Mag_SMG_01_Tracer_Red`<br>`30Rnd_45ACP_Mag_SMG_01_Tracer_Yellow`<br>`11Rnd_45ACP_Mag`<br>`9Rnd_45ACP_Mag`<br>`6Rnd_45ACP_Cylinder` | `30Rnd_45ACP_Mag_SMG_01` → 8 FA<br>`11Rnd_45ACP_Mag` → 8 FA | — | `9Rnd_45ACP_Mag`<br>`6Rnd_45ACP_Cylinder` | — | — | `11Rnd_45ACP_Mag`<br>`9Rnd_45ACP_Mag`<br>`6Rnd_45ACP_Cylinder` | `11Rnd_45ACP_Mag` → 8 FA |
| **12 Gauge** | Kozlice 12G<br>Kozlice 12G (Sawed-Off) | Mk350 TBS · Mk351 FLE · Mk352 APS · Mk353 BRC · Mk360 AD · Mk363 PABS (+ Sub) | — | — | — | — | — | — | `2Rnd_12Gauge_Pellets`<br>`2Rnd_12Gauge_Slug` | ACE 2Rnd/6Rnd 12Gauge pellet mags → 12 FA |
| **12.7x108 mm** | GM6 Lynx 12.7 mm | Mk250 LRP · Mk211 Mod 2 (NATO-named on a Red caliber — rename candidate) | — | — | — | `5Rnd_127x108_Mag`<br>`5Rnd_127x108_APDS_Mag` | `5Rnd_127x108_Mag` → 16 FA<br>`5Rnd_127x108_APDS_Mag` → 3 FA | — | `5Rnd_127x108_Mag`<br>`5Rnd_127x108_APDS_Mag` | `5Rnd_127x108_Mag` → 16 FA<br>`5Rnd_127x108_APDS_Mag` → 3 FA |
| **12.7x54 mm** | ASP-1 Kir 12.7 mm | — | — | — | — | `10Rnd_127x54_Mag` | — | — | — | — |
| **12.7x99 mm** | M2 HMG .50 | Mk258 LRP · Mk211 Mod 0 · Mk366 PAB | `100Rnd_127x99_mag`<br>`100Rnd_127x99_mag_Tracer_Red`<br>`100Rnd_127x99_mag_Tracer_Green`<br>`100Rnd_127x99_mag_Tracer_Yellow` | `100Rnd_127x99_mag` → 7 FA | — | `100Rnd_127x99_mag`<br>`100Rnd_127x99_mag_Tracer_Red`<br>`100Rnd_127x99_mag_Tracer_Green`<br>`100Rnd_127x99_mag_Tracer_Yellow` | `100Rnd_127x99_mag` → 7 FA | — | `100Rnd_127x99_mag`<br>`100Rnd_127x99_mag_Tracer_Red`<br>`100Rnd_127x99_mag_Tracer_Green`<br>`100Rnd_127x99_mag_Tracer_Yellow` | `100Rnd_127x99_mag` → 7 FA |

## Assault Rifle

| Class | Name | Caliber | Magazines | Used by |
|---|---|---|---|---|
| `arifle_AK12_arid_F` | AK-12 7.62 mm (Arid) | 7.62x39 mm | `30Rnd_762x39_AK12_Arid_Mag_F`<br>`30Rnd_762x39_AK12_Arid_Mag_Tracer_F` | — |
| `arifle_AK12_F` | AK-12 7.62 mm | 7.62x39 mm | `30Rnd_762x39_AK12_Mag_F` | Independent (4) |
| `arifle_AK12_GL_arid_F` | AK-12 GL 7.62 mm (Arid) | 7.62x39 mm | `30Rnd_762x39_AK12_Arid_Mag_F`<br>`30Rnd_762x39_AK12_Arid_Mag_Tracer_F`<br>`1Rnd_HE_Grenade_shell`<br>`UGL_FlareWhite_F`<br>`UGL_FlareGreen_F`<br>`UGL_FlareRed_F`<br>`UGL_FlareYellow_F`<br>`UGL_FlareCIR_F`<br>`1Rnd_Smoke_Grenade_shell`<br>`1Rnd_SmokeRed_Grenade_shell`<br>`1Rnd_SmokeGreen_Grenade_shell`<br>`1Rnd_SmokeYellow_Grenade_shell`<br>`1Rnd_SmokePurple_Grenade_shell`<br>`1Rnd_SmokeBlue_Grenade_shell`<br>`1Rnd_SmokeOrange_Grenade_shell` | — |
| `arifle_AK12_GL_F` | AK-12 GL 7.62 mm | 7.62x39 mm | `30Rnd_762x39_AK12_Mag_F`<br>`1Rnd_HE_Grenade_shell`<br>`UGL_FlareWhite_F`<br>`UGL_FlareGreen_F`<br>`UGL_FlareRed_F`<br>`UGL_FlareYellow_F`<br>`UGL_FlareCIR_F`<br>`1Rnd_Smoke_Grenade_shell`<br>`1Rnd_SmokeRed_Grenade_shell`<br>`1Rnd_SmokeGreen_Grenade_shell`<br>`1Rnd_SmokeYellow_Grenade_shell`<br>`1Rnd_SmokePurple_Grenade_shell`<br>`1Rnd_SmokeBlue_Grenade_shell`<br>`1Rnd_SmokeOrange_Grenade_shell` | Independent (2) |
| `arifle_AK12_GL_lush_arco_pointer_F` | AK-12 GL 7.62 mm (Lush) | 7.62x39 mm | `30Rnd_762x39_AK12_Lush_Mag_F`<br>`30Rnd_762x39_AK12_Lush_Mag_Tracer_F`<br>`1Rnd_HE_Grenade_shell`<br>`UGL_FlareWhite_F`<br>`UGL_FlareGreen_F`<br>`UGL_FlareRed_F`<br>`UGL_FlareYellow_F`<br>`UGL_FlareCIR_F`<br>`1Rnd_Smoke_Grenade_shell`<br>`1Rnd_SmokeRed_Grenade_shell`<br>`1Rnd_SmokeGreen_Grenade_shell`<br>`1Rnd_SmokeYellow_Grenade_shell`<br>`1Rnd_SmokePurple_Grenade_shell`<br>`1Rnd_SmokeBlue_Grenade_shell`<br>`1Rnd_SmokeOrange_Grenade_shell` | OPFOR (2) |
| `arifle_AK12_GL_lush_arco_snds_pointer_F` | AK-12 GL 7.62 mm (Lush) | 7.62x39 mm | `30Rnd_762x39_AK12_Lush_Mag_F`<br>`30Rnd_762x39_AK12_Lush_Mag_Tracer_F`<br>`1Rnd_HE_Grenade_shell`<br>`UGL_FlareWhite_F`<br>`UGL_FlareGreen_F`<br>`UGL_FlareRed_F`<br>`UGL_FlareYellow_F`<br>`UGL_FlareCIR_F`<br>`1Rnd_Smoke_Grenade_shell`<br>`1Rnd_SmokeRed_Grenade_shell`<br>`1Rnd_SmokeGreen_Grenade_shell`<br>`1Rnd_SmokeYellow_Grenade_shell`<br>`1Rnd_SmokePurple_Grenade_shell`<br>`1Rnd_SmokeBlue_Grenade_shell`<br>`1Rnd_SmokeOrange_Grenade_shell` | OPFOR (2) |
| `arifle_AK12_GL_lush_F` | AK-12 GL 7.62 mm (Lush) | 7.62x39 mm | `30Rnd_762x39_AK12_Lush_Mag_F`<br>`30Rnd_762x39_AK12_Lush_Mag_Tracer_F`<br>`1Rnd_HE_Grenade_shell`<br>`UGL_FlareWhite_F`<br>`UGL_FlareGreen_F`<br>`UGL_FlareRed_F`<br>`UGL_FlareYellow_F`<br>`UGL_FlareCIR_F`<br>`1Rnd_Smoke_Grenade_shell`<br>`1Rnd_SmokeRed_Grenade_shell`<br>`1Rnd_SmokeGreen_Grenade_shell`<br>`1Rnd_SmokeYellow_Grenade_shell`<br>`1Rnd_SmokePurple_Grenade_shell`<br>`1Rnd_SmokeBlue_Grenade_shell`<br>`1Rnd_SmokeOrange_Grenade_shell` | — |
| `arifle_AK12_GL_lush_holo_pointer_F` | AK-12 GL 7.62 mm (Lush) | 7.62x39 mm | `30Rnd_762x39_AK12_Lush_Mag_F`<br>`30Rnd_762x39_AK12_Lush_Mag_Tracer_F`<br>`1Rnd_HE_Grenade_shell`<br>`UGL_FlareWhite_F`<br>`UGL_FlareGreen_F`<br>`UGL_FlareRed_F`<br>`UGL_FlareYellow_F`<br>`UGL_FlareCIR_F`<br>`1Rnd_Smoke_Grenade_shell`<br>`1Rnd_SmokeRed_Grenade_shell`<br>`1Rnd_SmokeGreen_Grenade_shell`<br>`1Rnd_SmokeYellow_Grenade_shell`<br>`1Rnd_SmokePurple_Grenade_shell`<br>`1Rnd_SmokeBlue_Grenade_shell`<br>`1Rnd_SmokeOrange_Grenade_shell` | — |
| `arifle_AK12_GL_lush_holo_snds_pointer_F` | AK-12 GL 7.62 mm (Lush) | 7.62x39 mm | `30Rnd_762x39_AK12_Lush_Mag_F`<br>`30Rnd_762x39_AK12_Lush_Mag_Tracer_F`<br>`1Rnd_HE_Grenade_shell`<br>`UGL_FlareWhite_F`<br>`UGL_FlareGreen_F`<br>`UGL_FlareRed_F`<br>`UGL_FlareYellow_F`<br>`UGL_FlareCIR_F`<br>`1Rnd_Smoke_Grenade_shell`<br>`1Rnd_SmokeRed_Grenade_shell`<br>`1Rnd_SmokeGreen_Grenade_shell`<br>`1Rnd_SmokeYellow_Grenade_shell`<br>`1Rnd_SmokePurple_Grenade_shell`<br>`1Rnd_SmokeBlue_Grenade_shell`<br>`1Rnd_SmokeOrange_Grenade_shell` | OPFOR (2) |
| `arifle_AK12_lush_arco_pointer_F` | AK-12 7.62 mm (Lush) | 7.62x39 mm | `30Rnd_762x39_AK12_Lush_Mag_F`<br>`30Rnd_762x39_AK12_Lush_Mag_Tracer_F` | OPFOR (1) |
| `arifle_AK12_lush_arco_snds_pointer_bipod_F` | AK-12 7.62 mm (Lush) | 7.62x39 mm | `30Rnd_762x39_AK12_Lush_Mag_F`<br>`30Rnd_762x39_AK12_Lush_Mag_Tracer_F` | OPFOR (1) |
| `arifle_AK12_lush_arco_snds_pointer_F` | AK-12 7.62 mm (Lush) | 7.62x39 mm | `30Rnd_762x39_AK12_Lush_Mag_F`<br>`30Rnd_762x39_AK12_Lush_Mag_Tracer_F` | OPFOR (1) |
| `arifle_AK12_lush_F` | AK-12 7.62 mm (Lush) | 7.62x39 mm | `30Rnd_762x39_AK12_Lush_Mag_F`<br>`30Rnd_762x39_AK12_Lush_Mag_Tracer_F` | — |
| `arifle_AK12_lush_snds_pointer_F` | AK-12 7.62 mm (Lush) | 7.62x39 mm | `30Rnd_762x39_AK12_Lush_Mag_F`<br>`30Rnd_762x39_AK12_Lush_Mag_Tracer_F` | OPFOR (2) |
| `arifle_AK12U_arid_F` | AKU-12 7.62 mm (Arid) | 7.62x39 mm | `30Rnd_762x39_AK12_Arid_Mag_F`<br>`30Rnd_762x39_AK12_Arid_Mag_Tracer_F` | — |
| `arifle_AK12U_F` | AKU-12 7.62 mm | 7.62x39 mm | `30Rnd_762x39_AK12_Mag_F` | — |
| `arifle_AK12U_lush_F` | AKU-12 7.62 mm (Lush) | 7.62x39 mm | `30Rnd_762x39_AK12_Lush_Mag_F`<br>`30Rnd_762x39_AK12_Lush_Mag_Tracer_F` | — |
| `arifle_AK12U_lush_holo_F` | AKU-12 7.62 mm (Lush) | 7.62x39 mm | `30Rnd_762x39_AK12_Lush_Mag_F`<br>`30Rnd_762x39_AK12_Lush_Mag_Tracer_F` | — |
| `arifle_AK12U_lush_holo_fl_F` | AKU-12 7.62 mm (Lush) | 7.62x39 mm | `30Rnd_762x39_AK12_Lush_Mag_F`<br>`30Rnd_762x39_AK12_Lush_Mag_Tracer_F` | — |
| `arifle_AK12U_lush_holo_pointer_F` | AKU-12 7.62 mm (Lush) | 7.62x39 mm | `30Rnd_762x39_AK12_Lush_Mag_F`<br>`30Rnd_762x39_AK12_Lush_Mag_Tracer_F` | OPFOR (3) |
| `arifle_AK12U_lush_holo_snds_pointer_F` | AKU-12 7.62 mm (Lush) | 7.62x39 mm | `30Rnd_762x39_AK12_Lush_Mag_F`<br>`30Rnd_762x39_AK12_Lush_Mag_Tracer_F` | OPFOR (4) |
| `arifle_AK12U_lush_snds_pointer_F` | AKU-12 7.62 mm (Lush) | 7.62x39 mm | `30Rnd_762x39_AK12_Lush_Mag_F`<br>`30Rnd_762x39_AK12_Lush_Mag_Tracer_F` | OPFOR (1) |
| `arifle_AKM_F` | AKM 7.62 mm | 7.62x39 mm | `30Rnd_762x39_Mag_F`<br>`30Rnd_762x39_Mag_Green_F`<br>`30Rnd_762x39_Mag_Tracer_F`<br>`30Rnd_762x39_Mag_Tracer_Green_F` | Independent (5), BLUFOR (1) |
| `arifle_AKM_FL_F` | AKM 7.62 mm | 7.62x39 mm | `30Rnd_762x39_Mag_F`<br>`30Rnd_762x39_Mag_Green_F`<br>`30Rnd_762x39_Mag_Tracer_F`<br>`30Rnd_762x39_Mag_Tracer_Green_F` | — |
| `arifle_AKS_F` | AKS-74U 5.45 mm | 5.45x39 mm | `30Rnd_545x39_Mag_F`<br>`30Rnd_545x39_Mag_Green_F`<br>`30Rnd_545x39_Mag_Tracer_F`<br>`30Rnd_545x39_Mag_Tracer_Green_F` | Independent (7) |
| `arifle_ARX_blk_F` | Type 115 6.5 mm (Black) | 6.5x39 mm / .50 BW | `30Rnd_65x39_caseless_green`<br>`30Rnd_65x39_caseless_green_mag_Tracer`<br>`10Rnd_50BW_Mag_F` | — |
| `arifle_ARX_ghex_ACO_Pointer_Snds_F` | Type 115 6.5 mm (Green Hex) | 6.5x39 mm / .50 BW | `30Rnd_65x39_caseless_green`<br>`30Rnd_65x39_caseless_green_mag_Tracer`<br>`10Rnd_50BW_Mag_F` | — |
| `arifle_ARX_ghex_ARCO_Pointer_Snds_F` | Type 115 6.5 mm (Green Hex) | 6.5x39 mm / .50 BW | `30Rnd_65x39_caseless_green`<br>`30Rnd_65x39_caseless_green_mag_Tracer`<br>`10Rnd_50BW_Mag_F` | OPFOR (6) |
| `arifle_ARX_ghex_DMS_Pointer_Snds_Bipod_F` | Type 115 6.5 mm (Green Hex) | 6.5x39 mm / .50 BW | `30Rnd_65x39_caseless_green`<br>`30Rnd_65x39_caseless_green_mag_Tracer`<br>`10Rnd_50BW_Mag_F` | OPFOR (1) |
| `arifle_ARX_ghex_F` | Type 115 6.5 mm (Green Hex) | 6.5x39 mm / .50 BW | `30Rnd_65x39_caseless_green`<br>`30Rnd_65x39_caseless_green_mag_Tracer`<br>`10Rnd_50BW_Mag_F` | — |
| `arifle_ARX_hex_ACO_Pointer_Snds_F` | Type 115 6.5 mm (Hex) | 6.5x39 mm / .50 BW | `30Rnd_65x39_caseless_green`<br>`30Rnd_65x39_caseless_green_mag_Tracer`<br>`10Rnd_50BW_Mag_F` | — |
| `arifle_ARX_hex_ARCO_Pointer_Snds_F` | Type 115 6.5 mm (Hex) | 6.5x39 mm / .50 BW | `30Rnd_65x39_caseless_green`<br>`30Rnd_65x39_caseless_green_mag_Tracer`<br>`10Rnd_50BW_Mag_F` | OPFOR (6) |
| `arifle_ARX_hex_DMS_Pointer_Snds_Bipod_F` | Type 115 6.5 mm (Hex) | 6.5x39 mm / .50 BW | `30Rnd_65x39_caseless_green`<br>`30Rnd_65x39_caseless_green_mag_Tracer`<br>`10Rnd_50BW_Mag_F` | OPFOR (1) |
| `arifle_ARX_hex_F` | Type 115 6.5 mm (Hex) | 6.5x39 mm / .50 BW | `30Rnd_65x39_caseless_green`<br>`30Rnd_65x39_caseless_green_mag_Tracer`<br>`10Rnd_50BW_Mag_F` | — |
| `arifle_ARX_Viper_F` | Type 115 6.5 mm (Green Hex) | 6.5x39 mm / .50 BW | `30Rnd_65x39_caseless_green`<br>`30Rnd_65x39_caseless_green_mag_Tracer`<br>`10Rnd_50BW_Mag_F` | OPFOR (1) |
| `arifle_ARX_Viper_hex_F` | Type 115 6.5 mm (Hex) | 6.5x39 mm / .50 BW | `30Rnd_65x39_caseless_green`<br>`30Rnd_65x39_caseless_green_mag_Tracer`<br>`10Rnd_50BW_Mag_F` | OPFOR (1) |
| `arifle_CTAR_blk_ACO_F` | CAR-95 5.8 mm (Black) | 5.8x42 mm | `30Rnd_580x42_Mag_F`<br>`30Rnd_580x42_Mag_Tracer_F` | OPFOR (3) |
| `arifle_CTAR_blk_aco_flash_F` | CAR-95 5.8 mm (Black) | 5.8x42 mm | `30Rnd_580x42_Mag_F`<br>`30Rnd_580x42_Mag_Tracer_F` | OPFOR (2) |
| `arifle_CTAR_blk_ACO_Pointer_F` | CAR-95 5.8 mm (Black) | 5.8x42 mm | `30Rnd_580x42_Mag_F`<br>`30Rnd_580x42_Mag_Tracer_F` | OPFOR (22) |
| `arifle_CTAR_blk_ACO_Pointer_Snds_F` | CAR-95 5.8 mm (Black) | 5.8x42 mm | `30Rnd_580x42_Mag_F`<br>`30Rnd_580x42_Mag_Tracer_F` | OPFOR (4) |
| `arifle_CTAR_blk_ARCO_F` | CAR-95 5.8 mm (Black) | 5.8x42 mm | `30Rnd_580x42_Mag_F`<br>`30Rnd_580x42_Mag_Tracer_F` | OPFOR (1) |
| `arifle_CTAR_blk_arco_flash_F` | CAR-95 5.8 mm (Black) | 5.8x42 mm | `30Rnd_580x42_Mag_F`<br>`30Rnd_580x42_Mag_Tracer_F` | OPFOR (1) |
| `arifle_CTAR_blk_ARCO_Pointer_F` | CAR-95 5.8 mm (Black) | 5.8x42 mm | `30Rnd_580x42_Mag_F`<br>`30Rnd_580x42_Mag_Tracer_F` | OPFOR (1) |
| `arifle_CTAR_blk_ARCO_Pointer_Snds_F` | CAR-95 5.8 mm (Black) | 5.8x42 mm | `30Rnd_580x42_Mag_F`<br>`30Rnd_580x42_Mag_Tracer_F` | OPFOR (1) |
| `arifle_CTAR_blk_F` | CAR-95 5.8 mm (Black) | 5.8x42 mm | `30Rnd_580x42_Mag_F`<br>`30Rnd_580x42_Mag_Tracer_F` | OPFOR (2) |
| `arifle_CTAR_blk_flash_F` | CAR-95 5.8 mm (Black) | 5.8x42 mm | `30Rnd_580x42_Mag_F`<br>`30Rnd_580x42_Mag_Tracer_F` | OPFOR (4) |
| `arifle_CTAR_blk_Pointer_F` | CAR-95 5.8 mm (Black) | 5.8x42 mm | `30Rnd_580x42_Mag_F`<br>`30Rnd_580x42_Mag_Tracer_F` | OPFOR (1) |
| `arifle_CTAR_ghex_F` | CAR-95 5.8 mm (Green Hex) | 5.8x42 mm | `30Rnd_580x42_Mag_F`<br>`30Rnd_580x42_Mag_Tracer_F` | — |
| `arifle_CTAR_GL_blk_ACO_F` | CAR-95 GL 5.8 mm (Black) | 5.8x42 mm | `30Rnd_580x42_Mag_F`<br>`30Rnd_580x42_Mag_Tracer_F`<br>`1Rnd_HE_Grenade_shell`<br>`UGL_FlareWhite_F`<br>`UGL_FlareGreen_F`<br>`UGL_FlareRed_F`<br>`UGL_FlareYellow_F`<br>`UGL_FlareCIR_F`<br>`1Rnd_Smoke_Grenade_shell`<br>`1Rnd_SmokeRed_Grenade_shell`<br>`1Rnd_SmokeGreen_Grenade_shell`<br>`1Rnd_SmokeYellow_Grenade_shell`<br>`1Rnd_SmokePurple_Grenade_shell`<br>`1Rnd_SmokeBlue_Grenade_shell`<br>`1Rnd_SmokeOrange_Grenade_shell` | OPFOR (1) |
| `arifle_CTAR_GL_blk_aco_flash_F` | CAR-95 GL 5.8 mm (Black) | 5.8x42 mm | `30Rnd_580x42_Mag_F`<br>`30Rnd_580x42_Mag_Tracer_F`<br>`1Rnd_HE_Grenade_shell`<br>`UGL_FlareWhite_F`<br>`UGL_FlareGreen_F`<br>`UGL_FlareRed_F`<br>`UGL_FlareYellow_F`<br>`UGL_FlareCIR_F`<br>`1Rnd_Smoke_Grenade_shell`<br>`1Rnd_SmokeRed_Grenade_shell`<br>`1Rnd_SmokeGreen_Grenade_shell`<br>`1Rnd_SmokeYellow_Grenade_shell`<br>`1Rnd_SmokePurple_Grenade_shell`<br>`1Rnd_SmokeBlue_Grenade_shell`<br>`1Rnd_SmokeOrange_Grenade_shell` | — |
| `arifle_CTAR_GL_blk_ACO_Pointer_Snds_F` | CAR-95 GL 5.8 mm (Black) | 5.8x42 mm | `30Rnd_580x42_Mag_F`<br>`30Rnd_580x42_Mag_Tracer_F`<br>`1Rnd_HE_Grenade_shell`<br>`UGL_FlareWhite_F`<br>`UGL_FlareGreen_F`<br>`UGL_FlareRed_F`<br>`UGL_FlareYellow_F`<br>`UGL_FlareCIR_F`<br>`1Rnd_Smoke_Grenade_shell`<br>`1Rnd_SmokeRed_Grenade_shell`<br>`1Rnd_SmokeGreen_Grenade_shell`<br>`1Rnd_SmokeYellow_Grenade_shell`<br>`1Rnd_SmokePurple_Grenade_shell`<br>`1Rnd_SmokeBlue_Grenade_shell`<br>`1Rnd_SmokeOrange_Grenade_shell` | OPFOR (1) |
| `arifle_CTAR_GL_blk_arco_flash_F` | CAR-95 GL 5.8 mm (Black) | 5.8x42 mm | `30Rnd_580x42_Mag_F`<br>`30Rnd_580x42_Mag_Tracer_F`<br>`1Rnd_HE_Grenade_shell`<br>`UGL_FlareWhite_F`<br>`UGL_FlareGreen_F`<br>`UGL_FlareRed_F`<br>`UGL_FlareYellow_F`<br>`UGL_FlareCIR_F`<br>`1Rnd_Smoke_Grenade_shell`<br>`1Rnd_SmokeRed_Grenade_shell`<br>`1Rnd_SmokeGreen_Grenade_shell`<br>`1Rnd_SmokeYellow_Grenade_shell`<br>`1Rnd_SmokePurple_Grenade_shell`<br>`1Rnd_SmokeBlue_Grenade_shell`<br>`1Rnd_SmokeOrange_Grenade_shell` | OPFOR (2) |
| `arifle_CTAR_GL_blk_ARCO_Pointer_F` | CAR-95 GL 5.8 mm (Black) | 5.8x42 mm | `30Rnd_580x42_Mag_F`<br>`30Rnd_580x42_Mag_Tracer_F`<br>`1Rnd_HE_Grenade_shell`<br>`UGL_FlareWhite_F`<br>`UGL_FlareGreen_F`<br>`UGL_FlareRed_F`<br>`UGL_FlareYellow_F`<br>`UGL_FlareCIR_F`<br>`1Rnd_Smoke_Grenade_shell`<br>`1Rnd_SmokeRed_Grenade_shell`<br>`1Rnd_SmokeGreen_Grenade_shell`<br>`1Rnd_SmokeYellow_Grenade_shell`<br>`1Rnd_SmokePurple_Grenade_shell`<br>`1Rnd_SmokeBlue_Grenade_shell`<br>`1Rnd_SmokeOrange_Grenade_shell` | OPFOR (1) |
| `arifle_CTAR_GL_blk_F` | CAR-95 GL 5.8 mm (Black) | 5.8x42 mm | `30Rnd_580x42_Mag_F`<br>`30Rnd_580x42_Mag_Tracer_F`<br>`1Rnd_HE_Grenade_shell`<br>`UGL_FlareWhite_F`<br>`UGL_FlareGreen_F`<br>`UGL_FlareRed_F`<br>`UGL_FlareYellow_F`<br>`UGL_FlareCIR_F`<br>`1Rnd_Smoke_Grenade_shell`<br>`1Rnd_SmokeRed_Grenade_shell`<br>`1Rnd_SmokeGreen_Grenade_shell`<br>`1Rnd_SmokeYellow_Grenade_shell`<br>`1Rnd_SmokePurple_Grenade_shell`<br>`1Rnd_SmokeBlue_Grenade_shell`<br>`1Rnd_SmokeOrange_Grenade_shell` | — |
| `arifle_CTAR_GL_ghex_F` | CAR-95 GL 5.8 mm (Green Hex) | 5.8x42 mm | `30Rnd_580x42_Mag_F`<br>`30Rnd_580x42_Mag_Tracer_F`<br>`1Rnd_HE_Grenade_shell`<br>`UGL_FlareWhite_F`<br>`UGL_FlareGreen_F`<br>`UGL_FlareRed_F`<br>`UGL_FlareYellow_F`<br>`UGL_FlareCIR_F`<br>`1Rnd_Smoke_Grenade_shell`<br>`1Rnd_SmokeRed_Grenade_shell`<br>`1Rnd_SmokeGreen_Grenade_shell`<br>`1Rnd_SmokeYellow_Grenade_shell`<br>`1Rnd_SmokePurple_Grenade_shell`<br>`1Rnd_SmokeBlue_Grenade_shell`<br>`1Rnd_SmokeOrange_Grenade_shell` | — |
| `arifle_CTAR_GL_hex_F` | CAR-95 GL 5.8 mm (Hex) | 5.8x42 mm | `30Rnd_580x42_Mag_F`<br>`30Rnd_580x42_Mag_Tracer_F`<br>`1Rnd_HE_Grenade_shell`<br>`UGL_FlareWhite_F`<br>`UGL_FlareGreen_F`<br>`UGL_FlareRed_F`<br>`UGL_FlareYellow_F`<br>`UGL_FlareCIR_F`<br>`1Rnd_Smoke_Grenade_shell`<br>`1Rnd_SmokeRed_Grenade_shell`<br>`1Rnd_SmokeGreen_Grenade_shell`<br>`1Rnd_SmokeYellow_Grenade_shell`<br>`1Rnd_SmokePurple_Grenade_shell`<br>`1Rnd_SmokeBlue_Grenade_shell`<br>`1Rnd_SmokeOrange_Grenade_shell` | — |
| `arifle_CTAR_hex_F` | CAR-95 5.8 mm (Hex) | 5.8x42 mm | `30Rnd_580x42_Mag_F`<br>`30Rnd_580x42_Mag_Tracer_F` | — |
| `arifle_Katiba_ACO_F` | Katiba 6.5 mm | 6.5x39 mm | `30Rnd_65x39_caseless_green`<br>`30Rnd_65x39_caseless_green_mag_Tracer` | OPFOR (3) |
| `arifle_Katiba_ACO_pointer_F` | Katiba 6.5 mm | 6.5x39 mm | `30Rnd_65x39_caseless_green`<br>`30Rnd_65x39_caseless_green_mag_Tracer` | OPFOR (26) |
| `arifle_Katiba_ACO_pointer_snds_F` | Katiba 6.5 mm | 6.5x39 mm | `30Rnd_65x39_caseless_green`<br>`30Rnd_65x39_caseless_green_mag_Tracer` | OPFOR (3) |
| `arifle_Katiba_ARCO_F` | Katiba 6.5 mm | 6.5x39 mm | `30Rnd_65x39_caseless_green`<br>`30Rnd_65x39_caseless_green_mag_Tracer` | OPFOR (1) |
| `arifle_Katiba_ARCO_pointer_F` | Katiba 6.5 mm | 6.5x39 mm | `30Rnd_65x39_caseless_green`<br>`30Rnd_65x39_caseless_green_mag_Tracer` | OPFOR (2) |
| `arifle_Katiba_ARCO_pointer_snds_F` | Katiba 6.5 mm | 6.5x39 mm | `30Rnd_65x39_caseless_green`<br>`30Rnd_65x39_caseless_green_mag_Tracer` | OPFOR (1) |
| `arifle_Katiba_C_ACO_F` | Katiba Carbine 6.5 mm | 6.5x39 mm | `30Rnd_65x39_caseless_green`<br>`30Rnd_65x39_caseless_green_mag_Tracer` | OPFOR (1) |
| `arifle_Katiba_C_ACO_pointer_F` | Katiba Carbine 6.5 mm | 6.5x39 mm | `30Rnd_65x39_caseless_green`<br>`30Rnd_65x39_caseless_green_mag_Tracer` | OPFOR (14) |
| `arifle_Katiba_C_ACO_pointer_snds_F` | Katiba Carbine 6.5 mm | 6.5x39 mm | `30Rnd_65x39_caseless_green`<br>`30Rnd_65x39_caseless_green_mag_Tracer` | OPFOR (1) |
| `arifle_Katiba_C_F` | Katiba Carbine 6.5 mm | 6.5x39 mm | `30Rnd_65x39_caseless_green`<br>`30Rnd_65x39_caseless_green_mag_Tracer` | OPFOR (2) |
| `arifle_Katiba_F` | Katiba 6.5 mm | 6.5x39 mm | `30Rnd_65x39_caseless_green`<br>`30Rnd_65x39_caseless_green_mag_Tracer` | — |
| `arifle_Katiba_GL_ACO_F` | Katiba GL 6.5 mm | 6.5x39 mm + 40 mm | `30Rnd_65x39_caseless_green`<br>`30Rnd_65x39_caseless_green_mag_Tracer`<br>`1Rnd_HE_Grenade_shell`<br>`UGL_FlareWhite_F`<br>`UGL_FlareGreen_F`<br>`UGL_FlareRed_F`<br>`UGL_FlareYellow_F`<br>`UGL_FlareCIR_F`<br>`1Rnd_Smoke_Grenade_shell`<br>`1Rnd_SmokeRed_Grenade_shell`<br>`1Rnd_SmokeGreen_Grenade_shell`<br>`1Rnd_SmokeYellow_Grenade_shell`<br>`1Rnd_SmokePurple_Grenade_shell`<br>`1Rnd_SmokeBlue_Grenade_shell`<br>`1Rnd_SmokeOrange_Grenade_shell` | OPFOR (2) |
| `arifle_Katiba_GL_ACO_pointer_F` | Katiba GL 6.5 mm | 6.5x39 mm + 40 mm | `30Rnd_65x39_caseless_green`<br>`30Rnd_65x39_caseless_green_mag_Tracer`<br>`1Rnd_HE_Grenade_shell`<br>`UGL_FlareWhite_F`<br>`UGL_FlareGreen_F`<br>`UGL_FlareRed_F`<br>`UGL_FlareYellow_F`<br>`UGL_FlareCIR_F`<br>`1Rnd_Smoke_Grenade_shell`<br>`1Rnd_SmokeRed_Grenade_shell`<br>`1Rnd_SmokeGreen_Grenade_shell`<br>`1Rnd_SmokeYellow_Grenade_shell`<br>`1Rnd_SmokePurple_Grenade_shell`<br>`1Rnd_SmokeBlue_Grenade_shell`<br>`1Rnd_SmokeOrange_Grenade_shell` | — |
| `arifle_Katiba_GL_ACO_pointer_snds_F` | Katiba GL 6.5 mm | 6.5x39 mm + 40 mm | `30Rnd_65x39_caseless_green`<br>`30Rnd_65x39_caseless_green_mag_Tracer`<br>`1Rnd_HE_Grenade_shell`<br>`UGL_FlareWhite_F`<br>`UGL_FlareGreen_F`<br>`UGL_FlareRed_F`<br>`UGL_FlareYellow_F`<br>`UGL_FlareCIR_F`<br>`1Rnd_Smoke_Grenade_shell`<br>`1Rnd_SmokeRed_Grenade_shell`<br>`1Rnd_SmokeGreen_Grenade_shell`<br>`1Rnd_SmokeYellow_Grenade_shell`<br>`1Rnd_SmokePurple_Grenade_shell`<br>`1Rnd_SmokeBlue_Grenade_shell`<br>`1Rnd_SmokeOrange_Grenade_shell` | OPFOR (1) |
| `arifle_Katiba_GL_ARCO_pointer_F` | Katiba GL 6.5 mm | 6.5x39 mm + 40 mm | `30Rnd_65x39_caseless_green`<br>`30Rnd_65x39_caseless_green_mag_Tracer`<br>`1Rnd_HE_Grenade_shell`<br>`UGL_FlareWhite_F`<br>`UGL_FlareGreen_F`<br>`UGL_FlareRed_F`<br>`UGL_FlareYellow_F`<br>`UGL_FlareCIR_F`<br>`1Rnd_Smoke_Grenade_shell`<br>`1Rnd_SmokeRed_Grenade_shell`<br>`1Rnd_SmokeGreen_Grenade_shell`<br>`1Rnd_SmokeYellow_Grenade_shell`<br>`1Rnd_SmokePurple_Grenade_shell`<br>`1Rnd_SmokeBlue_Grenade_shell`<br>`1Rnd_SmokeOrange_Grenade_shell` | OPFOR (2) |
| `arifle_Katiba_GL_F` | Katiba GL 6.5 mm | 6.5x39 mm + 40 mm | `30Rnd_65x39_caseless_green`<br>`30Rnd_65x39_caseless_green_mag_Tracer`<br>`1Rnd_HE_Grenade_shell`<br>`UGL_FlareWhite_F`<br>`UGL_FlareGreen_F`<br>`UGL_FlareRed_F`<br>`UGL_FlareYellow_F`<br>`UGL_FlareCIR_F`<br>`1Rnd_Smoke_Grenade_shell`<br>`1Rnd_SmokeRed_Grenade_shell`<br>`1Rnd_SmokeGreen_Grenade_shell`<br>`1Rnd_SmokeYellow_Grenade_shell`<br>`1Rnd_SmokePurple_Grenade_shell`<br>`1Rnd_SmokeBlue_Grenade_shell`<br>`1Rnd_SmokeOrange_Grenade_shell` | — |
| `arifle_Katiba_GL_Nstalker_pointer_F` | Katiba GL 6.5 mm | 6.5x39 mm + 40 mm | `30Rnd_65x39_caseless_green`<br>`30Rnd_65x39_caseless_green_mag_Tracer`<br>`1Rnd_HE_Grenade_shell`<br>`UGL_FlareWhite_F`<br>`UGL_FlareGreen_F`<br>`UGL_FlareRed_F`<br>`UGL_FlareYellow_F`<br>`UGL_FlareCIR_F`<br>`1Rnd_Smoke_Grenade_shell`<br>`1Rnd_SmokeRed_Grenade_shell`<br>`1Rnd_SmokeGreen_Grenade_shell`<br>`1Rnd_SmokeYellow_Grenade_shell`<br>`1Rnd_SmokePurple_Grenade_shell`<br>`1Rnd_SmokeBlue_Grenade_shell`<br>`1Rnd_SmokeOrange_Grenade_shell` | — |
| `arifle_Katiba_pointer_F` | Katiba 6.5 mm | 6.5x39 mm | `30Rnd_65x39_caseless_green`<br>`30Rnd_65x39_caseless_green_mag_Tracer` | OPFOR (2) |
| `arifle_Mk20_ACO_F` | Mk20 5.56 mm (Camo) | 5.56x45 mm | `30Rnd_556x45_Stanag`<br>`30Rnd_556x45_Stanag_Tracer_Red`<br>`30Rnd_556x45_Stanag_Tracer_Green`<br>`30Rnd_556x45_Stanag_Tracer_Yellow`<br>`30Rnd_556x45_Stanag_red`<br>`30Rnd_556x45_Stanag_green` | Independent (1) |
| `arifle_Mk20_ACO_pointer_F` | Mk20 5.56 mm (Camo) | 5.56x45 mm | `30Rnd_556x45_Stanag`<br>`30Rnd_556x45_Stanag_Tracer_Red`<br>`30Rnd_556x45_Stanag_Tracer_Green`<br>`30Rnd_556x45_Stanag_Tracer_Yellow`<br>`30Rnd_556x45_Stanag_red`<br>`30Rnd_556x45_Stanag_green` | Independent (18), Civilian (4) |
| `arifle_Mk20_F` | Mk20 5.56 mm (Camo) | 5.56x45 mm | `30Rnd_556x45_Stanag`<br>`30Rnd_556x45_Stanag_Tracer_Red`<br>`30Rnd_556x45_Stanag_Tracer_Green`<br>`30Rnd_556x45_Stanag_Tracer_Yellow`<br>`30Rnd_556x45_Stanag_red`<br>`30Rnd_556x45_Stanag_green` | Independent (2), BLUFOR (1), OPFOR (1) |
| `arifle_Mk20_GL_ACO_F` | Mk20 EGLM 5.56 mm (Camo) | 5.56x45 mm | `30Rnd_556x45_Stanag`<br>`30Rnd_556x45_Stanag_Tracer_Red`<br>`30Rnd_556x45_Stanag_Tracer_Green`<br>`30Rnd_556x45_Stanag_Tracer_Yellow`<br>`30Rnd_556x45_Stanag_red`<br>`30Rnd_556x45_Stanag_green`<br>`1Rnd_HE_Grenade_shell`<br>`UGL_FlareWhite_F`<br>`UGL_FlareGreen_F`<br>`UGL_FlareRed_F`<br>`UGL_FlareYellow_F`<br>`UGL_FlareCIR_F`<br>`1Rnd_Smoke_Grenade_shell`<br>`1Rnd_SmokeRed_Grenade_shell`<br>`1Rnd_SmokeGreen_Grenade_shell`<br>`1Rnd_SmokeYellow_Grenade_shell`<br>`1Rnd_SmokePurple_Grenade_shell`<br>`1Rnd_SmokeBlue_Grenade_shell`<br>`1Rnd_SmokeOrange_Grenade_shell` | Independent (2), BLUFOR (1), OPFOR (1) |
| `arifle_Mk20_GL_F` | Mk20 EGLM 5.56 mm (Camo) | 5.56x45 mm | `30Rnd_556x45_Stanag`<br>`30Rnd_556x45_Stanag_Tracer_Red`<br>`30Rnd_556x45_Stanag_Tracer_Green`<br>`30Rnd_556x45_Stanag_Tracer_Yellow`<br>`30Rnd_556x45_Stanag_red`<br>`30Rnd_556x45_Stanag_green`<br>`1Rnd_HE_Grenade_shell`<br>`UGL_FlareWhite_F`<br>`UGL_FlareGreen_F`<br>`UGL_FlareRed_F`<br>`UGL_FlareYellow_F`<br>`UGL_FlareCIR_F`<br>`1Rnd_Smoke_Grenade_shell`<br>`1Rnd_SmokeRed_Grenade_shell`<br>`1Rnd_SmokeGreen_Grenade_shell`<br>`1Rnd_SmokeYellow_Grenade_shell`<br>`1Rnd_SmokePurple_Grenade_shell`<br>`1Rnd_SmokeBlue_Grenade_shell`<br>`1Rnd_SmokeOrange_Grenade_shell` | — |
| `arifle_Mk20_GL_MRCO_pointer_F` | Mk20 EGLM 5.56 mm (Camo) | 5.56x45 mm | `30Rnd_556x45_Stanag`<br>`30Rnd_556x45_Stanag_Tracer_Red`<br>`30Rnd_556x45_Stanag_Tracer_Green`<br>`30Rnd_556x45_Stanag_Tracer_Yellow`<br>`30Rnd_556x45_Stanag_red`<br>`30Rnd_556x45_Stanag_green`<br>`1Rnd_HE_Grenade_shell`<br>`UGL_FlareWhite_F`<br>`UGL_FlareGreen_F`<br>`UGL_FlareRed_F`<br>`UGL_FlareYellow_F`<br>`UGL_FlareCIR_F`<br>`1Rnd_Smoke_Grenade_shell`<br>`1Rnd_SmokeRed_Grenade_shell`<br>`1Rnd_SmokeGreen_Grenade_shell`<br>`1Rnd_SmokeYellow_Grenade_shell`<br>`1Rnd_SmokePurple_Grenade_shell`<br>`1Rnd_SmokeBlue_Grenade_shell`<br>`1Rnd_SmokeOrange_Grenade_shell` | Independent (1) |
| `arifle_Mk20_GL_plain_F` | Mk20 EGLM 5.56 mm | 5.56x45 mm | `30Rnd_556x45_Stanag`<br>`30Rnd_556x45_Stanag_Tracer_Red`<br>`30Rnd_556x45_Stanag_Tracer_Green`<br>`30Rnd_556x45_Stanag_Tracer_Yellow`<br>`30Rnd_556x45_Stanag_red`<br>`30Rnd_556x45_Stanag_green`<br>`1Rnd_HE_Grenade_shell`<br>`UGL_FlareWhite_F`<br>`UGL_FlareGreen_F`<br>`UGL_FlareRed_F`<br>`UGL_FlareYellow_F`<br>`UGL_FlareCIR_F`<br>`1Rnd_Smoke_Grenade_shell`<br>`1Rnd_SmokeRed_Grenade_shell`<br>`1Rnd_SmokeGreen_Grenade_shell`<br>`1Rnd_SmokeYellow_Grenade_shell`<br>`1Rnd_SmokePurple_Grenade_shell`<br>`1Rnd_SmokeBlue_Grenade_shell`<br>`1Rnd_SmokeOrange_Grenade_shell` | — |
| `arifle_Mk20_Holo_F` | Mk20 5.56 mm (Camo) | 5.56x45 mm | `30Rnd_556x45_Stanag`<br>`30Rnd_556x45_Stanag_Tracer_Red`<br>`30Rnd_556x45_Stanag_Tracer_Green`<br>`30Rnd_556x45_Stanag_Tracer_Yellow`<br>`30Rnd_556x45_Stanag_red`<br>`30Rnd_556x45_Stanag_green` | — |
| `arifle_Mk20_MRCO_F` | Mk20 5.56 mm (Camo) | 5.56x45 mm | `30Rnd_556x45_Stanag`<br>`30Rnd_556x45_Stanag_Tracer_Red`<br>`30Rnd_556x45_Stanag_Tracer_Green`<br>`30Rnd_556x45_Stanag_Tracer_Yellow`<br>`30Rnd_556x45_Stanag_red`<br>`30Rnd_556x45_Stanag_green` | Independent (2), BLUFOR (1), OPFOR (1) |
| `arifle_Mk20_MRCO_plain_F` | Mk20 5.56 mm | 5.56x45 mm | `30Rnd_556x45_Stanag`<br>`30Rnd_556x45_Stanag_Tracer_Red`<br>`30Rnd_556x45_Stanag_Tracer_Green`<br>`30Rnd_556x45_Stanag_Tracer_Yellow`<br>`30Rnd_556x45_Stanag_red`<br>`30Rnd_556x45_Stanag_green` | — |
| `arifle_Mk20_MRCO_pointer_F` | Mk20 5.56 mm (Camo) | 5.56x45 mm | `30Rnd_556x45_Stanag`<br>`30Rnd_556x45_Stanag_Tracer_Red`<br>`30Rnd_556x45_Stanag_Tracer_Green`<br>`30Rnd_556x45_Stanag_Tracer_Yellow`<br>`30Rnd_556x45_Stanag_red`<br>`30Rnd_556x45_Stanag_green` | Independent (1) |
| `arifle_Mk20_plain_F` | Mk20 5.56 mm | 5.56x45 mm | `30Rnd_556x45_Stanag`<br>`30Rnd_556x45_Stanag_Tracer_Red`<br>`30Rnd_556x45_Stanag_Tracer_Green`<br>`30Rnd_556x45_Stanag_Tracer_Yellow`<br>`30Rnd_556x45_Stanag_red`<br>`30Rnd_556x45_Stanag_green` | — |
| `arifle_Mk20_pointer_F` | Mk20 5.56 mm (Camo) | 5.56x45 mm | `30Rnd_556x45_Stanag`<br>`30Rnd_556x45_Stanag_Tracer_Red`<br>`30Rnd_556x45_Stanag_Tracer_Green`<br>`30Rnd_556x45_Stanag_Tracer_Yellow`<br>`30Rnd_556x45_Stanag_red`<br>`30Rnd_556x45_Stanag_green` | Independent (1) |
| `arifle_Mk20C_ACO_F` | Mk20C 5.56 mm (Camo) | 5.56x45 mm | `30Rnd_556x45_Stanag`<br>`30Rnd_556x45_Stanag_Tracer_Red`<br>`30Rnd_556x45_Stanag_Tracer_Green`<br>`30Rnd_556x45_Stanag_Tracer_Yellow`<br>`30Rnd_556x45_Stanag_red`<br>`30Rnd_556x45_Stanag_green` | Independent (3), BLUFOR (1), OPFOR (1) |
| `arifle_Mk20C_ACO_pointer_F` | Mk20C 5.56 mm (Camo) | 5.56x45 mm | `30Rnd_556x45_Stanag`<br>`30Rnd_556x45_Stanag_Tracer_Red`<br>`30Rnd_556x45_Stanag_Tracer_Green`<br>`30Rnd_556x45_Stanag_Tracer_Yellow`<br>`30Rnd_556x45_Stanag_red`<br>`30Rnd_556x45_Stanag_green` | Independent (9) |
| `arifle_Mk20C_F` | Mk20C 5.56 mm (Camo) | 5.56x45 mm | `30Rnd_556x45_Stanag`<br>`30Rnd_556x45_Stanag_Tracer_Red`<br>`30Rnd_556x45_Stanag_Tracer_Green`<br>`30Rnd_556x45_Stanag_Tracer_Yellow`<br>`30Rnd_556x45_Stanag_red`<br>`30Rnd_556x45_Stanag_green` | Independent (3) |
| `arifle_Mk20C_plain_F` | Mk20C 5.56 mm | 5.56x45 mm | `30Rnd_556x45_Stanag`<br>`30Rnd_556x45_Stanag_Tracer_Red`<br>`30Rnd_556x45_Stanag_Tracer_Green`<br>`30Rnd_556x45_Stanag_Tracer_Yellow`<br>`30Rnd_556x45_Stanag_red`<br>`30Rnd_556x45_Stanag_green` | — |
| `arifle_MSBS65_aco_F` | Promet 6.5 mm | 6.5x39 mm | `30Rnd_65x39_caseless_msbs_mag` | Independent (1) |
| `arifle_MSBS65_black_aco_F` | Promet 6.5 mm (Black) | 6.5x39 mm | `30Rnd_65x39_caseless_msbs_mag` | Independent (1) |
| `arifle_MSBS65_black_aco_FL_F` | Promet 6.5 mm (Black) | 6.5x39 mm | `30Rnd_65x39_caseless_msbs_mag` | Independent (1) |
| `arifle_MSBS65_black_F` | Promet 6.5 mm (Black) | 6.5x39 mm | `30Rnd_65x39_caseless_msbs_mag` | — |
| `arifle_MSBS65_black_ico_F` | Promet 6.5 mm (Black) | 6.5x39 mm | `30Rnd_65x39_caseless_msbs_mag` | — |
| `arifle_MSBS65_black_ico_pointer_f` | Promet 6.5 mm (Black) | 6.5x39 mm | `30Rnd_65x39_caseless_msbs_mag` | — |
| `arifle_MSBS65_camo_F` | Promet 6.5 mm (Camo) | 6.5x39 mm | `30Rnd_65x39_caseless_msbs_mag` | — |
| `arifle_MSBS65_F` | Promet 6.5 mm | 6.5x39 mm | `30Rnd_65x39_caseless_msbs_mag` | — |
| `arifle_MSBS65_GL_black_F` | Promet GL 6.5 mm (Black) | 6.5x39 mm | `30Rnd_65x39_caseless_msbs_mag`<br>`1Rnd_HE_Grenade_shell`<br>`UGL_FlareWhite_F`<br>`UGL_FlareGreen_F`<br>`UGL_FlareRed_F`<br>`UGL_FlareYellow_F`<br>`UGL_FlareCIR_F`<br>`1Rnd_Smoke_Grenade_shell`<br>`1Rnd_SmokeRed_Grenade_shell`<br>`1Rnd_SmokeGreen_Grenade_shell`<br>`1Rnd_SmokeYellow_Grenade_shell`<br>`1Rnd_SmokePurple_Grenade_shell`<br>`1Rnd_SmokeBlue_Grenade_shell`<br>`1Rnd_SmokeOrange_Grenade_shell` | — |
| `arifle_MSBS65_GL_black_ico_F` | Promet GL 6.5 mm (Black) | 6.5x39 mm | `30Rnd_65x39_caseless_msbs_mag`<br>`1Rnd_HE_Grenade_shell`<br>`UGL_FlareWhite_F`<br>`UGL_FlareGreen_F`<br>`UGL_FlareRed_F`<br>`UGL_FlareYellow_F`<br>`UGL_FlareCIR_F`<br>`1Rnd_Smoke_Grenade_shell`<br>`1Rnd_SmokeRed_Grenade_shell`<br>`1Rnd_SmokeGreen_Grenade_shell`<br>`1Rnd_SmokeYellow_Grenade_shell`<br>`1Rnd_SmokePurple_Grenade_shell`<br>`1Rnd_SmokeBlue_Grenade_shell`<br>`1Rnd_SmokeOrange_Grenade_shell` | — |
| `arifle_MSBS65_GL_black_ico_pointer_f` | Promet GL 6.5 mm (Black) | 6.5x39 mm | `30Rnd_65x39_caseless_msbs_mag`<br>`1Rnd_HE_Grenade_shell`<br>`UGL_FlareWhite_F`<br>`UGL_FlareGreen_F`<br>`UGL_FlareRed_F`<br>`UGL_FlareYellow_F`<br>`UGL_FlareCIR_F`<br>`1Rnd_Smoke_Grenade_shell`<br>`1Rnd_SmokeRed_Grenade_shell`<br>`1Rnd_SmokeGreen_Grenade_shell`<br>`1Rnd_SmokeYellow_Grenade_shell`<br>`1Rnd_SmokePurple_Grenade_shell`<br>`1Rnd_SmokeBlue_Grenade_shell`<br>`1Rnd_SmokeOrange_Grenade_shell` | — |
| `arifle_MSBS65_GL_camo_F` | Promet GL 6.5 mm (Camo) | 6.5x39 mm | `30Rnd_65x39_caseless_msbs_mag`<br>`1Rnd_HE_Grenade_shell`<br>`UGL_FlareWhite_F`<br>`UGL_FlareGreen_F`<br>`UGL_FlareRed_F`<br>`UGL_FlareYellow_F`<br>`UGL_FlareCIR_F`<br>`1Rnd_Smoke_Grenade_shell`<br>`1Rnd_SmokeRed_Grenade_shell`<br>`1Rnd_SmokeGreen_Grenade_shell`<br>`1Rnd_SmokeYellow_Grenade_shell`<br>`1Rnd_SmokePurple_Grenade_shell`<br>`1Rnd_SmokeBlue_Grenade_shell`<br>`1Rnd_SmokeOrange_Grenade_shell` | — |
| `arifle_MSBS65_GL_F` | Promet GL 6.5 mm | 6.5x39 mm | `30Rnd_65x39_caseless_msbs_mag`<br>`1Rnd_HE_Grenade_shell`<br>`UGL_FlareWhite_F`<br>`UGL_FlareGreen_F`<br>`UGL_FlareRed_F`<br>`UGL_FlareYellow_F`<br>`UGL_FlareCIR_F`<br>`1Rnd_Smoke_Grenade_shell`<br>`1Rnd_SmokeRed_Grenade_shell`<br>`1Rnd_SmokeGreen_Grenade_shell`<br>`1Rnd_SmokeYellow_Grenade_shell`<br>`1Rnd_SmokePurple_Grenade_shell`<br>`1Rnd_SmokeBlue_Grenade_shell`<br>`1Rnd_SmokeOrange_Grenade_shell` | — |
| `arifle_MSBS65_GL_ico_F` | Promet GL 6.5 mm | 6.5x39 mm | `30Rnd_65x39_caseless_msbs_mag`<br>`1Rnd_HE_Grenade_shell`<br>`UGL_FlareWhite_F`<br>`UGL_FlareGreen_F`<br>`UGL_FlareRed_F`<br>`UGL_FlareYellow_F`<br>`UGL_FlareCIR_F`<br>`1Rnd_Smoke_Grenade_shell`<br>`1Rnd_SmokeRed_Grenade_shell`<br>`1Rnd_SmokeGreen_Grenade_shell`<br>`1Rnd_SmokeYellow_Grenade_shell`<br>`1Rnd_SmokePurple_Grenade_shell`<br>`1Rnd_SmokeBlue_Grenade_shell`<br>`1Rnd_SmokeOrange_Grenade_shell` | — |
| `arifle_MSBS65_GL_ico_pointer_f` | Promet GL 6.5 mm | 6.5x39 mm | `30Rnd_65x39_caseless_msbs_mag`<br>`1Rnd_HE_Grenade_shell`<br>`UGL_FlareWhite_F`<br>`UGL_FlareGreen_F`<br>`UGL_FlareRed_F`<br>`UGL_FlareYellow_F`<br>`UGL_FlareCIR_F`<br>`1Rnd_Smoke_Grenade_shell`<br>`1Rnd_SmokeRed_Grenade_shell`<br>`1Rnd_SmokeGreen_Grenade_shell`<br>`1Rnd_SmokeYellow_Grenade_shell`<br>`1Rnd_SmokePurple_Grenade_shell`<br>`1Rnd_SmokeBlue_Grenade_shell`<br>`1Rnd_SmokeOrange_Grenade_shell` | Independent (2) |
| `arifle_MSBS65_GL_sand_F` | Promet GL 6.5 mm (Sand) | 6.5x39 mm | `30Rnd_65x39_caseless_msbs_mag`<br>`1Rnd_HE_Grenade_shell`<br>`UGL_FlareWhite_F`<br>`UGL_FlareGreen_F`<br>`UGL_FlareRed_F`<br>`UGL_FlareYellow_F`<br>`UGL_FlareCIR_F`<br>`1Rnd_Smoke_Grenade_shell`<br>`1Rnd_SmokeRed_Grenade_shell`<br>`1Rnd_SmokeGreen_Grenade_shell`<br>`1Rnd_SmokeYellow_Grenade_shell`<br>`1Rnd_SmokePurple_Grenade_shell`<br>`1Rnd_SmokeBlue_Grenade_shell`<br>`1Rnd_SmokeOrange_Grenade_shell` | — |
| `arifle_MSBS65_ico_F` | Promet 6.5 mm | 6.5x39 mm | `30Rnd_65x39_caseless_msbs_mag` | — |
| `arifle_MSBS65_ico_pointer_f` | Promet 6.5 mm | 6.5x39 mm | `30Rnd_65x39_caseless_msbs_mag` | Independent (28) |
| `arifle_MSBS65_Mark_black_F` | Promet MR 6.5 mm (Black) | 6.5x39 mm | `30Rnd_65x39_caseless_msbs_mag` | — |
| `arifle_MSBS65_Mark_camo_F` | Promet MR 6.5 mm (Camo) | 6.5x39 mm | `30Rnd_65x39_caseless_msbs_mag` | — |
| `arifle_MSBS65_Mark_F` | Promet MR 6.5 mm | 6.5x39 mm | `30Rnd_65x39_caseless_msbs_mag` | — |
| `arifle_MSBS65_Mark_sand_F` | Promet MR 6.5 mm (Sand) | 6.5x39 mm | `30Rnd_65x39_caseless_msbs_mag` | — |
| `arifle_MSBS65_Mark_SOS_LP_BI_F` | Promet MR 6.5 mm | 6.5x39 mm | `30Rnd_65x39_caseless_msbs_mag` | Independent (1) |
| `arifle_MSBS65_sand_F` | Promet 6.5 mm (Sand) | 6.5x39 mm | `30Rnd_65x39_caseless_msbs_mag` | — |
| `arifle_MSBS65_UBS_black_F` | Promet SG 6.5 mm (Black) | 6.5x39 mm | `30Rnd_65x39_caseless_msbs_mag`<br>`6Rnd_12Gauge_Pellets` | — |
| `arifle_MSBS65_UBS_black_ico_F` | Promet SG 6.5 mm (Black) | 6.5x39 mm | `30Rnd_65x39_caseless_msbs_mag`<br>`6Rnd_12Gauge_Pellets` | — |
| `arifle_MSBS65_UBS_black_ico_pointer_f` | Promet SG 6.5 mm (Black) | 6.5x39 mm | `30Rnd_65x39_caseless_msbs_mag`<br>`6Rnd_12Gauge_Pellets` | — |
| `arifle_MSBS65_UBS_camo_F` | Promet SG 6.5 mm (Camo) | 6.5x39 mm | `30Rnd_65x39_caseless_msbs_mag`<br>`6Rnd_12Gauge_Pellets` | — |
| `arifle_MSBS65_UBS_F` | Promet SG 6.5 mm | 6.5x39 mm | `30Rnd_65x39_caseless_msbs_mag`<br>`6Rnd_12Gauge_Pellets` | — |
| `arifle_MSBS65_UBS_ico_F` | Promet SG 6.5 mm | 6.5x39 mm | `30Rnd_65x39_caseless_msbs_mag`<br>`6Rnd_12Gauge_Pellets` | — |
| `arifle_MSBS65_UBS_ico_pointer_f` | Promet SG 6.5 mm | 6.5x39 mm | `30Rnd_65x39_caseless_msbs_mag`<br>`6Rnd_12Gauge_Pellets` | Independent (1) |
| `arifle_MSBS65_UBS_sand_F` | Promet SG 6.5 mm (Sand) | 6.5x39 mm | `30Rnd_65x39_caseless_msbs_mag`<br>`6Rnd_12Gauge_Pellets` | — |
| `arifle_MSBS65_UBS_snds_ico_pointer_F` | Promet SG 6.5 mm | 6.5x39 mm | `30Rnd_65x39_caseless_msbs_mag`<br>`6Rnd_12Gauge_Pellets` | Independent (1) |
| `arifle_MX_ACO_F` | MX 6.5 mm | 6.5x39 mm | `30Rnd_65x39_caseless_mag` | BLUFOR (1) |
| `arifle_MX_ACO_pointer_F` | MX 6.5 mm | 6.5x39 mm | `30Rnd_65x39_caseless_mag` | BLUFOR (28) |
| `arifle_MX_ACO_pointer_snds_F` | MX 6.5 mm | 6.5x39 mm | `30Rnd_65x39_caseless_mag` | BLUFOR (3) |
| `arifle_MX_Black_ACO_FL_F` | MX 6.5 mm (Black) | 6.5x39 mm | `30Rnd_65x39_caseless_black_mag` | — |
| `arifle_MX_Black_ACO_Pointer_F` | MX 6.5 mm (Black) | 6.5x39 mm | `30Rnd_65x39_caseless_black_mag` | BLUFOR (9) |
| `arifle_MX_Black_ACO_Pointer_Snds_F` | MX 6.5 mm (Black) | 6.5x39 mm | `30Rnd_65x39_caseless_black_mag` | — |
| `arifle_MX_Black_F` | MX 6.5 mm (Black) | 6.5x39 mm | `30Rnd_65x39_caseless_black_mag` | — |
| `arifle_MX_Black_Hamr_pointer_F` | MX 6.5 mm (Black) | 6.5x39 mm | `30Rnd_65x39_caseless_black_mag` | BLUFOR (2) |
| `arifle_MX_Black_Hamr_Pointer_Snds_F` | MX 6.5 mm (Black) | 6.5x39 mm | `30Rnd_65x39_caseless_black_mag` | — |
| `arifle_MX_Black_Holo_Pointer_F` | MX 6.5 mm (Black) | 6.5x39 mm | `30Rnd_65x39_caseless_black_mag` | BLUFOR (1) |
| `arifle_MX_Black_Pointer_F` | MX 6.5 mm (Black) | 6.5x39 mm | `30Rnd_65x39_caseless_black_mag` | BLUFOR (1) |
| `arifle_MX_F` | MX 6.5 mm | 6.5x39 mm | `30Rnd_65x39_caseless_mag` | — |
| `arifle_MX_GL_ACO_F` | MX 3GL 6.5 mm | 6.5x39 mm + 40 mm | `30Rnd_65x39_caseless_mag`<br>`1Rnd_HE_Grenade_shell`<br>`UGL_FlareWhite_F`<br>`UGL_FlareGreen_F`<br>`UGL_FlareRed_F`<br>`UGL_FlareYellow_F`<br>`UGL_FlareCIR_F`<br>`1Rnd_Smoke_Grenade_shell`<br>`1Rnd_SmokeRed_Grenade_shell`<br>`1Rnd_SmokeGreen_Grenade_shell`<br>`1Rnd_SmokeYellow_Grenade_shell`<br>`1Rnd_SmokePurple_Grenade_shell`<br>`1Rnd_SmokeBlue_Grenade_shell`<br>`1Rnd_SmokeOrange_Grenade_shell`<br>`3Rnd_HE_Grenade_shell`<br>`3Rnd_UGL_FlareWhite_F`<br>`3Rnd_UGL_FlareGreen_F`<br>`3Rnd_UGL_FlareRed_F`<br>`3Rnd_UGL_FlareYellow_F`<br>`3Rnd_UGL_FlareCIR_F`<br>`3Rnd_Smoke_Grenade_shell`<br>`3Rnd_SmokeRed_Grenade_shell`<br>`3Rnd_SmokeGreen_Grenade_shell`<br>`3Rnd_SmokeYellow_Grenade_shell`<br>`3Rnd_SmokePurple_Grenade_shell`<br>`3Rnd_SmokeBlue_Grenade_shell`<br>`3Rnd_SmokeOrange_Grenade_shell` | BLUFOR (1) |
| `arifle_MX_GL_ACO_pointer_F` | MX 3GL 6.5 mm | 6.5x39 mm + 40 mm | `30Rnd_65x39_caseless_mag`<br>`1Rnd_HE_Grenade_shell`<br>`UGL_FlareWhite_F`<br>`UGL_FlareGreen_F`<br>`UGL_FlareRed_F`<br>`UGL_FlareYellow_F`<br>`UGL_FlareCIR_F`<br>`1Rnd_Smoke_Grenade_shell`<br>`1Rnd_SmokeRed_Grenade_shell`<br>`1Rnd_SmokeGreen_Grenade_shell`<br>`1Rnd_SmokeYellow_Grenade_shell`<br>`1Rnd_SmokePurple_Grenade_shell`<br>`1Rnd_SmokeBlue_Grenade_shell`<br>`1Rnd_SmokeOrange_Grenade_shell`<br>`3Rnd_HE_Grenade_shell`<br>`3Rnd_UGL_FlareWhite_F`<br>`3Rnd_UGL_FlareGreen_F`<br>`3Rnd_UGL_FlareRed_F`<br>`3Rnd_UGL_FlareYellow_F`<br>`3Rnd_UGL_FlareCIR_F`<br>`3Rnd_Smoke_Grenade_shell`<br>`3Rnd_SmokeRed_Grenade_shell`<br>`3Rnd_SmokeGreen_Grenade_shell`<br>`3Rnd_SmokeYellow_Grenade_shell`<br>`3Rnd_SmokePurple_Grenade_shell`<br>`3Rnd_SmokeBlue_Grenade_shell`<br>`3Rnd_SmokeOrange_Grenade_shell` | — |
| `arifle_MX_GL_Black_ACO_F` | MX 3GL 6.5 mm (Black) | 6.5x39 mm + 40 mm | `30Rnd_65x39_caseless_black_mag`<br>`1Rnd_HE_Grenade_shell`<br>`UGL_FlareWhite_F`<br>`UGL_FlareGreen_F`<br>`UGL_FlareRed_F`<br>`UGL_FlareYellow_F`<br>`UGL_FlareCIR_F`<br>`1Rnd_Smoke_Grenade_shell`<br>`1Rnd_SmokeRed_Grenade_shell`<br>`1Rnd_SmokeGreen_Grenade_shell`<br>`1Rnd_SmokeYellow_Grenade_shell`<br>`1Rnd_SmokePurple_Grenade_shell`<br>`1Rnd_SmokeBlue_Grenade_shell`<br>`1Rnd_SmokeOrange_Grenade_shell`<br>`3Rnd_HE_Grenade_shell`<br>`3Rnd_UGL_FlareWhite_F`<br>`3Rnd_UGL_FlareGreen_F`<br>`3Rnd_UGL_FlareRed_F`<br>`3Rnd_UGL_FlareYellow_F`<br>`3Rnd_UGL_FlareCIR_F`<br>`3Rnd_Smoke_Grenade_shell`<br>`3Rnd_SmokeRed_Grenade_shell`<br>`3Rnd_SmokeGreen_Grenade_shell`<br>`3Rnd_SmokeYellow_Grenade_shell`<br>`3Rnd_SmokePurple_Grenade_shell`<br>`3Rnd_SmokeBlue_Grenade_shell`<br>`3Rnd_SmokeOrange_Grenade_shell` | BLUFOR (1) |
| `arifle_MX_GL_Black_F` | MX 3GL 6.5 mm (Black) | 6.5x39 mm + 40 mm | `30Rnd_65x39_caseless_black_mag`<br>`1Rnd_HE_Grenade_shell`<br>`UGL_FlareWhite_F`<br>`UGL_FlareGreen_F`<br>`UGL_FlareRed_F`<br>`UGL_FlareYellow_F`<br>`UGL_FlareCIR_F`<br>`1Rnd_Smoke_Grenade_shell`<br>`1Rnd_SmokeRed_Grenade_shell`<br>`1Rnd_SmokeGreen_Grenade_shell`<br>`1Rnd_SmokeYellow_Grenade_shell`<br>`1Rnd_SmokePurple_Grenade_shell`<br>`1Rnd_SmokeBlue_Grenade_shell`<br>`1Rnd_SmokeOrange_Grenade_shell`<br>`3Rnd_HE_Grenade_shell`<br>`3Rnd_UGL_FlareWhite_F`<br>`3Rnd_UGL_FlareGreen_F`<br>`3Rnd_UGL_FlareRed_F`<br>`3Rnd_UGL_FlareYellow_F`<br>`3Rnd_UGL_FlareCIR_F`<br>`3Rnd_Smoke_Grenade_shell`<br>`3Rnd_SmokeRed_Grenade_shell`<br>`3Rnd_SmokeGreen_Grenade_shell`<br>`3Rnd_SmokeYellow_Grenade_shell`<br>`3Rnd_SmokePurple_Grenade_shell`<br>`3Rnd_SmokeBlue_Grenade_shell`<br>`3Rnd_SmokeOrange_Grenade_shell` | — |
| `arifle_MX_GL_Black_Hamr_pointer_F` | MX 3GL 6.5 mm (Black) | 6.5x39 mm + 40 mm | `30Rnd_65x39_caseless_black_mag`<br>`1Rnd_HE_Grenade_shell`<br>`UGL_FlareWhite_F`<br>`UGL_FlareGreen_F`<br>`UGL_FlareRed_F`<br>`UGL_FlareYellow_F`<br>`UGL_FlareCIR_F`<br>`1Rnd_Smoke_Grenade_shell`<br>`1Rnd_SmokeRed_Grenade_shell`<br>`1Rnd_SmokeGreen_Grenade_shell`<br>`1Rnd_SmokeYellow_Grenade_shell`<br>`1Rnd_SmokePurple_Grenade_shell`<br>`1Rnd_SmokeBlue_Grenade_shell`<br>`1Rnd_SmokeOrange_Grenade_shell`<br>`3Rnd_HE_Grenade_shell`<br>`3Rnd_UGL_FlareWhite_F`<br>`3Rnd_UGL_FlareGreen_F`<br>`3Rnd_UGL_FlareRed_F`<br>`3Rnd_UGL_FlareYellow_F`<br>`3Rnd_UGL_FlareCIR_F`<br>`3Rnd_Smoke_Grenade_shell`<br>`3Rnd_SmokeRed_Grenade_shell`<br>`3Rnd_SmokeGreen_Grenade_shell`<br>`3Rnd_SmokeYellow_Grenade_shell`<br>`3Rnd_SmokePurple_Grenade_shell`<br>`3Rnd_SmokeBlue_Grenade_shell`<br>`3Rnd_SmokeOrange_Grenade_shell` | BLUFOR (2) |
| `arifle_MX_GL_Black_Holo_Pointer_Snds_F` | MX 3GL 6.5 mm (Black) | 6.5x39 mm + 40 mm | `30Rnd_65x39_caseless_black_mag`<br>`1Rnd_HE_Grenade_shell`<br>`UGL_FlareWhite_F`<br>`UGL_FlareGreen_F`<br>`UGL_FlareRed_F`<br>`UGL_FlareYellow_F`<br>`UGL_FlareCIR_F`<br>`1Rnd_Smoke_Grenade_shell`<br>`1Rnd_SmokeRed_Grenade_shell`<br>`1Rnd_SmokeGreen_Grenade_shell`<br>`1Rnd_SmokeYellow_Grenade_shell`<br>`1Rnd_SmokePurple_Grenade_shell`<br>`1Rnd_SmokeBlue_Grenade_shell`<br>`1Rnd_SmokeOrange_Grenade_shell`<br>`3Rnd_HE_Grenade_shell`<br>`3Rnd_UGL_FlareWhite_F`<br>`3Rnd_UGL_FlareGreen_F`<br>`3Rnd_UGL_FlareRed_F`<br>`3Rnd_UGL_FlareYellow_F`<br>`3Rnd_UGL_FlareCIR_F`<br>`3Rnd_Smoke_Grenade_shell`<br>`3Rnd_SmokeRed_Grenade_shell`<br>`3Rnd_SmokeGreen_Grenade_shell`<br>`3Rnd_SmokeYellow_Grenade_shell`<br>`3Rnd_SmokePurple_Grenade_shell`<br>`3Rnd_SmokeBlue_Grenade_shell`<br>`3Rnd_SmokeOrange_Grenade_shell` | — |
| `arifle_MX_GL_F` | MX 3GL 6.5 mm | 6.5x39 mm + 40 mm | `30Rnd_65x39_caseless_mag`<br>`1Rnd_HE_Grenade_shell`<br>`UGL_FlareWhite_F`<br>`UGL_FlareGreen_F`<br>`UGL_FlareRed_F`<br>`UGL_FlareYellow_F`<br>`UGL_FlareCIR_F`<br>`1Rnd_Smoke_Grenade_shell`<br>`1Rnd_SmokeRed_Grenade_shell`<br>`1Rnd_SmokeGreen_Grenade_shell`<br>`1Rnd_SmokeYellow_Grenade_shell`<br>`1Rnd_SmokePurple_Grenade_shell`<br>`1Rnd_SmokeBlue_Grenade_shell`<br>`1Rnd_SmokeOrange_Grenade_shell`<br>`3Rnd_HE_Grenade_shell`<br>`3Rnd_UGL_FlareWhite_F`<br>`3Rnd_UGL_FlareGreen_F`<br>`3Rnd_UGL_FlareRed_F`<br>`3Rnd_UGL_FlareYellow_F`<br>`3Rnd_UGL_FlareCIR_F`<br>`3Rnd_Smoke_Grenade_shell`<br>`3Rnd_SmokeRed_Grenade_shell`<br>`3Rnd_SmokeGreen_Grenade_shell`<br>`3Rnd_SmokeYellow_Grenade_shell`<br>`3Rnd_SmokePurple_Grenade_shell`<br>`3Rnd_SmokeBlue_Grenade_shell`<br>`3Rnd_SmokeOrange_Grenade_shell` | — |
| `arifle_MX_GL_Hamr_pointer_F` | MX 3GL 6.5 mm | 6.5x39 mm + 40 mm | `30Rnd_65x39_caseless_mag`<br>`1Rnd_HE_Grenade_shell`<br>`UGL_FlareWhite_F`<br>`UGL_FlareGreen_F`<br>`UGL_FlareRed_F`<br>`UGL_FlareYellow_F`<br>`UGL_FlareCIR_F`<br>`1Rnd_Smoke_Grenade_shell`<br>`1Rnd_SmokeRed_Grenade_shell`<br>`1Rnd_SmokeGreen_Grenade_shell`<br>`1Rnd_SmokeYellow_Grenade_shell`<br>`1Rnd_SmokePurple_Grenade_shell`<br>`1Rnd_SmokeBlue_Grenade_shell`<br>`1Rnd_SmokeOrange_Grenade_shell`<br>`3Rnd_HE_Grenade_shell`<br>`3Rnd_UGL_FlareWhite_F`<br>`3Rnd_UGL_FlareGreen_F`<br>`3Rnd_UGL_FlareRed_F`<br>`3Rnd_UGL_FlareYellow_F`<br>`3Rnd_UGL_FlareCIR_F`<br>`3Rnd_Smoke_Grenade_shell`<br>`3Rnd_SmokeRed_Grenade_shell`<br>`3Rnd_SmokeGreen_Grenade_shell`<br>`3Rnd_SmokeYellow_Grenade_shell`<br>`3Rnd_SmokePurple_Grenade_shell`<br>`3Rnd_SmokeBlue_Grenade_shell`<br>`3Rnd_SmokeOrange_Grenade_shell` | BLUFOR (2) |
| `arifle_MX_GL_Holo_pointer_snds_F` | MX 3GL 6.5 mm | 6.5x39 mm + 40 mm | `30Rnd_65x39_caseless_mag`<br>`1Rnd_HE_Grenade_shell`<br>`UGL_FlareWhite_F`<br>`UGL_FlareGreen_F`<br>`UGL_FlareRed_F`<br>`UGL_FlareYellow_F`<br>`UGL_FlareCIR_F`<br>`1Rnd_Smoke_Grenade_shell`<br>`1Rnd_SmokeRed_Grenade_shell`<br>`1Rnd_SmokeGreen_Grenade_shell`<br>`1Rnd_SmokeYellow_Grenade_shell`<br>`1Rnd_SmokePurple_Grenade_shell`<br>`1Rnd_SmokeBlue_Grenade_shell`<br>`1Rnd_SmokeOrange_Grenade_shell`<br>`3Rnd_HE_Grenade_shell`<br>`3Rnd_UGL_FlareWhite_F`<br>`3Rnd_UGL_FlareGreen_F`<br>`3Rnd_UGL_FlareRed_F`<br>`3Rnd_UGL_FlareYellow_F`<br>`3Rnd_UGL_FlareCIR_F`<br>`3Rnd_Smoke_Grenade_shell`<br>`3Rnd_SmokeRed_Grenade_shell`<br>`3Rnd_SmokeGreen_Grenade_shell`<br>`3Rnd_SmokeYellow_Grenade_shell`<br>`3Rnd_SmokePurple_Grenade_shell`<br>`3Rnd_SmokeBlue_Grenade_shell`<br>`3Rnd_SmokeOrange_Grenade_shell` | BLUFOR (1) |
| `arifle_MX_GL_khk_ACO_F` | MX 3GL 6.5 mm (Khaki) | 6.5x39 mm + 40 mm | `30Rnd_65x39_caseless_khaki_mag`<br>`1Rnd_HE_Grenade_shell`<br>`UGL_FlareWhite_F`<br>`UGL_FlareGreen_F`<br>`UGL_FlareRed_F`<br>`UGL_FlareYellow_F`<br>`UGL_FlareCIR_F`<br>`1Rnd_Smoke_Grenade_shell`<br>`1Rnd_SmokeRed_Grenade_shell`<br>`1Rnd_SmokeGreen_Grenade_shell`<br>`1Rnd_SmokeYellow_Grenade_shell`<br>`1Rnd_SmokePurple_Grenade_shell`<br>`1Rnd_SmokeBlue_Grenade_shell`<br>`1Rnd_SmokeOrange_Grenade_shell`<br>`3Rnd_HE_Grenade_shell`<br>`3Rnd_UGL_FlareWhite_F`<br>`3Rnd_UGL_FlareGreen_F`<br>`3Rnd_UGL_FlareRed_F`<br>`3Rnd_UGL_FlareYellow_F`<br>`3Rnd_UGL_FlareCIR_F`<br>`3Rnd_Smoke_Grenade_shell`<br>`3Rnd_SmokeRed_Grenade_shell`<br>`3Rnd_SmokeGreen_Grenade_shell`<br>`3Rnd_SmokeYellow_Grenade_shell`<br>`3Rnd_SmokePurple_Grenade_shell`<br>`3Rnd_SmokeBlue_Grenade_shell`<br>`3Rnd_SmokeOrange_Grenade_shell` | BLUFOR (1) |
| `arifle_MX_GL_khk_F` | MX 3GL 6.5 mm (Khaki) | 6.5x39 mm + 40 mm | `30Rnd_65x39_caseless_khaki_mag`<br>`1Rnd_HE_Grenade_shell`<br>`UGL_FlareWhite_F`<br>`UGL_FlareGreen_F`<br>`UGL_FlareRed_F`<br>`UGL_FlareYellow_F`<br>`UGL_FlareCIR_F`<br>`1Rnd_Smoke_Grenade_shell`<br>`1Rnd_SmokeRed_Grenade_shell`<br>`1Rnd_SmokeGreen_Grenade_shell`<br>`1Rnd_SmokeYellow_Grenade_shell`<br>`1Rnd_SmokePurple_Grenade_shell`<br>`1Rnd_SmokeBlue_Grenade_shell`<br>`1Rnd_SmokeOrange_Grenade_shell`<br>`3Rnd_HE_Grenade_shell`<br>`3Rnd_UGL_FlareWhite_F`<br>`3Rnd_UGL_FlareGreen_F`<br>`3Rnd_UGL_FlareRed_F`<br>`3Rnd_UGL_FlareYellow_F`<br>`3Rnd_UGL_FlareCIR_F`<br>`3Rnd_Smoke_Grenade_shell`<br>`3Rnd_SmokeRed_Grenade_shell`<br>`3Rnd_SmokeGreen_Grenade_shell`<br>`3Rnd_SmokeYellow_Grenade_shell`<br>`3Rnd_SmokePurple_Grenade_shell`<br>`3Rnd_SmokeBlue_Grenade_shell`<br>`3Rnd_SmokeOrange_Grenade_shell` | — |
| `arifle_MX_GL_khk_Hamr_Pointer_F` | MX 3GL 6.5 mm (Khaki) | 6.5x39 mm + 40 mm | `30Rnd_65x39_caseless_khaki_mag`<br>`1Rnd_HE_Grenade_shell`<br>`UGL_FlareWhite_F`<br>`UGL_FlareGreen_F`<br>`UGL_FlareRed_F`<br>`UGL_FlareYellow_F`<br>`UGL_FlareCIR_F`<br>`1Rnd_Smoke_Grenade_shell`<br>`1Rnd_SmokeRed_Grenade_shell`<br>`1Rnd_SmokeGreen_Grenade_shell`<br>`1Rnd_SmokeYellow_Grenade_shell`<br>`1Rnd_SmokePurple_Grenade_shell`<br>`1Rnd_SmokeBlue_Grenade_shell`<br>`1Rnd_SmokeOrange_Grenade_shell`<br>`3Rnd_HE_Grenade_shell`<br>`3Rnd_UGL_FlareWhite_F`<br>`3Rnd_UGL_FlareGreen_F`<br>`3Rnd_UGL_FlareRed_F`<br>`3Rnd_UGL_FlareYellow_F`<br>`3Rnd_UGL_FlareCIR_F`<br>`3Rnd_Smoke_Grenade_shell`<br>`3Rnd_SmokeRed_Grenade_shell`<br>`3Rnd_SmokeGreen_Grenade_shell`<br>`3Rnd_SmokeYellow_Grenade_shell`<br>`3Rnd_SmokePurple_Grenade_shell`<br>`3Rnd_SmokeBlue_Grenade_shell`<br>`3Rnd_SmokeOrange_Grenade_shell` | BLUFOR (1) |
| `arifle_MX_GL_khk_Holo_Pointer_Snds_F` | MX 3GL 6.5 mm (Khaki) | 6.5x39 mm + 40 mm | `30Rnd_65x39_caseless_khaki_mag`<br>`1Rnd_HE_Grenade_shell`<br>`UGL_FlareWhite_F`<br>`UGL_FlareGreen_F`<br>`UGL_FlareRed_F`<br>`UGL_FlareYellow_F`<br>`UGL_FlareCIR_F`<br>`1Rnd_Smoke_Grenade_shell`<br>`1Rnd_SmokeRed_Grenade_shell`<br>`1Rnd_SmokeGreen_Grenade_shell`<br>`1Rnd_SmokeYellow_Grenade_shell`<br>`1Rnd_SmokePurple_Grenade_shell`<br>`1Rnd_SmokeBlue_Grenade_shell`<br>`1Rnd_SmokeOrange_Grenade_shell`<br>`3Rnd_HE_Grenade_shell`<br>`3Rnd_UGL_FlareWhite_F`<br>`3Rnd_UGL_FlareGreen_F`<br>`3Rnd_UGL_FlareRed_F`<br>`3Rnd_UGL_FlareYellow_F`<br>`3Rnd_UGL_FlareCIR_F`<br>`3Rnd_Smoke_Grenade_shell`<br>`3Rnd_SmokeRed_Grenade_shell`<br>`3Rnd_SmokeGreen_Grenade_shell`<br>`3Rnd_SmokeYellow_Grenade_shell`<br>`3Rnd_SmokePurple_Grenade_shell`<br>`3Rnd_SmokeBlue_Grenade_shell`<br>`3Rnd_SmokeOrange_Grenade_shell` | BLUFOR (1) |
| `arifle_MX_Hamr_pointer_F` | MX 6.5 mm | 6.5x39 mm | `30Rnd_65x39_caseless_mag` | BLUFOR (3) |
| `arifle_MX_Holo_pointer_F` | MX 6.5 mm | 6.5x39 mm | `30Rnd_65x39_caseless_mag` | BLUFOR (1) |
| `arifle_MX_khk_ACO_Pointer_F` | MX 6.5 mm (Khaki) | 6.5x39 mm | `30Rnd_65x39_caseless_khaki_mag` | BLUFOR (12) |
| `arifle_MX_khk_ACO_Pointer_Snds_F` | MX 6.5 mm (Khaki) | 6.5x39 mm | `30Rnd_65x39_caseless_khaki_mag` | BLUFOR (3) |
| `arifle_MX_khk_F` | MX 6.5 mm (Khaki) | 6.5x39 mm | `30Rnd_65x39_caseless_khaki_mag` | — |
| `arifle_MX_khk_Hamr_Pointer_F` | MX 6.5 mm (Khaki) | 6.5x39 mm | `30Rnd_65x39_caseless_khaki_mag` | BLUFOR (2) |
| `arifle_MX_khk_Hamr_Pointer_Snds_F` | MX 6.5 mm (Khaki) | 6.5x39 mm | `30Rnd_65x39_caseless_khaki_mag` | BLUFOR (1) |
| `arifle_MX_khk_Holo_Pointer_F` | MX 6.5 mm (Khaki) | 6.5x39 mm | `30Rnd_65x39_caseless_khaki_mag` | BLUFOR (1) |
| `arifle_MX_khk_Pointer_F` | MX 6.5 mm (Khaki) | 6.5x39 mm | `30Rnd_65x39_caseless_khaki_mag` | BLUFOR (1) |
| `arifle_MX_pointer_F` | MX 6.5 mm | 6.5x39 mm | `30Rnd_65x39_caseless_mag` | BLUFOR (1) |
| `arifle_MX_RCO_pointer_snds_F` | MX 6.5 mm | 6.5x39 mm | `30Rnd_65x39_caseless_mag` | BLUFOR (1) |
| `arifle_MXC_ACO_F` | MXC 6.5 mm | 6.5x39 mm | `30Rnd_65x39_caseless_mag` | BLUFOR (1) |
| `arifle_MXC_ACO_pointer_F` | MXC 6.5 mm | 6.5x39 mm | `30Rnd_65x39_caseless_mag` | — |
| `arifle_MXC_ACO_pointer_snds_F` | MXC 6.5 mm | 6.5x39 mm | `30Rnd_65x39_caseless_mag` | BLUFOR (1) |
| `arifle_MXC_Black_ACO_F` | MXC 6.5 mm (Black) | 6.5x39 mm | `30Rnd_65x39_caseless_black_mag` | BLUFOR (1) |
| `arifle_MXC_Black_ACO_Pointer_Snds_F` | MXC 6.5 mm (Black) | 6.5x39 mm | `30Rnd_65x39_caseless_black_mag` | — |
| `arifle_MXC_Black_F` | MXC 6.5 mm (Black) | 6.5x39 mm | `30Rnd_65x39_caseless_black_mag` | BLUFOR (1) |
| `arifle_MXC_Black_Holo_FL_F` | MXC 6.5 mm (Black) | 6.5x39 mm | `30Rnd_65x39_caseless_black_mag` | BLUFOR (1) |
| `arifle_MXC_Black_Holo_Pointer_F` | MXC 6.5 mm (Black) | 6.5x39 mm | `30Rnd_65x39_caseless_black_mag` | BLUFOR (14) |
| `arifle_MXC_F` | MXC 6.5 mm | 6.5x39 mm | `30Rnd_65x39_caseless_mag` | BLUFOR (1) |
| `arifle_MXC_Holo_F` | MXC 6.5 mm | 6.5x39 mm | `30Rnd_65x39_caseless_mag` | BLUFOR (2) |
| `arifle_MXC_Holo_pointer_F` | MXC 6.5 mm | 6.5x39 mm | `30Rnd_65x39_caseless_mag` | BLUFOR (10) |
| `arifle_MXC_Holo_pointer_snds_F` | MXC 6.5 mm | 6.5x39 mm | `30Rnd_65x39_caseless_mag` | — |
| `arifle_MXC_khk_ACO_F` | MXC 6.5 mm (Khaki) | 6.5x39 mm | `30Rnd_65x39_caseless_khaki_mag` | BLUFOR (1) |
| `arifle_MXC_khk_ACO_Pointer_Snds_F` | MXC 6.5 mm (Khaki) | 6.5x39 mm | `30Rnd_65x39_caseless_khaki_mag` | BLUFOR (1) |
| `arifle_MXC_khk_F` | MXC 6.5 mm (Khaki) | 6.5x39 mm | `30Rnd_65x39_caseless_khaki_mag` | BLUFOR (1) |
| `arifle_MXC_khk_Holo_Pointer_F` | MXC 6.5 mm (Khaki) | 6.5x39 mm | `30Rnd_65x39_caseless_khaki_mag` | BLUFOR (11) |
| `arifle_MXC_SOS_point_snds_F` | MXC 6.5 mm | 6.5x39 mm | `30Rnd_65x39_caseless_mag` | — |
| `arifle_RPK12_arid_F` | RPK-12 7.62 mm (Arid) | 7.62x39 mm | `75rnd_762x39_AK12_Arid_Mag_F`<br>`75rnd_762x39_AK12_Arid_Mag_Tracer_F` | — |
| `arifle_RPK12_F` | RPK-12 7.62 mm | 7.62x39 mm | `75rnd_762x39_AK12_Mag_F` | — |
| `arifle_RPK12_lush_arco_pointer_F` | RPK-12 7.62 mm (Lush) | 7.62x39 mm | `75rnd_762x39_AK12_Lush_Mag_F`<br>`75rnd_762x39_AK12_Lush_Mag_Tracer_F` | OPFOR (1) |
| `arifle_RPK12_lush_arco_snds_pointer_F` | RPK-12 7.62 mm (Lush) | 7.62x39 mm | `75rnd_762x39_AK12_Lush_Mag_F`<br>`75rnd_762x39_AK12_Lush_Mag_Tracer_F` | OPFOR (2) |
| `arifle_RPK12_lush_F` | RPK-12 7.62 mm (Lush) | 7.62x39 mm | `75rnd_762x39_AK12_Lush_Mag_F`<br>`75rnd_762x39_AK12_Lush_Mag_Tracer_F` | — |
| `arifle_RPK12_lush_holo_snds_pointer_F` | RPK-12 7.62 mm (Lush) | 7.62x39 mm | `75rnd_762x39_AK12_Lush_Mag_F`<br>`75rnd_762x39_AK12_Lush_Mag_Tracer_F` | OPFOR (1) |
| `arifle_SPAR_01_blk_ACO_Pointer_F` | SPAR-16 5.56 mm (Black) | 5.56x45 mm | `30Rnd_556x45_Stanag`<br>`30Rnd_556x45_Stanag_green`<br>`30Rnd_556x45_Stanag_red`<br>`30Rnd_556x45_Stanag_Tracer_Red`<br>`30Rnd_556x45_Stanag_Tracer_Green`<br>`30Rnd_556x45_Stanag_Tracer_Yellow` | — |
| `arifle_SPAR_01_blk_ERCO_Pointer_F` | SPAR-16 5.56 mm (Black) | 5.56x45 mm | `30Rnd_556x45_Stanag`<br>`30Rnd_556x45_Stanag_green`<br>`30Rnd_556x45_Stanag_red`<br>`30Rnd_556x45_Stanag_Tracer_Red`<br>`30Rnd_556x45_Stanag_Tracer_Green`<br>`30Rnd_556x45_Stanag_Tracer_Yellow` | BLUFOR (18) |
| `arifle_SPAR_01_blk_F` | SPAR-16 5.56 mm (Black) | 5.56x45 mm | `30Rnd_556x45_Stanag`<br>`30Rnd_556x45_Stanag_green`<br>`30Rnd_556x45_Stanag_red`<br>`30Rnd_556x45_Stanag_Tracer_Red`<br>`30Rnd_556x45_Stanag_Tracer_Green`<br>`30Rnd_556x45_Stanag_Tracer_Yellow` | — |
| `arifle_SPAR_01_GL_blk_ACO_Pointer_F` | SPAR-16 GL 5.56 mm (Black) | 5.56x45 mm | `30Rnd_556x45_Stanag`<br>`30Rnd_556x45_Stanag_green`<br>`30Rnd_556x45_Stanag_red`<br>`30Rnd_556x45_Stanag_Tracer_Red`<br>`30Rnd_556x45_Stanag_Tracer_Green`<br>`30Rnd_556x45_Stanag_Tracer_Yellow`<br>`1Rnd_HE_Grenade_shell`<br>`UGL_FlareWhite_F`<br>`UGL_FlareGreen_F`<br>`UGL_FlareRed_F`<br>`UGL_FlareYellow_F`<br>`UGL_FlareCIR_F`<br>`1Rnd_Smoke_Grenade_shell`<br>`1Rnd_SmokeRed_Grenade_shell`<br>`1Rnd_SmokeGreen_Grenade_shell`<br>`1Rnd_SmokeYellow_Grenade_shell`<br>`1Rnd_SmokePurple_Grenade_shell`<br>`1Rnd_SmokeBlue_Grenade_shell`<br>`1Rnd_SmokeOrange_Grenade_shell` | — |
| `arifle_SPAR_01_GL_blk_ERCO_Pointer_F` | SPAR-16 GL 5.56 mm (Black) | 5.56x45 mm | `30Rnd_556x45_Stanag`<br>`30Rnd_556x45_Stanag_green`<br>`30Rnd_556x45_Stanag_red`<br>`30Rnd_556x45_Stanag_Tracer_Red`<br>`30Rnd_556x45_Stanag_Tracer_Green`<br>`30Rnd_556x45_Stanag_Tracer_Yellow`<br>`1Rnd_HE_Grenade_shell`<br>`UGL_FlareWhite_F`<br>`UGL_FlareGreen_F`<br>`UGL_FlareRed_F`<br>`UGL_FlareYellow_F`<br>`UGL_FlareCIR_F`<br>`1Rnd_Smoke_Grenade_shell`<br>`1Rnd_SmokeRed_Grenade_shell`<br>`1Rnd_SmokeGreen_Grenade_shell`<br>`1Rnd_SmokeYellow_Grenade_shell`<br>`1Rnd_SmokePurple_Grenade_shell`<br>`1Rnd_SmokeBlue_Grenade_shell`<br>`1Rnd_SmokeOrange_Grenade_shell` | BLUFOR (1) |
| `arifle_SPAR_01_GL_blk_F` | SPAR-16 GL 5.56 mm (Black) | 5.56x45 mm | `30Rnd_556x45_Stanag`<br>`30Rnd_556x45_Stanag_green`<br>`30Rnd_556x45_Stanag_red`<br>`30Rnd_556x45_Stanag_Tracer_Red`<br>`30Rnd_556x45_Stanag_Tracer_Green`<br>`30Rnd_556x45_Stanag_Tracer_Yellow`<br>`1Rnd_HE_Grenade_shell`<br>`UGL_FlareWhite_F`<br>`UGL_FlareGreen_F`<br>`UGL_FlareRed_F`<br>`UGL_FlareYellow_F`<br>`UGL_FlareCIR_F`<br>`1Rnd_Smoke_Grenade_shell`<br>`1Rnd_SmokeRed_Grenade_shell`<br>`1Rnd_SmokeGreen_Grenade_shell`<br>`1Rnd_SmokeYellow_Grenade_shell`<br>`1Rnd_SmokePurple_Grenade_shell`<br>`1Rnd_SmokeBlue_Grenade_shell`<br>`1Rnd_SmokeOrange_Grenade_shell` | — |
| `arifle_SPAR_01_GL_khk_F` | SPAR-16 GL 5.56 mm (Khaki) | 5.56x45 mm | `30Rnd_556x45_Stanag`<br>`30Rnd_556x45_Stanag_green`<br>`30Rnd_556x45_Stanag_red`<br>`30Rnd_556x45_Stanag_Tracer_Red`<br>`30Rnd_556x45_Stanag_Tracer_Green`<br>`30Rnd_556x45_Stanag_Tracer_Yellow`<br>`1Rnd_HE_Grenade_shell`<br>`UGL_FlareWhite_F`<br>`UGL_FlareGreen_F`<br>`UGL_FlareRed_F`<br>`UGL_FlareYellow_F`<br>`UGL_FlareCIR_F`<br>`1Rnd_Smoke_Grenade_shell`<br>`1Rnd_SmokeRed_Grenade_shell`<br>`1Rnd_SmokeGreen_Grenade_shell`<br>`1Rnd_SmokeYellow_Grenade_shell`<br>`1Rnd_SmokePurple_Grenade_shell`<br>`1Rnd_SmokeBlue_Grenade_shell`<br>`1Rnd_SmokeOrange_Grenade_shell` | — |
| `arifle_SPAR_01_GL_snd_F` | SPAR-16 GL 5.56 mm (Sand) | 5.56x45 mm | `30Rnd_556x45_Stanag_Sand`<br>`30Rnd_556x45_Stanag_Sand_green`<br>`30Rnd_556x45_Stanag_Sand_red`<br>`30Rnd_556x45_Stanag_Sand_Tracer_Red`<br>`30Rnd_556x45_Stanag_Sand_Tracer_Green`<br>`30Rnd_556x45_Stanag_Sand_Tracer_Yellow`<br>`1Rnd_HE_Grenade_shell`<br>`UGL_FlareWhite_F`<br>`UGL_FlareGreen_F`<br>`UGL_FlareRed_F`<br>`UGL_FlareYellow_F`<br>`UGL_FlareCIR_F`<br>`1Rnd_Smoke_Grenade_shell`<br>`1Rnd_SmokeRed_Grenade_shell`<br>`1Rnd_SmokeGreen_Grenade_shell`<br>`1Rnd_SmokeYellow_Grenade_shell`<br>`1Rnd_SmokePurple_Grenade_shell`<br>`1Rnd_SmokeBlue_Grenade_shell`<br>`1Rnd_SmokeOrange_Grenade_shell` | — |
| `arifle_SPAR_01_khk_F` | SPAR-16 5.56 mm (Khaki) | 5.56x45 mm | `30Rnd_556x45_Stanag`<br>`30Rnd_556x45_Stanag_green`<br>`30Rnd_556x45_Stanag_red`<br>`30Rnd_556x45_Stanag_Tracer_Red`<br>`30Rnd_556x45_Stanag_Tracer_Green`<br>`30Rnd_556x45_Stanag_Tracer_Yellow` | — |
| `arifle_SPAR_01_snd_F` | SPAR-16 5.56 mm (Sand) | 5.56x45 mm | `30Rnd_556x45_Stanag_Sand`<br>`30Rnd_556x45_Stanag_Sand_green`<br>`30Rnd_556x45_Stanag_Sand_red`<br>`30Rnd_556x45_Stanag_Sand_Tracer_Red`<br>`30Rnd_556x45_Stanag_Sand_Tracer_Green`<br>`30Rnd_556x45_Stanag_Sand_Tracer_Yellow` | — |
| `arifle_TRG20_ACO_F` | TRG-20 5.56 mm | 5.56x45 mm NATO | `30Rnd_556x45_Stanag`<br>`30Rnd_556x45_Stanag_Tracer_Red`<br>`30Rnd_556x45_Stanag_Tracer_Green`<br>`30Rnd_556x45_Stanag_Tracer_Yellow`<br>`30Rnd_556x45_Stanag_red`<br>`30Rnd_556x45_Stanag_green` | Independent (2), BLUFOR (2), OPFOR (2) |
| `arifle_TRG20_ACO_Flash_F` | TRG-20 5.56 mm | 5.56x45 mm NATO | `30Rnd_556x45_Stanag`<br>`30Rnd_556x45_Stanag_Tracer_Red`<br>`30Rnd_556x45_Stanag_Tracer_Green`<br>`30Rnd_556x45_Stanag_Tracer_Yellow`<br>`30Rnd_556x45_Stanag_red`<br>`30Rnd_556x45_Stanag_green` | — |
| `arifle_TRG20_ACO_pointer_F` | TRG-20 5.56 mm | 5.56x45 mm NATO | `30Rnd_556x45_Stanag`<br>`30Rnd_556x45_Stanag_Tracer_Red`<br>`30Rnd_556x45_Stanag_Tracer_Green`<br>`30Rnd_556x45_Stanag_Tracer_Yellow`<br>`30Rnd_556x45_Stanag_red`<br>`30Rnd_556x45_Stanag_green` | — |
| `arifle_TRG20_F` | TRG-20 5.56 mm | 5.56x45 mm NATO | `30Rnd_556x45_Stanag`<br>`30Rnd_556x45_Stanag_Tracer_Red`<br>`30Rnd_556x45_Stanag_Tracer_Green`<br>`30Rnd_556x45_Stanag_Tracer_Yellow`<br>`30Rnd_556x45_Stanag_red`<br>`30Rnd_556x45_Stanag_green` | Independent (2), BLUFOR (2), OPFOR (2) |
| `arifle_TRG20_Holo_F` | TRG-20 5.56 mm | 5.56x45 mm NATO | `30Rnd_556x45_Stanag`<br>`30Rnd_556x45_Stanag_Tracer_Red`<br>`30Rnd_556x45_Stanag_Tracer_Green`<br>`30Rnd_556x45_Stanag_Tracer_Yellow`<br>`30Rnd_556x45_Stanag_red`<br>`30Rnd_556x45_Stanag_green` | — |
| `arifle_TRG21_ACO_pointer_F` | TRG-21 5.56 mm | 5.56x45 mm NATO | `30Rnd_556x45_Stanag`<br>`30Rnd_556x45_Stanag_Tracer_Red`<br>`30Rnd_556x45_Stanag_Tracer_Green`<br>`30Rnd_556x45_Stanag_Tracer_Yellow`<br>`30Rnd_556x45_Stanag_red`<br>`30Rnd_556x45_Stanag_green` | — |
| `arifle_TRG21_ARCO_pointer_F` | TRG-21 5.56 mm | 5.56x45 mm NATO | `30Rnd_556x45_Stanag`<br>`30Rnd_556x45_Stanag_Tracer_Red`<br>`30Rnd_556x45_Stanag_Tracer_Green`<br>`30Rnd_556x45_Stanag_Tracer_Yellow`<br>`30Rnd_556x45_Stanag_red`<br>`30Rnd_556x45_Stanag_green` | — |
| `arifle_TRG21_F` | TRG-21 5.56 mm | 5.56x45 mm NATO | `30Rnd_556x45_Stanag`<br>`30Rnd_556x45_Stanag_Tracer_Red`<br>`30Rnd_556x45_Stanag_Tracer_Green`<br>`30Rnd_556x45_Stanag_Tracer_Yellow`<br>`30Rnd_556x45_Stanag_red`<br>`30Rnd_556x45_Stanag_green` | BLUFOR (5), Independent (4), OPFOR (4), Civilian (2) |
| `arifle_TRG21_GL_ACO_pointer_F` | TRG-21 EGLM 5.56 mm | 5.56x45 mm + 40 mm | `30Rnd_556x45_Stanag`<br>`30Rnd_556x45_Stanag_Tracer_Red`<br>`30Rnd_556x45_Stanag_Tracer_Green`<br>`30Rnd_556x45_Stanag_Tracer_Yellow`<br>`30Rnd_556x45_Stanag_red`<br>`30Rnd_556x45_Stanag_green`<br>`1Rnd_HE_Grenade_shell`<br>`UGL_FlareWhite_F`<br>`UGL_FlareGreen_F`<br>`UGL_FlareRed_F`<br>`UGL_FlareYellow_F`<br>`UGL_FlareCIR_F`<br>`1Rnd_Smoke_Grenade_shell`<br>`1Rnd_SmokeRed_Grenade_shell`<br>`1Rnd_SmokeGreen_Grenade_shell`<br>`1Rnd_SmokeYellow_Grenade_shell`<br>`1Rnd_SmokePurple_Grenade_shell`<br>`1Rnd_SmokeBlue_Grenade_shell`<br>`1Rnd_SmokeOrange_Grenade_shell` | — |
| `arifle_TRG21_GL_F` | TRG-21 EGLM 5.56 mm | 5.56x45 mm + 40 mm | `30Rnd_556x45_Stanag`<br>`30Rnd_556x45_Stanag_Tracer_Red`<br>`30Rnd_556x45_Stanag_Tracer_Green`<br>`30Rnd_556x45_Stanag_Tracer_Yellow`<br>`30Rnd_556x45_Stanag_red`<br>`30Rnd_556x45_Stanag_green`<br>`1Rnd_HE_Grenade_shell`<br>`UGL_FlareWhite_F`<br>`UGL_FlareGreen_F`<br>`UGL_FlareRed_F`<br>`UGL_FlareYellow_F`<br>`UGL_FlareCIR_F`<br>`1Rnd_Smoke_Grenade_shell`<br>`1Rnd_SmokeRed_Grenade_shell`<br>`1Rnd_SmokeGreen_Grenade_shell`<br>`1Rnd_SmokeYellow_Grenade_shell`<br>`1Rnd_SmokePurple_Grenade_shell`<br>`1Rnd_SmokeBlue_Grenade_shell`<br>`1Rnd_SmokeOrange_Grenade_shell` | Independent (1), BLUFOR (1), OPFOR (1) |
| `arifle_TRG21_GL_MRCO_F` | TRG-21 EGLM 5.56 mm | 5.56x45 mm + 40 mm | `30Rnd_556x45_Stanag`<br>`30Rnd_556x45_Stanag_Tracer_Red`<br>`30Rnd_556x45_Stanag_Tracer_Green`<br>`30Rnd_556x45_Stanag_Tracer_Yellow`<br>`30Rnd_556x45_Stanag_red`<br>`30Rnd_556x45_Stanag_green`<br>`1Rnd_HE_Grenade_shell`<br>`UGL_FlareWhite_F`<br>`UGL_FlareGreen_F`<br>`UGL_FlareRed_F`<br>`UGL_FlareYellow_F`<br>`UGL_FlareCIR_F`<br>`1Rnd_Smoke_Grenade_shell`<br>`1Rnd_SmokeRed_Grenade_shell`<br>`1Rnd_SmokeGreen_Grenade_shell`<br>`1Rnd_SmokeYellow_Grenade_shell`<br>`1Rnd_SmokePurple_Grenade_shell`<br>`1Rnd_SmokeBlue_Grenade_shell`<br>`1Rnd_SmokeOrange_Grenade_shell` | BLUFOR (3) |
| `arifle_TRG21_MRCO_F` | TRG-21 5.56 mm | 5.56x45 mm NATO | `30Rnd_556x45_Stanag`<br>`30Rnd_556x45_Stanag_Tracer_Red`<br>`30Rnd_556x45_Stanag_Tracer_Green`<br>`30Rnd_556x45_Stanag_Tracer_Yellow`<br>`30Rnd_556x45_Stanag_red`<br>`30Rnd_556x45_Stanag_green` | Independent (1), BLUFOR (1), OPFOR (1) |
| `B_Patrol_Soldier_Carrier_weapon_F` | MX 6.5 mm | 6.5x39 mm | `30Rnd_65x39_caseless_mag` | BLUFOR (1) |
| `B_Patrol_Soldier_Leader_weapon_F` | MX 3GL 6.5 mm | 6.5x39 mm + 40 mm | `30Rnd_65x39_caseless_mag`<br>`1Rnd_HE_Grenade_shell`<br>`UGL_FlareWhite_F`<br>`UGL_FlareGreen_F`<br>`UGL_FlareRed_F`<br>`UGL_FlareYellow_F`<br>`UGL_FlareCIR_F`<br>`1Rnd_Smoke_Grenade_shell`<br>`1Rnd_SmokeRed_Grenade_shell`<br>`1Rnd_SmokeGreen_Grenade_shell`<br>`1Rnd_SmokeYellow_Grenade_shell`<br>`1Rnd_SmokePurple_Grenade_shell`<br>`1Rnd_SmokeBlue_Grenade_shell`<br>`1Rnd_SmokeOrange_Grenade_shell`<br>`3Rnd_HE_Grenade_shell`<br>`3Rnd_UGL_FlareWhite_F`<br>`3Rnd_UGL_FlareGreen_F`<br>`3Rnd_UGL_FlareRed_F`<br>`3Rnd_UGL_FlareYellow_F`<br>`3Rnd_UGL_FlareCIR_F`<br>`3Rnd_Smoke_Grenade_shell`<br>`3Rnd_SmokeRed_Grenade_shell`<br>`3Rnd_SmokeGreen_Grenade_shell`<br>`3Rnd_SmokeYellow_Grenade_shell`<br>`3Rnd_SmokePurple_Grenade_shell`<br>`3Rnd_SmokeBlue_Grenade_shell`<br>`3Rnd_SmokeOrange_Grenade_shell` | BLUFOR (1) |
| `B_Patrol_Soldier_Marksman_weapon_F` | Mk18 ABR 7.62 mm | 7.62x51 mm NATO | `20Rnd_762x51_Mag` | BLUFOR (1) |
| `B_Patrol_Soldier_Medic_weapon_F` | MX 6.5 mm | 6.5x39 mm | `30Rnd_65x39_caseless_mag` | BLUFOR (1) |
| `B_Patrol_Soldier_Operator_weapon_F` | MXC 6.5 mm | 6.5x39 mm | `30Rnd_65x39_caseless_mag` | BLUFOR (1) |
| `B_Patrol_Soldier_Specialist_weapon_F` | MX 6.5 mm | 6.5x39 mm | `30Rnd_65x39_caseless_mag` | BLUFOR (2) |
| `srifle_DMR_01_ACO_F` | Rahim 7.62 mm | 7.62x54 mm | `10Rnd_762x54_Mag` | — |
| `srifle_DMR_01_ARCO_F` | Rahim 7.62 mm | 7.62x54 mm | `10Rnd_762x54_Mag` | — |
| `srifle_DMR_01_DMS_BI_F` | Rahim 7.62 mm | 7.62x54 mm | `10Rnd_762x54_Mag` | OPFOR (1) |
| `srifle_DMR_01_DMS_F` | Rahim 7.62 mm | 7.62x54 mm | `10Rnd_762x54_Mag` | OPFOR (1) |
| `srifle_DMR_01_DMS_snds_BI_F` | Rahim 7.62 mm | 7.62x54 mm | `10Rnd_762x54_Mag` | OPFOR (1) |
| `srifle_DMR_01_DMS_snds_F` | Rahim 7.62 mm | 7.62x54 mm | `10Rnd_762x54_Mag` | — |
| `srifle_DMR_01_F` | Rahim 7.62 mm | 7.62x54 mm | `10Rnd_762x54_Mag` | — |
| `srifle_DMR_01_MRCO_F` | Rahim 7.62 mm | 7.62x54 mm | `10Rnd_762x54_Mag` | — |
| `srifle_DMR_01_SOS_F` | Rahim 7.62 mm | 7.62x54 mm | `10Rnd_762x54_Mag` | — |
| `srifle_EBR_ACO_F` | Mk18 ABR 7.62 mm | 7.62x51 mm NATO | `20Rnd_762x51_Mag` | — |
| `srifle_EBR_ARCO_pointer_F` | Mk18 ABR 7.62 mm | 7.62x51 mm NATO | `20Rnd_762x51_Mag` | — |
| `srifle_EBR_ARCO_pointer_snds_F` | Mk18 ABR 7.62 mm | 7.62x51 mm NATO | `20Rnd_762x51_Mag` | — |
| `srifle_EBR_DMS_F` | Mk18 ABR 7.62 mm | 7.62x51 mm NATO | `20Rnd_762x51_Mag` | — |
| `srifle_EBR_DMS_pointer_snds_F` | Mk18 ABR 7.62 mm | 7.62x51 mm NATO | `20Rnd_762x51_Mag` | — |
| `srifle_EBR_F` | Mk18 ABR 7.62 mm | 7.62x51 mm NATO | `20Rnd_762x51_Mag` | — |
| `srifle_EBR_Hamr_pointer_F` | Mk18 ABR 7.62 mm | 7.62x51 mm NATO | `20Rnd_762x51_Mag` | BLUFOR (1) |
| `srifle_EBR_MRCO_LP_BI_F` | Mk18 ABR 7.62 mm | 7.62x51 mm NATO | `20Rnd_762x51_Mag` | Independent (1) |
| `srifle_EBR_MRCO_pointer_F` | Mk18 ABR 7.62 mm | 7.62x51 mm NATO | `20Rnd_762x51_Mag` | — |
| `srifle_EBR_SOS_F` | Mk18 ABR 7.62 mm | 7.62x51 mm NATO | `20Rnd_762x51_Mag` | — |

## Marksman Rifle

| Class | Name | Caliber | Magazines | Used by |
|---|---|---|---|---|
| `arifle_MXM_Black_F` | MXM 6.5 mm (Black) | 6.5x39 mm | `30Rnd_65x39_caseless_black_mag` | — |
| `arifle_MXM_Black_MOS_Pointer_Bipod_F` | MXM 6.5 mm (Black) | 6.5x39 mm | `30Rnd_65x39_caseless_black_mag` | BLUFOR (1) |
| `arifle_MXM_Black_MOS_Pointer_Bipod_Snds_F` | MXM 6.5 mm (Black) | 6.5x39 mm | `30Rnd_65x39_caseless_black_mag` | — |
| `arifle_MXM_DMS_F` | MXM 6.5 mm | 6.5x39 mm | `30Rnd_65x39_caseless_mag` | — |
| `arifle_MXM_DMS_LP_BI_snds_F` | MXM 6.5 mm | 6.5x39 mm | `30Rnd_65x39_caseless_mag` | BLUFOR (1) |
| `arifle_MXM_F` | MXM 6.5 mm | 6.5x39 mm | `30Rnd_65x39_caseless_mag` | — |
| `arifle_MXM_Hamr_LP_BI_F` | MXM 6.5 mm | 6.5x39 mm | `30Rnd_65x39_caseless_mag` | BLUFOR (1) |
| `arifle_MXM_Hamr_pointer_F` | MXM 6.5 mm | 6.5x39 mm | `30Rnd_65x39_caseless_mag` | — |
| `arifle_MXM_khk_F` | MXM 6.5 mm (Khaki) | 6.5x39 mm | `30Rnd_65x39_caseless_khaki_mag` | — |
| `arifle_MXM_khk_MOS_Pointer_Bipod_F` | MXM 6.5 mm (Khaki) | 6.5x39 mm | `30Rnd_65x39_caseless_khaki_mag` | BLUFOR (1) |
| `arifle_MXM_khk_MOS_Pointer_Bipod_Snds_F` | MXM 6.5 mm (Khaki) | 6.5x39 mm | `30Rnd_65x39_caseless_khaki_mag` | BLUFOR (1) |
| `arifle_MXM_RCO_pointer_snds_F` | MXM 6.5 mm | 6.5x39 mm | `30Rnd_65x39_caseless_mag` | — |
| `arifle_MXM_SOS_pointer_F` | MXM 6.5 mm | 6.5x39 mm | `30Rnd_65x39_caseless_mag` | — |
| `arifle_SPAR_03_blk_F` | SPAR-17 7.62 mm (Black) | 7.62x51 mm | `20Rnd_762x51_Mag` | — |
| `arifle_SPAR_03_blk_MOS_Pointer_Bipod_F` | SPAR-17 7.62 mm (Black) | 7.62x51 mm | `20Rnd_762x51_Mag` | BLUFOR (1) |
| `arifle_SPAR_03_khk_F` | SPAR-17 7.62 mm (Khaki) | 7.62x51 mm | `20Rnd_762x51_Mag` | — |
| `arifle_SPAR_03_snd_F` | SPAR-17 7.62 mm (Sand) | 7.62x51 mm | `20Rnd_762x51_Mag` | — |
| `srifle_DMR_02_ACO_F` | MAR-10 .338 (Black) | .338 Lapua Magnum | `10Rnd_338_Mag` | — |
| `srifle_DMR_02_ARCO_F` | MAR-10 .338 (Black) | .338 Lapua Magnum | `10Rnd_338_Mag` | — |
| `srifle_DMR_02_camo_AMS_LP_F` | MAR-10 .338 (Camo) | .338 Lapua Magnum | `10Rnd_338_Mag` | BLUFOR (1) |
| `srifle_DMR_02_camo_F` | MAR-10 .338 (Camo) | .338 Lapua Magnum | `10Rnd_338_Mag` | — |
| `srifle_DMR_02_DMS_F` | MAR-10 .338 (Black) | .338 Lapua Magnum | `10Rnd_338_Mag` | — |
| `srifle_DMR_02_F` | MAR-10 .338 (Black) | .338 Lapua Magnum | `10Rnd_338_Mag` | — |
| `srifle_DMR_02_MRCO_F` | MAR-10 .338 (Black) | .338 Lapua Magnum | `10Rnd_338_Mag` | — |
| `srifle_DMR_02_sniper_AMS_LP_S_F` | MAR-10 .338 (Sand) | .338 Lapua Magnum | `10Rnd_338_Mag` | BLUFOR (1) |
| `srifle_DMR_02_sniper_F` | MAR-10 .338 (Sand) | .338 Lapua Magnum | `10Rnd_338_Mag` | — |
| `srifle_DMR_02_SOS_F` | MAR-10 .338 (Black) | .338 Lapua Magnum | `10Rnd_338_Mag` | — |
| `srifle_DMR_03_ACO_F` | Mk-I EMR 7.62 mm (Black) | 7.62x51 mm NATO | `20Rnd_762x51_Mag` | — |
| `srifle_DMR_03_AMS_F` | Mk-I EMR 7.62 mm (Black) | 7.62x51 mm NATO | `20Rnd_762x51_Mag` | — |
| `srifle_DMR_03_ARCO_F` | Mk-I EMR 7.62 mm (Black) | 7.62x51 mm NATO | `20Rnd_762x51_Mag` | — |
| `srifle_DMR_03_DMS_F` | Mk-I EMR 7.62 mm (Black) | 7.62x51 mm NATO | `20Rnd_762x51_Mag` | — |
| `srifle_DMR_03_DMS_snds_F` | Mk-I EMR 7.62 mm (Black) | 7.62x51 mm NATO | `20Rnd_762x51_Mag` | — |
| `srifle_DMR_03_F` | Mk-I EMR 7.62 mm (Black) | 7.62x51 mm NATO | `20Rnd_762x51_Mag` | — |
| `srifle_DMR_03_khaki_F` | Mk-I EMR 7.62 mm (Khaki) | 7.62x51 mm NATO | `20Rnd_762x51_Mag` | — |
| `srifle_DMR_03_MRCO_F` | Mk-I EMR 7.62 mm (Black) | 7.62x51 mm NATO | `20Rnd_762x51_Mag` | — |
| `srifle_DMR_03_multicam_F` | Mk-I EMR 7.62 mm (Camo) | 7.62x51 mm NATO | `20Rnd_762x51_Mag` | — |
| `srifle_DMR_03_SOS_F` | Mk-I EMR 7.62 mm (Black) | 7.62x51 mm NATO | `20Rnd_762x51_Mag` | — |
| `srifle_DMR_03_tan_AMS_LP_F` | Mk-I EMR 7.62 mm (Sand) | 7.62x51 mm NATO | `20Rnd_762x51_Mag` | BLUFOR (1) |
| `srifle_DMR_03_tan_F` | Mk-I EMR 7.62 mm (Sand) | 7.62x51 mm NATO | `20Rnd_762x51_Mag` | — |
| `srifle_DMR_03_woodland_F` | Mk-I EMR 7.62 mm (Woodland) | 7.62x51 mm NATO | `20Rnd_762x51_Mag` | — |
| `srifle_DMR_04_ACO_F` | ASP-1 Kir 12.7 mm (Black) | 12.7x54 mm | `10Rnd_127x54_Mag` | — |
| `srifle_DMR_04_ARCO_F` | ASP-1 Kir 12.7 mm (Black) | 12.7x54 mm | `10Rnd_127x54_Mag` | — |
| `srifle_DMR_04_DMS_F` | ASP-1 Kir 12.7 mm (Black) | 12.7x54 mm | `10Rnd_127x54_Mag` | — |
| `srifle_DMR_04_DMS_weathered_Kir_F_F` | ASP-1 Kir 12.7 mm (Black) | 12.7x54 mm | `10Rnd_127x54_Mag` | OPFOR (3) |
| `srifle_DMR_04_F` | ASP-1 Kir 12.7 mm (Black) | 12.7x54 mm | `10Rnd_127x54_Mag` | — |
| `srifle_DMR_04_MRCO_F` | ASP-1 Kir 12.7 mm (Black) | 12.7x54 mm | `10Rnd_127x54_Mag` | — |
| `srifle_DMR_04_NS_LP_F` | ASP-1 Kir 12.7 mm (Black) | 12.7x54 mm | `10Rnd_127x54_Mag` | OPFOR (1) |
| `srifle_DMR_04_SOS_F` | ASP-1 Kir 12.7 mm (Black) | 12.7x54 mm | `10Rnd_127x54_Mag` | — |
| `srifle_DMR_04_Tan_F` | ASP-1 Kir 12.7 mm (Tan) | 12.7x54 mm | `10Rnd_127x54_Mag` | — |
| `srifle_DMR_05_ACO_F` | Cyrus 9.3 mm (Black) | 9.3x64 mm | `10Rnd_93x64_DMR_05_Mag` | — |
| `srifle_DMR_05_ARCO_F` | Cyrus 9.3 mm (Black) | 9.3x64 mm | `10Rnd_93x64_DMR_05_Mag` | — |
| `srifle_DMR_05_blk_F` | Cyrus 9.3 mm (Black) | 9.3x64 mm | `10Rnd_93x64_DMR_05_Mag` | — |
| `srifle_DMR_05_DMS_F` | Cyrus 9.3 mm (Black) | 9.3x64 mm | `10Rnd_93x64_DMR_05_Mag` | — |
| `srifle_DMR_05_DMS_snds_F` | Cyrus 9.3 mm (Black) | 9.3x64 mm | `10Rnd_93x64_DMR_05_Mag` | — |
| `srifle_DMR_05_hex_F` | Cyrus 9.3 mm (Hex) | 9.3x64 mm | `10Rnd_93x64_DMR_05_Mag` | — |
| `srifle_DMR_05_KHS_LP_F` | Cyrus 9.3 mm (Black) | 9.3x64 mm | `10Rnd_93x64_DMR_05_Mag` | OPFOR (2) |
| `srifle_DMR_05_MRCO_F` | Cyrus 9.3 mm (Black) | 9.3x64 mm | `10Rnd_93x64_DMR_05_Mag` | — |
| `srifle_DMR_05_SOS_F` | Cyrus 9.3 mm (Black) | 9.3x64 mm | `10Rnd_93x64_DMR_05_Mag` | — |
| `srifle_DMR_05_tan_f` | Cyrus 9.3 mm (Tan) | 9.3x64 mm | `10Rnd_93x64_DMR_05_Mag` | — |
| `srifle_DMR_06_camo_F` | Mk14 7.62 mm (Camo) | 7.62x51 mm | `20Rnd_762x51_Mag` | — |
| `srifle_DMR_06_camo_khs_F` | Mk14 7.62 mm (Camo) | 7.62x51 mm | `20Rnd_762x51_Mag` | Independent (1), BLUFOR (1), OPFOR (1) |
| `srifle_DMR_06_hunter_F` | Mk14 7.62 mm (Classic) | 7.62x51 mm | `10Rnd_Mk14_762x51_Mag` | Independent (1) |
| `srifle_DMR_06_hunter_khs_F` | Mk14 7.62 mm (Classic) | 7.62x51 mm | `10Rnd_Mk14_762x51_Mag` | Independent (1) |
| `srifle_DMR_06_olive_F` | Mk14 7.62 mm (Olive) | 7.62x51 mm | `20Rnd_762x51_Mag` | — |
| `srifle_DMR_07_blk_DMS_F` | CMR-76 6.5 mm (Black) | 6.5x39 mm | `20Rnd_650x39_Cased_Mag_F` | OPFOR (1) |
| `srifle_DMR_07_blk_DMS_Snds_F` | CMR-76 6.5 mm (Black) | 6.5x39 mm | `20Rnd_650x39_Cased_Mag_F` | OPFOR (1) |
| `srifle_DMR_07_blk_F` | CMR-76 6.5 mm (Black) | 6.5x39 mm | `20Rnd_650x39_Cased_Mag_F` | — |
| `srifle_DMR_07_blk_F_arco_flash_F` | CMR-76 6.5 mm (Black) | 6.5x39 mm | `20Rnd_650x39_Cased_Mag_F` | OPFOR (1) |
| `srifle_DMR_07_ghex_F` | CMR-76 6.5 mm (Green Hex) | 6.5x39 mm | `20Rnd_650x39_Cased_Mag_F` | — |
| `srifle_DMR_07_hex_F` | CMR-76 6.5 mm (Hex) | 6.5x39 mm | `20Rnd_650x39_Cased_Mag_F` | — |

## Sniper Rifle

| Class | Name | Caliber | Magazines | Used by |
|---|---|---|---|---|
| `srifle_GM6_camo_F` | GM6 Lynx 12.7 mm (Camo) | 12.7x108 mm Russian | `5Rnd_127x108_Mag`<br>`5Rnd_127x108_APDS_Mag` | — |
| `srifle_GM6_camo_LRPS_F` | GM6 Lynx 12.7 mm (Camo) | 12.7x108 mm Russian | `5Rnd_127x108_Mag`<br>`5Rnd_127x108_APDS_Mag` | OPFOR (4) |
| `srifle_GM6_camo_SOS_F` | GM6 Lynx 12.7 mm (Camo) | 12.7x108 mm Russian | `5Rnd_127x108_Mag`<br>`5Rnd_127x108_APDS_Mag` | — |
| `srifle_GM6_F` | GM6 Lynx 12.7 mm | 12.7x108 mm Russian | `5Rnd_127x108_Mag`<br>`5Rnd_127x108_APDS_Mag` | — |
| `srifle_GM6_ghex_F` | GM6 Lynx 12.7 mm (Green Hex) | 12.7x108 mm Russian | `5Rnd_127x108_Mag`<br>`5Rnd_127x108_APDS_Mag` | — |
| `srifle_GM6_ghex_LRPS_F` | GM6 Lynx 12.7 mm (Green Hex) | 12.7x108 mm Russian | `5Rnd_127x108_Mag`<br>`5Rnd_127x108_APDS_Mag` | OPFOR (2) |
| `srifle_GM6_LRPS_F` | GM6 Lynx 12.7 mm | 12.7x108 mm Russian | `5Rnd_127x108_Mag`<br>`5Rnd_127x108_APDS_Mag` | Independent (5) |
| `srifle_GM6_SOS_F` | GM6 Lynx 12.7 mm | 12.7x108 mm Russian | `5Rnd_127x108_Mag`<br>`5Rnd_127x108_APDS_Mag` | — |
| `srifle_LRR_camo_F` | M320 LRR .408 (Camo) | .408 | `7Rnd_408_Mag` | — |
| `srifle_LRR_camo_LRPS_F` | M320 LRR .408 (Camo) | .408 | `7Rnd_408_Mag` | BLUFOR (4) |
| `srifle_LRR_camo_SOS_F` | M320 LRR .408 (Camo) | .408 | `7Rnd_408_Mag` | — |
| `srifle_LRR_F` | M320 LRR .408 | .408 | `7Rnd_408_Mag` | — |
| `srifle_LRR_LRPS_F` | M320 LRR .408 | .408 | `7Rnd_408_Mag` | — |
| `srifle_LRR_SOS_F` | M320 LRR .408 | .408 | `7Rnd_408_Mag` | — |
| `srifle_LRR_tna_F` | M320 LRR .408 (Tropic) | .408 | `7Rnd_408_Mag` | — |
| `srifle_LRR_tna_LRPS_F` | M320 LRR .408 (Tropic) | .408 | `7Rnd_408_Mag` | BLUFOR (2) |

## Light Machine Gun

| Class | Name | Caliber | Magazines | Used by |
|---|---|---|---|---|
| `arifle_CTARS_blk_F` | CAR-95-1 5.8mm (Black) | 5.8x42 mm | `100Rnd_580x42_Mag_F`<br>`100Rnd_580x42_Mag_Tracer_F` | — |
| `arifle_CTARS_blk_flash_F` | CAR-95-1 5.8mm (Black) | 5.8x42 mm | `100Rnd_580x42_Mag_F`<br>`100Rnd_580x42_Mag_Tracer_F` | OPFOR (1) |
| `arifle_CTARS_blk_Pointer_F` | CAR-95-1 5.8mm (Black) | 5.8x42 mm | `100Rnd_580x42_Mag_F`<br>`100Rnd_580x42_Mag_Tracer_F` | OPFOR (1) |
| `arifle_CTARS_ghex_F` | CAR-95-1 5.8mm (Green Hex) | 5.8x42 mm | `100Rnd_580x42_ghex_Mag_F`<br>`100Rnd_580x42_ghex_Mag_Tracer_F` | — |
| `arifle_CTARS_hex_F` | CAR-95-1 5.8mm (Hex) | 5.8x42 mm | `100Rnd_580x42_hex_Mag_F`<br>`100Rnd_580x42_hex_Mag_Tracer_F` | — |
| `arifle_MX_SW_Black_F` | MX SW 6.5 mm (Black) | 6.5x39 mm | `100Rnd_65x39_caseless_black_mag` | — |
| `arifle_MX_SW_Black_Hamr_pointer_F` | MX SW 6.5 mm (Black) | 6.5x39 mm | `100Rnd_65x39_caseless_black_mag` | BLUFOR (1) |
| `arifle_MX_SW_Black_Pointer_F` | MX SW 6.5 mm (Black) | 6.5x39 mm | `100Rnd_65x39_caseless_black_mag` | BLUFOR (1) |
| `arifle_MX_SW_F` | MX SW 6.5 mm | 6.5x39 mm | `100Rnd_65x39_caseless_mag` | — |
| `arifle_MX_SW_Hamr_pointer_F` | MX SW 6.5 mm | 6.5x39 mm | `100Rnd_65x39_caseless_mag` | — |
| `arifle_MX_SW_khk_F` | MX SW 6.5 mm (Khaki) | 6.5x39 mm | `100Rnd_65x39_caseless_khaki_mag` | — |
| `arifle_MX_SW_khk_Pointer_F` | MX SW 6.5 mm (Khaki) | 6.5x39 mm | `100Rnd_65x39_caseless_khaki_mag` | BLUFOR (1) |
| `arifle_MX_SW_pointer_F` | MX SW 6.5 mm | 6.5x39 mm | `100Rnd_65x39_caseless_mag` | BLUFOR (2) |
| `arifle_SPAR_02_blk_ERCO_Pointer_F` | SPAR-16S 5.56 mm (Black) | 5.56x45 mm | `150Rnd_556x45_Drum_Mag_F`<br>`150Rnd_556x45_Drum_Mag_Tracer_F` | BLUFOR (1) |
| `arifle_SPAR_02_blk_F` | SPAR-16S 5.56 mm (Black) | 5.56x45 mm | `150Rnd_556x45_Drum_Mag_F`<br>`150Rnd_556x45_Drum_Mag_Tracer_F` | — |
| `arifle_SPAR_02_blk_Pointer_F` | SPAR-16S 5.56 mm (Black) | 5.56x45 mm | `150Rnd_556x45_Drum_Mag_F`<br>`150Rnd_556x45_Drum_Mag_Tracer_F` | — |
| `arifle_SPAR_02_khk_F` | SPAR-16S 5.56 mm (Khaki) | 5.56x45 mm | `150Rnd_556x45_Drum_Mag_F`<br>`150Rnd_556x45_Drum_Mag_Tracer_F` | — |
| `arifle_SPAR_02_snd_F` | SPAR-16S 5.56 mm (Sand) | 5.56x45 mm | `150Rnd_556x45_Drum_Sand_Mag_F`<br>`150Rnd_556x45_Drum_Sand_Mag_Tracer_F` | — |
| `B_Patrol_Soldier_Autorifleman_weapon_F` | MX SW 6.5 mm | 6.5x39 mm | `100Rnd_65x39_caseless_mag` | BLUFOR (1) |
| `B_Patrol_Soldier_HeavyGunner_weapon_F` | Zafir 7.62 mm | 7.62x54 mm | `150Rnd_762x54_Box`<br>`150Rnd_762x54_Box_Tracer` | BLUFOR (1) |
| `B_Patrol_Soldier_MachineGunner_weapon_F` | Mk200 6.5 mm | 6.5x39 mm | `200Rnd_65x39_cased_Box`<br>`200Rnd_65x39_cased_Box_Tracer`<br>`200Rnd_65x39_cased_Box_Red`<br>`200Rnd_65x39_cased_Box_Tracer_Red` | BLUFOR (1) |
| `FakeWeapon_moduleTracers_F` | Mk200 6.5 mm | 6.5x39 mm | `200Rnd_65x39_belt_Tracer_Green`<br>`200Rnd_65x39_belt_Tracer_Red`<br>`200Rnd_65x39_belt_Tracer_Yellow` | — |
| `LMG_03_F` | LIM-85 5.56 mm | 5.56x45 mm | `200Rnd_556x45_Box_F`<br>`200Rnd_556x45_Box_Red_F`<br>`200Rnd_556x45_Box_Tracer_F`<br>`200Rnd_556x45_Box_Tracer_Red_F` | Independent (2) |
| `LMG_03_Vehicle_F` | LIM-85 5.56 mm | 5.56x45 mm | `200Rnd_556x45_Box_F`<br>`200Rnd_556x45_Box_Red_F`<br>`200Rnd_556x45_Box_Tracer_F`<br>`200Rnd_556x45_Box_Tracer_Red_F` | Independent (1) |
| `LMG_Mk200_BI_F` | Mk200 6.5 mm | 6.5x39 mm | `200Rnd_65x39_cased_Box`<br>`200Rnd_65x39_cased_Box_Tracer`<br>`200Rnd_65x39_cased_Box_Red`<br>`200Rnd_65x39_cased_Box_Tracer_Red` | Independent (1), BLUFOR (1), OPFOR (1) |
| `LMG_Mk200_black_ACO_pointer_F` | Mk200 6.5 mm (Black) | 6.5x39 mm | `200Rnd_65x39_cased_Box`<br>`200Rnd_65x39_cased_Box_Tracer`<br>`200Rnd_65x39_cased_Box_Red`<br>`200Rnd_65x39_cased_Box_Tracer_Red` | — |
| `LMG_Mk200_black_BI_F` | Mk200 6.5 mm (Black) | 6.5x39 mm | `200Rnd_65x39_cased_Box`<br>`200Rnd_65x39_cased_Box_Tracer`<br>`200Rnd_65x39_cased_Box_Red`<br>`200Rnd_65x39_cased_Box_Tracer_Red` | — |
| `LMG_Mk200_black_F` | Mk200 6.5 mm (Black) | 6.5x39 mm | `200Rnd_65x39_cased_Box`<br>`200Rnd_65x39_cased_Box_Tracer`<br>`200Rnd_65x39_cased_Box_Red`<br>`200Rnd_65x39_cased_Box_Tracer_Red` | — |
| `LMG_Mk200_black_LP_BI_F` | Mk200 6.5 mm (Black) | 6.5x39 mm | `200Rnd_65x39_cased_Box`<br>`200Rnd_65x39_cased_Box_Tracer`<br>`200Rnd_65x39_cased_Box_Red`<br>`200Rnd_65x39_cased_Box_Tracer_Red` | Independent (1) |
| `LMG_Mk200_F` | Mk200 6.5 mm | 6.5x39 mm | `200Rnd_65x39_cased_Box`<br>`200Rnd_65x39_cased_Box_Tracer`<br>`200Rnd_65x39_cased_Box_Red`<br>`200Rnd_65x39_cased_Box_Tracer_Red` | — |
| `LMG_Mk200_LP_BI_F` | Mk200 6.5 mm | 6.5x39 mm | `200Rnd_65x39_cased_Box`<br>`200Rnd_65x39_cased_Box_Tracer`<br>`200Rnd_65x39_cased_Box_Red`<br>`200Rnd_65x39_cased_Box_Tracer_Red` | Independent (1) |
| `LMG_Mk200_MRCO_F` | Mk200 6.5 mm | 6.5x39 mm | `200Rnd_65x39_cased_Box`<br>`200Rnd_65x39_cased_Box_Tracer`<br>`200Rnd_65x39_cased_Box_Red`<br>`200Rnd_65x39_cased_Box_Tracer_Red` | — |
| `LMG_Mk200_pointer_F` | Mk200 6.5 mm | 6.5x39 mm | `200Rnd_65x39_cased_Box`<br>`200Rnd_65x39_cased_Box_Tracer`<br>`200Rnd_65x39_cased_Box_Red`<br>`200Rnd_65x39_cased_Box_Tracer_Red` | — |
| `LMG_Zafir_ARCO_F` | Zafir 7.62 mm | 7.62x54 mm | `150Rnd_762x54_Box`<br>`150Rnd_762x54_Box_Tracer` | — |
| `LMG_Zafir_F` | Zafir 7.62 mm | 7.62x54 mm | `150Rnd_762x54_Box`<br>`150Rnd_762x54_Box_Tracer` | — |
| `LMG_Zafir_pointer_F` | Zafir 7.62 mm | 7.62x54 mm | `150Rnd_762x54_Box`<br>`150Rnd_762x54_Box_Tracer` | OPFOR (2) |

## Medium Machine Gun

| Class | Name | Caliber | Magazines | Used by |
|---|---|---|---|---|
| `MMG_01_hex_ARCO_LP_F` | Navid 9.3 mm (Hex) | 9.3x64 mm | `150Rnd_93x64_Mag` | OPFOR (2) |
| `MMG_01_hex_F` | Navid 9.3 mm (Hex) | 9.3x64 mm | `150Rnd_93x64_Mag` | — |
| `MMG_01_tan_F` | Navid 9.3 mm (Tan) | 9.3x64 mm | `150Rnd_93x64_Mag` | — |
| `MMG_02_black_F` | SPMG .338 (Black) | .338 Norma Magnum | `130Rnd_338_Mag` | — |
| `MMG_02_black_RCO_BI_F` | SPMG .338 (Black) | .338 Norma Magnum | `130Rnd_338_Mag` | — |
| `MMG_02_camo_F` | SPMG .338 (MTP) | .338 Norma Magnum | `130Rnd_338_Mag` | — |
| `MMG_02_sand_F` | SPMG .338 (Sand) | .338 Norma Magnum | `130Rnd_338_Mag` | — |
| `MMG_02_sand_RCO_LP_F` | SPMG .338 (Sand) | .338 Norma Magnum | `130Rnd_338_Mag` | BLUFOR (1) |

## Submachine Gun

| Class | Name | Caliber | Magazines | Used by |
|---|---|---|---|---|
| `hgun_PDW2000_F` | PDW2000 9 mm | 9x21 mm | `30Rnd_9x21_Mag`<br>`30Rnd_9x21_Red_Mag`<br>`30Rnd_9x21_Yellow_Mag`<br>`30Rnd_9x21_Green_Mag`<br>`16Rnd_9x21_Mag`<br>`16Rnd_9x21_red_Mag`<br>`16Rnd_9x21_green_Mag`<br>`16Rnd_9x21_yellow_Mag` | Independent (2), BLUFOR (1) |
| `hgun_PDW2000_Holo_F` | PDW2000 9 mm | 9x21 mm | `30Rnd_9x21_Mag`<br>`30Rnd_9x21_Red_Mag`<br>`30Rnd_9x21_Yellow_Mag`<br>`30Rnd_9x21_Green_Mag`<br>`16Rnd_9x21_Mag`<br>`16Rnd_9x21_red_Mag`<br>`16Rnd_9x21_green_Mag`<br>`16Rnd_9x21_yellow_Mag` | Independent (2) |
| `hgun_PDW2000_Holo_snds_F` | PDW2000 9 mm | 9x21 mm | `30Rnd_9x21_Mag`<br>`30Rnd_9x21_Red_Mag`<br>`30Rnd_9x21_Yellow_Mag`<br>`30Rnd_9x21_Green_Mag`<br>`16Rnd_9x21_Mag`<br>`16Rnd_9x21_red_Mag`<br>`16Rnd_9x21_green_Mag`<br>`16Rnd_9x21_yellow_Mag` | — |
| `hgun_PDW2000_snds_F` | PDW2000 9 mm | 9x21 mm | `30Rnd_9x21_Mag`<br>`30Rnd_9x21_Red_Mag`<br>`30Rnd_9x21_Yellow_Mag`<br>`30Rnd_9x21_Green_Mag`<br>`16Rnd_9x21_Mag`<br>`16Rnd_9x21_red_Mag`<br>`16Rnd_9x21_green_Mag`<br>`16Rnd_9x21_yellow_Mag` | — |
| `SMG_01_ACO_F` | Vermin SMG .45 ACP | .45 ACP | `30Rnd_45ACP_Mag_SMG_01`<br>`30Rnd_45ACP_Mag_SMG_01_tracer_green`<br>`30Rnd_45ACP_Mag_SMG_01_Tracer_Red`<br>`30Rnd_45ACP_Mag_SMG_01_Tracer_Yellow` | — |
| `SMG_01_F` | Vermin SMG .45 ACP | .45 ACP | `30Rnd_45ACP_Mag_SMG_01`<br>`30Rnd_45ACP_Mag_SMG_01_tracer_green`<br>`30Rnd_45ACP_Mag_SMG_01_Tracer_Red`<br>`30Rnd_45ACP_Mag_SMG_01_Tracer_Yellow` | — |
| `SMG_01_Holo_F` | Vermin SMG .45 ACP | .45 ACP | `30Rnd_45ACP_Mag_SMG_01`<br>`30Rnd_45ACP_Mag_SMG_01_tracer_green`<br>`30Rnd_45ACP_Mag_SMG_01_Tracer_Red`<br>`30Rnd_45ACP_Mag_SMG_01_Tracer_Yellow` | BLUFOR (5) |
| `SMG_01_Holo_pointer_snds_F` | Vermin SMG .45 ACP | .45 ACP | `30Rnd_45ACP_Mag_SMG_01`<br>`30Rnd_45ACP_Mag_SMG_01_tracer_green`<br>`30Rnd_45ACP_Mag_SMG_01_Tracer_Red`<br>`30Rnd_45ACP_Mag_SMG_01_Tracer_Yellow` | — |
| `SMG_02_ACO_F` | Sting 9 mm | 9x21 mm | `30Rnd_9x21_Mag_SMG_02`<br>`30Rnd_9x21_Mag_SMG_02_Tracer_Red`<br>`30Rnd_9x21_Mag_SMG_02_Tracer_Yellow`<br>`30Rnd_9x21_Mag_SMG_02_Tracer_Green`<br>`30Rnd_9x21_Mag`<br>`30Rnd_9x21_Red_Mag`<br>`30Rnd_9x21_Yellow_Mag`<br>`30Rnd_9x21_Green_Mag` | OPFOR (4) |
| `SMG_02_ARCO_pointg_F` | Sting 9 mm | 9x21 mm | `30Rnd_9x21_Mag_SMG_02`<br>`30Rnd_9x21_Mag_SMG_02_Tracer_Red`<br>`30Rnd_9x21_Mag_SMG_02_Tracer_Yellow`<br>`30Rnd_9x21_Mag_SMG_02_Tracer_Green`<br>`30Rnd_9x21_Mag`<br>`30Rnd_9x21_Red_Mag`<br>`30Rnd_9x21_Yellow_Mag`<br>`30Rnd_9x21_Green_Mag` | — |
| `SMG_02_F` | Sting 9 mm | 9x21 mm | `30Rnd_9x21_Mag_SMG_02`<br>`30Rnd_9x21_Mag_SMG_02_Tracer_Red`<br>`30Rnd_9x21_Mag_SMG_02_Tracer_Yellow`<br>`30Rnd_9x21_Mag_SMG_02_Tracer_Green`<br>`30Rnd_9x21_Mag`<br>`30Rnd_9x21_Red_Mag`<br>`30Rnd_9x21_Yellow_Mag`<br>`30Rnd_9x21_Green_Mag` | — |
| `SMG_02_flash_F` | Sting 9 mm | 9x21 mm | `30Rnd_9x21_Mag_SMG_02`<br>`30Rnd_9x21_Mag_SMG_02_Tracer_Red`<br>`30Rnd_9x21_Mag_SMG_02_Tracer_Yellow`<br>`30Rnd_9x21_Mag_SMG_02_Tracer_Green`<br>`30Rnd_9x21_Mag`<br>`30Rnd_9x21_Red_Mag`<br>`30Rnd_9x21_Yellow_Mag`<br>`30Rnd_9x21_Green_Mag` | OPFOR (1) |
| `SMG_03_black` | ADR-97 5.7 mm (Black) | — | `50Rnd_570x28_SMG_03` | — |
| `SMG_03_camo` | ADR-97 5.7 mm (Camo) | — | `50Rnd_570x28_SMG_03` | — |
| `SMG_03_hex` | ADR-97 5.7 mm (Hex) | — | `50Rnd_570x28_SMG_03` | — |
| `SMG_03_khaki` | ADR-97 5.7 mm (Khaki) | — | `50Rnd_570x28_SMG_03` | — |
| `SMG_03_TR_black` | ADR-97 TR 5.7 mm (Black) | — | `50Rnd_570x28_SMG_03` | — |
| `SMG_03_TR_camo` | ADR-97 TR 5.7 mm (Camo) | — | `50Rnd_570x28_SMG_03` | — |
| `SMG_03_TR_hex` | ADR-97 TR 5.7 mm (Hex) | — | `50Rnd_570x28_SMG_03` | — |
| `SMG_03_TR_khaki` | ADR-97 TR 5.7 mm (Khaki) | — | `50Rnd_570x28_SMG_03` | — |
| `SMG_03C_black` | ADR-97C 5.7 mm (Black) | — | `50Rnd_570x28_SMG_03` | Independent (2), BLUFOR (1) |
| `SMG_03C_camo` | ADR-97C 5.7 mm (Camo) | — | `50Rnd_570x28_SMG_03` | — |
| `SMG_03C_hex` | ADR-97C 5.7 mm (Hex) | — | `50Rnd_570x28_SMG_03` | — |
| `SMG_03C_khaki` | ADR-97C 5.7 mm (Khaki) | — | `50Rnd_570x28_SMG_03` | — |
| `SMG_03C_TR_black` | ADR-97C TR 5.7 mm (Black) | — | `50Rnd_570x28_SMG_03` | Independent (1) |
| `SMG_03C_TR_camo` | ADR-97C TR 5.7 mm (Camo) | — | `50Rnd_570x28_SMG_03` | — |
| `SMG_03C_TR_hex` | ADR-97C TR 5.7 mm (Hex) | — | `50Rnd_570x28_SMG_03` | — |
| `SMG_03C_TR_khaki` | ADR-97C TR 5.7 mm (Khaki) | — | `50Rnd_570x28_SMG_03` | — |
| `SMG_05_F` | Protector 9 mm | 9x21 mm | `30Rnd_9x21_Mag_SMG_02`<br>`30Rnd_9x21_Mag_SMG_02_Tracer_Red`<br>`30Rnd_9x21_Mag_SMG_02_Tracer_Yellow`<br>`30Rnd_9x21_Mag_SMG_02_Tracer_Green` | BLUFOR (3), OPFOR (2) |

## Handgun

| Class | Name | Caliber | Magazines | Used by |
|---|---|---|---|---|
| `B_Patrol_Soldier_Pistol_F` | 4-five .45 ACP | .45 ACP | `11Rnd_45ACP_Mag` | BLUFOR (10) |
| `hgun_ACPC2_F` | ACP-C2 .45 ACP | .45 ACP | `9Rnd_45ACP_Mag` | Independent (44), BLUFOR (7), OPFOR (4), Civilian (4) |
| `hgun_ACPC2_snds_F` | ACP-C2 .45 ACP | .45 ACP | `9Rnd_45ACP_Mag` | Independent (8) |
| `hgun_esd_01_antenna_01_F` | Spectrum Device | — | `ESD_01_DummyMagazine_1`<br>`ESD_01_DummyMagazine_2`<br>`ESD_01_DummyMagazine_3`<br>`ESD_01_DummyMagazine_4`<br>`ESD_01_DummyMagazine_5`<br>`ESD_01_DummyMagazine_6`<br>`ESD_01_DummyMagazine_7`<br>`ESD_01_DummyMagazine_8`<br>`ESD_01_DummyMagazine_9`<br>`ESD_01_DummyMagazine_10` | — |
| `hgun_esd_01_antenna_02_F` | Spectrum Device | — | `ESD_01_DummyMagazine_1`<br>`ESD_01_DummyMagazine_2`<br>`ESD_01_DummyMagazine_3`<br>`ESD_01_DummyMagazine_4`<br>`ESD_01_DummyMagazine_5`<br>`ESD_01_DummyMagazine_6`<br>`ESD_01_DummyMagazine_7`<br>`ESD_01_DummyMagazine_8`<br>`ESD_01_DummyMagazine_9`<br>`ESD_01_DummyMagazine_10` | — |
| `hgun_esd_01_antenna_03_F` | Spectrum Device | — | `ESD_01_DummyMagazine_1`<br>`ESD_01_DummyMagazine_2`<br>`ESD_01_DummyMagazine_3`<br>`ESD_01_DummyMagazine_4`<br>`ESD_01_DummyMagazine_5`<br>`ESD_01_DummyMagazine_6`<br>`ESD_01_DummyMagazine_7`<br>`ESD_01_DummyMagazine_8`<br>`ESD_01_DummyMagazine_9`<br>`ESD_01_DummyMagazine_10` | — |
| `hgun_esd_01_base_F` |  | — | `ESD_01_DummyMagazine_1`<br>`ESD_01_DummyMagazine_2`<br>`ESD_01_DummyMagazine_3`<br>`ESD_01_DummyMagazine_4`<br>`ESD_01_DummyMagazine_5`<br>`ESD_01_DummyMagazine_6`<br>`ESD_01_DummyMagazine_7`<br>`ESD_01_DummyMagazine_8`<br>`ESD_01_DummyMagazine_9`<br>`ESD_01_DummyMagazine_10` | — |
| `hgun_esd_01_dummy_F` | Spectrum Device | — | `ESD_01_DummyMagazine_1`<br>`ESD_01_DummyMagazine_2`<br>`ESD_01_DummyMagazine_3`<br>`ESD_01_DummyMagazine_4`<br>`ESD_01_DummyMagazine_5`<br>`ESD_01_DummyMagazine_6`<br>`ESD_01_DummyMagazine_7`<br>`ESD_01_DummyMagazine_8`<br>`ESD_01_DummyMagazine_9`<br>`ESD_01_DummyMagazine_10` | — |
| `hgun_esd_01_F` | Spectrum Device | — | `ESD_01_DummyMagazine_1`<br>`ESD_01_DummyMagazine_2`<br>`ESD_01_DummyMagazine_3`<br>`ESD_01_DummyMagazine_4`<br>`ESD_01_DummyMagazine_5`<br>`ESD_01_DummyMagazine_6`<br>`ESD_01_DummyMagazine_7`<br>`ESD_01_DummyMagazine_8`<br>`ESD_01_DummyMagazine_9`<br>`ESD_01_DummyMagazine_10` | — |
| `hgun_P07_blk_F` | P07 9 mm (Black) | 9x21 mm | `16Rnd_9x21_Mag`<br>`16Rnd_9x21_red_Mag`<br>`16Rnd_9x21_green_Mag`<br>`16Rnd_9x21_yellow_Mag`<br>`30Rnd_9x21_Mag`<br>`30Rnd_9x21_Red_Mag`<br>`30Rnd_9x21_Yellow_Mag`<br>`30Rnd_9x21_Green_Mag` | — |
| `hgun_P07_blk_Snds_F` | P07 9 mm (Black) | 9x21 mm | `16Rnd_9x21_Mag`<br>`16Rnd_9x21_red_Mag`<br>`16Rnd_9x21_green_Mag`<br>`16Rnd_9x21_yellow_Mag`<br>`30Rnd_9x21_Mag`<br>`30Rnd_9x21_Red_Mag`<br>`30Rnd_9x21_Yellow_Mag`<br>`30Rnd_9x21_Green_Mag` | — |
| `hgun_P07_F` | P07 9 mm | 9x21 mm | `16Rnd_9x21_Mag`<br>`16Rnd_9x21_red_Mag`<br>`16Rnd_9x21_green_Mag`<br>`16Rnd_9x21_yellow_Mag`<br>`30Rnd_9x21_Mag`<br>`30Rnd_9x21_Red_Mag`<br>`30Rnd_9x21_Yellow_Mag`<br>`30Rnd_9x21_Green_Mag` | BLUFOR (62), OPFOR (2) |
| `hgun_P07_khk_F` | P07 9 mm (Khaki) | 9x21 mm | `16Rnd_9x21_Mag`<br>`16Rnd_9x21_red_Mag`<br>`16Rnd_9x21_green_Mag`<br>`16Rnd_9x21_yellow_Mag`<br>`30Rnd_9x21_Mag`<br>`30Rnd_9x21_Red_Mag`<br>`30Rnd_9x21_Yellow_Mag`<br>`30Rnd_9x21_Green_Mag` | BLUFOR (73) |
| `hgun_P07_khk_Snds_F` | P07 9 mm (Khaki) | 9x21 mm | `16Rnd_9x21_Mag`<br>`16Rnd_9x21_red_Mag`<br>`16Rnd_9x21_green_Mag`<br>`16Rnd_9x21_yellow_Mag`<br>`30Rnd_9x21_Mag`<br>`30Rnd_9x21_Red_Mag`<br>`30Rnd_9x21_Yellow_Mag`<br>`30Rnd_9x21_Green_Mag` | BLUFOR (19) |
| `hgun_P07_snds_F` | P07 9 mm | 9x21 mm | `16Rnd_9x21_Mag`<br>`16Rnd_9x21_red_Mag`<br>`16Rnd_9x21_green_Mag`<br>`16Rnd_9x21_yellow_Mag`<br>`30Rnd_9x21_Mag`<br>`30Rnd_9x21_Red_Mag`<br>`30Rnd_9x21_Yellow_Mag`<br>`30Rnd_9x21_Green_Mag` | BLUFOR (20) |
| `hgun_Pistol_01_F` | PM 9 mm | 9x21 mm | `10Rnd_9x21_Mag` | Independent (4) |
| `hgun_Pistol_heavy_01_F` | 4-five .45 ACP | .45 ACP | `11Rnd_45ACP_Mag` | BLUFOR (2) |
| `hgun_Pistol_heavy_01_green_F` | 4-five .45 ACP (Green) | .45 ACP | `11Rnd_45ACP_Mag` | Independent (39) |
| `hgun_Pistol_heavy_01_green_snds_F` | 4-five .45 ACP (Green) | .45 ACP | `11Rnd_45ACP_Mag` | Independent (1) |
| `hgun_Pistol_heavy_01_MRD_F` | 4-five .45 ACP | .45 ACP | `11Rnd_45ACP_Mag` | BLUFOR (2) |
| `hgun_Pistol_heavy_01_snds_F` | 4-five .45 ACP | .45 ACP | `11Rnd_45ACP_Mag` | — |
| `hgun_Pistol_heavy_02_F` | Zubr .45 ACP | .45 ACP | `6Rnd_45ACP_Cylinder` | Independent (2), BLUFOR (1) |
| `hgun_Pistol_heavy_02_Yorris_F` | Zubr .45 ACP | .45 ACP | `6Rnd_45ACP_Cylinder` | OPFOR (2) |
| `hgun_Rook40_F` | Rook-40 9 mm | 9x21 mm | `16Rnd_9x21_Mag`<br>`16Rnd_9x21_red_Mag`<br>`16Rnd_9x21_green_Mag`<br>`16Rnd_9x21_yellow_Mag`<br>`30Rnd_9x21_Mag`<br>`30Rnd_9x21_Red_Mag`<br>`30Rnd_9x21_Yellow_Mag`<br>`30Rnd_9x21_Green_Mag` | OPFOR (116), Independent (1) |
| `hgun_Rook40_snds_F` | Rook-40 9 mm | 9x21 mm | `16Rnd_9x21_Mag`<br>`16Rnd_9x21_red_Mag`<br>`16Rnd_9x21_green_Mag`<br>`16Rnd_9x21_yellow_Mag`<br>`30Rnd_9x21_Mag`<br>`30Rnd_9x21_Red_Mag`<br>`30Rnd_9x21_Yellow_Mag`<br>`30Rnd_9x21_Green_Mag` | OPFOR (50) |

## Shotgun

| Class | Name | Caliber | Magazines | Used by |
|---|---|---|---|---|
| `sgun_HunterShotgun_01_F` | Kozlice 12G | 12 Gauge | `2Rnd_12Gauge_Pellets`<br>`2Rnd_12Gauge_Slug` | Independent (1) |
| `sgun_HunterShotgun_01_sawedoff_F` | Kozlice 12G (Sawed-Off) | 12 Gauge | `2Rnd_12Gauge_Pellets`<br>`2Rnd_12Gauge_Slug` | Independent (1) |

## Rocket Launcher

| Class | Name | Caliber | Magazines | Used by |
|---|---|---|---|---|
| `launch_B_Titan_F` | Titan MPRL (Sand) | — | `Titan_AA` | BLUFOR (1) |
| `launch_B_Titan_olive_F` | Titan MPRL (Olive) | — | `Titan_AA` | — |
| `launch_B_Titan_short_F` | Titan MPRL Compact (Sand) | — | `Titan_AT`<br>`Titan_AP` | BLUFOR (2) |
| `launch_B_Titan_short_tna_F` | Titan MPRL Compact (Tropic) | — | `Titan_AT`<br>`Titan_AP` | BLUFOR (2) |
| `launch_B_Titan_tna_F` | Titan MPRL (Tropic) | — | `Titan_AA` | BLUFOR (2) |
| `launch_I_Titan_eaf_F` | Titan MPRL (Geometric) | — | `Titan_AA` | Independent (1) |
| `launch_I_Titan_F` | Titan MPRL (Digital) | — | `Titan_AA` | Independent (1) |
| `launch_I_Titan_short_F` | Titan MPRL Compact (Olive) | — | `Titan_AT`<br>`Titan_AP` | Independent (2) |
| `launch_MRAWS_green_F` | MAAWS Mk4 Mod 1 (Green) | — | `MRAWS_HEAT_F`<br>`MRAWS_HE_F`<br>`MRAWS_HEAT55_F` | BLUFOR (3), Independent (1) |
| `launch_MRAWS_green_rail_F` | MAAWS Mk4 Mod 0 (Green) | — | `MRAWS_HEAT_F`<br>`MRAWS_HE_F`<br>`MRAWS_HEAT55_F` | — |
| `launch_MRAWS_olive_F` | MAAWS Mk4 Mod 1 (Olive) | — | `MRAWS_HEAT_F`<br>`MRAWS_HE_F`<br>`MRAWS_HEAT55_F` | — |
| `launch_MRAWS_olive_rail_F` | MAAWS Mk4 Mod 0 (Olive) | — | `MRAWS_HEAT_F`<br>`MRAWS_HE_F`<br>`MRAWS_HEAT55_F` | Independent (2), BLUFOR (1), OPFOR (1) |
| `launch_MRAWS_sand_F` | MAAWS Mk4 Mod 1 (Sand) | — | `MRAWS_HEAT_F`<br>`MRAWS_HE_F`<br>`MRAWS_HEAT55_F` | BLUFOR (1) |
| `launch_MRAWS_sand_rail_F` | MAAWS Mk4 Mod 0 (Sand) | — | `MRAWS_HEAT_F`<br>`MRAWS_HE_F`<br>`MRAWS_HEAT55_F` | — |
| `launch_NLAW_F` | PCML | — | `NLAW_F` | BLUFOR (7), Independent (2) |
| `launch_O_Titan_F` | Titan MPRL (Hex) | — | `Titan_AA` | OPFOR (3) |
| `launch_O_Titan_ghex_F` | Titan MPRL (Green Hex) | — | `Titan_AA` | OPFOR (1) |
| `launch_O_Titan_short_F` | Titan MPRL Compact (Coyote) | — | `Titan_AT`<br>`Titan_AP` | OPFOR (3) |
| `launch_O_Titan_short_ghex_F` | Titan MPRL Compact (Green Hex) | — | `Titan_AT`<br>`Titan_AP` | OPFOR (1) |
| `launch_RPG32_camo_F` | RPG-42 (Camo) | — | `RPG32_F`<br>`RPG32_HE_F` | — |
| `launch_RPG32_F` | RPG-42 Alamut | — | `RPG32_F`<br>`RPG32_HE_F` | OPFOR (6), Independent (1), BLUFOR (1), Civilian (1) |
| `launch_RPG32_ghex_F` | RPG-42 Alamut (Green Hex) | — | `RPG32_F`<br>`RPG32_HE_F` | OPFOR (3) |
| `launch_RPG32_green_F` | RPG-42 (Green) | — | `RPG32_F`<br>`RPG32_HE_F` | OPFOR (3) |
| `launch_RPG7_F` | RPG-7 | — | `RPG7_F` | Independent (2) |
| `launch_Titan_F` | Titan MPRL | — | `Titan_AA` | — |
| `launch_Titan_short_F` | Titan MPRL Compact | — | `Titan_AT`<br>`Titan_AP` | — |

## Missile Launcher

| Class | Name | Caliber | Magazines | Used by |
|---|---|---|---|---|
| `launch_O_Vorona_brown_F` | 9M135 Vorona (Brown) | — | `Vorona_HEAT`<br>`Vorona_HE` | OPFOR (1) |
| `launch_O_Vorona_green_F` | 9M135 Vorona (Green) | — | `Vorona_HEAT`<br>`Vorona_HE` | OPFOR (1) |

## Non-combat Gun

| Class | Name | Caliber | Magazines | Used by |
|---|---|---|---|---|

## Other / Non-Weapon Entries

| Class | Name | Caliber | Magazines | Used by |
|---|---|---|---|---|
| `FakeWeapon` |  | — | `FakeMagazine` | Independent (30), BLUFOR (29), OPFOR (24), EMPTY (4) |
| `HandGunBase` | Rifle | — | — | — |
| `HMG_M2_Mounted` | M2 HMG .50 | 12.7x99 mm | `100Rnd_127x99_mag`<br>`100Rnd_127x99_mag_Tracer_Red`<br>`100Rnd_127x99_mag_Tracer_Green`<br>`100Rnd_127x99_mag_Tracer_Yellow` | Independent (9), BLUFOR (5), OPFOR (5) |
| `Put` | Put | — | `DemoCharge_Remote_Mag`<br>`IEDUrbanSmall_Remote_Mag`<br>`IEDLandSmall_Remote_Mag`<br>`SatchelCharge_Remote_Mag`<br>`IEDUrbanBig_Remote_Mag`<br>`IEDLandBig_Remote_Mag`<br>`ATMine_Range_Mag`<br>`ClaymoreDirectionalMine_Remote_Mag`<br>`APERSMine_Range_Mag`<br>`APERSBoundingMine_Range_Mag`<br>`SLAMDirectionalMine_Wire_Mag`<br>`APERSTripMine_Wire_Mag`<br>`APERSMineDispenser_Mag`<br>`TrainingMine_Mag`<br>`Drone_Range_Mag`<br>`Drone_Range_Mag_dummy` | Civilian (322), BLUFOR (227), OPFOR (209), Independent (147) |
| `Rifle` | Rifle | — | — | — |
| `Throw` | Throw | — | `HandGrenade_Stone`<br>`HandGrenade`<br>`MiniGrenade`<br>`SmokeShell`<br>`SmokeShellYellow`<br>`SmokeShellGreen`<br>`SmokeShellRed`<br>`SmokeShellPurple`<br>`SmokeShellOrange`<br>`SmokeShellBlue`<br>`Chemlight_green`<br>`Chemlight_red`<br>`Chemlight_yellow`<br>`Chemlight_blue`<br>`B_IR_Grenade`<br>`O_IR_Grenade`<br>`I_IR_Grenade`<br>`O_R_IR_Grenade`<br>`I_E_IR_Grenade` | Civilian (322), BLUFOR (227), OPFOR (209), Independent (147) |

## Underwater Gun

| Class | Name | Caliber | Magazines | Used by |
|---|---|---|---|---|

