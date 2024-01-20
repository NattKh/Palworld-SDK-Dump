#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_FlameBuffalo_Normal.BP_FlameBuffalo_Normal_C
// (Actor, Pawn)

class UClass* ABP_FlameBuffalo_Normal_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_FlameBuffalo_Normal_C");

	return Clss;
}


// BP_FlameBuffalo_Normal_C BP_FlameBuffalo_Normal.Default__BP_FlameBuffalo_Normal_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_FlameBuffalo_Normal_C* ABP_FlameBuffalo_Normal_C::GetDefaultObj()
{
	static class ABP_FlameBuffalo_Normal_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_FlameBuffalo_Normal_C*>(ABP_FlameBuffalo_Normal_C::StaticClass()->DefaultObject);

	return Default;
}

}


