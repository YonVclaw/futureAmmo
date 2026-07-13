# Future Ammunition (FA)

**Ghosts of Battle — Future Ammunition Mod** · `@ghostfa`

A lore-driven projection of where small-arms ammunition goes next for Arma 3 + ACE3.
Built on the real M193 → M855A1+ / M80 → M80A1 / 6.8 Fury curves and run forward to
~2040, the rounds sit *beside* vanilla and RHS ammo on the same ballistic curve
instead of breaking it. The pack also adds a layered counter-drone (C-UAS) round
family, 2040 round families for the MAAWS (Carl Gustaf M4), Vorona, RPG-32 and
RPG-7, and a smart 40mm ISR/EW support suite.

Everything dated past 2026 is **fiction** — a plausible projection tuned for gameplay,
not a claim about real ammunition. The historical rounds use real, public figures.

---

## Contents

| Component | Addon | What it adds |
|---|---|---|
| **Core ammo** | `ammo` | Next-gen 5.56 / 7.62 / .300 BLK / 6.5 caseless / .338 rounds (CfgAmmo + CfgMagazines), plus breaching shotgun loads. |
| **Counter-UAS** | `antidrone` | Mk-series PAB proximity-airburst rounds + scripted proximity fuze. |
| **MAAWS 2040** | `maaws` | Eight 84mm rounds for the vanilla MAAWS Mk4 — top-attack HEAT, programmable HE-AB, laser-guided, three C-UAS natures and a VSHORAD missile. |
| **Vorona 2040** | `vorona` | Three missiles for the vanilla Vorona — tandem SACLOS AT, thermobaric airburst, and an IR anti-air/anti-drone seeker. |
| **RPG 2040** | `rpg` | Six rounds for the vanilla RPG-32 and RPG-7 — tandem HEAT, thermobaric and counter-drone airburst per launcher. |
| **40mm support** | `grenade_40mm` | Mk380 block — 9 smart 40mm ISR/EW rounds + the shared deployment framework. |
| **Core / framework** | `main` | CfgPatches root, Eden module categories, version & macros. |
| **Weapon-mod compat** | `sps` `jca` `ef` `rhs` `aegis` `atlas` `lot` | Register FA magazines into third-party weapon mods' magazine wells. |
| **C-UAS compat** | `antidrone_ef` `antidrone_jca` `antidrone_rhs` | Register the PAB rounds into those mods' magazine wells. |

The compatibility addons set `skipWhenMissingDependencies = 1`, so they load only
when their parent weapon mod is present and stay dormant otherwise.

---

## 1. Next-gen ballistics

Full ACE Advanced Ballistics data on every round — per-barrel muzzle velocities,
drag models, and tuned penetration.

- **5.56×45** — `Mk327 HV` (hybrid-case hypervelocity, 70gr tungsten) and `XM891 CTEP`
  (cased-telescoped 2-stage tungsten, penetration pushed ~halfway to the 6.8).
- **7.62×51** — `M80A2 HV` (hybrid-case 135gr tungsten EPR) and `XM751 CTEP`
  (cased-telescoped 140gr 2-stage tungsten, the long-range / anti-armor load).
- **.300 BLK (full family)** — `Mk335/336/337` supersonic (110/125/150gr),
  `Mk342/343` subsonic (190/220gr), `Mk341 SUB-AP` and `XM345 SUB-AP2` tungsten
  subsonic for quiet barrier defeat.
- **6.5×39 caseless** — `6.5 Caseless EPR`, tungsten-cored, requires a caseless-capable
  rifle (MX family) by design.
- **.338** — `Mk371 LRP` (.338 Lapua Magnum, precision) and `Mk372 MMG`
  (.338 Norma Magnum, belt-fed sustained fire).

Pressure is modeled conservatively (cased rounds plateau in the low-to-mid 80s kpsi,
reflecting the real material ceiling of brass-and-steel cases). Subsonic stays
subsonic — the .300 BLK subsonic loads are velocity-capped under Mach 1 and improve
through projectile mass and tungsten, not pressure.

## 2. Counter-UAS — PAB family

Small drones are tiny, fast targets with a terrible single-bullet hit chance. The PAB
rounds solve it with area effect; a lightweight per-frame fuze script detonates the
airburst rounds near a UAV.

