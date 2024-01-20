#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_SkillEffect_PowerShot_Charge.BP_SkillEffect_PowerShot_Charge_C
// (Actor)

class UClass* ABP_SkillEffect_PowerShot_Charge_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_SkillEffect_PowerShot_Charge_C");

	return Clss;
}


// BP_SkillEffect_PowerShot_Charge_C BP_SkillEffect_PowerShot_Charge.Default__BP_SkillEffect_PowerShot_Charge_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_SkillEffect_PowerShot_Charge_C* ABP_SkillEffect_PowerShot_Charge_C::GetDefaultObj()
{
	static class ABP_SkillEffect_PowerShot_Charge_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_SkillEffect_PowerShot_Charge_C*>(ABP_SkillEffect_PowerShot_Charge_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_SkillEffect_PowerShot_Charge.BP_SkillEffect_PowerShot_Charge_C.ShootBullet
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                     TargetLocation                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_SkillEffect_PowerShot_Charge_C::ShootBullet(const struct FVector& TargetLocation)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SkillEffect_PowerShot_Charge_C", "ShootBullet");

	Params::ABP_SkillEffect_PowerShot_Charge_C_ShootBullet_Params Parms{};

	Parms.TargetLocation = TargetLocation;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_SkillEffect_PowerShot_Charge.BP_SkillEffect_PowerShot_Charge_C.CancelShoot
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_SkillEffect_PowerShot_Charge_C::CancelShoot()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SkillEffect_PowerShot_Charge_C", "CancelShoot");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_SkillEffect_PowerShot_Charge.BP_SkillEffect_PowerShot_Charge_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void ABP_SkillEffect_PowerShot_Charge_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SkillEffect_PowerShot_Charge_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_SkillEffect_PowerShot_Charge.BP_SkillEffect_PowerShot_Charge_C.FadeOutEffect
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             DeltaSecond                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_SkillEffect_PowerShot_Charge_C::FadeOutEffect(double DeltaSecond)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SkillEffect_PowerShot_Charge_C", "FadeOutEffect");

	Params::ABP_SkillEffect_PowerShot_Charge_C_FadeOutEffect_Params Parms{};

	Parms.DeltaSecond = DeltaSecond;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_SkillEffect_PowerShot_Charge.BP_SkillEffect_PowerShot_Charge_C.ExecuteUbergraph_BP_SkillEffect_PowerShot_Charge
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     K2Node_Event_TargetLocation                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_Event_DeltaSecond                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_SkillEffect_PowerShot_Charge_C::ExecuteUbergraph_BP_SkillEffect_PowerShot_Charge(int32 EntryPoint, const struct FVector& K2Node_Event_TargetLocation, double K2Node_Event_DeltaSecond)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SkillEffect_PowerShot_Charge_C", "ExecuteUbergraph_BP_SkillEffect_PowerShot_Charge");

	Params::ABP_SkillEffect_PowerShot_Charge_C_ExecuteUbergraph_BP_SkillEffect_PowerShot_Charge_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_TargetLocation = K2Node_Event_TargetLocation;
	Parms.K2Node_Event_DeltaSecond = K2Node_Event_DeltaSecond;

	UObject::ProcessEvent(Func, &Parms);

}

}


