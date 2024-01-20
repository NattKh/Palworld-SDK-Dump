#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_SkillEffect_ThreeThunderStrike.BP_SkillEffect_ThreeThunderStrike_C
// (Actor)

class UClass* ABP_SkillEffect_ThreeThunderStrike_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_SkillEffect_ThreeThunderStrike_C");

	return Clss;
}


// BP_SkillEffect_ThreeThunderStrike_C BP_SkillEffect_ThreeThunderStrike.Default__BP_SkillEffect_ThreeThunderStrike_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_SkillEffect_ThreeThunderStrike_C* ABP_SkillEffect_ThreeThunderStrike_C::GetDefaultObj()
{
	static class ABP_SkillEffect_ThreeThunderStrike_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_SkillEffect_ThreeThunderStrike_C*>(ABP_SkillEffect_ThreeThunderStrike_C::StaticClass()->DefaultObject);

	return Default;
}

}


