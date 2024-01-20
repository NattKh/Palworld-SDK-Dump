#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// AnimBlueprintGeneratedClass ABP_FlameBuffalo.ABP_FlameBuffalo_C
// (None)

class UClass* UABP_FlameBuffalo_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ABP_FlameBuffalo_C");

	return Clss;
}


// ABP_FlameBuffalo_C ABP_FlameBuffalo.Default__ABP_FlameBuffalo_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UABP_FlameBuffalo_C* UABP_FlameBuffalo_C::GetDefaultObj()
{
	static class UABP_FlameBuffalo_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UABP_FlameBuffalo_C*>(UABP_FlameBuffalo_C::StaticClass()->DefaultObject);

	return Default;
}

}


