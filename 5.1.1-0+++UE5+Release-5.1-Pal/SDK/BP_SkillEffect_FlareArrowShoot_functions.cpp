#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_SkillEffect_FlareArrowShoot.BP_SkillEffect_FlareArrowShoot_C
// (Actor)

class UClass* ABP_SkillEffect_FlareArrowShoot_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_SkillEffect_FlareArrowShoot_C");

	return Clss;
}


// BP_SkillEffect_FlareArrowShoot_C BP_SkillEffect_FlareArrowShoot.Default__BP_SkillEffect_FlareArrowShoot_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_SkillEffect_FlareArrowShoot_C* ABP_SkillEffect_FlareArrowShoot_C::GetDefaultObj()
{
	static class ABP_SkillEffect_FlareArrowShoot_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_SkillEffect_FlareArrowShoot_C*>(ABP_SkillEffect_FlareArrowShoot_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_SkillEffect_FlareArrowShoot.BP_SkillEffect_FlareArrowShoot_C.OnDestroyed_¤ÙóÈ_0
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      DestroyedActor                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_SkillEffect_FlareArrowShoot_C::OnDestroyed______0(class AActor* DestroyedActor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SkillEffect_FlareArrowShoot_C", "OnDestroyed_¤ÙóÈ_0");

	Params::ABP_SkillEffect_FlareArrowShoot_C_OnDestroyed______0_Params Parms{};

	Parms.DestroyedActor = DestroyedActor;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_SkillEffect_FlareArrowShoot.BP_SkillEffect_FlareArrowShoot_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void ABP_SkillEffect_FlareArrowShoot_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SkillEffect_FlareArrowShoot_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_SkillEffect_FlareArrowShoot.BP_SkillEffect_FlareArrowShoot_C.OnSystemFinished_¤ÙóÈ_0
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UParticleSystemComponent*    PSystem                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void ABP_SkillEffect_FlareArrowShoot_C::OnSystemFinished______0(class UParticleSystemComponent* PSystem)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SkillEffect_FlareArrowShoot_C", "OnSystemFinished_¤ÙóÈ_0");

	Params::ABP_SkillEffect_FlareArrowShoot_C_OnSystemFinished______0_Params Parms{};

	Parms.PSystem = PSystem;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_SkillEffect_FlareArrowShoot.BP_SkillEffect_FlareArrowShoot_C.Shoot
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_SkillEffect_FlareArrowShoot_C::Shoot()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SkillEffect_FlareArrowShoot_C", "Shoot");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_SkillEffect_FlareArrowShoot.BP_SkillEffect_FlareArrowShoot_C.ExecuteUbergraph_BP_SkillEffect_FlareArrowShoot
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      K2Node_CustomEvent_DestroyedActor                                (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UParticleSystemComponent*    K2Node_CustomEvent_PSystem                                       (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void ABP_SkillEffect_FlareArrowShoot_C::ExecuteUbergraph_BP_SkillEffect_FlareArrowShoot(int32 EntryPoint, class AActor* K2Node_CustomEvent_DestroyedActor, class UParticleSystemComponent* K2Node_CustomEvent_PSystem)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SkillEffect_FlareArrowShoot_C", "ExecuteUbergraph_BP_SkillEffect_FlareArrowShoot");

	Params::ABP_SkillEffect_FlareArrowShoot_C_ExecuteUbergraph_BP_SkillEffect_FlareArrowShoot_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CustomEvent_DestroyedActor = K2Node_CustomEvent_DestroyedActor;
	Parms.K2Node_CustomEvent_PSystem = K2Node_CustomEvent_PSystem;

	UObject::ProcessEvent(Func, &Parms);

}

}


