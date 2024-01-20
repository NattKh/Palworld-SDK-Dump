#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_BuildObject_Trap_LegHold.BP_BuildObject_Trap_LegHold_C
// (Actor)

class UClass* ABP_BuildObject_Trap_LegHold_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_BuildObject_Trap_LegHold_C");

	return Clss;
}


// BP_BuildObject_Trap_LegHold_C BP_BuildObject_Trap_LegHold.Default__BP_BuildObject_Trap_LegHold_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_BuildObject_Trap_LegHold_C* ABP_BuildObject_Trap_LegHold_C::GetDefaultObj()
{
	static class ABP_BuildObject_Trap_LegHold_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_BuildObject_Trap_LegHold_C*>(ABP_BuildObject_Trap_LegHold_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_BuildObject_Trap_LegHold.BP_BuildObject_Trap_LegHold_C.GetTrapTime
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class AActor*                      HitTarget                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// double                             Time                                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             Const_DefaultTrapTime                                            (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPalCharacterParameterComponent*CallFunc_GetComponentByClass_ReturnValue                         (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetLegHoldResistLevel_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Subtract_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Conv_IntToDouble_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_MultiplyMultiply_FloatFloat_ReturnValue                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Divide_DoubleDouble_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_FClamp_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_BuildObject_Trap_LegHold_C::GetTrapTime(class AActor* HitTarget, double* Time, double Const_DefaultTrapTime, class UPalCharacterParameterComponent* CallFunc_GetComponentByClass_ReturnValue, int32 CallFunc_GetLegHoldResistLevel_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, double CallFunc_Conv_IntToDouble_ReturnValue, double CallFunc_MultiplyMultiply_FloatFloat_ReturnValue, double CallFunc_Divide_DoubleDouble_ReturnValue, double CallFunc_FClamp_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_BuildObject_Trap_LegHold_C", "GetTrapTime");

	Params::ABP_BuildObject_Trap_LegHold_C_GetTrapTime_Params Parms{};

	Parms.HitTarget = HitTarget;
	Parms.Const_DefaultTrapTime = Const_DefaultTrapTime;
	Parms.CallFunc_GetComponentByClass_ReturnValue = CallFunc_GetComponentByClass_ReturnValue;
	Parms.CallFunc_GetLegHoldResistLevel_ReturnValue = CallFunc_GetLegHoldResistLevel_ReturnValue;
	Parms.CallFunc_Subtract_IntInt_ReturnValue = CallFunc_Subtract_IntInt_ReturnValue;
	Parms.CallFunc_Conv_IntToDouble_ReturnValue = CallFunc_Conv_IntToDouble_ReturnValue;
	Parms.CallFunc_MultiplyMultiply_FloatFloat_ReturnValue = CallFunc_MultiplyMultiply_FloatFloat_ReturnValue;
	Parms.CallFunc_Divide_DoubleDouble_ReturnValue = CallFunc_Divide_DoubleDouble_ReturnValue;
	Parms.CallFunc_FClamp_ReturnValue = CallFunc_FClamp_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Time != nullptr)
		*Time = Parms.Time;

}


// Function BP_BuildObject_Trap_LegHold.BP_BuildObject_Trap_LegHold_C.OnEndTrap_ForAll
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      TargetActor                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_BuildObject_Trap_LegHold_C::OnEndTrap_ForAll(class AActor* TargetActor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_BuildObject_Trap_LegHold_C", "OnEndTrap_ForAll");

	Params::ABP_BuildObject_Trap_LegHold_C_OnEndTrap_ForAll_Params Parms{};

	Parms.TargetActor = TargetActor;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_BuildObject_Trap_LegHold.BP_BuildObject_Trap_LegHold_C.OnTriggerTrap_ForAll
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      TargetActor                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_BuildObject_Trap_LegHold_C::OnTriggerTrap_ForAll(class AActor* TargetActor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_BuildObject_Trap_LegHold_C", "OnTriggerTrap_ForAll");

	Params::ABP_BuildObject_Trap_LegHold_C_OnTriggerTrap_ForAll_Params Parms{};

	Parms.TargetActor = TargetActor;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_BuildObject_Trap_LegHold.BP_BuildObject_Trap_LegHold_C.OnEndTrap_ForServer
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      Target                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPalCharacterParameterComponent*CallFunc_GetComponentByClass_ReturnValue                         (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void ABP_BuildObject_Trap_LegHold_C::OnEndTrap_ForServer(class AActor* Target, class UPalCharacterParameterComponent* CallFunc_GetComponentByClass_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_BuildObject_Trap_LegHold_C", "OnEndTrap_ForServer");

	Params::ABP_BuildObject_Trap_LegHold_C_OnEndTrap_ForServer_Params Parms{};

	Parms.Target = Target;
	Parms.CallFunc_GetComponentByClass_ReturnValue = CallFunc_GetComponentByClass_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_BuildObject_Trap_LegHold.BP_BuildObject_Trap_LegHold_C.OnTriggerTrap_ForServer
// (Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      TargetActor                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPalCharacterParameterComponent*CallFunc_GetComponentByClass_ReturnValue                         (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void ABP_BuildObject_Trap_LegHold_C::OnTriggerTrap_ForServer(class AActor* TargetActor, class UPalCharacterParameterComponent* CallFunc_GetComponentByClass_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_BuildObject_Trap_LegHold_C", "OnTriggerTrap_ForServer");

	Params::ABP_BuildObject_Trap_LegHold_C_OnTriggerTrap_ForServer_Params Parms{};

	Parms.TargetActor = TargetActor;
	Parms.CallFunc_GetComponentByClass_ReturnValue = CallFunc_GetComponentByClass_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


