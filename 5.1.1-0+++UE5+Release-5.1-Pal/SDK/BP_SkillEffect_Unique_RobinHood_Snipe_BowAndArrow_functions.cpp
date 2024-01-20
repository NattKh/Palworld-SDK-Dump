#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_SkillEffect_Unique_RobinHood_Snipe_BowAndArrow.BP_SkillEffect_Unique_RobinHood_Snipe_BowAndArrow_C
// (Actor)

class UClass* ABP_SkillEffect_Unique_RobinHood_Snipe_BowAndArrow_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_SkillEffect_Unique_RobinHood_Snipe_BowAndArrow_C");

	return Clss;
}


// BP_SkillEffect_Unique_RobinHood_Snipe_BowAndArrow_C BP_SkillEffect_Unique_RobinHood_Snipe_BowAndArrow.Default__BP_SkillEffect_Unique_RobinHood_Snipe_BowAndArrow_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_SkillEffect_Unique_RobinHood_Snipe_BowAndArrow_C* ABP_SkillEffect_Unique_RobinHood_Snipe_BowAndArrow_C::GetDefaultObj()
{
	static class ABP_SkillEffect_Unique_RobinHood_Snipe_BowAndArrow_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_SkillEffect_Unique_RobinHood_Snipe_BowAndArrow_C*>(ABP_SkillEffect_Unique_RobinHood_Snipe_BowAndArrow_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_SkillEffect_Unique_RobinHood_Snipe_BowAndArrow.BP_SkillEffect_Unique_RobinHood_Snipe_BowAndArrow_C.FadeOutEffect
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             DeltaSecond                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_SkillEffect_Unique_RobinHood_Snipe_BowAndArrow_C::FadeOutEffect(double DeltaSecond)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SkillEffect_Unique_RobinHood_Snipe_BowAndArrow_C", "FadeOutEffect");

	Params::ABP_SkillEffect_Unique_RobinHood_Snipe_BowAndArrow_C_FadeOutEffect_Params Parms{};

	Parms.DeltaSecond = DeltaSecond;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_SkillEffect_Unique_RobinHood_Snipe_BowAndArrow.BP_SkillEffect_Unique_RobinHood_Snipe_BowAndArrow_C.OnShootArrow_Event
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_SkillEffect_Unique_RobinHood_Snipe_BowAndArrow_C::OnShootArrow_Event()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SkillEffect_Unique_RobinHood_Snipe_BowAndArrow_C", "OnShootArrow_Event");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_SkillEffect_Unique_RobinHood_Snipe_BowAndArrow.BP_SkillEffect_Unique_RobinHood_Snipe_BowAndArrow_C.ExecuteUbergraph_BP_SkillEffect_Unique_RobinHood_Snipe_BowAndArrow
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_Event_DeltaSecond                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_SkillEffect_Unique_RobinHood_Snipe_BowAndArrow_C::ExecuteUbergraph_BP_SkillEffect_Unique_RobinHood_Snipe_BowAndArrow(int32 EntryPoint, double K2Node_Event_DeltaSecond)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SkillEffect_Unique_RobinHood_Snipe_BowAndArrow_C", "ExecuteUbergraph_BP_SkillEffect_Unique_RobinHood_Snipe_BowAndArrow");

	Params::ABP_SkillEffect_Unique_RobinHood_Snipe_BowAndArrow_C_ExecuteUbergraph_BP_SkillEffect_Unique_RobinHood_Snipe_BowAndArrow_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_DeltaSecond = K2Node_Event_DeltaSecond;

	UObject::ProcessEvent(Func, &Parms);

}

}


