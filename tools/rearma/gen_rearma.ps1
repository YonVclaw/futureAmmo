<#
    gen_rearma.ps1 - builds the rearma compat addons (addons/rearma_cn, rearma_rus,
    rearma_us) from the tables below.

    Generated per addon: CfgMagazines.hpp, CfgMagazinewells.hpp, CfgWeapons.hpp,
    CBA_DisposableLaunchers.hpp, config.cpp.
    Hand-written per addon: CfgAmmo.hpp, XEH_postInit.sqf, CfgEventHandlers.hpp,
    script_component.hpp, $PBOPREFIX$.

    Edit the tables here, never the generated files, then run:
        pwsh tools/rearma/gen_rearma.ps1
    Line endings follow the rest of the repo (detected from addons/csat62).
#>
$ErrorActionPreference = 'Stop'
$addonsDir = (Resolve-Path (Join-Path $PSScriptRoot '..\..\addons')).Path
$sample = [IO.File]::ReadAllText((Join-Path $addonsDir 'csat62\config.cpp'))
$EOL = if ($sample.Contains("`r`n")) { "`r`n" } else { "`n" }
$utf8 = New-Object System.Text.UTF8Encoding($false)

function Save-Lines([string]$path, $lines) {
    $text = ((@($lines) | ForEach-Object { [string]$_ }) -join "`n").Replace("`r`n", "`n").TrimEnd("`n") + "`n"
    if ($EOL -ne "`n") { $text = $text.Replace("`n", $EOL) }
    [IO.File]::WriteAllText($path, $text, $utf8)
}

function Get-TracerSet([string]$tr) {
    switch ($tr) {
        'full' { 'Red','Yellow','Green','White','Blue','Orange','IR' }
        'noir' { 'Red','Yellow','Green','White','Blue','Orange' }
    }
}

function Get-Matrix([string]$prefix, [string[]]$bases, [string[]]$colours) {
    # side-prefixed class + its pre-side-prefix alias, then the tracer pairs (core order)
    foreach ($b in $bases) {
        "FA_b_$prefix$b"; "FA_$prefix$b"
        foreach ($t in $colours) { "FA_b_$prefix${b}_T_$t"; "FA_$prefix${b}_T_$t" }
    }
}

