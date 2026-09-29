# Grandpas Chernarus Factions

DayZ Expansion AI factions for **Chernarus** — vanilla-leaning, built for **PVE content** and **RP**.

Same template as [GrandpasScifiFactions](https://github.com/Rebellpntball/GrandpasScifiFactions) (Namalsk sci-fi), but grounded in CDF / outbreak Chernarus.

Requires: **DayZ Expansion AI**

**Do not load with GrandpasScifiFactions on the same server** (shared class names).

---

## Design goals

| Mode | How factions are meant to be used |
|------|-----------------------------------|
| **PVE** | Clear enemies (Bandits, Rogue Soldiers), safe hubs (Traders, Medics, Police), endgame POI (Tisy Research) |
| **RP** | Distinct identities, not everyone KOS, Militia distrusts Tisy until story says otherwise, Medics/Traders stay neutral-safe |

---

## Player progression (suggested)

1. **Start** → `FreshDayzMilitia`
2. Work with **Cherno Defense** / **Local Police** / **Medics** (order + aid)
3. **Tisy Research** = late northern mystery (Namalsk Athena/NAC mainland offshoot) — trust is earned via RP/quests, not default ally of Militia
4. **Bandits** / **Rogue Soldiers** = PVE hostiles and RP antagonists

---

## Factions & loadout names

| Faction (patrol string) | Guard variant | Loadout | Guard loadout | Role |
|-------------------------|---------------|---------|---------------|------|
| `FreshDayzMilitia` | `FreshDayzMilitiaGuards` | `FreshDayz_Militia_Loadout` | `FreshDayz_Militia_Guard_Loadout` | Starter / player-aligned |
| `ChernoDefense` | `ChernoDefenseGuards` | `Cherno_Defense_Loadout` | `Cherno_Defense_Guard_Loadout` | CDF-style remnant |
| `LocalPolice` | `LocalPoliceGuards` | `Local_Police_Loadout` | `Local_Police_Guard_Loadout` | Towns & checkpoints |
| `Medics` | `MedicsGuards` | `Medics_Loadout` | `Medics_Guard_Loadout` | Hospitals / field aid |
| `TisyResearch` | `TisyResearchGuards` | `Tisy_Research_Loadout` | `Tisy_Research_Guard_Loadout` | **Namalsk offshoot** at Tisy |
| `WastelandSurvivors` | `WastelandSurvivorsGuards` | `Wasteland_Survivors_Loadout` | `Wasteland_Survivors_Guard_Loadout` | Neutral scavs |
| `Bandits` | `BanditsGuards` | `Bandits_Loadout` | `Bandits_Guard_Loadout` | PVE / RP hostiles |
| `RogueSoldiers` | `RogueSoldiersGuards` | `Rogue_Soldiers_Loadout` | `Rogue_Soldiers_Guard_Loadout` | Deserters / hostiles |
| `FreeTraders` | `FreeTradersGuards` | `FreeTraders_Loadout` | `FreeTraders_Guard_Loadout` | Friendly to all |

Patrol JSON: `"Faction": "TisyResearch"` (no `eAIFaction` prefix).

---

## Tisy Research Group (lore)

Mainland contingency / offshoot of **Namalsk Athena / NAC** work.

- Alexei's diary (Namalsk hook) is found **north of Tisy** on Chernarus — soft canon bridge.
- Tisy = Soviet SAM/radar → CDF → outbreak last stand + hazmat/quarantine footprint.
- Residual research, containment, classified data — **not** full sci-fi; hazmat, lab, CDF kit.

**RP:** secretive, useful, dangerous. Militia does **not** auto-trust them.
**PVE:** high-tier northern POI; Guards on HQ / access; patrols on approaches.

---

## Relationships

### Safe hubs (RP + PVE)
- **Free Traders** → everyone
- **Medics** → Militia, Cherno Defense, Free Traders, **Tisy Research**, Civilian, Passive, Guards, Observers
- **Local Police** → Militia, Cherno Defense, Medics, Free Traders, **Tisy Research**, Civilian, Passive, Guards, Observers

### Order / military
- **Fresh Dayz Militia** → Cherno Defense, Local Police, Medics, Free Traders, Civilian, Passive, Guards, Observers, West
  - **Not** auto-friendly to Tisy Research (story choice)
- **Cherno Defense** → Militia, Medics, Free Traders, **Tisy Research**, Local Police, Civilian, Passive, Guards, Observers, West

### Mystery / northern
- **Tisy Research** → self, Medics, Free Traders, Cherno Defense, Local Police, Civilian, Passive, Observers
  - Hostile to Militia by default (until quest/RP or edit)
  - Hostile to Bandits, Rogue Soldiers, Wasteland Survivors

### Neutral scavs
- **Wasteland Survivors** → Civilian, Passive, Observers, Free Traders, Medics

### Hostiles (PVE targets / RP antagonists)
- **Bandits** → Bandits + base **Raiders** only
- **Rogue Soldiers** → Rogue Soldiers + base **Mercenaries** only

### Infected
No immunity. Everyone fights zombies.

---

## RP tips

- **FreeTraders** + **Medics** on trader/hospital AI so hubs don't melt.
- **LocalPoliceGuards** on checkpoints.
- **TisyResearchGuards** only on Tisy HQ / bunker — road patrols as `TisyResearch`.
- Leave Militia vs Tisy hostile so groups can RP investigate / raid / negotiate.
- Bandits + RogueSoldiers = clear antagonists without killing every medic.

## PVE tips

- Coastal / central: Militia, Police, Medics, Traders
- Roads: Bandits, Wasteland Survivors
- Military sites: Cherno Defense or Rogue Soldiers
- Tisy: Research + Guards as endgame AI

Shoryuken: optional via patrol JSON on Bandits / Rogue / Tisy guards.

---

## Packing

- Prefix / folder: `GrandpasChernarusFactions`
- Scripts: `GrandpasChernarusFactions/Scripts/3_Game`
- Depends: `DayZExpansion_AI_Scripts`

## Sister project

Namalsk sci-fi: [GrandpasScifiFactions](https://github.com/Rebellpntball/GrandpasScifiFactions)
