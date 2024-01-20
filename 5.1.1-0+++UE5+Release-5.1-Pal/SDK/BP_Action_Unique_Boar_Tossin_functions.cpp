#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_Action_Unique_Boar_Tossin.BP_Action_Unique_Boar_Tossin_C
// (None)

class UClass* UBP_Action_Unique_Boar_Tossin_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_Action_Unique_Boar_Tossin_C");

	return Clss;
}


// BP_Action_Unique_Boar_Tossin_C BP_Action_Unique_Boar_Tossin.Default__BP_Action_Unique_Boar_Tossin_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_Action_Unique_Boar_Tossin_C* UBP_Action_Unique_Boar_Tossin_C::GetDefaultObj()
{
	static class UBP_Action_Unique_Boar_Tossin_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_Action_Unique_Boar_Tossin_C*>(UBP_Action_Unique_Boar_Tossin_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_Action_Unique_Boar_Tossin.BP_Action_Unique_Boar_Tossin_C.OnBeginAction
// (Event, Public, BlueprintEvent)
// Parameters:

void UBP_Action_Unique_Boar_Tossin_C::OnBeginAction()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Action_Unique_Boar_Tossin_C", "OnBeginAction");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Action_Unique_Boar_Tossin.BP_Action_Unique_Boar_Tossin_C.OnEndAction
// (Event, Public, BlueprintEvent)
// Parameters:

void UBP_Action_Unique_Boar_Tossin_C::OnEndAction()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Action_Unique_Boar_Tossin_C", "OnEndAction");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Action_Unique_Boar_Tossin.BP_Action_Unique_Boar_Tossin_C.TickAction
// (Event, Public, BlueprintEvent)
// Parameters:
// float                              DeltaTime                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_Action_Unique_Boar_Tossin_C::TickAction(float DeltaTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Action_Unique_Boar_Tossin_C", "TickAction");

	Params::UBP_Action_Unique_Boar_Tossin_C_TickAction_Params Parms{};

	Parms.DeltaTime = DeltaTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Action_Unique_Boar_Tossin.BP_Action_Unique_Boar_Tossin_C.OnCompletedEndMontage
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_Action_Unique_Boar_Tossin_C::OnCompletedEndMontage()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Action_Unique_Boar_Tossin_C", "OnCompletedEndMontage");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Action_Unique_Boar_Tossin.BP_Action_Unique_Boar_Tossin_C.OnMontageNotify
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UAnimMontage*                Montage                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class FName                        NotifyName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_Action_Unique_Boar_Tossin_C::OnMontageNotify(class UAnimMontage* Montage, class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Action_Unique_Boar_Tossin_C", "OnMontageNotify");

	Params::UBP_Action_Unique_Boar_Tossin_C_OnMontageNotify_Params Parms{};

	Parms.Montage = Montage;
	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Action_Unique_Boar_Tossin.BP_Action_Unique_Boar_Tossin_C.OnEndAttack
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_Action_Unique_Boar_Tossin_C::OnEndAttack()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Action_Unique_Boar_Tossin_C", "OnEndAttack");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Action_Unique_Boar_Tossin.BP_Action_Unique_Boar_Tossin_C.ExecuteUbergraph_BP_Action_Unique_Boar_Tossin
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_DeltaTime                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBP_UniqueSkillModule_Tackle_C*CallFunc_CreateSkillActionModule_Module                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetUniqueActionTarget_TargetActor                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetUniqueActionTarget_TargetActor_1                     (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UAnimMontage*                K2Node_CustomEvent_Montage                                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_CustomEvent_NotifyName                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_NameName_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_3                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UBP_Action_Unique_Boar_Tossin_C::ExecuteUbergraph_BP_Action_Unique_Boar_Tossin(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, float K2Node_Event_DeltaTime, class UBP_UniqueSkillModule_Tackle_C* CallFunc_CreateSkillActionModule_Module, class AActor* CallFunc_GetUniqueActionTarget_TargetActor, class AActor* CallFunc_GetUniqueActionTarget_TargetActor_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, class UAnimMontage* K2Node_CustomEvent_Montage, class FName K2Node_CustomEvent_NotifyName, bool CallFunc_EqualEqual_NameName_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Action_Unique_Boar_Tossin_C", "ExecuteUbergraph_BP_Action_Unique_Boar_Tossin");

	Params::UBP_Action_Unique_Boar_Tossin_C_ExecuteUbergraph_BP_Action_Unique_Boar_Tossin_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_Event_DeltaTime = K2Node_Event_DeltaTime;
	Parms.CallFunc_CreateSkillActionModule_Module = CallFunc_CreateSkillActionModule_Module;
	Parms.CallFunc_GetUniqueActionTarget_TargetActor = CallFunc_GetUniqueActionTarget_TargetActor;
	Parms.CallFunc_GetUniqueActionTarget_TargetActor_1 = CallFunc_GetUniqueActionTarget_TargetActor_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;
	Parms.K2Node_CustomEvent_Montage = K2Node_CustomEvent_Montage;
	Parms.K2Node_CustomEvent_NotifyName = K2Node_CustomEvent_NotifyName;
	Parms.CallFunc_EqualEqual_NameName_ReturnValue = CallFunc_EqualEqual_NameName_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_3 = K2Node_CreateDelegate_OutputDelegate_3;

	UObject::ProcessEvent(Func, &Parms);

}

}


