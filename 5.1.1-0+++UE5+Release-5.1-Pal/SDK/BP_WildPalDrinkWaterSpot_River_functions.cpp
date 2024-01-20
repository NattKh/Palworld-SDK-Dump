#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_WildPalDrinkWaterSpot_River.BP_WildPalDrinkWaterSpot_River_C
// (Actor)

class UClass* ABP_WildPalDrinkWaterSpot_River_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_WildPalDrinkWaterSpot_River_C");

	return Clss;
}


// BP_WildPalDrinkWaterSpot_River_C BP_WildPalDrinkWaterSpot_River.Default__BP_WildPalDrinkWaterSpot_River_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_WildPalDrinkWaterSpot_River_C* ABP_WildPalDrinkWaterSpot_River_C::GetDefaultObj()
{
	static class ABP_WildPalDrinkWaterSpot_River_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_WildPalDrinkWaterSpot_River_C*>(ABP_WildPalDrinkWaterSpot_River_C::StaticClass()->DefaultObject);

	return Default;
}

}


