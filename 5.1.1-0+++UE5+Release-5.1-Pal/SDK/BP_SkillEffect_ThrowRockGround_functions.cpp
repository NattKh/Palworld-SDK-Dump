#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_SkillEffect_ThrowRockGround.BP_SkillEffect_ThrowRockGround_C
// (Actor)

class UClass* ABP_SkillEffect_ThrowRockGround_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_SkillEffect_ThrowRockGround_C");

	return Clss;
}


// BP_SkillEffect_ThrowRockGround_C BP_SkillEffect_ThrowRockGround.Default__BP_SkillEffect_ThrowRockGround_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_SkillEffect_ThrowRockGround_C* ABP_SkillEffect_ThrowRockGround_C::GetDefaultObj()
{
	static class ABP_SkillEffect_ThrowRockGround_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_SkillEffect_ThrowRockGround_C*>(ABP_SkillEffect_ThrowRockGround_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_SkillEffect_ThrowRockGround.BP_SkillEffect_ThrowRockGround_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void ABP_SkillEffect_ThrowRockGround_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SkillEffect_ThrowRockGround_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_SkillEffect_ThrowRockGround.BP_SkillEffect_ThrowRockGround_C.ExecuteUbergraph_BP_SkillEffect_ThrowRockGround
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_SkillEffect_ThrowRockGround_C::ExecuteUbergraph_BP_SkillEffect_ThrowRockGround(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SkillEffect_ThrowRockGround_C", "ExecuteUbergraph_BP_SkillEffect_ThrowRockGround");

	Params::ABP_SkillEffect_ThrowRockGround_C_ExecuteUbergraph_BP_SkillEffect_ThrowRockGround_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


