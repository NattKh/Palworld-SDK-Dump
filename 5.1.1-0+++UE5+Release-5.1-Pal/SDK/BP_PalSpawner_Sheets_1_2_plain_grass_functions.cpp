#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_PalSpawner_Sheets_1_2_plain_grass.BP_PalSpawner_Sheets_1_2_plain_grass_C
// (Actor)

class UClass* ABP_PalSpawner_Sheets_1_2_plain_grass_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_PalSpawner_Sheets_1_2_plain_grass_C");

	return Clss;
}


// BP_PalSpawner_Sheets_1_2_plain_grass_C BP_PalSpawner_Sheets_1_2_plain_grass.Default__BP_PalSpawner_Sheets_1_2_plain_grass_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_PalSpawner_Sheets_1_2_plain_grass_C* ABP_PalSpawner_Sheets_1_2_plain_grass_C::GetDefaultObj()
{
	static class ABP_PalSpawner_Sheets_1_2_plain_grass_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_PalSpawner_Sheets_1_2_plain_grass_C*>(ABP_PalSpawner_Sheets_1_2_plain_grass_C::StaticClass()->DefaultObject);

	return Default;
}

}


