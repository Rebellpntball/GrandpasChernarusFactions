[eAIRegisterFaction(eAIFactionMedics)]
class eAIFactionMedics : eAIFaction
{
	void eAIFactionMedics()
	{
		m_Name = "Medics";
		m_Loadout = "Medics_Loadout";
		m_IsGuard = false;
	}

	override bool IsFriendly(notnull eAIFaction other)
	{
		if (other.IsInherited(eAIFactionMedics)) return true;
		if (other.IsInherited(eAIFactionFreshDayzMilitia)) return true;
		if (other.IsInherited(eAIFactionChernoDefense)) return true;
		if (other.IsInherited(eAIFactionFreeTraders)) return true;
		if (other.IsInherited(eAIFactionTisyResearch)) return true;
		if (other.IsInherited(eAIFactionCivilian)) return true;
		if (other.IsInherited(eAIFactionPassive)) return true;
		if (other.IsInherited(eAIFactionGuards)) return true;
		if (other.IsInherited(eAIFactionObservers)) return true;
		return false;
	}

	override string GetDisplayName() { return "Medics"; }
};

[eAIRegisterFaction(eAIFactionMedicsGuards)]
class eAIFactionMedicsGuards : eAIFactionMedics
{
	void eAIFactionMedicsGuards()
	{
		m_Loadout = "Medics_Guard_Loadout";
		m_IsGuard = true;
	}

	override string GetDisplayName() { return "Medic Guards"; }
};