| Round | Caliber | Platform | Mechanism |
|---|---|---|---|
| Mk360 AD | 12 ga | shotgun | Dense spread — **config only**, no script |
| Mk361 PAB | 5.56 | rifle | Proximity airburst (script) |
| Mk362 PAB | 7.62 | rifle / MG | Proximity airburst (script) |
| Mk364 PAB | 40mm UGL | grenade launcher | Programmable airburst (ACE menu / CBA keybind sets burst range) + HE on impact |
| Mk366 PAB | .50 / 12.7×99 | HMG | Heavy proximity airburst |
| Mk371 PAB | .338 | precision rifle | Precision proximity airburst |

Targets UAVs only by default (`unitIsUAV`) — manned aircraft are ignored — with
MP-safe damage handling (local if the drone is local, otherwise routed to its owner
via `remoteExec`). If the script isn't loaded, PAB rounds fly as normal ball.

## 3. MAAWS — Carl Gustaf M4, 2040 family

Eight 84mm natures that feed the **vanilla MAAWS Mk4** (all camo and rail
variants) through a new magazine well. The three vanilla rounds stay untouched;
these sit beside them. The launcher is patched to allow lock-on, but only the
seeker rounds carry lock parameters — with vanilla or unguided rounds loaded it
behaves exactly as before.

| Round | Role | Guidance | Reach |
|---|---|---|---|
| HEAT 758 TT | Primary anti-tank, top-attack | Fire-and-forget (Direct / TopDown) | 1200 m · ~850mm RHA |
| HEAT 665 CS | Heavy AT, confined-space | Unguided | 500 m · ~650mm RHA |
| HE 448 AB | Anti-personnel / anti-materiel | Unguided, programmable airburst | 1500 m |
| GM 841 | Precision vs movers / bunkers | Semi-active laser homing | 2000 m |
| ADM 484 PROX | C-UAS, single drone | Unguided, proximity fuze (script) | 600 m |
| ADM 486 CAN | C-UAS, close swarm | Tungsten flechette canister (config only) | 150 m |
| ADM 487 SEEK | C-UAS, fire-and-forget | IR seeker vs a locked drone | 1000 m |
| AAM 517 SR | VSHORAD — helos, low/slow air | IR lock-on | 1750 m (half the Titan envelope, by design) |

HE 448 AB shares the Mk364 programmable-airburst dial (ACE self-menu / CBA
keybind); ADM 484 registers into the same scripted proximity fuze as the PAB
bullets. Everything past 2026 is fiction — the baselines are the real Carl
Gustaf M4 public figures.

### Lower tiers — Vorona, RPG-32, RPG-7

Scaled-down companions to the MAAWS set, tiered **RPG-7 < RPG-32 < Vorona <
MAAWS**. The Vorona keeps its native SACLOS manual guidance and gains lock-on
only for the Osa (its built-in Titan lock tones do the searching/locked beep);
both RPGs stay unguided and feed straight from the vanilla `RPG32` / `RPG7`
magazine wells — no launcher changes at all.

| Round | Launcher | Role | Reach |
|---|---|---|---|
| 9M135M Grom | Vorona | Tandem SACLOS anti-tank | 1800 m · ~800mm RHA |
| 9M135F-2 Oskol | Vorona | Thermobaric + prefrag, programmable airburst | 1600 m |
| 9M135PVO Osa | Vorona | IR lock-on — helos, low/slow air, drones | 1200 m |
| PG-32V-2 | RPG-32 | Tandem HEAT | 500 m · ~700mm RHA |
| TBG-32V-2 | RPG-32 | Thermobaric | 400 m |
| AB-32 PROX | RPG-32 | C-UAS proximity airburst (script) | 300 m |
| PG-7VR-2 | RPG-7 | Tandem HEAT — cheapest tandem in the set | 330 m · ~550mm RHA |
| TBG-7V-2 | RPG-7 | Thermobaric room-clearer | 200 m |
| AB-7 PROX | RPG-7 | C-UAS proximity airburst (script) | 200 m |

The Oskol shares the Mk364 airburst dial; the AB rounds register into the PAB
scripted proximity fuze.

