[eAIRegisterFaction(eAIFactionRogueSoldiers)]
class eAIFactionRogueSoldiers : eAIFaction
{
	void eAIFactionRogueSoldiers()
	{
		m_Name = "Rogue Soldiers";
		m_Loadout = "Rogue_Soldiers_Loadout";
		m_IsGuard = false;
	}

	override bool IsFriendly(notnull eAIFaction other)
	{
		if (other.IsInherited(eAIFactionRogueSoldiers)) return true;
		if (other.IsInherited(eAIFactionMercenaries)) return true;
		return false;
	}

	override string GetDisplayName() { return "Rogue Soldiers"; }
};

[eAIRegisterFaction(eAIFactionRogueSoldiersGuards)]
class eAIFactionRogueSoldiersGuards : eAIFactionRogueSoldiers
{
	void eAIFactionRogueSoldiersGuards()
	{
		m_Loadout = "Rogue_Soldiers_Guard_Loadout";
		m_IsGuard = true;
	}

	override string GetDisplayName() { return "Rogue Soldier Guards"; }
};
