# futureAmmo → faction mod handoff

Everything a faction mod needs to drive FA (`@ghostfa`). Written for the faction
builder described in `ghost/docs/faction_builder_handoff.md`.

Requires `ghostfa_main`. Nothing here needs FA itself to be edited.

---

## 1. Two ways to set faction performance — pick per use case

### A. Tiered ammo — issue different rounds (recommended)

Tier decides **which round a unit is issued**, not a percentage applied to the
same round. This is how every other tier mechanic in the builder already works
(caliber gates, attachment ladder, NVG ladder, drone loadout), it needs no new
classes, it costs nothing at runtime, and it is per-faction by construction.

The round tables in §3 are the data for this — pick a family per tier and put
the classnames in the pool file. No FA changes, no script hooks.

Important: a runtime scalar **cannot** change ballistics. Velocity, penetration
(`caliber`), drag and `hit` are engine-side and config-only. Anything that must
actually shoot differently has to be a different ammo class.

### B. Config setting overrides — pin FA's global knobs

For the handful of FA behaviours that are scripted rather than config-baked
(airburst radii, proximity fuze, breaching). A faction mod declares values in
its own config and they replace the CBA settings mod-wide. Anyone not running
that mod keeps full CBA control.

**These are global, not per-faction.** They apply to every side including the
players. Use them for mission-wide behaviour, not to differentiate factions.

---

## 2. The setting override block

Add to your faction mod's `config.cpp`. The inner class name is yours — make it
unique to your mod.

```cpp
class GhostFA_SettingOverrides {
    class MyFactionPack {
        priority = 10;                              // optional, default 0 - highest wins a clash
        lock     = 1;                               // optional, default 1 - see below

        ghostfa_mediumcaliber_enableAirburst = 1;
        ghostfa_antidrone_damageMultiplier   = 1.25;
        ghostfa_ammo_enableBreaching         = 0;   // checkbox: 0 or 1
    };
};
```

Declare only what you want pinned; anything omitted stays under CBA control.
`ghostfa_main` already declares the empty `GhostFA_SettingOverrides` root, so
your mod just merges into it.

### Available settings

| Setting | Type | Range / default |
|---|---|---|
| `ghostfa_ammo_enableBreaching` | CHECKBOX | default on |
| `ghostfa_ammo_debugBreaching` | CHECKBOX | default off |
| `ghostfa_antidrone_triggerRadiusMultiplier` | SLIDER | 0.25–2.0, default 1.0 |
| `ghostfa_antidrone_lethalRadiusMultiplier` | SLIDER | 0.25–2.0, default 1.0 |
| `ghostfa_antidrone_damageMultiplier` | SLIDER | 0.25–2.0, default 1.0 |
| `ghostfa_mediumcaliber_enableAirburst` | CHECKBOX | default on |
| `ghostfa_mediumcaliber_cuasCeiling` | SLIDER | 0.75–1.5, default 1.40 |
| `ghostfa_mediumcaliber_factionScaling` | CHECKBOX | default on — **being removed, see §5** |
| `ghostfa_mediumcaliber_greenFraction` | SLIDER | 0.5–1.0, default 0.85 — **being removed** |
| `ghostfa_mediumcaliber_redFraction` | SLIDER | 0.5–1.0, default 0.75 — **being removed** |

### Values and behaviour

- `CHECKBOX` → `0` / `1` (`"true"` / `"false"` also accepted)
- `SLIDER` → a number; **not** clamped to the slider range, you may exceed it
- `LIST` → the index as a number · `EDITBOX` → `"a string"` · `COLOR` → `{1,0,0,1}`
- Names are case-insensitive.
- `priority` — higher wins if two loaded mods pin the same setting.
- `lock = 1` (default) — re-asserted whenever the setting changes, so a player
  editing the CBA menu has no effect. `lock = 0` — applied at mission start as a
  new default, player edits stick.

The CBA menu still *displays* CBA's own value, not the override, so a locked
setting looks editable. Each applied override logs to the RPT:

```
[Ghosts of Battle] (main) INFO: Setting 'ghostfa_antidrone_damageMultiplier' overridden to 1.25 by 'MyFactionPack'
```

A name that matches no registered setting is skipped with an `ERROR` line rather
than failing the load.

Applied locally on each machine from each machine's own config, so all clients
running the same mod set resolve identically.