# ---------------------------------------------------------------------------
# Rounds. ammo = CfgAmmo class, name = arsenal designation, v = default initSpeed.
# tr: full = 7 tracer colours, noir = no IR tracer ammo exists, none = no tracers.
# ad = shot / slug loads: no tracers at all (tracersEvery and lastRoundsTracer 0).
# tag = class-name segment (defaults to the key).
# ---------------------------------------------------------------------------
$ROUNDS = @{
    # --- 6.8x51 / 6x38 / 4.6x30 / 9x19 (rearma_us CfgAmmo)
    'Mk400_HV'    = @{ ammo = 'FA_b_680_Mk400_HV';    name = 'Mk400 HV';    v = 950; tr = 'full'; desc = 'Mk400 HV - 6.8x51 hybrid-case general purpose' }
    'Mk401_AP'    = @{ ammo = 'FA_b_680_Mk401_AP';    name = 'Mk401 AP';    v = 925; tr = 'full'; desc = 'Mk401 AP - 6.8x51 tungsten armour piercer' }
    'Mk402_PAB'   = @{ ammo = 'FA_b_680_Mk402_PAB';   name = 'Mk402 PAB';   v = 935; tr = 'full'; desc = 'Mk402 PAB airburst, counter-UAS' }
    'Mk408_UW'    = @{ ammo = 'FA_b_680_Mk408_UW';    name = 'Mk408 UW';    v = 330; tr = 'none'; desc = 'Mk408 UW - 6.8x51 underwater dart' }
    'Mk405_HV'    = @{ ammo = 'FA_b_6x38_Mk405_HV';   name = 'Mk405 HV';    v = 930; tr = 'full'; desc = 'Mk405 HV - 6x38 hybrid-case general purpose' }
    'Mk406_AP'    = @{ ammo = 'FA_b_6x38_Mk406_AP';   name = 'Mk406 AP';    v = 905; tr = 'full'; desc = 'Mk406 AP - 6x38 tungsten armour piercer' }
    'Mk407_PAB'   = @{ ammo = 'FA_b_6x38_Mk407_PAB';  name = 'Mk407 PAB';   v = 915; tr = 'full'; desc = 'Mk407 PAB airburst, counter-UAS' }
    'Mk432_AP'    = @{ ammo = 'FA_b_46x30_Mk432_AP';  name = 'Mk432 AP';    v = 725; tr = 'none'; desc = 'Mk432 AP' }
    'Mk433_SUB'   = @{ ammo = 'FA_b_46x30_Mk433_SUB'; name = 'Mk433 SUB';   v = 300; tr = 'none'; desc = 'Mk433 SUB' }
    'Mk422_AP'    = @{ ammo = 'FA_b_9x19_Mk422_AP';   name = 'Mk422 AP';    v = 400; tr = 'none'; desc = 'Mk422 AP' }
    'Mk423_SUB'   = @{ ammo = 'FA_b_9x19_Mk423_SUB';  name = 'Mk423 SUB';   v = 300; tr = 'none'; desc = 'Mk423 SUB' }
    # --- 5.56x45 (ghostfa_ammo / ghostfa_antidrone)
    'Mk327_HV'    = @{ ammo = 'FA_b_556_Mk327_HV';    name = 'Mk327 HV';    v = 960; tr = 'full'; desc = 'Mk327 HV' }
    'XM891_CTEP'  = @{ ammo = 'FA_b_556_XM891_CTEP';  name = 'XM891 CTEP';  v = 980; tr = 'full'; desc = 'XM891 CTEP' }
    'Mk332_AP'    = @{ ammo = 'FA_b_556_Mk332_AP';    name = 'Mk332 AP';    v = 940; tr = 'full'; desc = 'Mk332 AP' }
    'Mk361_PAB'   = @{ ammo = 'FA_b_556_Mk361_PAB';   name = 'Mk361 PAB';   v = 920; tr = 'noir'; desc = 'Mk361 PAB airburst, counter-UAS' }
    'Mk368K_AD'   = @{ ammo = 'FA_b_556_Mk368K_AD';   name = 'Mk368K AD';   v = 671; tr = 'none'; ad = $true; desc = 'Mk368K AD 8-pellet shot, eff. 100 m' }
    'Mk368L_AD'   = @{ ammo = 'FA_b_556_Mk368L_AD';   name = 'Mk368L AD';   v = 671; tr = 'none'; ad = $true; desc = 'Mk368L AD 5-pellet shot, eff. 200 m' }
    # --- 5.45x39 (ghostfa_ammo + rearma_rus CfgAmmo)
    '7N44_HP'     = @{ ammo = 'FA_o_545x39_7N44_HP';   name = '7N44 HP';    v = 925; tr = 'full'; desc = '7N44 HP' }
    '7N48_CT'     = @{ ammo = 'FA_o_545x39_7N48_CT';   name = '7N48 CT';    v = 950; tr = 'full'; desc = '7N48 CT' }
    '7U5_SubAP'   = @{ ammo = 'FA_o_545x39_7U5_SubAP'; name = '7U5 SubAP';  v = 303; tr = 'full'; desc = '7U5 SubAP' }
    '7N55_HEAB'   = @{ ammo = 'FA_o_545x39_7N55_HEAB'; name = '7N55 HEAB';  v = 925; tr = 'full'; desc = '7N55 HEAB airburst, counter-UAS' }
    '7N56K_AD'    = @{ ammo = 'FA_o_545x39_7N56K_AD';  name = '7N56K AD';   v = 660; tr = 'none'; ad = $true; desc = '7N56K AD 7-pellet shot, eff. 90 m' }
    '7N56L_AD'    = @{ ammo = 'FA_o_545x39_7N56L_AD';  name = '7N56L AD';   v = 660; tr = 'none'; ad = $true; desc = '7N56L AD 5-pellet shot, eff. 180 m' }
    'PSP2_UW'     = @{ ammo = 'FA_o_545x39_PSP2_UW';   name = 'PSP-2 UW';   v = 300; tr = 'none'; desc = 'PSP-2 UW - 5.45 underwater dart' }
    # --- 7.62x54R / .338 LM / 9x19 / 23mm (ghostfa_ammo + rearma_rus CfgAmmo)
    '762R_HV'     = @{ ammo = 'FA_o_762x54R_Ball_HV';  name = '7.62x54R Ball HV'; v = 855; tr = 'full'; desc = '7.62x54R Ball HV'; tag = 'Ball_HV' }
    '7N49_AP'     = @{ ammo = 'FA_o_762x54R_7N49_AP';  name = '7N49 AP';    v = 830; tr = 'full'; desc = '7N49 AP - 7.62x54R tungsten armour piercer' }
    '7U18_SUB'    = @{ ammo = 'FA_o_762x54R_7U18_SUB'; name = '7U18 SUB';   v = 310; tr = 'full'; desc = '7U18 SUB - 7.62x54R subsonic' }
    'Mk371_250gr' = @{ ammo = 'FA_b_338_Mk371_250gr';  name = 'Mk371 250gr'; v = 905; tr = 'full'; desc = 'Mk371 250gr' }
    'Mk371_285gr' = @{ ammo = 'FA_b_338_Mk371_285gr';  name = 'Mk371 285gr'; v = 870; tr = 'full'; desc = 'Mk371 285gr' }
    'Mk371_300gr' = @{ ammo = 'FA_b_338_Mk371_300gr';  name = 'Mk371 300gr'; v = 830; tr = 'full'; desc = 'Mk371 300gr' }
    'Mk373_PAB'   = @{ ammo = 'FA_b_338_Mk373_PAB';    name = 'Mk373 PAB';  v = 900; tr = 'noir'; desc = 'Mk373 PAB airburst, counter-UAS' }
    '7N53_AP'     = @{ ammo = 'FA_o_9x19_7N53_AP';     name = '7N53 AP';    v = 470; tr = 'none'; desc = '7N53 AP' }
    '7U17_SUB'    = @{ ammo = 'FA_o_9x19_7U17_SUB';    name = '7U17 SUB';   v = 295; tr = 'none'; desc = '7U17 SUB' }
    'ShrapnelAD50'  = @{ ammo = 'FA_o_23mm_ShrapnelAD50';  name = 'Shrapnel-AD50';  v = 400; tr = 'none'; ad = $true; desc = 'Shrapnel-AD50 anti-drone shot, 24 pellets, eff. 50 m' }
    'ShrapnelAD100' = @{ ammo = 'FA_o_23mm_ShrapnelAD100'; name = 'Shrapnel-AD100'; v = 380; tr = 'none'; ad = $true; desc = 'Shrapnel-AD100 anti-drone shot, 14 tungsten pellets, eff. 100 m' }
    'BarrikadaAB'   = @{ ammo = 'FA_o_23mm_BarrikadaAB';   name = 'Barrikada-AB';   v = 420; tr = 'none'; ad = $true; desc = 'Barrikada-AB proximity airburst slug, counter-UAS' }
    # --- 5.8x42 / 8.6x39 / 9x21 / 12.7x108 (ghostfa_ammo + rearma_cn CfgAmmo)
    '580_HV'      = @{ ammo = 'FA_o_580_Ball_HV';       name = '5.8x42mm Ball HV'; v = 940; tr = 'full'; desc = '5.8x42mm Ball HV'; tag = 'Ball_HV' }
    'DBP39_CT'    = @{ ammo = 'FA_o_580_DBP39_CT';      name = 'DBP-39 CT';    v = 950; tr = 'full'; desc = 'DBP-39 CT' }
    'DBP40_AP'    = @{ ammo = 'FA_o_580_DBP40_AP';      name = 'DBP-40 AP';    v = 915; tr = 'full'; desc = 'DBP-40 AP' }
    'DBJ39_PAB'   = @{ ammo = 'FA_o_580_DBJ39_PAB';     name = 'DBJ-39 PAB';   v = 940; tr = 'full'; desc = 'DBJ-39 PAB airburst, counter-UAS' }
    'DBS39K_AD'   = @{ ammo = 'FA_o_580_DBS39K_AD';     name = 'DBS-39K AD';   v = 680; tr = 'none'; ad = $true; desc = 'DBS-39K AD 8-pellet shot, eff. 110 m' }
    'DBS39L_AD'   = @{ ammo = 'FA_o_580_DBS39L_AD';     name = 'DBS-39L AD';   v = 680; tr = 'none'; ad = $true; desc = 'DBS-39L AD 6-pellet shot, eff. 210 m' }
    'DBP41'       = @{ ammo = 'FA_o_86x39_DBP41';       name = 'DBP-41';       v = 690; tr = 'full'; desc = 'DBP-41 - 8.6x39 supersonic' }
    'DBP42_SubAP' = @{ ammo = 'FA_o_86x39_DBP42_SubAP'; name = 'DBP-42 SubAP'; v = 315; tr = 'full'; desc = 'DBP-42 SubAP - 8.6x39 subsonic tungsten' }
    'DBJ41_PAB'   = @{ ammo = 'FA_o_86x39_DBJ41_PAB';   name = 'DBJ-41 PAB';   v = 690; tr = 'full'; desc = 'DBJ-41 PAB airburst, counter-UAS' }
    'DBP43_AP'    = @{ ammo = 'FA_o_9x21_DBP43_AP';     name = 'DBP-43 AP';    v = 560; tr = 'none'; desc = 'DBP-43 AP' }
    'DBP44_SUB'   = @{ ammo = 'FA_o_9x21_DBP44_SUB';    name = 'DBP-44 SUB';   v = 300; tr = 'none'; desc = 'DBP-44 SUB' }
    'DBJ127_PAB'  = @{ ammo = 'FA_o_127x108_DBJ127_PAB'; name = 'DBJ-127 PAB'; v = 870; tr = 'full'; desc = 'DBJ-127 PAB airburst, counter-UAS' }
    # --- 12 gauge specialty shells (ghostfa_ammo)
    'Mk350_TBS'   = @{ ammo = 'FA_b_12G_Mk350_TBS';  name = 'Mk350 TBS';  v = 400; tr = 'none'; ad = $true; desc = 'Tungsten buckshot - holds velocity, harder penetration' }
    'Mk351_FLE'   = @{ ammo = 'FA_b_12G_Mk351_FLE';  name = 'Mk351 FLE';  v = 450; tr = 'none'; ad = $true; desc = 'Tungsten flechette - tight pattern, cover penetration' }
    'Mk360_AD'    = @{ ammo = 'FA_b_12G_Mk360_AD';   name = 'Mk360 AD';   v = 410; tr = 'none'; ad = $true; desc = 'Anti-drone shot - dense tungsten pattern, ~40-50 m' }
    'Mk352_APS'   = @{ ammo = 'FA_b_12G_Mk352_APS';  name = 'Mk352 APS';  v = 450; tr = 'none'; ad = $true; desc = 'Tungsten AP slug - light armor / hard cover defeat' }
    'Mk353_BRC'   = @{ ammo = 'FA_b_12G_Mk353_BRC';  name = 'Mk353 BRC';  v = 320; tr = 'none'; ad = $true; desc = 'Frangible breaching round - defeats lock / hinge, minimal over-pen' }
    'Mk363_PABS'  = @{ ammo = 'FA_b_12G_Mk363_PABS'; name = 'Mk363 PAB-S'; v = 430; tr = 'none'; ad = $true; desc = 'Anti-drone proximity airburst slug' }
    # --- QLU-11 35mm (rearma_cn CfgAmmo)
    'DFK135_PAB'    = @{ ammo = 'FA_o_35mm_DFK135_PAB';    name = 'DFK-135 PAB';    v = 450; tr = 'none'; desc = 'DFK-135 PAB - proximity + programmable airburst (Mk364 dial), HE on impact' }
    'DFP135_HEP'    = @{ ammo = 'FA_o_35mm_DFP135_HEP';    name = 'DFP-135 HE-P';   v = 450; tr = 'none'; desc = 'DFP-135 HE-P - programmable airburst HE (Mk364 dial)' }
    'DFJ135_DP'     = @{ ammo = 'FA_o_35mm_DFJ135_DP';     name = 'DFJ-135 DP';     v = 450; tr = 'none'; desc = 'DFJ-135 DP - dual-purpose HEAT + frag, ~40 mm RHA' }
    'DFB135_TBK'    = @{ ammo = 'FA_o_35mm_DFB135_TBK';    name = 'DFB-135 TBK';    v = 450; tr = 'none'; desc = 'DFB-135 TBK - tungsten buckshot, 12 pellets, eff. ~150 m' }
    'DFZ130_NRP'    = @{ ammo = 'FA_o_35mm_DFZ130_NRP';    name = 'DFZ-130 NRP';    v = 450; tr = 'none'; desc = 'DFZ-130 NRP - network relay, chute at apex' }
    'DFZ133_EMP'    = @{ ammo = 'FA_o_35mm_DFZ133_EMP';    name = 'DFZ-133 EMP';    v = 450; tr = 'none'; desc = 'DFZ-133 EMP - soft-kill EW burst, chute at apex' }
    'DFZ134_MSmoke' = @{ ammo = 'FA_o_35mm_DFZ134_MSmoke'; name = 'DFZ-134 MSmoke'; v = 450; tr = 'none'; desc = 'DFZ-134 MSmoke - multispectral smoke, chute at apex' }
    'DFZ135_Decoy'  = @{ ammo = 'FA_o_35mm_DFZ135_Decoy';  name = 'DFZ-135 Decoy';  v = 450; tr = 'none'; desc = 'DFZ-135 Decoy - RF / IR drone decoy, chute at apex' }
    'DFZ136_UGS'    = @{ ammo = 'FA_o_35mm_DFZ136_UGS';    name = 'DFZ-136 UGS';    v = 450; tr = 'none'; desc = 'DFZ-136 UGS - ground sensor picket, chute at apex' }
    'DFZ138_Jammer' = @{ ammo = 'FA_o_35mm_DFZ138_Jammer'; name = 'DFZ-138 Jammer'; v = 450; tr = 'none'; desc = 'DFZ-138 Jammer - area comms / GNSS jammer, chute at apex' }
    # --- QN-205 mini-missiles (rearma_cn CfgAmmo)
    'QN205T_TNDM' = @{ ammo = 'FA_M_QN205T_TNDM'; name = 'QN-205T TNDM';  v = 18; tr = 'none'; tag = 'TNDM'; desc = 'QN-205T - tandem top-attack, ~450 mm RHA' }
    'QN205B_TBX'  = @{ ammo = 'FA_M_QN205B_TBX';  name = 'QN-205B TBX';   v = 18; tr = 'none'; tag = 'TBX';  desc = 'QN-205B - thermobaric + prefrag, programmable airburst (Mk364 dial)' }
    'QN205D_CUAS' = @{ ammo = 'FA_M_QN205D_CUAS'; name = 'QN-205D C-UAS'; v = 18; tr = 'none'; tag = 'CUAS'; desc = 'QN-205D - IR lock vs drones and low air, proximity burst' }
}

