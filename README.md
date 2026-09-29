# Grandpas Chernarus Factions

DayZ Expansion AI factions for **Chernarus** with a **vanilla-leaning** feel.

Same template as GrandpasScifiFactions, but no sci-fi / mechs / DNA lore — CDF-style remnants, police, medics, bandits, and **Fresh Dayz Militia** as the starter path.

Requires: **DayZ Expansion AI**

**Do not load this mod and GrandpasScifiFactions on the same server** (shared class names like `eAIFactionFreshDayzMilitia`).

## Player progression (suggested)

1. **Start** → `FreshDayzMilitia` (organized survivors, mil-spec)
2. **Quest path A** → stay Militia / ally **Cherno Defense** (order / military remnant)
3. **Quest path B** → harder survival / different rep (you define quests later)

You handle loadouts and quests yourself.

---

## Custom factions & loadout names

| Faction (patrol string) | Guard variant | Default loadout | Guard loadout | Role |
|-------------------------|---------------|-----------------|---------------|------|
| `FreshDayzMilitia` | `FreshDayzMilitiaGuards` | `FreshDayz_Militia_Loadout` | `FreshDayz_Militia_Guard_Loadout` | **Starter** — player-aligned militia |
| `ChernoDefense` | `ChernoDefenseGuards` | `Cherno_Defense_Loadout` | `Cherno_Defense_Guard_Loadout` | CDF-style military remnant |
| `LocalPolice` | `LocalPoliceGuards` | `Local_Police_Loadout` | `Local_Police_Guard_Loadout` | Town / checkpoint order |
| `Medics` | `MedicsGuards` | `Medics_Loadout` | `Medics_Guard_Loadout` | Field medics / hospital holdouts |
| `WastelandSurvivors` | `WastelandSurvivorsGuards` | `Wasteland_Survivors_Loadout` | `Wasteland_Survivors_Guard_Loadout` | Neutral scav survivors |
| `Bandits` | `BanditsGuards` | `Bandits_Loadout` | `Bandits_Guard_Loadout` | Hostile road gangs |
| `RogueSoldiers` | `RogueSoldiersGuards` | `Rogue_Soldiers_Loadout` | `Rogue_Soldiers_Guard_Loadout` | Deserters / hostile military |
| `FreeTraders` | `FreeTradersGuards` | `FreeTraders_Loadout` | `FreeTraders_Guard_Loadout` | Friendly to all |

In `AIPatrolSettings.json` use the short name **without** `eAIFaction`, e.g. `"Faction": "FreshDayzMilitia"`.

---

## Relationships

### Safe / player-side
- **Fresh Dayz Militia** ↔ Cherno Defense, Medics, Free Traders, Civilian, Passive, Guards, Observers, West
- **Cherno Defense** ↔ Militia, Medics, Free Traders, Civilian, Passive, Guards, Observers, West
- **Local Police** ↔ Militia, Cherno Defense, Medics, Free Traders, Civilian, Passive, Guards, Observers
- **Medics** ↔ Militia, Cherno Defense, Free Traders, Civilian, Passive, Guards, Observers
- **Free Traders** ↔ **everyone**
- **Wasteland Survivors** ↔ Civilian, Passive, Observers, Free Traders, Medics

### Hostile
- **Bandits** ↔ only Bandits + base **Raiders**
- **Rogue Soldiers** ↔ only Rogue Soldiers + base **Mercenaries**

### Base Expansion factions
Not redefined. Mapped for safe defaults so Civilian / Passive / Guards / Observers (and West where it fits) don’t get wiped by friendly AI when something defaults.

East, Raiders, Mercenaries remain hostile to the player-side factions unless you change that later.

---

## Infected

No faction is immune to infected on this pack (vanilla feel). All will fight zombies normally.

---

## Shoryuken

Not set in faction scripts. Use patrol / `AISettings.json`:

```json
"ShoryukenChance": 0.15,
"ShoryukenDamageMultiplier": 1.0
```

Raise on Bandits / Rogue Soldiers if you want nastier fist fights.

---

## Packing

- PBO prefix / folder: `GrandpasChernarusFactions`
- Scripts path: `GrandpasChernarusFactions/Scripts/3_Game`
- Depends on: `DayZExpansion_AI_Scripts`

Create loadout JSONs with the names in the table above.

## Sister project

Sci-fi Namalsk version: [GrandpasScifiFactions](https://github.com/Rebellpntball/GrandpasScifiFactions)
