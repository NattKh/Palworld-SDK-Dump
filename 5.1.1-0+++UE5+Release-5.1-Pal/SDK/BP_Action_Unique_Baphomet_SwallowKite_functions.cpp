#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_Action_Unique_Baphomet_SwallowKite.BP_Action_Unique_Baphomet_SwallowKite_C
// (None)

class UClass* UBP_Action_Unique_Baphomet_SwallowKite_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_Action_Unique_Baphomet_SwallowKite_C");

	return Clss;
}


// BP_Action_Unique_Baphomet_SwallowKite_C BP_Action_Unique_Baphomet_SwallowKite.Default__BP_Action_Unique_Baphomet_SwallowKite_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_Action_Unique_Baphomet_SwallowKite_C* UBP_Action_Unique_Baphomet_SwallowKite_C::GetDefaultObj()
{
	static class UBP_Action_Unique_Baphomet_SwallowKite_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_Action_Unique_Baphomet_SwallowKite_C*>(UBP_Action_Unique_Baphomet_SwallowKite_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_Action_Unique_Baphomet_SwallowKite.BP_Action_Unique_Baphomet_SwallowKite_C.GetMontage
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UAnimMontage*                Montage                                                          (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class APalCharacter*               CallFunc_GetActionCharacter_ReturnValue                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPalStaticCharacterParameterComponent*CallFunc_GetComponentByClass_ReturnValue                         (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsBossPal_Database_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_Action_Unique_Baphomet_SwallowKite_C::GetMontage(class UAnimMontage** Montage, class APalCharacter* CallFunc_GetActionCharacter_ReturnValue, class UPalStaticCharacterParameterComponent* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_IsBossPal_Database_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Action_Unique_Baphomet_SwallowKite_C", "GetMontage");

	Params::UBP_Action_Unique_Baphomet_SwallowKite_C_GetMontage_Params Parms{};

	Parms.CallFunc_GetActionCharacter_ReturnValue = CallFunc_GetActionCharacter_ReturnValue;
	Parms.CallFunc_GetComponentByClass_ReturnValue = CallFunc_GetComponentByClass_ReturnValue;
	Parms.CallFunc_IsBossPal_Database_ReturnValue = CallFunc_IsBossPal_Database_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Montage != nullptr)
		*Montage = Parms.Montage;

}


// Function BP_Action_Unique_Baphomet_SwallowKite.BP_Action_Unique_Baphomet_SwallowKite_C.OnMontageNotify
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UAnimMontage*                Montage                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class FName                        NotifyName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_NameName_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_NameName_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_Action_Unique_Baphomet_SwallowKite_C::OnMontageNotify(class UAnimMontage* Montage, class FName NotifyName, bool CallFunc_EqualEqual_NameName_ReturnValue, bool CallFunc_EqualEqual_NameName_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Action_Unique_Baphomet_SwallowKite_C", "OnMontageNotify");

	Params::UBP_Action_Unique_Baphomet_SwallowKite_C_OnMontageNotify_Params Parms{};

	Parms.Montage = Montage;
	Parms.NotifyName = NotifyName;
	Parms.CallFunc_EqualEqual_NameName_ReturnValue = CallFunc_EqualEqual_NameName_ReturnValue;
	Parms.CallFunc_EqualEqual_NameName_ReturnValue_1 = CallFunc_EqualEqual_NameName_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Action_Unique_Baphomet_SwallowKite.BP_Action_Unique_Baphomet_SwallowKite_C.OnNotifyEnd_7005D59D448F88E6383CA38524775CD3
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NotifyName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_Action_Unique_Baphomet_SwallowKite_C::OnNotifyEnd_7005D59D448F88E6383CA38524775CD3(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Action_Unique_Baphomet_SwallowKite_C", "OnNotifyEnd_7005D59D448F88E6383CA38524775CD3");

	Params::UBP_Action_Unique_Baphomet_SwallowKite_C_OnNotifyEnd_7005D59D448F88E6383CA38524775CD3_Params Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Action_Unique_Baphomet_SwallowKite.BP_Action_Unique_Baphomet_SwallowKite_C.OnNotifyBegin_7005D59D448F88E6383CA38524775CD3
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NotifyName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_Action_Unique_Baphomet_SwallowKite_C::OnNotifyBegin_7005D59D448F88E6383CA38524775CD3(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Action_Unique_Baphomet_SwallowKite_C", "OnNotifyBegin_7005D59D448F88E6383CA38524775CD3");

	Params::UBP_Action_Unique_Baphomet_SwallowKite_C_OnNotifyBegin_7005D59D448F88E6383CA38524775CD3_Params Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Action_Unique_Baphomet_SwallowKite.BP_Action_Unique_Baphomet_SwallowKite_C.OnInterrupted_7005D59D448F88E6383CA38524775CD3
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NotifyName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_Action_Unique_Baphomet_SwallowKite_C::OnInterrupted_7005D59D448F88E6383CA38524775CD3(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Action_Unique_Baphomet_SwallowKite_C", "OnInterrupted_7005D59D448F88E6383CA38524775CD3");

	Params::UBP_Action_Unique_Baphomet_SwallowKite_C_OnInterrupted_7005D59D448F88E6383CA38524775CD3_Params Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Action_Unique_Baphomet_SwallowKite.BP_Action_Unique_Baphomet_SwallowKite_C.OnBlendOut_7005D59D448F88E6383CA38524775CD3
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NotifyName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_Action_Unique_Baphomet_SwallowKite_C::OnBlendOut_7005D59D448F88E6383CA38524775CD3(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Action_Unique_Baphomet_SwallowKite_C", "OnBlendOut_7005D59D448F88E6383CA38524775CD3");

	Params::UBP_Action_Unique_Baphomet_SwallowKite_C_OnBlendOut_7005D59D448F88E6383CA38524775CD3_Params Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Action_Unique_Baphomet_SwallowKite.BP_Action_Unique_Baphomet_SwallowKite_C.OnCompleted_7005D59D448F88E6383CA38524775CD3
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NotifyName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_Action_Unique_Baphomet_SwallowKite_C::OnCompleted_7005D59D448F88E6383CA38524775CD3(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Action_Unique_Baphomet_SwallowKite_C", "OnCompleted_7005D59D448F88E6383CA38524775CD3");

	Params::UBP_Action_Unique_Baphomet_SwallowKite_C_OnCompleted_7005D59D448F88E6383CA38524775CD3_Params Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Action_Unique_Baphomet_SwallowKite.BP_Action_Unique_Baphomet_SwallowKite_C.OnBeginAction
// (Event, Public, BlueprintEvent)
// Parameters:

void UBP_Action_Unique_Baphomet_SwallowKite_C::OnBeginAction()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Action_Unique_Baphomet_SwallowKite_C", "OnBeginAction");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Action_Unique_Baphomet_SwallowKite.BP_Action_Unique_Baphomet_SwallowKite_C.OnEndAction
// (Event, Public, BlueprintEvent)
// Parameters:

void UBP_Action_Unique_Baphomet_SwallowKite_C::OnEndAction()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Action_Unique_Baphomet_SwallowKite_C", "OnEndAction");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Action_Unique_Baphomet_SwallowKite.BP_Action_Unique_Baphomet_SwallowKite_C.TickAction
// (Event, Public, BlueprintEvent)
// Parameters:
// float                              DeltaTime                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_Action_Unique_Baphomet_SwallowKite_C::TickAction(float DeltaTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Action_Unique_Baphomet_SwallowKite_C", "TickAction");

	Params::UBP_Action_Unique_Baphomet_SwallowKite_C_TickAction_Params Parms{};

	Parms.DeltaTime = DeltaTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Action_Unique_Baphomet_SwallowKite.BP_Action_Unique_Baphomet_SwallowKite_C.ExecuteUbergraph_BP_Action_Unique_Baphomet_SwallowKite
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAnimMontage*                CallFunc_GetMontage_Montage                                      (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_CustomEvent_NotifyName_4                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_CustomEvent_NotifyName_3                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_CustomEvent_NotifyName_2                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_CustomEvent_NotifyName_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_3                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_CustomEvent_NotifyName                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_4                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class FName                        Temp_name_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APalCharacter*               CallFunc_GetActionCharacter_ReturnValue                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPalSkeletalMeshComponent*   CallFunc_GetMainMesh_ReturnValue                                 (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class APalCharacter*               CallFunc_GetActionCharacter_ReturnValue_1                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_DeltaTime                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_GetRotation_Rotation                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UPalAnimInstance*            CallFunc_GetPalAnimInstance_AnimInstance                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_5                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPalAnimInstance*            CallFunc_GetPalAnimInstance_AnimInstance_1                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class APalCharacter*               CallFunc_GetActionCharacter_ReturnValue_2                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_K2_SetActorRotation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAnimMontage*                CallFunc_GetMontage_Montage_1                                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPlayMontageCallbackProxy*   CallFunc_CreateProxyObjectForPlayMontage_ReturnValue             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_GetRotation_DeltaTime_ImplicitCast                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_Action_Unique_Baphomet_SwallowKite_C::ExecuteUbergraph_BP_Action_Unique_Baphomet_SwallowKite(int32 EntryPoint, class UAnimMontage* CallFunc_GetMontage_Montage, class FName K2Node_CustomEvent_NotifyName_4, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class FName K2Node_CustomEvent_NotifyName_3, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class FName K2Node_CustomEvent_NotifyName_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, class FName K2Node_CustomEvent_NotifyName_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, class FName K2Node_CustomEvent_NotifyName, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, class FName Temp_name_Variable, class APalCharacter* CallFunc_GetActionCharacter_ReturnValue, class UPalSkeletalMeshComponent* CallFunc_GetMainMesh_ReturnValue, class APalCharacter* CallFunc_GetActionCharacter_ReturnValue_1, float K2Node_Event_DeltaTime, const struct FRotator& CallFunc_GetRotation_Rotation, class UPalAnimInstance* CallFunc_GetPalAnimInstance_AnimInstance, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_5, class UPalAnimInstance* CallFunc_GetPalAnimInstance_AnimInstance_1, class APalCharacter* CallFunc_GetActionCharacter_ReturnValue_2, bool CallFunc_K2_SetActorRotation_ReturnValue, class UAnimMontage* CallFunc_GetMontage_Montage_1, class UPlayMontageCallbackProxy* CallFunc_CreateProxyObjectForPlayMontage_ReturnValue, bool CallFunc_IsValid_ReturnValue, double CallFunc_GetRotation_DeltaTime_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Action_Unique_Baphomet_SwallowKite_C", "ExecuteUbergraph_BP_Action_Unique_Baphomet_SwallowKite");

	Params::UBP_Action_Unique_Baphomet_SwallowKite_C_ExecuteUbergraph_BP_Action_Unique_Baphomet_SwallowKite_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetMontage_Montage = CallFunc_GetMontage_Montage;
	Parms.K2Node_CustomEvent_NotifyName_4 = K2Node_CustomEvent_NotifyName_4;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CustomEvent_NotifyName_3 = K2Node_CustomEvent_NotifyName_3;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.K2Node_CustomEvent_NotifyName_2 = K2Node_CustomEvent_NotifyName_2;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;
	Parms.K2Node_CustomEvent_NotifyName_1 = K2Node_CustomEvent_NotifyName_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_3 = K2Node_CreateDelegate_OutputDelegate_3;
	Parms.K2Node_CustomEvent_NotifyName = K2Node_CustomEvent_NotifyName;
	Parms.K2Node_CreateDelegate_OutputDelegate_4 = K2Node_CreateDelegate_OutputDelegate_4;
	Parms.Temp_name_Variable = Temp_name_Variable;
	Parms.CallFunc_GetActionCharacter_ReturnValue = CallFunc_GetActionCharacter_ReturnValue;
	Parms.CallFunc_GetMainMesh_ReturnValue = CallFunc_GetMainMesh_ReturnValue;
	Parms.CallFunc_GetActionCharacter_ReturnValue_1 = CallFunc_GetActionCharacter_ReturnValue_1;
	Parms.K2Node_Event_DeltaTime = K2Node_Event_DeltaTime;
	Parms.CallFunc_GetRotation_Rotation = CallFunc_GetRotation_Rotation;
	Parms.CallFunc_GetPalAnimInstance_AnimInstance = CallFunc_GetPalAnimInstance_AnimInstance;
	Parms.K2Node_CreateDelegate_OutputDelegate_5 = K2Node_CreateDelegate_OutputDelegate_5;
	Parms.CallFunc_GetPalAnimInstance_AnimInstance_1 = CallFunc_GetPalAnimInstance_AnimInstance_1;
	Parms.CallFunc_GetActionCharacter_ReturnValue_2 = CallFunc_GetActionCharacter_ReturnValue_2;
	Parms.CallFunc_K2_SetActorRotation_ReturnValue = CallFunc_K2_SetActorRotation_ReturnValue;
	Parms.CallFunc_GetMontage_Montage_1 = CallFunc_GetMontage_Montage_1;
	Parms.CallFunc_CreateProxyObjectForPlayMontage_ReturnValue = CallFunc_CreateProxyObjectForPlayMontage_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetRotation_DeltaTime_ImplicitCast = CallFunc_GetRotation_DeltaTime_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}

}