# FA 40mm for rearma's underbarrel launchers. Every rearma EGLM / UGL muzzle
# inherits vanilla UGL_F, whose only well is UGL_40x36, and the M320 uses the
# same well. Written with the same array name and contents into all three
# addons, so loading several rearma packs never lists a round twice.
$UGL_1RND = @(
    'FA_b_1Rnd_40mm_Mk389_TBK', 'FA_1Rnd_40mm_Mk389_TBK', 'FA_b_1Rnd_40mm_Mk364_PAB', 'FA_1Rnd_40mm_Mk364_PAB',
    'FA_1Rnd_40mm_Mk380_NRP', 'FA_1Rnd_40mm_Mk383_EMP', 'FA_1Rnd_40mm_Mk384_MSmoke', 'FA_1Rnd_40mm_Mk385_Decoy',
    'FA_1Rnd_40mm_Mk386_UGS', 'FA_1Rnd_40mm_Mk388_Jammer')
$UGL_3RND = @(
    'FA_b_3Rnd_40mm_Mk389_TBK', 'FA_3Rnd_40mm_Mk389_TBK', 'FA_b_3Rnd_40mm_Mk364_PAB', 'FA_3Rnd_40mm_Mk364_PAB',
    'FA_3Rnd_40mm_Mk380_NRP', 'FA_3Rnd_40mm_Mk383_EMP', 'FA_3Rnd_40mm_Mk384_MSmoke', 'FA_3Rnd_40mm_Mk385_Decoy',
    'FA_3Rnd_40mm_Mk386_UGS', 'FA_3Rnd_40mm_Mk388_Jammer')
$UGL_REUSE = @(
    @{ well = 'UGL_40x36';  array = 'ghostfa_rearma_ugl'; mags = $UGL_1RND }
    @{ well = '3UGL_40x36'; array = 'ghostfa_rearma_ugl'; mags = $UGL_3RND }
)
$UGL_NOTES = @{
    'UGL_40x36'  = 'Vanilla UGL well - every rearma EGLM / UGL muzzle (inherits UGL_F) and the M320. Shared array: same name and contents in all rearma_* addons.'
    '3UGL_40x36' = 'Vanilla 3-round UGL well - RM277 GL. Shared array: same name and contents in all rearma_* addons.'
}

$DEFS = [ordered]@{}