---

## 3. Small-arms rounds by caliber

`hit` = damage · `cal` = penetration (`caliber`) · `v` = `typicalSpeed` m/s.
Vanilla shown for reference. Every round also has
`_T_Red/Yellow/Green/White/Blue/Orange/IR` tracer-colour variants at identical
performance — issue the base class unless you want a specific tracer.

### 5.56×45 — vanilla `B_556x45_Ball` hit 9

| Class | Role | hit | cal | v |
|---|---|---:|---:|---:|
| `FA_b_556_Mk327_HV` | NATO hypervelocity | 10 | 2.4 | 960 |
| `FA_b_556_XM891_CTEP` | NATO cased-telescoped | 11 | 2.6 | 980 |
| `FA_b_556_Mk332_AP` | NATO armour-piercing | 10 | 3.0 | 940 |
| `FA_i_556_AF556_HV` | AAF hypervelocity | 9 | 2.3 | 910 |
| `FA_i_556_AF556C_CT` | AAF cased-telescoped | 10 | 2.5 | 930 |
| `FA_i_556_AF556P_AP` | AAF armour-piercing | 9 | 2.85 | 895 |

### 7.62×51 — vanilla `B_762x51_Ball` hit 11.6

| Class | Role | hit | cal | v |
|---|---|---:|---:|---:|
| `FA_b_762_M80A2_HV` | NATO hypervelocity | 14 | 3.0 | 940 |
| `FA_b_762_XM751_CTEP` | NATO cased-telescoped | 15 | 3.4 | 960 |
| `FA_i_762_AF762_HV` | AAF hypervelocity | 13 | 2.85 | 895 |
| `FA_i_762_AF762C_CT` | AAF cased-telescoped | 14 | 3.2 | 910 |
| `FA_i_762_AF762P_AP` | AAF armour-piercing | 14 | 3.6 | 895 |

### 6.5×39 — vanilla `B_65x39_Caseless` hit 10

| Class | Role | hit | cal | v |
|---|---|---:|---:|---:|
| `FA_b_ammo_65g_Mk328` | NATO hypervelocity | 11 | 2.8 | 965 |
| `FA_b_ammo_65g_XM892` | NATO cased-telescoped | 12 | 3.0 | 970 |
| `FA_b_65_Mk331_AP` | NATO armour-piercing | 11 | 3.3 | 945 |
| `FA_o_65_Type41_EPR` | CSAT general purpose | 10 | 2.4 | 855 |
| `FA_o_65_Type42_CT` | CSAT cased-telescoped | 11 | 2.7 | 873 |
| `FA_o_65_Type43_AP` | CSAT armour-piercing | 10 | 3.0 | 851 |

Caseless 6.5 is gated WEST t3+ per the builder's caliber rules; the cased
variants are t2+.

### 6.2×40 caseless (CSAT next-gen) — inherits `B_65x39_Caseless`, vanilla hit 10

| Class | Role | hit | cal | v |
|---|---|---:|---:|---:|
| `FA_o_ammo_62_DBP25` | general purpose | 11 | 2.7 | 930 |
| `FA_o_ammo_62_DBP26_AP` | armour-piercing | 11 | 3.3 | 900 |
| `FA_o_ammo_62_DBP88B` | heavy / DMR load | 12 | 3.1 | 860 |
| `FA_o_ammo_62_DBJ25_PAB` | proximity airburst (C-UAS) | 6 | — | — |

`DBJ25_PAB` is a counter-drone round, not a ball round — its low `hit` is
correct, the damage comes from the scripted airburst.

### Rearma calibers — `rearma_us` / `rearma_rus` / `rearma_cn`

These load only when rearma's weapon packs are present. Rifle and MG rounds
carry the usual tracer variants; pistol, PDW, shot and underwater rounds have
none.

