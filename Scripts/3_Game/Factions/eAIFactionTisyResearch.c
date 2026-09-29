[eAIRegisterFaction(eAIFactionTisyResearch)]
class eAIFactionTisyResearch : eAIFaction
{
	void eAIFactionTisyResearch()
	{
		m_Name = "Tisy Research";
		m_Loadout = "Tisy_Research_Loadout";
		m_IsGuard = false;
	}

	override bool IsFriendly(notnull eAIFaction other)
	{
		if (other.IsInherited(eAIFactionTisyResearch)) return true;
		if (other.IsInherited(eAIFactionMedics)) return true;
		if (other.IsInherited(eAIFactionFreeTraders)) return true;
		if (other.IsInherited(eAIFactionCivilian)) return true;
		if (other.IsInherited(eAIFactionPassive)) return true;
		if (other.IsInherited(eAIFactionObservers)) return true;
		if (other.IsInherited(eAIFactionChernoDefense)) return true;
		if (other.IsInherited(eAIFactionLocalPolice)) return true;
		return false;
	}

	override string GetDisplayName() { return "Tisy Research Group"; }
};

[eAIRegisterFaction(eAIFactionTisyResearchGuards)]
class eAIFactionTisyResearchGuards : eAIFactionTisyResearch
{
	void eAIFactionTisyResearchGuards()
	{
		m_Loadout = "Tisy_Research_Guard_Loadout";
		m_IsGuard = true;
	}

	override string GetDisplayName() { return "Tisy Research Guards"; }
};
