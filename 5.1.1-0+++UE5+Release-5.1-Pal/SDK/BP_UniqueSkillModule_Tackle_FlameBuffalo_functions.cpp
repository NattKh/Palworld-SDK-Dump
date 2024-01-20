#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_UniqueSkillModule_Tackle_FlameBuffalo.BP_UniqueSkillModule_Tackle_FlameBuffalo_C
// (None)

class UClass* UBP_UniqueSkillModule_Tackle_FlameBuffalo_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_UniqueSkillModule_Tackle_FlameBuffalo_C");

	return Clss;
}


// BP_UniqueSkillModule_Tackle_FlameBuffalo_C BP_UniqueSkillModule_Tackle_FlameBuffalo.Default__BP_UniqueSkillModule_Tackle_FlameBuffalo_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_UniqueSkillModule_Tackle_FlameBuffalo_C* UBP_UniqueSkillModule_Tackle_FlameBuffalo_C::GetDefaultObj()
{
	static class UBP_UniqueSkillModule_Tackle_FlameBuffalo_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_UniqueSkillModule_Tackle_FlameBuffalo_C*>(UBP_UniqueSkillModule_Tackle_FlameBuffalo_C::StaticClass()->DefaultObject);

	return Default;
}

}


