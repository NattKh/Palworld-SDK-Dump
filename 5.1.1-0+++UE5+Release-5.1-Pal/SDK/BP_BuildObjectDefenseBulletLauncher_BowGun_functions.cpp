#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_BuildObjectDefenseBulletLauncher_BowGun.BP_BuildObjectDefenseBulletLauncher_BowGun_C
// (Actor)

class UClass* ABP_BuildObjectDefenseBulletLauncher_BowGun_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_BuildObjectDefenseBulletLauncher_BowGun_C");

	return Clss;
}


// BP_BuildObjectDefenseBulletLauncher_BowGun_C BP_BuildObjectDefenseBulletLauncher_BowGun.Default__BP_BuildObjectDefenseBulletLauncher_BowGun_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_BuildObjectDefenseBulletLauncher_BowGun_C* ABP_BuildObjectDefenseBulletLauncher_BowGun_C::GetDefaultObj()
{
	static class ABP_BuildObjectDefenseBulletLauncher_BowGun_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_BuildObjectDefenseBulletLauncher_BowGun_C*>(ABP_BuildObjectDefenseBulletLauncher_BowGun_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_BuildObjectDefenseBulletLauncher_BowGun.BP_BuildObjectDefenseBulletLauncher_BowGun_C.GetCharacterRotation
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// struct FRotator                    ReturnValue                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// struct FRotator                    CallFunc_K2_GetComponentRotation_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)

struct FRotator ABP_BuildObjectDefenseBulletLauncher_BowGun_C::GetCharacterRotation(const struct FRotator& CallFunc_K2_GetComponentRotation_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_BuildObjectDefenseBulletLauncher_BowGun_C", "GetCharacterRotation");

	Params::ABP_BuildObjectDefenseBulletLauncher_BowGun_C_GetCharacterRotation_Params Parms{};

	Parms.CallFunc_K2_GetComponentRotation_ReturnValue = CallFunc_K2_GetComponentRotation_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_BuildObjectDefenseBulletLauncher_BowGun.BP_BuildObjectDefenseBulletLauncher_BowGun_C.GetCharacterLocation
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// struct FVector                     ReturnValue                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetComponentLocation_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

struct FVector ABP_BuildObjectDefenseBulletLauncher_BowGun_C::GetCharacterLocation(const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_BuildObjectDefenseBulletLauncher_BowGun_C", "GetCharacterLocation");

	Params::ABP_BuildObjectDefenseBulletLauncher_BowGun_C_GetCharacterLocation_Params Parms{};

	Parms.CallFunc_K2_GetComponentLocation_ReturnValue = CallFunc_K2_GetComponentLocation_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_BuildObjectDefenseBulletLauncher_BowGun.BP_BuildObjectDefenseBulletLauncher_BowGun_C.TurnToTarget
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      TargetActor                                                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// float                              DeltaTime                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_BuildObjectDefenseBulletLauncher_BowGun_C::TurnToTarget(class AActor* TargetActor, float DeltaTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_BuildObjectDefenseBulletLauncher_BowGun_C", "TurnToTarget");

	Params::ABP_BuildObjectDefenseBulletLauncher_BowGun_C_TurnToTarget_Params Parms{};

	Parms.TargetActor = TargetActor;
	Parms.DeltaTime = DeltaTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_BuildObjectDefenseBulletLauncher_BowGun.BP_BuildObjectDefenseBulletLauncher_BowGun_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void ABP_BuildObjectDefenseBulletLauncher_BowGun_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_BuildObjectDefenseBulletLauncher_BowGun_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_BuildObjectDefenseBulletLauncher_BowGun.BP_BuildObjectDefenseBulletLauncher_BowGun_C.SetOwnerCharacter
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APalCharacter*               OwnerCharacter                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_BuildObjectDefenseBulletLauncher_BowGun_C::SetOwnerCharacter(class APalCharacter* OwnerCharacter)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_BuildObjectDefenseBulletLauncher_BowGun_C", "SetOwnerCharacter");

	Params::ABP_BuildObjectDefenseBulletLauncher_BowGun_C_SetOwnerCharacter_Params Parms{};

	Parms.OwnerCharacter = OwnerCharacter;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_BuildObjectDefenseBulletLauncher_BowGun.BP_BuildObjectDefenseBulletLauncher_BowGun_C.SetEnableTrigger
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               EnableTrigger                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_BuildObjectDefenseBulletLauncher_BowGun_C::SetEnableTrigger(bool EnableTrigger)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_BuildObjectDefenseBulletLauncher_BowGun_C", "SetEnableTrigger");

	Params::ABP_BuildObjectDefenseBulletLauncher_BowGun_C_SetEnableTrigger_Params Parms{};

	Parms.EnableTrigger = EnableTrigger;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_BuildObjectDefenseBulletLauncher_BowGun.BP_BuildObjectDefenseBulletLauncher_BowGun_C.ExecuteUbergraph_BP_BuildObjectDefenseBulletLauncher_BowGun
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      K2Node_Event_TargetActor                                         (ConstParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_DeltaTime                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetCharacterLocation_ReturnValue                        (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APalCharacter*               K2Node_Event_OwnerCharacter                                      (ConstParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Add_VectorVector_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TSoftObjectPtr<class APalCharacter>CallFunc_Conv_ObjectToSoftObjectReference_ReturnValue            (UObjectWrapper, HasGetValueTypeHash)
// bool                               K2Node_Event_EnableTrigger                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_TurnToTarget_Internal_DeltaTime_ImplicitCast            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_BuildObjectDefenseBulletLauncher_BowGun_C::ExecuteUbergraph_BP_BuildObjectDefenseBulletLauncher_BowGun(int32 EntryPoint, bool CallFunc_IsValid_ReturnValue, class AActor* K2Node_Event_TargetActor, float K2Node_Event_DeltaTime, const struct FVector& CallFunc_GetCharacterLocation_ReturnValue, class APalCharacter* K2Node_Event_OwnerCharacter, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, TSoftObjectPtr<class APalCharacter> CallFunc_Conv_ObjectToSoftObjectReference_ReturnValue, bool K2Node_Event_EnableTrigger, bool CallFunc_IsValid_ReturnValue_1, double CallFunc_TurnToTarget_Internal_DeltaTime_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_BuildObjectDefenseBulletLauncher_BowGun_C", "ExecuteUbergraph_BP_BuildObjectDefenseBulletLauncher_BowGun");

	Params::ABP_BuildObjectDefenseBulletLauncher_BowGun_C_ExecuteUbergraph_BP_BuildObjectDefenseBulletLauncher_BowGun_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_Event_TargetActor = K2Node_Event_TargetActor;
	Parms.K2Node_Event_DeltaTime = K2Node_Event_DeltaTime;
	Parms.CallFunc_GetCharacterLocation_ReturnValue = CallFunc_GetCharacterLocation_ReturnValue;
	Parms.K2Node_Event_OwnerCharacter = K2Node_Event_OwnerCharacter;
	Parms.CallFunc_Add_VectorVector_ReturnValue = CallFunc_Add_VectorVector_ReturnValue;
	Parms.CallFunc_Conv_ObjectToSoftObjectReference_ReturnValue = CallFunc_Conv_ObjectToSoftObjectReference_ReturnValue;
	Parms.K2Node_Event_EnableTrigger = K2Node_Event_EnableTrigger;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_TurnToTarget_Internal_DeltaTime_ImplicitCast = CallFunc_TurnToTarget_Internal_DeltaTime_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}

}


