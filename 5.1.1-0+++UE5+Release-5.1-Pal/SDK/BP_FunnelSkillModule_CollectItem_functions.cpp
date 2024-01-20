#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_FunnelSkillModule_CollectItem.BP_FunnelSkillModule_CollectItem_C
// (None)

class UClass* UBP_FunnelSkillModule_CollectItem_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_FunnelSkillModule_CollectItem_C");

	return Clss;
}


// BP_FunnelSkillModule_CollectItem_C BP_FunnelSkillModule_CollectItem.Default__BP_FunnelSkillModule_CollectItem_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_FunnelSkillModule_CollectItem_C* UBP_FunnelSkillModule_CollectItem_C::GetDefaultObj()
{
	static class UBP_FunnelSkillModule_CollectItem_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_FunnelSkillModule_CollectItem_C*>(UBP_FunnelSkillModule_CollectItem_C::StaticClass()->DefaultObject);

	return Default;
}

}


