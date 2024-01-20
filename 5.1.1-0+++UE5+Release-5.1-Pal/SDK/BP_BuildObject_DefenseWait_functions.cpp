#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_BuildObject_DefenseWait.BP_BuildObject_DefenseWait_C
// (Actor)

class UClass* ABP_BuildObject_DefenseWait_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_BuildObject_DefenseWait_C");

	return Clss;
}


// BP_BuildObject_DefenseWait_C BP_BuildObject_DefenseWait.Default__BP_BuildObject_DefenseWait_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_BuildObject_DefenseWait_C* ABP_BuildObject_DefenseWait_C::GetDefaultObj()
{
	static class ABP_BuildObject_DefenseWait_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_BuildObject_DefenseWait_C*>(ABP_BuildObject_DefenseWait_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_BuildObject_DefenseWait.BP_BuildObject_DefenseWait_C.GetCharacterRotation
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// struct FRotator                    ReturnValue                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

struct FRotator ABP_BuildObject_DefenseWait_C::GetCharacterRotation()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_BuildObject_DefenseWait_C", "GetCharacterRotation");

	Params::ABP_BuildObject_DefenseWait_C_GetCharacterRotation_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_BuildObject_DefenseWait.BP_BuildObject_DefenseWait_C.GetCharacterLocation
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// struct FVector                     ReturnValue                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetComponentLocation_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

struct FVector ABP_BuildObject_DefenseWait_C::GetCharacterLocation(const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_BuildObject_DefenseWait_C", "GetCharacterLocation");

	Params::ABP_BuildObject_DefenseWait_C_GetCharacterLocation_Params Parms{};

	Parms.CallFunc_K2_GetComponentLocation_ReturnValue = CallFunc_K2_GetComponentLocation_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_BuildObject_DefenseWait.BP_BuildObject_DefenseWait_C.IsShowOutlineInReticleTargetting
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool ABP_BuildObject_DefenseWait_C::IsShowOutlineInReticleTargetting()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_BuildObject_DefenseWait_C", "IsShowOutlineInReticleTargetting");

	Params::ABP_BuildObject_DefenseWait_C_IsShowOutlineInReticleTargetting_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_BuildObject_DefenseWait.BP_BuildObject_DefenseWait_C.TurnToTarget
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      TargetActor                                                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// float                              DeltaTime                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_BuildObject_DefenseWait_C::TurnToTarget(class AActor* TargetActor, float DeltaTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_BuildObject_DefenseWait_C", "TurnToTarget");

	Params::ABP_BuildObject_DefenseWait_C_TurnToTarget_Params Parms{};

	Parms.TargetActor = TargetActor;
	Parms.DeltaTime = DeltaTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_BuildObject_DefenseWait.BP_BuildObject_DefenseWait_C.SetOwnerCharacter
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APalCharacter*               OwnerCharacter                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_BuildObject_DefenseWait_C::SetOwnerCharacter(class APalCharacter* OwnerCharacter)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_BuildObject_DefenseWait_C", "SetOwnerCharacter");

	Params::ABP_BuildObject_DefenseWait_C_SetOwnerCharacter_Params Parms{};

	Parms.OwnerCharacter = OwnerCharacter;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_BuildObject_DefenseWait.BP_BuildObject_DefenseWait_C.SetEnableTrigger
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               EnableTrigger                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_BuildObject_DefenseWait_C::SetEnableTrigger(bool EnableTrigger)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_BuildObject_DefenseWait_C", "SetEnableTrigger");

	Params::ABP_BuildObject_DefenseWait_C_SetEnableTrigger_Params Parms{};

	Parms.EnableTrigger = EnableTrigger;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_BuildObject_DefenseWait.BP_BuildObject_DefenseWait_C.ExecuteUbergraph_BP_BuildObject_DefenseWait
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_EnableTrigger                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      K2Node_Event_TargetActor                                         (ConstParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_DeltaTime                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APalCharacter*               K2Node_Event_OwnerCharacter                                      (ConstParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_BuildObject_DefenseWait_C::ExecuteUbergraph_BP_BuildObject_DefenseWait(int32 EntryPoint, bool K2Node_Event_EnableTrigger, class AActor* K2Node_Event_TargetActor, float K2Node_Event_DeltaTime, class APalCharacter* K2Node_Event_OwnerCharacter)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_BuildObject_DefenseWait_C", "ExecuteUbergraph_BP_BuildObject_DefenseWait");

	Params::ABP_BuildObject_DefenseWait_C_ExecuteUbergraph_BP_BuildObject_DefenseWait_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_EnableTrigger = K2Node_Event_EnableTrigger;
	Parms.K2Node_Event_TargetActor = K2Node_Event_TargetActor;
	Parms.K2Node_Event_DeltaTime = K2Node_Event_DeltaTime;
	Parms.K2Node_Event_OwnerCharacter = K2Node_Event_OwnerCharacter;

	UObject::ProcessEvent(Func, &Parms);

}

}


