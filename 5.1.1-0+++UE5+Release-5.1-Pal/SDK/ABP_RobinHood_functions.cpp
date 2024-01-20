#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// AnimBlueprintGeneratedClass ABP_RobinHood.ABP_RobinHood_C
// (None)

class UClass* UABP_RobinHood_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ABP_RobinHood_C");

	return Clss;
}


// ABP_RobinHood_C ABP_RobinHood.Default__ABP_RobinHood_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UABP_RobinHood_C* UABP_RobinHood_C::GetDefaultObj()
{
	static class UABP_RobinHood_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UABP_RobinHood_C*>(UABP_RobinHood_C::StaticClass()->DefaultObject);

	return Default;
}

}


