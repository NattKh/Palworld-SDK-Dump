#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_BackWeapon_Sword.BP_BackWeapon_Sword_C
// (Actor)

class UClass* ABP_BackWeapon_Sword_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_BackWeapon_Sword_C");

	return Clss;
}


// BP_BackWeapon_Sword_C BP_BackWeapon_Sword.Default__BP_BackWeapon_Sword_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_BackWeapon_Sword_C* ABP_BackWeapon_Sword_C::GetDefaultObj()
{
	static class ABP_BackWeapon_Sword_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_BackWeapon_Sword_C*>(ABP_BackWeapon_Sword_C::StaticClass()->DefaultObject);

	return Default;
}

}


