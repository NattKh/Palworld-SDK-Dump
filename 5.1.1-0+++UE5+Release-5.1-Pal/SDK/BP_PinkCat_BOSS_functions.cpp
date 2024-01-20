#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_PinkCat_BOSS.BP_PinkCat_BOSS_C
// (Actor, Pawn)

class UClass* ABP_PinkCat_BOSS_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_PinkCat_BOSS_C");

	return Clss;
}


// BP_PinkCat_BOSS_C BP_PinkCat_BOSS.Default__BP_PinkCat_BOSS_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_PinkCat_BOSS_C* ABP_PinkCat_BOSS_C::GetDefaultObj()
{
	static class ABP_PinkCat_BOSS_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_PinkCat_BOSS_C*>(ABP_PinkCat_BOSS_C::StaticClass()->DefaultObject);

	return Default;
}

}


