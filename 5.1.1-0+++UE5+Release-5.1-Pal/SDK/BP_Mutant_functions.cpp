#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_Mutant.BP_Mutant_C
// (Actor, Pawn)

class UClass* ABP_Mutant_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_Mutant_C");

	return Clss;
}


// BP_Mutant_C BP_Mutant.Default__BP_Mutant_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_Mutant_C* ABP_Mutant_C::GetDefaultObj()
{
	static class ABP_Mutant_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_Mutant_C*>(ABP_Mutant_C::StaticClass()->DefaultObject);

	return Default;
}

}


