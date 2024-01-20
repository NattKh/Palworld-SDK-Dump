#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// AnimBlueprintGeneratedClass ABP_FlowerRabbit.ABP_FlowerRabbit_C
// (None)

class UClass* UABP_FlowerRabbit_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ABP_FlowerRabbit_C");

	return Clss;
}


// ABP_FlowerRabbit_C ABP_FlowerRabbit.Default__ABP_FlowerRabbit_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UABP_FlowerRabbit_C* UABP_FlowerRabbit_C::GetDefaultObj()
{
	static class UABP_FlowerRabbit_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UABP_FlowerRabbit_C*>(UABP_FlowerRabbit_C::StaticClass()->DefaultObject);

	return Default;
}

}


