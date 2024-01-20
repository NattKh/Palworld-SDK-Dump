#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// AnimBlueprintGeneratedClass ABP_Mutant.ABP_Mutant_C
// (None)

class UClass* UABP_Mutant_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ABP_Mutant_C");

	return Clss;
}


// ABP_Mutant_C ABP_Mutant.Default__ABP_Mutant_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UABP_Mutant_C* UABP_Mutant_C::GetDefaultObj()
{
	static class UABP_Mutant_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UABP_Mutant_C*>(UABP_Mutant_C::StaticClass()->DefaultObject);

	return Default;
}

}


