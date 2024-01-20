#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_Eagle.BP_Eagle_C
// (Actor, Pawn)

class UClass* ABP_Eagle_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_Eagle_C");

	return Clss;
}


// BP_Eagle_C BP_Eagle.Default__BP_Eagle_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_Eagle_C* ABP_Eagle_C::GetDefaultObj()
{
	static class ABP_Eagle_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_Eagle_C*>(ABP_Eagle_C::StaticClass()->DefaultObject);

	return Default;
}

}


