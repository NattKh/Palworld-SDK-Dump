#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_Action_Unique_FlameBuffalo_FlameHorn.BP_Action_Unique_FlameBuffalo_FlameHorn_C
// (None)

class UClass* UBP_Action_Unique_FlameBuffalo_FlameHorn_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_Action_Unique_FlameBuffalo_FlameHorn_C");

	return Clss;
}


// BP_Action_Unique_FlameBuffalo_FlameHorn_C BP_Action_Unique_FlameBuffalo_FlameHorn.Default__BP_Action_Unique_FlameBuffalo_FlameHorn_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_Action_Unique_FlameBuffalo_FlameHorn_C* UBP_Action_Unique_FlameBuffalo_FlameHorn_C::GetDefaultObj()
{
	static class UBP_Action_Unique_FlameBuffalo_FlameHorn_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_Action_Unique_FlameBuffalo_FlameHorn_C*>(UBP_Action_Unique_FlameBuffalo_FlameHorn_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_Action_Unique_FlameBuffalo_FlameHorn.BP_Action_Unique_FlameBuffalo_FlameHorn_C.OnCompletedEndMontage
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_Action_Unique_FlameBuffalo_FlameHorn_C::OnCompletedEndMontage()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Action_Unique_FlameBuffalo_FlameHorn_C", "OnCompletedEndMontage");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Action_Unique_FlameBuffalo_FlameHorn.BP_Action_Unique_FlameBuffalo_FlameHorn_C.OnMontageNotify
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UAnimMontage*                Montage                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class FName                        NotifyName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_Action_Unique_FlameBuffalo_FlameHorn_C::OnMontageNotify(class UAnimMontage* Montage, class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Action_Unique_FlameBuffalo_FlameHorn_C", "OnMontageNotify");

	Params::UBP_Action_Unique_FlameBuffalo_FlameHorn_C_OnMontageNotify_Params Parms{};

	Parms.Montage = Montage;
	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Action_Unique_FlameBuffalo_FlameHorn.BP_Action_Unique_FlameBuffalo_FlameHorn_C.OnBeginAction
// (Event, Public, BlueprintEvent)
// Parameters:

void UBP_Action_Unique_FlameBuffalo_FlameHorn_C::OnBeginAction()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Action_Unique_FlameBuffalo_FlameHorn_C", "OnBeginAction");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Action_Unique_FlameBuffalo_FlameHorn.BP_Action_Unique_FlameBuffalo_FlameHorn_C.TickAction
// (Event, Public, BlueprintEvent)
// Parameters:
// float                              DeltaTime                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_Action_Unique_FlameBuffalo_FlameHorn_C::TickAction(float DeltaTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Action_Unique_FlameBuffalo_FlameHorn_C", "TickAction");

	Params::UBP_Action_Unique_FlameBuffalo_FlameHorn_C_TickAction_Params Parms{};

	Parms.DeltaTime = DeltaTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Action_Unique_FlameBuffalo_FlameHorn.BP_Action_Unique_FlameBuffalo_FlameHorn_C.OnEndAction
// (Event, Public, BlueprintEvent)
// Parameters:

void UBP_Action_Unique_FlameBuffalo_FlameHorn_C::OnEndAction()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Action_Unique_FlameBuffalo_FlameHorn_C", "OnEndAction");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Action_Unique_FlameBuffalo_FlameHorn.BP_Action_Unique_FlameBuffalo_FlameHorn_C.CallEndAttack
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_Action_Unique_FlameBuffalo_FlameHorn_C::CallEndAttack()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Action_Unique_FlameBuffalo_FlameHorn_C", "CallEndAttack");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Action_Unique_FlameBuffalo_FlameHorn.BP_Action_Unique_FlameBuffalo_FlameHorn_C.ExecuteUbergraph_BP_Action_Unique_FlameBuffalo_FlameHorn
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Has_Been_Initd_Variable                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EAction_Unique_Tackle   CallFunc_GetCurrentState_State                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Has_Been_Initd_Variable_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UBP_UniqueSkillModule_Tackle_C*CallFunc_CreateSkillActionModule_Module                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetUniqueActionTarget_TargetActor                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetUniqueActionTarget_TargetActor_1                     (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UAnimMontage*                K2Node_CustomEvent_Montage                                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_CustomEvent_NotifyName                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_DeltaTime                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_IsClosed_Variable                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetUniqueActionTarget_TargetActor_2                     (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class APalCharacter*               CallFunc_GetActionCharacter_ReturnValue                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetDistanceTo_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_DoubleDouble_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_IsClosed_Variable_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Less_DoubleDouble_A_ImplicitCast                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_Action_Unique_FlameBuffalo_FlameHorn_C::ExecuteUbergraph_BP_Action_Unique_FlameBuffalo_FlameHorn(int32 EntryPoint, bool Temp_bool_Has_Been_Initd_Variable, enum class EAction_Unique_Tackle CallFunc_GetCurrentState_State, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool Temp_bool_Has_Been_Initd_Variable_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UBP_UniqueSkillModule_Tackle_C* CallFunc_CreateSkillActionModule_Module, class AActor* CallFunc_GetUniqueActionTarget_TargetActor, class AActor* CallFunc_GetUniqueActionTarget_TargetActor_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, class UAnimMontage* K2Node_CustomEvent_Montage, class FName K2Node_CustomEvent_NotifyName, float K2Node_Event_DeltaTime, bool Temp_bool_IsClosed_Variable, class AActor* CallFunc_GetUniqueActionTarget_TargetActor_2, class APalCharacter* CallFunc_GetActionCharacter_ReturnValue, bool CallFunc_IsValid_ReturnValue, float CallFunc_GetDistanceTo_ReturnValue, bool CallFunc_Less_DoubleDouble_ReturnValue, bool Temp_bool_IsClosed_Variable_1, double CallFunc_Less_DoubleDouble_A_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Action_Unique_FlameBuffalo_FlameHorn_C", "ExecuteUbergraph_BP_Action_Unique_FlameBuffalo_FlameHorn");

	Params::UBP_Action_Unique_FlameBuffalo_FlameHorn_C_ExecuteUbergraph_BP_Action_Unique_FlameBuffalo_FlameHorn_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.Temp_bool_Has_Been_Initd_Variable = Temp_bool_Has_Been_Initd_Variable;
	Parms.CallFunc_GetCurrentState_State = CallFunc_GetCurrentState_State;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.Temp_bool_Has_Been_Initd_Variable_1 = Temp_bool_Has_Been_Initd_Variable_1;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_CreateSkillActionModule_Module = CallFunc_CreateSkillActionModule_Module;
	Parms.CallFunc_GetUniqueActionTarget_TargetActor = CallFunc_GetUniqueActionTarget_TargetActor;
	Parms.CallFunc_GetUniqueActionTarget_TargetActor_1 = CallFunc_GetUniqueActionTarget_TargetActor_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;
	Parms.K2Node_CustomEvent_Montage = K2Node_CustomEvent_Montage;
	Parms.K2Node_CustomEvent_NotifyName = K2Node_CustomEvent_NotifyName;
	Parms.K2Node_Event_DeltaTime = K2Node_Event_DeltaTime;
	Parms.Temp_bool_IsClosed_Variable = Temp_bool_IsClosed_Variable;
	Parms.CallFunc_GetUniqueActionTarget_TargetActor_2 = CallFunc_GetUniqueActionTarget_TargetActor_2;
	Parms.CallFunc_GetActionCharacter_ReturnValue = CallFunc_GetActionCharacter_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetDistanceTo_ReturnValue = CallFunc_GetDistanceTo_ReturnValue;
	Parms.CallFunc_Less_DoubleDouble_ReturnValue = CallFunc_Less_DoubleDouble_ReturnValue;
	Parms.Temp_bool_IsClosed_Variable_1 = Temp_bool_IsClosed_Variable_1;
	Parms.CallFunc_Less_DoubleDouble_A_ImplicitCast = CallFunc_Less_DoubleDouble_A_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}

}


