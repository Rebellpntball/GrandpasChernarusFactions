[eAIRegisterFaction(eAIFactionChernoDefense)]
class eAIFactionChernoDefense : eAIFaction
{
	void eAIFactionChernoDefense()
	{
		m_Name = "Cherno Defense";
		m_Loadout = "Cherno_Defense_Loadout";
		m_IsGuard = false;
	}

	override bool IsFriendly(notnull eAIFaction other)
	{
		if (other.IsInherited(eAIFactionChernoDefense)) return true;
		if (other.IsInherited(eAIFactionFreshDayzMilitia)) return true;
		if (other.IsInherited(eAIFactionMedics)) return true;
		if (other.IsInherited(eAIFactionFreeTraders)) return true;
		if (other.IsInherited(eAIFactionCivilian)) return true;
		if (other.IsInherited(eAIFactionPassive)) return true;
		if (other.IsInherited(eAIFactionGuards)) return true;
		if (other.IsInherited(eAIFactionObservers)) return true;
		if (other.IsInherited(eAIFactionWest)) return true;
		return false;
	}

	override string GetDisplayName() { return "Cherno Defense"; }
};

[eAIRegisterFaction(eAIFactionChernoDefenseGuards)]
class eAIFactionChernoDefenseGuards : eAIFactionChernoDefense
{
	void eAIFactionChernoDefenseGuards()
	{
		m_Loadout = "Cherno_Defense_Guard_Loadout";
		m_IsGuard = true;
	}

	override string GetDisplayName() { return "Cherno Defense Guards"; }
};
