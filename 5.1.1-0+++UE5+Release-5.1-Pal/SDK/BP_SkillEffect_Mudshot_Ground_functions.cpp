#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_SkillEffect_Mudshot_Ground.BP_SkillEffect_Mudshot_Ground_C
// (Actor)

class UClass* ABP_SkillEffect_Mudshot_Ground_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_SkillEffect_Mudshot_Ground_C");

	return Clss;
}


// BP_SkillEffect_Mudshot_Ground_C BP_SkillEffect_Mudshot_Ground.Default__BP_SkillEffect_Mudshot_Ground_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_SkillEffect_Mudshot_Ground_C* ABP_SkillEffect_Mudshot_Ground_C::GetDefaultObj()
{
	static class ABP_SkillEffect_Mudshot_Ground_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_SkillEffect_Mudshot_Ground_C*>(ABP_SkillEffect_Mudshot_Ground_C::StaticClass()->DefaultObject);

	return Default;
}

}


