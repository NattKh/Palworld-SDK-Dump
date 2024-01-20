#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_PalMapObjectFarmCrop_Berries.BP_PalMapObjectFarmCrop_Berries_C
// (Actor)

class UClass* ABP_PalMapObjectFarmCrop_Berries_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_PalMapObjectFarmCrop_Berries_C");

	return Clss;
}


// BP_PalMapObjectFarmCrop_Berries_C BP_PalMapObjectFarmCrop_Berries.Default__BP_PalMapObjectFarmCrop_Berries_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_PalMapObjectFarmCrop_Berries_C* ABP_PalMapObjectFarmCrop_Berries_C::GetDefaultObj()
{
	static class ABP_PalMapObjectFarmCrop_Berries_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_PalMapObjectFarmCrop_Berries_C*>(ABP_PalMapObjectFarmCrop_Berries_C::StaticClass()->DefaultObject);

	return Default;
}

}


