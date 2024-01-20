#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_GrassMammoth_BOSS.BP_GrassMammoth_BOSS_C
// (Actor, Pawn)

class UClass* ABP_GrassMammoth_BOSS_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_GrassMammoth_BOSS_C");

	return Clss;
}


// BP_GrassMammoth_BOSS_C BP_GrassMammoth_BOSS.Default__BP_GrassMammoth_BOSS_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_GrassMammoth_BOSS_C* ABP_GrassMammoth_BOSS_C::GetDefaultObj()
{
	static class ABP_GrassMammoth_BOSS_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_GrassMammoth_BOSS_C*>(ABP_GrassMammoth_BOSS_C::StaticClass()->DefaultObject);

	return Default;
}

}


