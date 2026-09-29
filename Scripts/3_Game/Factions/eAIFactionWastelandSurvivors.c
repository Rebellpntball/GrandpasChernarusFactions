[eAIRegisterFaction(eAIFactionWastelandSurvivors)]
class eAIFactionWastelandSurvivors : eAIFaction
{
	void eAIFactionWastelandSurvivors()
	{
		m_Name = "Wasteland Survivors";
		m_Loadout = "Wasteland_Survivors_Loadout";
		m_IsGuard = false;
	}

	override bool IsFriendly(notnull eAIFaction other)
	{
		if (other.IsInherited(eAIFactionWastelandSurvivors)) return true;
		if (other.IsInherited(eAIFactionCivilian)) return true;
		if (other.IsInherited(eAIFactionPassive)) return true;
		if (other.IsInherited(eAIFactionObservers)) return true;
		if (other.IsInherited(eAIFactionFreeTraders)) return true;
		if (other.IsInherited(eAIFactionMedics)) return true;
		return false;
	}

	override string GetDisplayName() { return "Wasteland Survivors"; }
};

[eAIRegisterFaction(eAIFactionWastelandSurvivorsGuards)]
class eAIFactionWastelandSurvivorsGuards : eAIFactionWastelandSurvivors
{
	void eAIFactionWastelandSurvivorsGuards()
	{
		m_Loadout = "Wasteland_Survivors_Guard_Loadout";
		m_IsGuard = true;
	}

	override string GetDisplayName() { return "Wasteland Survivor Guards"; }
};
