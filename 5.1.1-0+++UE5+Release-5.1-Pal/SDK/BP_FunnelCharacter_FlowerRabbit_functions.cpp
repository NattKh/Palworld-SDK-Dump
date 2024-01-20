#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_FunnelCharacter_FlowerRabbit.BP_FunnelCharacter_FlowerRabbit_C
// (Actor, Pawn)

class UClass* ABP_FunnelCharacter_FlowerRabbit_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_FunnelCharacter_FlowerRabbit_C");

	return Clss;
}


// BP_FunnelCharacter_FlowerRabbit_C BP_FunnelCharacter_FlowerRabbit.Default__BP_FunnelCharacter_FlowerRabbit_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_FunnelCharacter_FlowerRabbit_C* ABP_FunnelCharacter_FlowerRabbit_C::GetDefaultObj()
{
	static class ABP_FunnelCharacter_FlowerRabbit_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_FunnelCharacter_FlowerRabbit_C*>(ABP_FunnelCharacter_FlowerRabbit_C::StaticClass()->DefaultObject);

	return Default;
}

}


