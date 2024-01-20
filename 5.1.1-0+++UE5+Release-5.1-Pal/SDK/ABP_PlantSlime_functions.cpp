#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// AnimBlueprintGeneratedClass ABP_PlantSlime.ABP_PlantSlime_C
// (None)

class UClass* UABP_PlantSlime_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ABP_PlantSlime_C");

	return Clss;
}


// ABP_PlantSlime_C ABP_PlantSlime.Default__ABP_PlantSlime_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UABP_PlantSlime_C* UABP_PlantSlime_C::GetDefaultObj()
{
	static class UABP_PlantSlime_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UABP_PlantSlime_C*>(UABP_PlantSlime_C::StaticClass()->DefaultObject);

	return Default;
}

}


