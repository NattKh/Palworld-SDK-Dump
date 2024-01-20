#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_WeaselDragon.BP_WeaselDragon_C
// (Actor, Pawn)

class UClass* ABP_WeaselDragon_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_WeaselDragon_C");

	return Clss;
}


// BP_WeaselDragon_C BP_WeaselDragon.Default__BP_WeaselDragon_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_WeaselDragon_C* ABP_WeaselDragon_C::GetDefaultObj()
{
	static class ABP_WeaselDragon_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_WeaselDragon_C*>(ABP_WeaselDragon_C::StaticClass()->DefaultObject);

	return Default;
}

}


