#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// AnimBlueprintGeneratedClass ABP_HawkBird.ABP_HawkBird_C
// (None)

class UClass* UABP_HawkBird_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ABP_HawkBird_C");

	return Clss;
}


// ABP_HawkBird_C ABP_HawkBird.Default__ABP_HawkBird_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UABP_HawkBird_C* UABP_HawkBird_C::GetDefaultObj()
{
	static class UABP_HawkBird_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UABP_HawkBird_C*>(UABP_HawkBird_C::StaticClass()->DefaultObject);

	return Default;
}

}


