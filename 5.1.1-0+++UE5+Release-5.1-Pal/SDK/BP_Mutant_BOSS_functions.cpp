#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_Mutant_BOSS.BP_Mutant_BOSS_C
// (Actor, Pawn)

class UClass* ABP_Mutant_BOSS_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_Mutant_BOSS_C");

	return Clss;
}


// BP_Mutant_BOSS_C BP_Mutant_BOSS.Default__BP_Mutant_BOSS_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_Mutant_BOSS_C* ABP_Mutant_BOSS_C::GetDefaultObj()
{
	static class ABP_Mutant_BOSS_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_Mutant_BOSS_C*>(ABP_Mutant_BOSS_C::StaticClass()->DefaultObject);

	return Default;
}

}


