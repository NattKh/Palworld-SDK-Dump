#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_PlayerBedCamera.BP_PlayerBedCamera_C
// (Actor)

class UClass* ABP_PlayerBedCamera_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_PlayerBedCamera_C");

	return Clss;
}


// BP_PlayerBedCamera_C BP_PlayerBedCamera.Default__BP_PlayerBedCamera_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_PlayerBedCamera_C* ABP_PlayerBedCamera_C::GetDefaultObj()
{
	static class ABP_PlayerBedCamera_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_PlayerBedCamera_C*>(ABP_PlayerBedCamera_C::StaticClass()->DefaultObject);

	return Default;
}

}


