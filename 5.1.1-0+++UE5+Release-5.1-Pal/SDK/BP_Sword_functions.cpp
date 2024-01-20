#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_Sword.BP_Sword_C
// (Actor)

class UClass* ABP_Sword_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_Sword_C");

	return Clss;
}


// BP_Sword_C BP_Sword.Default__BP_Sword_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_Sword_C* ABP_Sword_C::GetDefaultObj()
{
	static class ABP_Sword_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_Sword_C*>(ABP_Sword_C::StaticClass()->DefaultObject);

	return Default;
}

}