| Class | Role | hit | cal | v |
|---|---|---:|---:|---:|
| `FA_b_680_Mk400_HV` | 6.8×51 NATO hybrid-case GP | 14 | 3.0 | 950 |
| `FA_b_680_Mk401_AP` | 6.8×51 NATO armour-piercing | 14 | 3.6 | 925 |
| `FA_b_6x38_Mk405_HV` | 6×38 NATO hybrid-case GP | 11 | 2.6 | 930 |
| `FA_b_6x38_Mk406_AP` | 6×38 NATO armour-piercing | 11 | 3.2 | 905 |
| `FA_b_46x30_Mk432_AP` | 4.6×30 PDW armour-piercing | 9 | 2.8 | 725 |
| `FA_b_46x30_Mk433_SUB` | 4.6×30 PDW subsonic | 9 | 1.0 | 300 |
| `FA_b_9x19_Mk422_AP` | 9×19 NATO pistol AP | 8 | 1.8 | 400 |
| `FA_b_9x19_Mk423_SUB` | 9×19 NATO pistol subsonic | 9 | 0.9 | 300 |
| `FA_o_762x54R_7N49_AP` | 7.62×54R armour-piercing | 15 | 3.8 | 830 |
| `FA_o_762x54R_7U18_SUB` | 7.62×54R subsonic | 13 | 1.8 | 310 |
| `FA_o_9x19_7N53_AP` | 9×19 Russian pistol AP | 9 | 2.0 | 470 |
| `FA_o_9x19_7U17_SUB` | 9×19 Russian pistol subsonic | 9 | 1.0 | 295 |
| `FA_o_86x39_DBP41` | 8.6×39 PLA supersonic | 14 | 2.6 | 690 |
| `FA_o_86x39_DBP42_SubAP` | 8.6×39 PLA subsonic AP | 15 | 2.2 | 315 |
| `FA_o_9x21_DBP43_AP` | 9×21 PLA AP | 9 | 2.0 | 560 |
| `FA_o_9x21_DBP44_SUB` | 9×21 PLA subsonic | 9 | 1.0 | 300 |

Counter-drone rounds from the same addons (low `hit` is correct — the kill is
the scripted fuze or the shot pattern): `FA_b_680_Mk402_PAB`,
`FA_b_6x38_Mk407_PAB`, `FA_o_545x39_7N55_HEAB`, `FA_o_545x39_7N56K_AD` /
`FA_o_545x39_7N56L_AD`, `FA_o_580_DBJ39_PAB`, `FA_o_580_DBS39K_AD` /
`FA_o_580_DBS39L_AD`, `FA_o_86x39_DBJ41_PAB`, `FA_o_127x108_DBJ127_PAB`,
`FA_o_23mm_ShrapnelAD50` / `FA_o_23mm_ShrapnelAD100`, `FA_o_23mm_BarrikadaAB`.

Other calibers (5.45, 7.62×39, .300 BLK, .338, .408, 12.7, 12G, 40mm) are in
`docs/mag_index.md` and the per-addon `CfgAmmo.hpp` files.

---

## 4. Changes in this pass — re-check anything you calibrated against

**5.56 and 6.2 damage rebalanced.** Both sat *below* the vanilla rounds they
inherit from while 7.62 and 6.5 sat above; 6.2 was also below CSAT's own 6.5
despite being the newer round, so converting a unit to 6.2 made it weaker.
5.56 went 8 → 9/10/11 by nature, 6.2 went 8/8/9 → 11/11/12. Tables in §3 are
current.

**Proximity-fuze tunnelling fixed.** The C-UAS and airburst trackers tested a
sphere at the frame position while the round flew ~18 m per frame against a
10–12 m trigger radius, so rounds stepped over targets; when they did trigger,
the burst landed far enough past the target that the damage falloff returned
zero. Both now sweep the segment flown since the last frame and burst at the
closest point of approach. If C-UAS rounds felt unreliable before, that was why.

---

## 5. Not built yet — do not design against these

**Side-based effectiveness is being removed.** `ghostfa_mediumcaliber_factionScaling`,
`greenFraction` and `redFraction` currently scale scripted airburst values by the
firer's side (WEST hardcoded to 1.0, with no setting of its own). They are going
away, to be replaced by a per-unit variable a faction mod sets directly. Don't
build against the three settings marked in §2; the replacement interface will be
documented here once it exists.

**`maincaliber` APFSDS penetration is wrong.** `FA_Sh_105mm_APFSDS` (caliber 22)
out-penetrates both `FA_Sh_120mm_APFSDS` (19.5) and `FA_Sh_125mm_APFSDS` (20.15),
and all three sit roughly 45% below the vanilla rounds they replace. Unresolved —
don't tier vehicle main guns against these numbers yet.
