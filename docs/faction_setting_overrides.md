# Faction-mod setting overrides

Every FA CBA setting can be pinned from another mod's config. Players who *don't*
run that mod keep full CBA control exactly as before; as soon as the mod is loaded
its values win, with no scripting and no edits to FA itself.

Use it when a faction pack ships a specific balance point — e.g. your OPFOR pack
should always run at a 0.95 fraction instead of the 0.75 CBA default.

## Declaring an override

Add this to your faction mod's `config.cpp`. The class name inside
`GhostFA_SettingOverrides` is yours to pick — just make it unique to your mod so
two mods can't collide.

```cpp
class GhostFA_SettingOverrides {
    class MyFactionPack {
        priority = 10;                              // optional, default 0 — highest wins a clash
        lock     = 1;                               // optional, default 1 — see "lock" below

        // Medium caliber (30/35/50mm programmable rounds)
        ghostfa_mediumcaliber_factionScaling = 1;   // CHECKBOX: 0 or 1
        ghostfa_mediumcaliber_greenFraction  = 0.90;
        ghostfa_mediumcaliber_redFraction    = 0.95;
        ghostfa_mediumcaliber_cuasCeiling    = 1.10;
        ghostfa_mediumcaliber_enableAirburst = 1;

        // Counter-UAS PAB rounds
        ghostfa_antidrone_triggerRadiusMultiplier = 1.25;
        ghostfa_antidrone_lethalRadiusMultiplier  = 1.25;
        ghostfa_antidrone_damageMultiplier        = 1.40;

        // Core ammo
        ghostfa_ammo_enableBreaching = 1;
        ghostfa_ammo_debugBreaching  = 0;
    };
};
```

Declare only the settings you actually want to pin — anything you leave out stays
under CBA control. `ghostfa_main` already declares the empty
`GhostFA_SettingOverrides` root, so your mod just merges into it. Your mod does
**not** need to list `ghostfa_main` in `requiredAddons` for this to work, though
doing so is a sensible way to state the dependency.

## Values

| Setting type | Write it as | Notes |
|---|---|---|
| `CHECKBOX` | `0` / `1` | Coerced to a boolean. `"true"` / `"false"` strings also work. |
| `SLIDER` | a number | Not clamped to the slider's min/max — you can deliberately go past it. |
| `LIST` | the index, as a number | |
| `EDITBOX` | `"a string"` | |
| `COLOR` | `{1, 0, 0, 1}` | Read as an array. |

Names are case-insensitive.

## `priority` and `lock`

- **`priority`** (number, default `0`) — if two loaded mods override the same
  setting, the higher priority wins. Equal priorities resolve in config load order.
- **`lock`** (`0`/`1`, default `1`) — with `lock = 1` the value is re-asserted every
  time the setting is refreshed, so a player changing the slider in the CBA menu
  has no effect. With `lock = 0` your value is applied at mission start as a new
  default, and a player editing it in the CBA menu sticks.

Note that the CBA menu still *displays* CBA's own value, not the override — a
locked setting will look editable even though the effective value is yours. Each
override is logged to the RPT on apply:

```
[Ghosts of Battle] (main) INFO: Setting 'ghostfa_mediumcaliber_redFraction' overridden to 0.95 by 'MyFactionPack'
```

An override naming a setting that isn't registered (typo, or the module isn't
loaded) is skipped with an `ERROR` line in the RPT rather than failing the load.

## How it works

`ghostfa_main` builds the override table once from config, then applies it on
`CBA_settingsInitialized` and again from each setting's own change script. Applying
is a plain `missionNamespace setVariable` on the setting variable, so it's local to
each machine — every client resolves the same values from its own copy of the mod.