# ===========================================================================
$DEFS['rearma_us'] = @{
    header = @(
        '// ====================================================================='
        '//  REARMA - US weapons (us_weapon)'
        '//  New FA calibers on rearma magazine bodies:'
        '//    6.8x51 TVCM Mk400 HV / Mk401 AP / Mk402 PAB / Mk408 UW : M7 / RM277 / M250'
        '//    6x38 TVCM   Mk405 HV / Mk406 AP / Mk407 PAB            : NX family / KAC AMG'
        '//    4.6x30      Mk432 AP / Mk433 SUB                       : MP7A2'
        '//    9x19        Mk422 AP / Mk423 SUB                       : M17 / M18'
        '//  FA 5.56 (Mk327 / XM891 / Mk332 / Mk361 PAB / Mk368K / L AD) on rearma''s'
        '//  black and tan STANAG and PMAG bodies. FA 40mm joins the UGL wells.'
        '//  M72A7: FA disposable variants M72A10 TNDM / M72A11 TBX / M72A12 PROX.'
        '//  Weapon patches: own wells for the M250 and KAC AMG, M14_762x51 for the M28A5.'
        '// ====================================================================='
    )
    required = @(
        @{ name = 'cba_main' }
        @{ name = 'ace_ballistics' }
        @{ name = 'ghostfa_ammo' }
        @{ name = 'ghostfa_antidrone'; pre = @('PAB / PROX rounds hook the antidrone proximity-fuze registry; Mk361 / Mk364 / Mk368 mags') }
        @{ name = 'ghostfa_grenade_40mm'; pre = @('Mk380-block 40mm mags joined to the UGL wells') }
        @{ name = 'us_weapon_rifles'; pre = @(
            'rearma US weapon PBOs. skipWhenMissingDependencies self-skips this PBO without rearma.'
            'rearma''s smgs PBO reuses the us_weapon_machineguns patch name, so the MP7A2 mags'
            'copy their body''s model data instead of inheriting from it.') }
        @{ name = 'us_weapon_machineguns' }
        @{ name = 'us_weapon_launchers' }
        @{ name = 'us_weapon_pistols' }
    )
    magHeader = @(
        '// FA rounds on rearma''s own US magazine bodies, so the arsenal and the weapon'
        '// show the right model. Every magazine joins the rearma well its body already'
        '// lives in (CfgMagazinewells.hpp); the M250 and KAC AMG belts get new wells,'
        '// wired in CfgWeapons.hpp. Rifle / MG loads carry the full tracer set; shot,'
        '// PDW, pistol and underwater loads have none. Belt bodies that fire a tracer'
        '// every third round are reset so tracers only come from the _T_ variants.'
    )
    wellHeader = @(
        '// Register the FA magazines into the wells rearma''s US weapons use.'
    )
    wellNotes = @{
        'L7AWM_680x51TVCM'      = 'M7 / M7A1 / RM277 (all variants) - 6.8x51 20 / 30Rnd black and tan, 50Rnd drum'
        'FA_rearma_M250_680x51' = 'M250 - 6.8x51 100Rnd belt (new well, see CfgWeapons.hpp)'
        'RM277_UW_680x51'       = 'RM277 UW - 6.8x51 underwater 20Rnd'
        'ARC_6x38'              = 'NX / NXC / NX PDW / NXM - 6x38 20Rnd, 30Rnd black and tan, 50Rnd drum'
        'FA_rearma_KACAMG_6x38' = 'KAC AMG - 6x38 150Rnd belt (new well, see CfgWeapons.hpp)'
        'STANAG_556x45'         = 'M27A5 / M27A5 RWK - FA 5.56 on rearma STANAG and PMAG bodies (core FA STANAG mags load too)'
        '46x30_MP7A2'           = 'MP7A2 - 4.6x30 20 / 40Rnd'
        'P320_9x19'             = 'M17 / M18 - 9x19'
    }
    families = @(
        @{ well = 'L7AWM_680x51TVCM'; body = '20Rnd_680x51TVCM_Mag_Blk_F'; count = 20; cal = '680x51'; rounds = @('Mk400_HV','Mk401_AP','Mk402_PAB'); note = '20Rnd 6.8x51 - M7 / RM277' }
        @{ well = 'L7AWM_680x51TVCM'; body = '20Rnd_680x51TVCM_Mag_Tan_F'; count = 20; cal = '680x51'; tag = '_Tan'; label = 'Tan Mag'; rounds = @('Mk400_HV','Mk401_AP','Mk402_PAB'); note = '20Rnd 6.8x51 tan - M7 / RM277' }
        @{ well = 'L7AWM_680x51TVCM'; body = '30Rnd_680x51TVCM_Mag_Blk_F'; count = 30; cal = '680x51'; rounds = @('Mk400_HV','Mk401_AP','Mk402_PAB'); note = '30Rnd 6.8x51 - M7 / RM277' }
        @{ well = 'L7AWM_680x51TVCM'; body = '30Rnd_680x51TVCM_Mag_Tan_F'; count = 30; cal = '680x51'; tag = '_Tan'; label = 'Tan Mag'; rounds = @('Mk400_HV','Mk401_AP','Mk402_PAB'); note = '30Rnd 6.8x51 tan - M7 / RM277' }
        @{ well = 'L7AWM_680x51TVCM'; body = '50Rnd_680x51TVCM_Drum_F'; count = 50; cal = '680x51'; rounds = @('Mk400_HV','Mk401_AP','Mk402_PAB'); note = '50Rnd 6.8x51 drum - RM277 AR' }
        @{ well = 'FA_rearma_M250_680x51'; body = '100Rnd_680x51_Mag'; count = 100; cal = '680x51'; rounds = @('Mk400_HV','Mk401_AP','Mk402_PAB'); note = '100Rnd 6.8x51 belt - M250' }
        @{ well = 'RM277_UW_680x51'; body = '20Rnd_680x51UW_Mag_F'; count = 20; cal = '680x51'; tag = '_UW'; rounds = @('Mk408_UW'); note = '20Rnd 6.8x51 underwater - RM277 UW' }
        @{ well = 'ARC_6x38'; body = '20Rnd_6x38_MAG_F'; count = 20; cal = '6x38'; rounds = @('Mk405_HV','Mk406_AP','Mk407_PAB'); note = '20Rnd 6x38 - NX family' }
        @{ well = 'ARC_6x38'; body = '30Rnd_6x38_PMAG_Blk_F'; count = 30; cal = '6x38'; rounds = @('Mk405_HV','Mk406_AP','Mk407_PAB'); note = '30Rnd 6x38 PMAG - NX family' }
        @{ well = 'ARC_6x38'; body = '30Rnd_6x38_PMAG_Tan_F'; count = 30; cal = '6x38'; tag = '_Tan'; label = 'Tan PMAG'; rounds = @('Mk405_HV','Mk406_AP','Mk407_PAB'); note = '30Rnd 6x38 tan PMAG - NX family' }
        @{ well = 'ARC_6x38'; body = '50Rnd_6x38_PMAG_Blk_F'; count = 50; cal = '6x38'; rounds = @('Mk405_HV','Mk406_AP','Mk407_PAB'); note = '50Rnd 6x38 drum - NX family' }
        @{ well = 'FA_rearma_KACAMG_6x38'; body = '150Rnd_6x38TVCM_F'; count = 150; cal = '6x38'; rounds = @('Mk405_HV','Mk406_AP','Mk407_PAB'); note = '150Rnd 6x38 belt - KAC AMG'; resetTracers = $true }
        @{ well = 'STANAG_556x45'; body = '30Rnd_556x45_Stanag_Blk_F'; count = 30; cal = '556x45'; tag = '_Stanag'; label = 'Black Mag'; rounds = @('Mk327_HV','XM891_CTEP','Mk332_AP','Mk361_PAB','Mk368K_AD','Mk368L_AD'); note = '30Rnd 5.56 STANAG black - M27A5' }
        @{ well = 'STANAG_556x45'; body = '30Rnd_556x45_Stanag_Tan_F'; count = 30; cal = '556x45'; tag = '_StanagTan'; label = 'Tan Mag'; rounds = @('Mk327_HV','XM891_CTEP','Mk332_AP','Mk361_PAB','Mk368K_AD','Mk368L_AD'); note = '30Rnd 5.56 STANAG tan - M27A5' }
        @{ well = 'STANAG_556x45'; body = '30Rnd_556x45_PMAG_Blk_F'; count = 30; cal = '556x45'; tag = '_PMAG'; label = 'Black PMAG'; rounds = @('Mk327_HV','XM891_CTEP','Mk332_AP','Mk361_PAB','Mk368K_AD','Mk368L_AD'); note = '30Rnd 5.56 PMAG black - M27A5' }
        @{ well = 'STANAG_556x45'; body = '30Rnd_556x45_PMAG_Tan_F'; count = 30; cal = '556x45'; tag = '_PMAGTan'; label = 'Tan PMAG'; rounds = @('Mk327_HV','XM891_CTEP','Mk332_AP','Mk361_PAB','Mk368K_AD','Mk368L_AD'); note = '30Rnd 5.56 PMAG tan - M27A5' }
        @{ well = '46x30_MP7A2'; count = 20; cal = '46x30'; rounds = @('Mk432_AP','Mk433_SUB'); note = '20Rnd 4.6x30 - MP7A2 (body data copied from 20Rnd_46x30_AP_Mag_F)'
           copy = @{ parent = 'CA_Magazine'; props = [ordered]@{
               model = '"\us_weapon\smgs\magazine_20rnd.p3d"'; modelSpecial = '"\us_weapon\smgs\mp7_magazine_20rnd_f.p3d"'; modelSpecialIsProxy = '1'
               picture = '"\us_weapon\smgs\data\ui\ui_mp7_20rnd.paa"'; count = '20'; mass = '4' } } }
        @{ well = '46x30_MP7A2'; count = 40; cal = '46x30'; rounds = @('Mk432_AP','Mk433_SUB'); note = '40Rnd 4.6x30 - MP7A2 (body data copied from 40Rnd_46x30_AP_Mag_F)'
           copy = @{ parent = 'CA_Magazine'; props = [ordered]@{
               model = '"\us_weapon\smgs\magazine_40rnd.p3d"'; modelSpecial = '"\us_weapon\smgs\mp7_magazine_40rnd_f.p3d"'; modelSpecialIsProxy = '1'
               picture = '"\us_weapon\smgs\data\ui\ui_mp7_40rnd.paa"'; count = '40'; mass = '8' } } }
        @{ well = 'P320_9x19'; body = '18Rnd_9x19_Mag'; count = 17; cal = '9x19'; rounds = @('Mk422_AP','Mk423_SUB'); note = '17Rnd 9x19 - M17 / M18 (rearma''s "18Rnd" body holds 17)' }
    )
    reuse = $UGL_REUSE
    weaponPatches = @(
        '    class Launcher_Base_F;'
        '    class launch_M72_Loaded: Launcher_Base_F {'
        '        class WeaponSlotsInfo;'
        '    };'
        '    class MMG_02_base_F;'
        '    class LMG_Mk200_F;'
        '    class arifle_SPAR_03_base_F;'
        ''
        '    // The M250 and KAC AMG set no magazineWell, and neither do their vanilla'
        '    // parents (SPMG, Mk200), so FA belts had no well to join. Give each its own.'
        '    // Their stock rearma belts still load through magazines[].'
        '    class M250_F: MMG_02_base_F {'
        '        magazineWell[] = {"FA_rearma_M250_680x51"};'
        '    };'
        '    class KAC_AMG_F: LMG_Mk200_F {'
        '        magazineWell[] = {"FA_rearma_KACAMG_6x38"};'
        '    };'
        '    // The M28A5 sets no magazineWell and the vanilla SPAR-17 it inherits has'
        '    // none either. M14_762x51 is the vanilla 20Rnd 7.62x51 well, which FA''s'
        '    // 7.62 20Rnd mags already join; rearma''s own TVCM mags stay in magazines[].'
        '    class M28A5_base_F: arifle_SPAR_03_base_F {'
        '        magazineWell[] = {"M14_762x51"};'
        '    };'
    )
    launchers = @(
        @{ loaded = 'launch_M72_Loaded'; used = 'launch_M72_Used'; mass = 67; magBody = 'm72a7_mag'; note = 'M72A7 66mm'
           variants = @(
               @{ tag = 'M72A10_TNDM'; name = 'M72A10 TNDM'; ammo = 'FA_R_M72A10_TNDM'; desc = '66mm M72A10 TNDM (2040)<br/>Tandem HEAT - ~350 mm RHA, 300 m' }
               @{ tag = 'M72A11_TBX';  name = 'M72A11 TBX';  ammo = 'FA_R_M72A11_TBX';  desc = '66mm M72A11 TBX (2040)<br/>Thermobaric, room / bunker clearing - 250 m' }
               @{ tag = 'M72A12_PROX'; name = 'M72A12 PROX'; ammo = 'FA_R_M72A12_PROX'; desc = '66mm M72A12 PROX (2040)<br/>C-UAS proximity airburst - scripted fuze, 200 m' }
           ) }
    )
}

