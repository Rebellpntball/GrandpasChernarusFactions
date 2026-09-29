[eAIRegisterFaction(eAIFactionLocalPolice)]
class eAIFactionLocalPolice : eAIFaction
{
	void eAIFactionLocalPolice()
	{
		m_Name = "Local Police";
		m_Loadout = "Local_Police_Loadout";
		m_IsGuard = false;
	}

	override bool IsFriendly(notnull eAIFaction other)
	{
		if (other.IsInherited(eAIFactionLocalPolice)) return true;
		if (other.IsInherited(eAIFactionFreshDayzMilitia)) return true;
		if (other.IsInherited(eAIFactionChernoDefense)) return true;
		if (other.IsInherited(eAIFactionMedics)) return true;
		if (other.IsInherited(eAIFactionFreeTraders)) return true;
		if (other.IsInherited(eAIFactionCivilian)) return true;
		if (other.IsInherited(eAIFactionPassive)) return true;
		if (other.IsInherited(eAIFactionGuards)) return true;
		if (other.IsInherited(eAIFactionObservers)) return true;
		return false;
	}

	override string GetDisplayName() { return "Local Police"; }
};

[eAIRegisterFaction(eAIFactionLocalPoliceGuards)]
class eAIFactionLocalPoliceGuards : eAIFactionLocalPolice
{
	void eAIFactionLocalPoliceGuards()
	{
		m_Loadout = "Local_Police_Guard_Loadout";
		m_IsGuard = true;
	}

	override string GetDisplayName() { return "Local Police Guards"; }
};
