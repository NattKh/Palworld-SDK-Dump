#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_PlantSlime.BP_PlantSlime_C
// (Actor, Pawn)

class UClass* ABP_PlantSlime_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_PlantSlime_C");

	return Clss;
}


// BP_PlantSlime_C BP_PlantSlime.Default__BP_PlantSlime_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_PlantSlime_C* ABP_PlantSlime_C::GetDefaultObj()
{
	static class ABP_PlantSlime_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_PlantSlime_C*>(ABP_PlantSlime_C::StaticClass()->DefaultObject);

	return Default;
}

}


