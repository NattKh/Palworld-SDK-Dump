#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_BuildObject_PalFoodBox.BP_BuildObject_PalFoodBox_C
// (Actor)

class UClass* ABP_BuildObject_PalFoodBox_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_BuildObject_PalFoodBox_C");

	return Clss;
}


// BP_BuildObject_PalFoodBox_C BP_BuildObject_PalFoodBox.Default__BP_BuildObject_PalFoodBox_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_BuildObject_PalFoodBox_C* ABP_BuildObject_PalFoodBox_C::GetDefaultObj()
{
	static class ABP_BuildObject_PalFoodBox_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_BuildObject_PalFoodBox_C*>(ABP_BuildObject_PalFoodBox_C::StaticClass()->DefaultObject);

	return Default;
}

}


