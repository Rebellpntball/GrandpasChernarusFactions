#define _ARMA_

class CfgPatches
{
	class GrandpasChernarusFactions_scripts
	{
		units[] = {};
		weapons[] = {};
		name = "Grandpas Chernarus Factions";
		author = "Rebellpntball / Grandpa";
		requiredAddons[] = {"DayZExpansion_AI_Scripts"};
	};
};

class CfgMods
{
	class GrandpasChernarusFactions
	{
		dir = "GrandpasChernarusFactions";
		name = "Grandpas Chernarus Factions";
		credits = "Rebellpntball";
		author = "Rebellpntball";
		type = "mod";

		dependencies[] = {"Game"};

		class defs
		{
			class gameScriptModule
			{
				value = "";
				files[] = {"GrandpasChernarusFactions/Scripts/3_Game"};
			}
		}
	};
};
