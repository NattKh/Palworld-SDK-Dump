#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_WildPalDrinkWaterPointComponent.BP_WildPalDrinkWaterPointComponent_C
// (SceneComponent, PrimitiveComponent, StaticMeshComponent)

class UClass* UBP_WildPalDrinkWaterPointComponent_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_WildPalDrinkWaterPointComponent_C");

	return Clss;
}


// BP_WildPalDrinkWaterPointComponent_C BP_WildPalDrinkWaterPointComponent.Default__BP_WildPalDrinkWaterPointComponent_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_WildPalDrinkWaterPointComponent_C* UBP_WildPalDrinkWaterPointComponent_C::GetDefaultObj()
{
	static class UBP_WildPalDrinkWaterPointComponent_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_WildPalDrinkWaterPointComponent_C*>(UBP_WildPalDrinkWaterPointComponent_C::StaticClass()->DefaultObject);

	return Default;
}

}


