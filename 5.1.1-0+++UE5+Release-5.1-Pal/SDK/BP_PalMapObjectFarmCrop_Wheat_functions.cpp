#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_PalMapObjectFarmCrop_Wheat.BP_PalMapObjectFarmCrop_Wheat_C
// (Actor)

class UClass* ABP_PalMapObjectFarmCrop_Wheat_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_PalMapObjectFarmCrop_Wheat_C");

	return Clss;
}


// BP_PalMapObjectFarmCrop_Wheat_C BP_PalMapObjectFarmCrop_Wheat.Default__BP_PalMapObjectFarmCrop_Wheat_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_PalMapObjectFarmCrop_Wheat_C* ABP_PalMapObjectFarmCrop_Wheat_C::GetDefaultObj()
{
	static class ABP_PalMapObjectFarmCrop_Wheat_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_PalMapObjectFarmCrop_Wheat_C*>(ABP_PalMapObjectFarmCrop_Wheat_C::StaticClass()->DefaultObject);

	return Default;
}

}