# ===========================================================================
$DEFS['rearma_rus'] = @{
    header = @(
        '// ====================================================================='
        '//  REARMA - Russian weapons (rus_weapon)'
        '//  FA rounds on rearma magazine bodies (plain and camo):'
        '//    5.45x39  7N44 HP / 7N48 CT / 7U5 SubAP / 7N55 HEAB : AK35 family, RPK35, RPL 35'
        '//    5.45x39  7N56K / 7N56L AD shot                    : AK35 30Rnd pellet mags'
        '//    5.45x39  PSP-2 UW                                 : ADS35'
        '//    7.62x54R Ball HV / 7N49 AP / 7U18 SUB             : PKP Bullpup, SVCh / SV-98M'
        '//    .338 LM  Mk371 250 / 285 / 300gr, Mk373 PAB       : SVCh / SV-98M'
        '//    9x19     7N53 AP / 7U17 SUB                       : MP-443 / MP-446 S'
        '//    23mm     Shrapnel-AD50 / AD100, Barrikada-AB      : KS-23'
        '//  RPG-26 / RShG-2: FA disposable variants. FA 40mm joins the UGL wells.'
        '//  The RPG-7 (Camo) already takes FA rounds through the vanilla RPG7 well.'
        '// ====================================================================='
    )
    required = @(
        @{ name = 'cba_main' }
        @{ name = 'ace_ballistics' }
        @{ name = 'ghostfa_ammo' }
        @{ name = 'ghostfa_antidrone'; pre = @('HEAB / AB rounds hook the antidrone proximity-fuze registry; Mk373 PAB ammo') }
        @{ name = 'ghostfa_grenade_40mm'; pre = @('Mk380-block 40mm mags joined to the UGL wells') }
        @{ name = 'rus_weapon_rifles'; pre = @('rearma Russian weapon PBOs. skipWhenMissingDependencies self-skips this PBO without rearma.') }
        @{ name = 'rus_weapon_machineguns' }
        @{ name = 'rus_weapon_longrangerifles' }
        @{ name = 'rus_weapon_pistols' }
        @{ name = 'rus_weapon_sg'; pre = @('KS-23') }
        @{ name = 'rus_wepaon_launchers'; pre = @('RPG-26 / RShG-2 - rearma''s patch name is spelled this way') }
    )
    magHeader = @(
        '// FA rounds on rearma''s own Russian magazine bodies, so the arsenal and the'
        '// weapon show the right model. Every magazine joins the rearma well its body'
        '// already lives in (CfgMagazinewells.hpp). Rifle / MG loads carry the full'
        '// tracer set; shot, pistol and underwater loads have none. Drum and belt'
        '// bodies that fire a tracer every third round are reset so tracers only come'
        '// from the _T_ variants.'
    )
    wellHeader = @(
        '// Register the FA magazines into the wells rearma''s Russian weapons use.'
        '// AK_545x39 is also the vanilla 5.45 well, and ghostfa_aegis / e22raf add'
        '// their own FA 5.45 mags to it - same caliber, so they stack cleanly.'
    )
    wellNotes = @{
        'AK_545x39'    = 'AK35 / AK35 K / AK35 DMR / RPK35 / ADS35 - 5.45x39 30 / 45Rnd, 95Rnd drum and 30Rnd pellet mags, plain and camo'
        'ADS_545x39UW' = 'ADS35 - 5.45 underwater 30Rnd'
        'RPL_Ammobelt' = 'RPL 35 - 5.45x39 200Rnd belt (no subsonic belt)'
        'PKP_Ammobelt' = 'PKP Bullpup - 7.62x54R 100Rnd belt'
        '762X54R_SVCh' = 'SVCh / SV-98M - 10Rnd 7.62x54R and .338 LM'
        'Pistol_9x19'  = 'MP-443 / MP-446 S - 9x19'
        '5RND_23mm'    = 'KS-23 - 23mm anti-drone shells'
    }
    families = @(
        @{ well = 'AK_545x39'; body = '30Rnd_545x39_AK35_Mag_F'; count = 30; cal = '545x39'; rounds = @('7N44_HP','7N48_CT','7U5_SubAP','7N55_HEAB'); note = '30Rnd 5.45x39 - AK35 family' }
        @{ well = 'AK_545x39'; body = '30Rnd_545x39_AK35_Camo_Mag_F'; count = 30; cal = '545x39'; tag = '_Camo'; label = 'Camo Mag'; rounds = @('7N44_HP','7N48_CT','7U5_SubAP','7N55_HEAB'); note = '30Rnd 5.45x39 camo - AK35 family' }
        @{ well = 'AK_545x39'; body = '45Rnd_545x39_AK35_Mag_F'; count = 45; cal = '545x39'; rounds = @('7N44_HP','7N48_CT','7U5_SubAP','7N55_HEAB'); note = '45Rnd 5.45x39 - AK35 family' }
        @{ well = 'AK_545x39'; body = '45Rnd_545x39_AK35_Camo_Mag_F'; count = 45; cal = '545x39'; tag = '_Camo'; label = 'Camo Mag'; rounds = @('7N44_HP','7N48_CT','7U5_SubAP','7N55_HEAB'); note = '45Rnd 5.45x39 camo - AK35 family' }
        @{ well = 'AK_545x39'; body = '95Rnd_545x39_RPK35_Drum_F'; count = 95; cal = '545x39'; rounds = @('7N44_HP','7N48_CT','7U5_SubAP','7N55_HEAB'); note = '95Rnd 5.45x39 drum - RPK35'; resetTracers = $true }
        @{ well = 'AK_545x39'; body = '95Rnd_545x39_RPK35_Drum_Camo_F'; count = 95; cal = '545x39'; tag = '_Camo'; label = 'Camo Drum'; rounds = @('7N44_HP','7N48_CT','7U5_SubAP','7N55_HEAB'); note = '95Rnd 5.45x39 camo drum - RPK35'; resetTracers = $true }
        @{ well = 'AK_545x39'; body = '30Rnd_SG_AK35_Mag_F'; count = 30; cal = '545x39'; tag = '_SG'; rounds = @('7N56K_AD','7N56L_AD'); note = '30Rnd 5.45x39 pellet mag - AK35 family' }
        @{ well = 'AK_545x39'; body = '30Rnd_SG_AK35_Camo_Mag_F'; count = 30; cal = '545x39'; tag = '_SGCamo'; label = 'Camo Mag'; rounds = @('7N56K_AD','7N56L_AD'); note = '30Rnd 5.45x39 camo pellet mag - AK35 family' }
        @{ well = 'ADS_545x39UW'; body = '30Rnd_545x39UW_ADS35_Mag_F'; count = 30; cal = '545x39'; tag = '_UW'; rounds = @('PSP2_UW'); note = '30Rnd 5.45 underwater - ADS35' }
        @{ well = 'RPL_Ammobelt'; body = '200Rnd_545x39_RPL_Reload_Tracer_Green_Mag'; count = 200; cal = '545x39'; rounds = @('7N44_HP','7N48_CT','7N55_HEAB'); note = '200Rnd 5.45x39 belt - RPL 35'; resetTracers = $true }
        @{ well = 'PKP_Ammobelt'; body = '100Rnd_762x54_PK_Reload_Tracer_Green_Mag'; count = 100; cal = '762x54R'; rounds = @('762R_HV','7N49_AP'); note = '100Rnd 7.62x54R belt - PKP Bullpup'; resetTracers = $true }
        @{ well = '762X54R_SVCh'; body = '10Rnd_762X54R_SVCh'; count = 10; cal = '762x54R'; rounds = @('762R_HV','7N49_AP','7U18_SUB'); note = '10Rnd 7.62x54R - SVCh / SV-98M' }
        @{ well = '762X54R_SVCh'; body = '10Rnd_338_SVCh'; count = 10; cal = '338'; rounds = @('Mk371_250gr','Mk371_285gr','Mk371_300gr','Mk373_PAB'); note = '10Rnd .338 LM - SVCh / SV-98M' }
        @{ well = 'Pistol_9x19'; body = '17Rnd_9x19_MP443_Mag_F'; count = 17; cal = '9x19'; rounds = @('7N53_AP','7U17_SUB'); note = '17Rnd 9x19 - MP-443 / MP-446 S' }
        @{ well = '5RND_23mm'; body = '5Rnd_23mm_Pellets'; count = 5; cal = '23mm'; rounds = @('ShrapnelAD50','ShrapnelAD100'); note = '5Rnd 23mm shot - KS-23' }
        @{ well = '5RND_23mm'; body = '5Rnd_23mm_Slug'; count = 5; cal = '23mm'; rounds = @('BarrikadaAB'); note = '5Rnd 23mm slug - KS-23' }
    )
    reuse = $UGL_REUSE
    weaponPatches = @(
        '    class Launcher_Base_F;'
        '    class launch_RPG26_Loaded: Launcher_Base_F {'
        '        class WeaponSlotsInfo;'
        '    };'
        '    class launch_RShG2_Loaded: Launcher_Base_F {'
        '        class WeaponSlotsInfo;'
        '    };'
    )
    launchers = @(
        @{ loaded = 'launch_RPG26_Loaded'; used = 'launch_RPG26_Used'; mass = 64; magBody = 'RPG26_M'; note = 'RPG-26 72.5mm'
           variants = @(
               @{ tag = 'RPG26M2_TNDM'; name = 'RPG-26M2 TNDM';  ammo = 'FA_R_RPG26M2_TNDM'; desc = '72.5mm RPG-26M2 TNDM (2040)<br/>Tandem HEAT - ~600 mm RHA, 250 m' }
               @{ tag = 'RPG26_AB26';   name = 'RPG-26 AB PROX'; ammo = 'FA_R_RPG26_AB26';   desc = '72.5mm AB-26 PROX (2040)<br/>C-UAS proximity airburst - scripted fuze, 200 m' }
           ) }
        @{ loaded = 'launch_RShG2_Loaded'; used = 'launch_RShG2_Used'; mass = 88.2; magBody = 'RSHG2_M'; note = 'RShG-2 72.5mm'
           variants = @(
               @{ tag = 'RShG2M2_TBX'; name = 'RShG-2M2 TBX'; ammo = 'FA_R_RShG2M2_TBX'; desc = '72.5mm RShG-2M2 TBX (2040)<br/>Thermobaric, anti-structure / anti-personnel - 250 m' }
           ) }
    )
}

