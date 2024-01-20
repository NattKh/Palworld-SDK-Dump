#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_Alpaca_BOSS.BP_Alpaca_BOSS_C
// (Actor, Pawn)

class UClass* ABP_Alpaca_BOSS_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_Alpaca_BOSS_C");

	return Clss;
}


// BP_Alpaca_BOSS_C BP_Alpaca_BOSS.Default__BP_Alpaca_BOSS_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_Alpaca_BOSS_C* ABP_Alpaca_BOSS_C::GetDefaultObj()
{
	static class ABP_Alpaca_BOSS_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_Alpaca_BOSS_C*>(ABP_Alpaca_BOSS_C::StaticClass()->DefaultObject);

	return Default;
}

}


