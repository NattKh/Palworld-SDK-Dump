#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_SkillEffect_Flamethrower.BP_SkillEffect_Flamethrower_C
// (Actor)

class UClass* ABP_SkillEffect_Flamethrower_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_SkillEffect_Flamethrower_C");

	return Clss;
}


// BP_SkillEffect_Flamethrower_C BP_SkillEffect_Flamethrower.Default__BP_SkillEffect_Flamethrower_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_SkillEffect_Flamethrower_C* ABP_SkillEffect_Flamethrower_C::GetDefaultObj()
{
	static class ABP_SkillEffect_Flamethrower_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_SkillEffect_Flamethrower_C*>(ABP_SkillEffect_Flamethrower_C::StaticClass()->DefaultObject);

	return Default;
}

}


