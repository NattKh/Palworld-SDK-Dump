#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_Action_Unique_Alpaca_Tackle.BP_Action_Unique_Alpaca_Tackle_C
// (None)

class UClass* UBP_Action_Unique_Alpaca_Tackle_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_Action_Unique_Alpaca_Tackle_C");

	return Clss;
}


// BP_Action_Unique_Alpaca_Tackle_C BP_Action_Unique_Alpaca_Tackle.Default__BP_Action_Unique_Alpaca_Tackle_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_Action_Unique_Alpaca_Tackle_C* UBP_Action_Unique_Alpaca_Tackle_C::GetDefaultObj()
{
	static class UBP_Action_Unique_Alpaca_Tackle_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_Action_Unique_Alpaca_Tackle_C*>(UBP_Action_Unique_Alpaca_Tackle_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_Action_Unique_Alpaca_Tackle.BP_Action_Unique_Alpaca_Tackle_C.OnBeginAction
// (Event, Public, BlueprintEvent)
// Parameters:

void UBP_Action_Unique_Alpaca_Tackle_C::OnBeginAction()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Action_Unique_Alpaca_Tackle_C", "OnBeginAction");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Action_Unique_Alpaca_Tackle.BP_Action_Unique_Alpaca_Tackle_C.OnEndAction
// (Event, Public, BlueprintEvent)
// Parameters:

void UBP_Action_Unique_Alpaca_Tackle_C::OnEndAction()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Action_Unique_Alpaca_Tackle_C", "OnEndAction");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Action_Unique_Alpaca_Tackle.BP_Action_Unique_Alpaca_Tackle_C.TickAction
// (Event, Public, BlueprintEvent)
// Parameters:
// float                              DeltaTime                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_Action_Unique_Alpaca_Tackle_C::TickAction(float DeltaTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Action_Unique_Alpaca_Tackle_C", "TickAction");

	Params::UBP_Action_Unique_Alpaca_Tackle_C_TickAction_Params Parms{};

	Parms.DeltaTime = DeltaTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Action_Unique_Alpaca_Tackle.BP_Action_Unique_Alpaca_Tackle_C.OnCompletedEndMontage
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_Action_Unique_Alpaca_Tackle_C::OnCompletedEndMontage()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Action_Unique_Alpaca_Tackle_C", "OnCompletedEndMontage");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Action_Unique_Alpaca_Tackle.BP_Action_Unique_Alpaca_Tackle_C.OnMontageNotify
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UAnimMontage*                Montage                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class FName                        NotifyName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_Action_Unique_Alpaca_Tackle_C::OnMontageNotify(class UAnimMontage* Montage, class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Action_Unique_Alpaca_Tackle_C", "OnMontageNotify");

	Params::UBP_Action_Unique_Alpaca_Tackle_C_OnMontageNotify_Params Parms{};

	Parms.Montage = Montage;
	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Action_Unique_Alpaca_Tackle.BP_Action_Unique_Alpaca_Tackle_C.ExecuteUbergraph_BP_Action_Unique_Alpaca_Tackle
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_DeltaTime                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UBP_UniqueSkillModule_Tackle_C*CallFunc_CreateSkillActionModule_Module                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetUniqueActionTarget_TargetActor                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetUniqueActionTarget_TargetActor_1                     (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UAnimMontage*                K2Node_CustomEvent_Montage                                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_CustomEvent_NotifyName                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_Action_Unique_Alpaca_Tackle_C::ExecuteUbergraph_BP_Action_Unique_Alpaca_Tackle(int32 EntryPoint, float K2Node_Event_DeltaTime, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UBP_UniqueSkillModule_Tackle_C* CallFunc_CreateSkillActionModule_Module, class AActor* CallFunc_GetUniqueActionTarget_TargetActor, class AActor* CallFunc_GetUniqueActionTarget_TargetActor_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, class UAnimMontage* K2Node_CustomEvent_Montage, class FName K2Node_CustomEvent_NotifyName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Action_Unique_Alpaca_Tackle_C", "ExecuteUbergraph_BP_Action_Unique_Alpaca_Tackle");

	Params::UBP_Action_Unique_Alpaca_Tackle_C_ExecuteUbergraph_BP_Action_Unique_Alpaca_Tackle_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_DeltaTime = K2Node_Event_DeltaTime;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_CreateSkillActionModule_Module = CallFunc_CreateSkillActionModule_Module;
	Parms.CallFunc_GetUniqueActionTarget_TargetActor = CallFunc_GetUniqueActionTarget_TargetActor;
	Parms.CallFunc_GetUniqueActionTarget_TargetActor_1 = CallFunc_GetUniqueActionTarget_TargetActor_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;
	Parms.K2Node_CustomEvent_Montage = K2Node_CustomEvent_Montage;
	Parms.K2Node_CustomEvent_NotifyName = K2Node_CustomEvent_NotifyName;

	UObject::ProcessEvent(Func, &Parms);

}

}