# ===========================================================================
$DEFS['rearma_cn'] = @{
    header = @(
        '// ====================================================================='
        '//  REARMA - Chinese weapons (cn_weapon)'
        '//  FA rounds on rearma magazine bodies (plain, transparent and AP-marked):'
        '//    5.8x42     Ball HV / DBP-39 CT / DBP-40 AP / DBJ-39 PAB : QBZ-191 / 192, QBU-191, QJS-201'
        '//    5.8x42     DBS-39K / DBS-39L AD shot                  : QBZ 30Rnd pellet mags'
        '//    8.6x39     DBP-41 / DBP-42 SubAP / DBJ-41 PAB         : QBW-201'
        '//    .338 LM    Mk371 250 / 285 / 300gr, Mk373 PAB         : QBU-202'
        '//    12.7x108   DBJ-127 PAB (+ FA Mk250 / Mk211 Mod 2)     : QBU-201'
        '//    9x21       DBP-43 AP / DBP-44 SUB                     : QCQ-171, QSZ-92A / B'
        '//    12 gauge   Mk350 / 351 / 352 / 353 / 360 / 363 (+ buck) : QBS-09'
        '//    35mm       DFK / DFP / DFJ / DFB-135, DFZ-13x carriers  : QLU-11'
        '//    QN-205     QN-205T TNDM / QN-205B TBX / QN-205D C-UAS'
        '//  PF-89A / WPF-89: FA disposable variants. FA 40mm joins the UGL wells.'
        '// ====================================================================='
    )
    required = @(
        @{ name = 'cba_main' }
        @{ name = 'ace_ballistics' }
        @{ name = 'ghostfa_ammo' }
        @{ name = 'ghostfa_antidrone'; pre = @('PAB / PROX rounds hook the antidrone proximity-fuze and airburst registries; Mk373 PAB ammo') }
        @{ name = 'ghostfa_grenade_40mm'; pre = @('QLU-11 DFZ carriers join the Mk380 deploy registry; 40mm mags joined to the UGL wells') }
        @{ name = 'cn_weapon'; pre = @(
            'rearma Chinese weapon PBOs (cn_weapon is the rifles PBO). skipWhenMissingDependencies'
            'self-skips this PBO without rearma. The shotguns and smgs PBOs share the cn_weapon_smgs'
            'patch name, so the QCQ-171 and QBS-09 mags copy their body data instead of inheriting.') }
        @{ name = 'cn_weapon_machineguns' }
        @{ name = 'cn_weapon_longrangerifles' }
        @{ name = 'cn_weapon_pistols' }
        @{ name = 'cn_weapon_smgs' }
        @{ name = 'cn_weapon_launchers'; pre = @('QLU-11, QN-205, PF-89A / WPF-89') }
    )
    magHeader = @(
        '// FA rounds on rearma''s own Chinese magazine bodies, so the arsenal and the'
        '// weapon show the right model. Every magazine joins the rearma well its body'
        '// already lives in (CfgMagazinewells.hpp). Rifle / MG loads carry the full'
        '// tracer set; shot, SMG, pistol, grenade and missile loads have none. The'
        '// QJS-201 belt body fires a tracer every third round, so FA''s base belts reset'
        '// that and tracers only come from the _T_ variants.'
    )
    wellHeader = @(
        '// Register the FA magazines into the wells rearma''s Chinese weapons use.'
        '// Some of these well names (CTAR_580x42, Pistol_9x21) may also be used by'
        '// vanilla weapons of the same caliber; the mags would show up there too.'
    )
    wellNotes = @{
        'CTAR_580x42'     = 'QBZ-191 / QBZ-192 / QBU-191 / QJS-201 - 5.8x42 30Rnd plain, transparent, AP-marked and pellet mags'
        '580x42_Ammobelt' = 'QJS-201 - 5.8x42 150Rnd belt'
        'QBW_86x39'       = 'QBW-201 - 8.6x39 20Rnd'
        'QBU202Mag'       = 'QBU-202 - .338 LM 5Rnd'
        'QBU201Mag'       = 'QBU-201 - 12.7x108 5Rnd: DBJ-127 PAB, plus ghostfa_ammo Mk250 / Mk211 Mod 2 on the same vanilla GM6 body'
        'QCQ171Mag'       = 'QCQ-171 - 9x21 30Rnd'
        'Pistol_9x21'     = 'QSZ-92A / QSZ-92B - 9x21 15Rnd'
        '6RND_12GA'       = 'QBS-09 - 12 gauge 6Rnd specialty shells, plus ghostfa_ammo buck / bird'
        'QLU11_35mm'      = 'QLU-11 - 35mm 7Rnd'
        'M_QN205'         = 'QN-205 - 4Rnd mini-missiles'
    }
    families = @(
        @{ well = 'CTAR_580x42'; body = '30Rnd_58x42_Mag_F'; count = 30; cal = '580x42'; rounds = @('580_HV','DBP39_CT','DBP40_AP','DBJ39_PAB'); note = '30Rnd 5.8x42 - QBZ-191 / QBZ-192 / QBU-191 / QJS-201' }
        @{ well = 'CTAR_580x42'; body = '30Rnd_58x42_TP_Mag_F'; count = 30; cal = '580x42'; tag = '_TP'; label = 'Transparent Mag'; rounds = @('580_HV','DBP39_CT','DBP40_AP','DBJ39_PAB'); note = '30Rnd 5.8x42 transparent' }
        @{ well = 'CTAR_580x42'; body = '30Rnd_58x42_AP_Mag_F'; count = 30; cal = '580x42'; tag = '_AP'; label = 'AP Mag'; rounds = @('DBP40_AP'); note = '30Rnd 5.8x42 AP-marked' }
        @{ well = 'CTAR_580x42'; body = '30Rnd_58x42_AP_TP_Mag_F'; count = 30; cal = '580x42'; tag = '_APTP'; label = 'AP Transparent Mag'; rounds = @('DBP40_AP'); note = '30Rnd 5.8x42 AP-marked transparent' }
        @{ well = 'CTAR_580x42'; body = '30Rnd_58x42SG_Mag_F'; count = 30; cal = '580x42'; tag = '_SG'; rounds = @('DBS39K_AD','DBS39L_AD'); note = '30Rnd 5.8x42 pellet mag' }
        @{ well = 'CTAR_580x42'; body = '30Rnd_58x42SG_TP_Mag_F'; count = 30; cal = '580x42'; tag = '_SGTP'; label = 'Transparent Mag'; rounds = @('DBS39K_AD','DBS39L_AD'); note = '30Rnd 5.8x42 transparent pellet mag' }
        @{ well = '580x42_Ammobelt'; body = '150Rnd_58x42_Mag_F'; count = 150; cal = '580x42'; rounds = @('580_HV','DBP39_CT','DBJ39_PAB'); note = '150Rnd 5.8x42 belt - QJS-201'; resetTracers = $true }
        @{ well = 'QBW_86x39'; body = '20Rnd_86x39_Mag_F'; count = 20; cal = '86x39'; rounds = @('DBP41','DBP42_SubAP','DBJ41_PAB'); note = '20Rnd 8.6x39 - QBW-201' }
        @{ well = 'QBU202Mag'; body = '5Rnd_338_SN_Mag'; count = 5; cal = '338'; rounds = @('Mk371_250gr','Mk371_285gr','Mk371_300gr','Mk373_PAB'); note = '5Rnd .338 LM - QBU-202' }
        @{ well = 'QBU201Mag'; body = '5Rnd_127x108_Mag'; count = 5; cal = '127x108'; rounds = @('DBJ127_PAB'); note = '5Rnd 12.7x108 - QBU-201' }
        @{ well = 'QCQ171Mag'; count = 30; cal = '9x21'; rounds = @('DBP43_AP','DBP44_SUB'); v = @{ 'DBP43_AP' = 580; 'DBP44_SUB' = 305 }; note = '30Rnd 9x21 - QCQ-171 (body data copied from 30Rnd_9x21_QCQ171_Mag)'
           copy = @{ parent = 'CA_Magazine'; props = [ordered]@{ picture = '"\A3\weapons_f\data\ui\M_30Rnd_9x21_CA.paa"'; count = '30'; mass = '5' } } }
        @{ well = 'Pistol_9x21'; body = '15Rnd_9x21_Mag'; count = 15; cal = '9x21'; rounds = @('DBP43_AP','DBP44_SUB'); v = @{ 'DBP43_AP' = 470; 'DBP44_SUB' = 295 }; note = '15Rnd 9x21 - QSZ-92A / QSZ-92B' }
        @{ well = '6RND_12GA'; count = 6; cal = '12G'; rounds = @('Mk350_TBS','Mk351_FLE','Mk360_AD'); note = '6Rnd 12 gauge shot - QBS-09 (body data copied from 6Rnd_W12Gauge_Pellets)'
           copy = @{ parent = '2Rnd_12Gauge_Pellets'; props = [ordered]@{ picture = '"\a3\Weapons_F_Enoch\MagazineProxies\data\UI\icon_6Rnd_12Gauge_Pellets_ca.paa"'; count = '6'; mass = '6' } } }
        @{ well = '6RND_12GA'; count = 6; cal = '12G'; rounds = @('Mk352_APS','Mk353_BRC','Mk363_PABS'); note = '6Rnd 12 gauge slug - QBS-09 (body data copied from 6Rnd_W12Gauge_Slug)'
           copy = @{ parent = '2Rnd_12Gauge_Slug'; props = [ordered]@{ picture = '"\a3\Weapons_F_Enoch\MagazineProxies\data\UI\icon_6Rnd_12Gauge_Slug_ca.paa"'; count = '6'; mass = '6' } } }
        @{ well = 'QLU11_35mm'; body = '7Rnd_HE_35mm'; count = 7; cal = '35mm'; rounds = @('DFK135_PAB','DFP135_HEP','DFJ135_DP','DFB135_TBK','DFZ130_NRP','DFZ133_EMP','DFZ134_MSmoke','DFZ135_Decoy','DFZ136_UGS','DFZ138_Jammer'); note = '7Rnd 35mm - QLU-11' }
        @{ well = 'M_QN205'; body = 'QN205_HEAT'; count = 4; cal = 'QN205'; rounds = @('QN205T_TNDM','QN205B_TBX','QN205D_CUAS'); note = '4Rnd mini-missiles - QN-205' }
    )
    reuse = @(
        @{ well = 'QBU201Mag'; mags = @(Get-Matrix '5Rnd_127x108_' @('Mk250','Mk211Mod2') @('Red','Yellow','Green','White','Blue','Orange','IR')) }
        @{ well = '6RND_12GA'; mags = @(Get-Matrix '6Rnd_12g_' @('No0_Buck','No1_Buck','No2_Buck','No3_Buck','No4_Buck','No4_Bird') @()) }
    ) + $UGL_REUSE
    weaponPatches = @(
        '    class launch_RPG32_F;'
        '    // The PF-89A is built on the vanilla RPG-32 and sets no magazineWell, so it'
        '    // inherited the "RPG32" well and listed every RPG-32 rocket (vanilla and FA)'
        '    // as loadable into a single-use tube. Clear it; the WPF-89 inherits the fix.'
        '    class launch_PF89_Loaded: launch_RPG32_F {'
        '        class WeaponSlotsInfo;'
        '        magazineWell[] = {};'
        '    };'
        '    class launch_WPF89_Loaded: launch_PF89_Loaded {'
        '        class WeaponSlotsInfo;'
        '    };'
    )
    launchers = @(
        @{ loaded = 'launch_PF89_Loaded'; used = 'launch_PF89_Used'; mass = 50; magBody = 'M_PF89_F'; note = 'PF-89A 80mm'
           variants = @(
               @{ tag = 'PF89C_TNDM'; name = 'PF-89C TNDM'; ammo = 'FA_R_PF89C_TNDM'; desc = '80mm PF-89C TNDM (2040)<br/>Tandem HEAT - ~675 mm RHA, 300 m' }
               @{ tag = 'PF89K_PROX'; name = 'PF-89K PROX'; ammo = 'FA_R_PF89K_PROX'; desc = '80mm PF-89K PROX (2040)<br/>C-UAS proximity airburst - scripted fuze, 250 m' }
           ) }
        @{ loaded = 'launch_WPF89_Loaded'; used = 'launch_WPF89_Used'; mass = 65; magBody = 'M_WPF89_F'; note = 'WPF-89 80mm'
           variants = @(
               @{ tag = 'WPF89C_TBX'; name = 'WPF-89C TBX'; ammo = 'FA_R_WPF89C_TBX'; desc = '80mm WPF-89C TBX (2040)<br/>Thermobaric, anti-structure / anti-personnel - 300 m' }
           ) }
    )
}