## 4. 40mm ISR / EW support — Mk380 block

Nine smart 40mm rounds fired from any UGL. The shells are inert carriers; a shared
deployment framework matches the fired round against a registry, then deploys the
payload at **apex** (air assets) or on **landing** (everything else).

All Mk380-block rounds are non-explosive: they pop a HuntIR-style parachute at
apex and float the payload down, deploying the effect where it lands.

| Round | Deploy | What it does |
|---|---|---|
| Mk380 NR-P | chute | Network relay; extends the squad data-link |
| Mk383 EMP-M | chute | Soft-kill EW burst — downs drones, white-outs optics, jams comms |
| Mk384 M-SMK | chute | Multispectral (visual + thermal) smoke screen |
| Mk385 DCOY | chute | IR/RF decoy that baits loitering munitions |
| Mk386 UGS | chute | Unattended ground sensor; persistent contact picket |
| Mk388 JAM | chute | Area comms/GNSS jammer; denies enemy drones in a bubble |

EMP-M (soft-kill) and the PAB rounds (hard-kill) give a layered counter-drone
doctrine. Tuning (deploy mode, effect, lifetime, radius) lives in a single
registry table per round.

---

## Requirements

- **CBA_A3** — required for everything.
- **ACE3** (`ace_ballistics`) with **Advanced Ballistics ENABLED** — otherwise the
  per-barrel velocity/drag/penetration tables don't apply.
- Arma 3 v2.14+ (`requiredVersion`).
- *Optional:* ACRE2 / TFAR / Drongo EW deepen the relay and jamming rounds. Without
  them those rounds still run a visible local effect via built-in fallbacks.
- *Optional:* the weapon mods backing the compat addons (RHS, SPS, JCA, EF, Aegis,
  Atlas, LOT) — only needed if you want FA mags in those weapons.

## Installation

Subscribe / drop `@ghostfa` into your Arma 3 mod folder and enable it alongside
CBA_A3 and ACE3. FA rounds appear in the Arsenal as magazines (e.g. *"30Rnd 5.56
Mk327 HV"*) and feed compatible weapons through their magazine wells.

## Building from source

This is a [HEMTT](https://hemtt.dev) project (see [.hemtt/project.toml](.hemtt/project.toml)).

```sh
hemtt build      # dev build into .hemttout/
hemtt release    # packed, signed release
```

Layout follows the ACE3 component convention: each `addons/<component>/` has a
`config.cpp`, `script_component.hpp`, `Cfg*.hpp` definitions, and (where scripted)
a `functions/` folder wired through `XEH_PREP.hpp` / `XEH_preInit.sqf`. Shared
macros and the version live in [addons/main/](addons/main/).

## Notes & known limitations

- **Magazine compatibility** — 5.56 and .300 BLK feed from STANAG; 7.62 from standard
  7.62 mags; .338 LM from the MAR-10 mag, .338 NM from the SPMG belt; the 6.5 caseless
  needs a caseless-capable rifle (by design).
- **No dedicated weapon classes yet** — custom barrel/twist/dispersion and magazine-well
  gating aren't included, so high-pressure rounds will feed any compatible rifle. Use
  loadout discipline or an arsenal whitelist to keep them on "rated" weapons.
- **PAB proximity fuze** is a per-frame scripted approximation — very small, fast drones
  can occasionally be clipped past before the bubble registers (bump the radius if so).
- **Some 40mm support rounds** use stock map props as placeholder models, and the
  relay/jammer RF behaviour is abstracted unless a comms/EW mod is loaded.
- **MAAWS seeker rounds** approximate their seekers with the Titan lock system
  (the launcher base class is patched to `canLock = 2`). The IR seekers can't
  filter drone-vs-manned targets the way the PAB script does, and very small
  drones may not produce enough IR signature to lock at all.

## Realism disclaimer

Historical rounds (M193 through M855A1+, M80/M80A1, the 6.8 Fury reference) use real,
public figures. Everything dated past 2026 is fiction tuned for game balance. ACE
values are illustrative starting points — playtest and tune. The 6.5 caseless pressure
is a placeholder, since no real-world figure exists.

---

**Author:** Ghosts of Battle · <https://www.ghostsofbattle.com/>
