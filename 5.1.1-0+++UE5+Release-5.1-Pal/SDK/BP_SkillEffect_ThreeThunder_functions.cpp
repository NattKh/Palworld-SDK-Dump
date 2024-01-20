#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_SkillEffect_ThreeThunder.BP_SkillEffect_ThreeThunder_C
// (Actor)

class UClass* ABP_SkillEffect_ThreeThunder_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_SkillEffect_ThreeThunder_C");

	return Clss;
}


// BP_SkillEffect_ThreeThunder_C BP_SkillEffect_ThreeThunder.Default__BP_SkillEffect_ThreeThunder_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_SkillEffect_ThreeThunder_C* ABP_SkillEffect_ThreeThunder_C::GetDefaultObj()
{
	static class ABP_SkillEffect_ThreeThunder_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_SkillEffect_ThreeThunder_C*>(ABP_SkillEffect_ThreeThunder_C::StaticClass()->DefaultObject);

	return Default;
}

}