# ===========================================================================
function Add-Unique($list, [string]$item) { if (-not $list.Contains($item)) { $list.Add($item) } }

foreach ($addon in $DEFS.Keys) {
    $d = $DEFS[$addon]
    $dir = Join-Path $addonsDir $addon

    # ---------- CfgMagazines ----------
    $mag = New-Object System.Collections.Generic.List[string]
    $magNames = New-Object System.Collections.Generic.List[string]
    $wells = [ordered]@{}
    $wellArrays = @{}
    $decls = New-Object System.Collections.Generic.List[string]
    foreach ($f in $d.families) { Add-Unique $decls $(if ($f.copy) { $f.copy.parent } else { $f.body }) }
    foreach ($lg in $d.launchers) { Add-Unique $decls $lg.magBody }

    foreach ($l in $d.magHeader) { $mag.Add($l) }
    $mag.Add('class CfgMagazines {')
    foreach ($b in $decls) { $mag.Add(('    class {0};' -f $b)) }

    foreach ($f in $d.families) {
        $parent = if ($f.copy) { $f.copy.parent } else { $f.body }
        $mag.Add('')
        $mag.Add(('    // ===== {0} - {1} {2} =====' -f $f.note, $(if ($f.copy) { 'parent' } else { 'body' }), $parent))
        if (-not $wells.Contains($f.well)) { $wells[$f.well] = New-Object System.Collections.Generic.List[string] }
        foreach ($rk in $f.rounds) {
            $r = $ROUNDS[$rk]
            if (-not $r) { throw "unknown round $rk" }
            $v = if ($f.v -and $f.v.ContainsKey($rk)) { $f.v[$rk] } else { $r.v }
            $tag = if ($r.tag) { $r.tag } else { $rk }
            $cls = 'FA_rearma_{0}Rnd_{1}{2}_{3}' -f $f.count, $f.cal, $f.tag, $tag
            $dn = '[Ghost] {0}Rnd {1}' -f $f.count, $r.name
            if ($f.label) { $dn = '{0} {1}' -f $dn, $f.label }
            $mag.Add(('    class {0}: {1} {{' -f $cls, $parent))
            $mag.Add('        author = QAUTHOR;')
            if ($f.copy) {
                $mag.Add('        scope = 2;')
                $mag.Add('        scopeArsenal = 2;')
                foreach ($kv in $f.copy.props.GetEnumerator()) { $mag.Add(('        {0} = {1};' -f $kv.Key, $kv.Value)) }
            }
            $mag.Add(('        displayName = "{0}";' -f $dn))
            $mag.Add(('        displayNameShort = "{0}";' -f $r.name))
            $mag.Add(('        descriptionShort = "{0}";' -f $r.desc))
            $mag.Add(('        ammo = "{0}";' -f $r.ammo))
            $mag.Add(('        initSpeed = {0};' -f $v))
            if ($r.ad) {
                $mag.Add('        tracersEvery = 0;')
                $mag.Add('        lastRoundsTracer = 0;')
            } elseif ($f.resetTracers) {
                $mag.Add('        tracersEvery = 0;')
            }
            $mag.Add('    };')
            $magNames.Add($cls); $wells[$f.well].Add($cls)
            foreach ($t in @(Get-TracerSet $r.tr)) {
                $tc = '{0}_T_{1}' -f $cls, $t
                $mag.Add(('    class {0}: {1} {{ displayName = "{2} {3} Tracer"; descriptionShort = "{4}"; ammo = "{5}_T_{3}"; tracersEvery = 4; }};' -f $tc, $cls, $dn, $t, $r.desc, $r.ammo))
                $magNames.Add($tc); $wells[$f.well].Add($tc)
            }
        }
    }

    # launcher magazines (one round per tube; internal to the loaded launcher)
    foreach ($lg in $d.launchers) {
        $mag.Add('')
        $mag.Add(('    // ===== {0} - FA disposable variants, body {1} =====' -f $lg.note, $lg.magBody))
        foreach ($lv in $lg.variants) {
            $mcls = 'FA_rearma_{0}' -f $lv.tag
            $mag.Add(('    class {0}: {1} {{' -f $mcls, $lg.magBody))
            $mag.Add('        author = QAUTHOR;')
            $mag.Add('        scope = 1;')
            $mag.Add(('        displayName = "[Ghost] {0}";' -f $lv.name))
            $mag.Add(('        descriptionShort = "{0}";' -f $lv.desc))
            $mag.Add(('        ammo = "{0}";' -f $lv.ammo))
            $mag.Add('    };')
            $magNames.Add($mcls)
        }
    }
    $mag.Add('};')
    Save-Lines (Join-Path $dir 'CfgMagazines.hpp') $mag

    # ---------- CfgMagazineWells ----------
    $reused = 0
    foreach ($ru in $d.reuse) {
        if (-not $wells.Contains($ru.well)) { $wells[$ru.well] = New-Object System.Collections.Generic.List[string] }
        if ($ru.array) {
            $wellArrays[$ru.well] = @{ array = $ru.array; mags = $ru.mags }
        } else {
            foreach ($m in $ru.mags) { $wells[$ru.well].Add($m) }
        }
        $reused += @($ru.mags).Count
    }

    $wl = New-Object System.Collections.Generic.List[string]
    foreach ($l in $d.wellHeader) { $wl.Add($l) }
    $wl.Add('class CfgMagazineWells {')
    $first = $true
    foreach ($w in $wells.Keys) {
        if (-not $first) { $wl.Add('') }
        $first = $false
        $note = if ($d.wellNotes[$w]) { $d.wellNotes[$w] } elseif ($UGL_NOTES[$w]) { $UGL_NOTES[$w] } else { $null }
        if ($note) { $wl.Add(('    // {0}' -f $note)) }
        $wl.Add(('    class {0} {{' -f $w))
        $blocks = @()
        if ($wells[$w].Count) { $blocks += ,@('ADDON', $(if ($w.StartsWith('FA_rearma_')) { '=' } else { '+=' }), $wells[$w]) }
        if ($wellArrays[$w]) { $blocks += ,@($wellArrays[$w].array, '=', $wellArrays[$w].mags) }
        foreach ($blk in $blocks) {
            $wl.Add(('        {0}[] {1} {{' -f $blk[0], $blk[1]))
            $items = @($blk[2])
            for ($i = 0; $i -lt $items.Count; $i++) {
                $sep = if ($i -lt $items.Count - 1) { ',' } else { '' }
                $wl.Add(('            "{0}"{1}' -f $items[$i], $sep))
            }
            $wl.Add('        };')
        }
        $wl.Add('    };')
    }
    $wl.Add('};')
    Save-Lines (Join-Path $dir 'CfgMagazinewells.hpp') $wl

    # ---------- CfgWeapons + CBA_DisposableLaunchers ----------
    $weaponNames = New-Object System.Collections.Generic.List[string]
    $wp = New-Object System.Collections.Generic.List[string]
    $wp.Add('// Weapon patches and the FA disposable-launcher variants. A single-use tube')
    $wp.Add('// can''t take a different round, so each FA round gets its own launcher:')
    $wp.Add('// a _Loaded class holding the round, the arsenal class CBA shows until it')
    $wp.Add('// is fired, and rearma''s own _Used tube (CBA_DisposableLaunchers.hpp).')
    $wp.Add('class CfgWeapons {')
    foreach ($l in $d.weaponPatches) { $wp.Add($l) }
    $cba = New-Object System.Collections.Generic.List[string]
    $cba.Add('// Loaded launcher -> [arsenal launcher, used tube], the format rearma uses.')
    $cba.Add('class CBA_DisposableLaunchers {')
    foreach ($lg in $d.launchers) {
        foreach ($lv in $lg.variants) {
            $arsenal = 'FA_rearma_launch_{0}' -f $lv.tag
            $loaded = '{0}_Loaded' -f $arsenal
            $mcls = 'FA_rearma_{0}' -f $lv.tag
            $wp.Add('')
            $wp.Add(('    // ===== {0} - {1} =====' -f $lg.note, $lv.name))
            $wp.Add(('    class {0}: {1} {{' -f $loaded, $lg.loaded))
            $wp.Add('        author = QAUTHOR;')
            $wp.Add(('        displayName = "[Ghost] {0}";' -f $lv.name))
            $wp.Add(('        descriptionShort = "{0}";' -f $lv.desc))
            $wp.Add(('        baseWeapon = "{0}";' -f $arsenal))
            $wp.Add(('        magazines[] = {{"{0}"}};' -f $mcls))
            $wp.Add('        magazineWell[] = {};')
            $wp.Add('    };')
            $wp.Add(('    class {0}: {1} {{' -f $arsenal, $loaded))
            $wp.Add('        scope = 2;')
            $wp.Add('        scopeArsenal = 2;')
            $wp.Add(('        baseWeapon = "{0}";' -f $arsenal))
            $wp.Add('        magazines[] = {"CBA_FakeLauncherMagazine"};')
            $wp.Add('        class WeaponSlotsInfo: WeaponSlotsInfo {')
            $wp.Add(('            mass = {0};' -f $lg.mass))
            $wp.Add('        };')
            $wp.Add('    };')
            $weaponNames.Add($arsenal); $weaponNames.Add($loaded)
            $cba.Add(('    {0}[] = {{"{1}", "{2}"}};' -f $loaded, $arsenal, $lg.used))
        }
    }
    $wp.Add('};')
    $cba.Add('};')
    Save-Lines (Join-Path $dir 'CfgWeapons.hpp') $wp
    Save-Lines (Join-Path $dir 'CBA_DisposableLaunchers.hpp') $cba

    # ---------- config.cpp ----------
    $ammoNames = @(Select-String -Path (Join-Path $dir 'CfgAmmo.hpp') -Pattern '^\s*class\s+(FA_\w+)\s*:' | ForEach-Object { $_.Matches[0].Groups[1].Value })

    $cfg = New-Object System.Collections.Generic.List[string]
    $cfg.Add('#include "script_component.hpp"')
    $cfg.Add('')
    foreach ($l in $d.header) { $cfg.Add($l) }
    $cfg.Add('// Generated by tools/rearma/gen_rearma.ps1 - edit the script, not this file.')
    $cfg.Add('')
    $cfg.Add('class CfgPatches {')
    $cfg.Add('    class ADDON {')
    $cfg.Add('        name = COMPONENT_NAME;')
    $cfg.Add('        units[] = {};')
    $cfg.Add('        requiredVersion = REQUIRED_VERSION;')
    $cfg.Add('        requiredAddons[] = {')
    for ($i = 0; $i -lt $d.required.Count; $i++) {
        $it = $d.required[$i]
        foreach ($c in @($it.pre)) { if ($c) { $cfg.Add(('            // {0}' -f $c)) } }
        $sep = if ($i -lt $d.required.Count - 1) { ',' } else { '' }
        $cfg.Add(('            "{0}"{1}' -f $it.name, $sep))
    }
    $cfg.Add('        };')
    $cfg.Add('        skipWhenMissingDependencies = 1;')
    $cfg.Add('        author = QAUTHOR;')
    $cfg.Add('        VERSION_CONFIG;')
    foreach ($pair in @(@('weapons', @($weaponNames)), @('ammo', $ammoNames), @('magazines', @($magNames)))) {
        $list = @($pair[1])
        if ($list.Count -eq 0) { $cfg.Add(('        {0}[] = {{}};' -f $pair[0])); continue }
        $cfg.Add(('        {0}[] = {{' -f $pair[0]))
        for ($i = 0; $i -lt $list.Count; $i++) {
            $sep = if ($i -lt $list.Count - 1) { ',' } else { '' }
            $cfg.Add(('            "{0}"{1}' -f $list[$i], $sep))
        }
        $cfg.Add('        };')
    }
    $cfg.Add('    };')
    $cfg.Add('};')
    $cfg.Add('')
    foreach ($inc in 'CfgEventHandlers.hpp', 'CBA_DisposableLaunchers.hpp', 'CfgAmmo.hpp', 'CfgMagazines.hpp', 'CfgMagazinewells.hpp', 'CfgWeapons.hpp') {
        $cfg.Add(('#include "{0}"' -f $inc))
    }
    Save-Lines (Join-Path $dir 'config.cpp') $cfg

    # normalise line endings on the hand-written files too
    foreach ($file in Get-ChildItem $dir -File) {
        $t = [IO.File]::ReadAllText($file.FullName)
        Save-Lines $file.FullName ($t.Replace("`r`n", "`n").TrimEnd("`n") -split "`n")
    }

    '{0}: {1} ammo, {2} magazines, {3} launchers ({4} classes), {5} wells, {6} existing FA mags registered' -f $addon, $ammoNames.Count, $magNames.Count, @($d.launchers | ForEach-Object { $_.variants }).Count, $weaponNames.Count, $wells.Count, $reused
}
'EOL: ' + $(if ($EOL -eq "`r`n") { 'CRLF' } else { 'LF' })
