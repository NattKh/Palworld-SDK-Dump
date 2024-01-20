#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// AnimBlueprintGeneratedClass ABP_Eagle.ABP_Eagle_C
// (None)

class UClass* UABP_Eagle_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ABP_Eagle_C");

	return Clss;
}


// ABP_Eagle_C ABP_Eagle.Default__ABP_Eagle_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UABP_Eagle_C* UABP_Eagle_C::GetDefaultObj()
{
	static class UABP_Eagle_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UABP_Eagle_C*>(UABP_Eagle_C::StaticClass()->DefaultObject);

	return Default;
}

}


