#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_AIActionFunnelSkill_Thunder.BP_AIActionFunnelSkill_Thunder_C
// (None)

class UClass* UBP_AIActionFunnelSkill_Thunder_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_AIActionFunnelSkill_Thunder_C");

	return Clss;
}


// BP_AIActionFunnelSkill_Thunder_C BP_AIActionFunnelSkill_Thunder.Default__BP_AIActionFunnelSkill_Thunder_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_AIActionFunnelSkill_Thunder_C* UBP_AIActionFunnelSkill_Thunder_C::GetDefaultObj()
{
	static class UBP_AIActionFunnelSkill_Thunder_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_AIActionFunnelSkill_Thunder_C*>(UBP_AIActionFunnelSkill_Thunder_C::StaticClass()->DefaultObject);

	return Default;
}

}


