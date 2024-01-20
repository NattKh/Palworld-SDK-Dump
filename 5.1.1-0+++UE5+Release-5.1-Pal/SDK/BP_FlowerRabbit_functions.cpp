#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_FlowerRabbit.BP_FlowerRabbit_C
// (Actor, Pawn)

class UClass* ABP_FlowerRabbit_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_FlowerRabbit_C");

	return Clss;
}


// BP_FlowerRabbit_C BP_FlowerRabbit.Default__BP_FlowerRabbit_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_FlowerRabbit_C* ABP_FlowerRabbit_C::GetDefaultObj()
{
	static class ABP_FlowerRabbit_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_FlowerRabbit_C*>(ABP_FlowerRabbit_C::StaticClass()->DefaultObject);

	return Default;
}

}


