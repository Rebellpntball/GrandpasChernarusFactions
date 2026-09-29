[eAIRegisterFaction(eAIFactionBandits)]
class eAIFactionBandits : eAIFaction
{
	void eAIFactionBandits()
	{
		m_Name = "Bandits";
		m_Loadout = "Bandits_Loadout";
		m_IsGuard = false;
	}

	override bool IsFriendly(notnull eAIFaction other)
	{
		if (other.IsInherited(eAIFactionBandits)) return true;
		if (other.IsInherited(eAIFactionRaiders)) return true;
		return false;
	}

	override string GetDisplayName() { return "Bandits"; }
};

[eAIRegisterFaction(eAIFactionBanditsGuards)]
class eAIFactionBanditsGuards : eAIFactionBandits
{
	void eAIFactionBanditsGuards()
	{
		m_Loadout = "Bandits_Guard_Loadout";
		m_IsGuard = true;
	}

	override string GetDisplayName() { return "Bandit Guards"; }
};
