#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_PalSphereSneakShake.BP_PalSphereSneakShake_C
// (None)

class UClass* UBP_PalSphereSneakShake_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_PalSphereSneakShake_C");

	return Clss;
}


// BP_PalSphereSneakShake_C BP_PalSphereSneakShake.Default__BP_PalSphereSneakShake_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_PalSphereSneakShake_C* UBP_PalSphereSneakShake_C::GetDefaultObj()
{
	static class UBP_PalSphereSneakShake_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_PalSphereSneakShake_C*>(UBP_PalSphereSneakShake_C::StaticClass()->DefaultObject);

	return Default;
}

}


