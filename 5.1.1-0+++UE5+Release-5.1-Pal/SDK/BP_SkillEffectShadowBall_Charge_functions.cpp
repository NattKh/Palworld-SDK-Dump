#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_SkillEffectShadowBall_Charge.BP_SkillEffectShadowBall_Charge_C
// (Actor)

class UClass* ABP_SkillEffectShadowBall_Charge_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_SkillEffectShadowBall_Charge_C");

	return Clss;
}


// BP_SkillEffectShadowBall_Charge_C BP_SkillEffectShadowBall_Charge.Default__BP_SkillEffectShadowBall_Charge_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_SkillEffectShadowBall_Charge_C* ABP_SkillEffectShadowBall_Charge_C::GetDefaultObj()
{
	static class ABP_SkillEffectShadowBall_Charge_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_SkillEffectShadowBall_Charge_C*>(ABP_SkillEffectShadowBall_Charge_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_SkillEffectShadowBall_Charge.BP_SkillEffectShadowBall_Charge_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void ABP_SkillEffectShadowBall_Charge_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SkillEffectShadowBall_Charge_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_SkillEffectShadowBall_Charge.BP_SkillEffectShadowBall_Charge_C.ReceiveActorBeginOverlap
// (Event, Public, BlueprintEvent)
// Parameters:
// class AActor*                      OtherActor                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_SkillEffectShadowBall_Charge_C::ReceiveActorBeginOverlap(class AActor* OtherActor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SkillEffectShadowBall_Charge_C", "ReceiveActorBeginOverlap");

	Params::ABP_SkillEffectShadowBall_Charge_C_ReceiveActorBeginOverlap_Params Parms{};

	Parms.OtherActor = OtherActor;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_SkillEffectShadowBall_Charge.BP_SkillEffectShadowBall_Charge_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                              DeltaSeconds                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_SkillEffectShadowBall_Charge_C::ReceiveTick(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SkillEffectShadowBall_Charge_C", "ReceiveTick");

	Params::ABP_SkillEffectShadowBall_Charge_C_ReceiveTick_Params Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_SkillEffectShadowBall_Charge.BP_SkillEffectShadowBall_Charge_C.ExecuteUbergraph_BP_SkillEffectShadowBall_Charge
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      K2Node_Event_OtherActor                                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_DeltaSeconds                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_SkillEffectShadowBall_Charge_C::ExecuteUbergraph_BP_SkillEffectShadowBall_Charge(int32 EntryPoint, class AActor* K2Node_Event_OtherActor, float K2Node_Event_DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SkillEffectShadowBall_Charge_C", "ExecuteUbergraph_BP_SkillEffectShadowBall_Charge");

	Params::ABP_SkillEffectShadowBall_Charge_C_ExecuteUbergraph_BP_SkillEffectShadowBall_Charge_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_OtherActor = K2Node_Event_OtherActor;
	Parms.K2Node_Event_DeltaSeconds = K2Node_Event_DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);

}

}


