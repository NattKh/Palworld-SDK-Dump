#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_Action_Coop_AssaultRifle_Move_Monkey.BP_Action_Coop_AssaultRifle_Move_Monkey_C
// (None)

class UClass* UBP_Action_Coop_AssaultRifle_Move_Monkey_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_Action_Coop_AssaultRifle_Move_Monkey_C");

	return Clss;
}


// BP_Action_Coop_AssaultRifle_Move_Monkey_C BP_Action_Coop_AssaultRifle_Move_Monkey.Default__BP_Action_Coop_AssaultRifle_Move_Monkey_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_Action_Coop_AssaultRifle_Move_Monkey_C* UBP_Action_Coop_AssaultRifle_Move_Monkey_C::GetDefaultObj()
{
	static class UBP_Action_Coop_AssaultRifle_Move_Monkey_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_Action_Coop_AssaultRifle_Move_Monkey_C*>(UBP_Action_Coop_AssaultRifle_Move_Monkey_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_Action_Coop_AssaultRifle_Move_Monkey.BP_Action_Coop_AssaultRifle_Move_Monkey_C.ChangeAnime
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UAnimMontage*                NewAnime                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UAnimMontage*                StopAnime                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UAnimMontage*                StopAnime2                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class APalCharacter*               CallFunc_GetActionCharacter_ReturnValue                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class APalCharacter*               CallFunc_GetActionCharacter_ReturnValue_1                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class APalCharacter*               CallFunc_GetActionCharacter_ReturnValue_2                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class APalCharacter*               CallFunc_GetActionCharacter_ReturnValue_3                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UAnimMontage*                CallFunc_GetCurrentMontage_ReturnValue                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_ObjectObject_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_PlayAnimMontage_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_Action_Coop_AssaultRifle_Move_Monkey_C::ChangeAnime(class UAnimMontage* NewAnime, class UAnimMontage* StopAnime, class UAnimMontage* StopAnime2, class APalCharacter* CallFunc_GetActionCharacter_ReturnValue, class APalCharacter* CallFunc_GetActionCharacter_ReturnValue_1, class APalCharacter* CallFunc_GetActionCharacter_ReturnValue_2, class APalCharacter* CallFunc_GetActionCharacter_ReturnValue_3, class UAnimMontage* CallFunc_GetCurrentMontage_ReturnValue, bool CallFunc_NotEqual_ObjectObject_ReturnValue, float CallFunc_PlayAnimMontage_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Action_Coop_AssaultRifle_Move_Monkey_C", "ChangeAnime");

	Params::UBP_Action_Coop_AssaultRifle_Move_Monkey_C_ChangeAnime_Params Parms{};

	Parms.NewAnime = NewAnime;
	Parms.StopAnime = StopAnime;
	Parms.StopAnime2 = StopAnime2;
	Parms.CallFunc_GetActionCharacter_ReturnValue = CallFunc_GetActionCharacter_ReturnValue;
	Parms.CallFunc_GetActionCharacter_ReturnValue_1 = CallFunc_GetActionCharacter_ReturnValue_1;
	Parms.CallFunc_GetActionCharacter_ReturnValue_2 = CallFunc_GetActionCharacter_ReturnValue_2;
	Parms.CallFunc_GetActionCharacter_ReturnValue_3 = CallFunc_GetActionCharacter_ReturnValue_3;
	Parms.CallFunc_GetCurrentMontage_ReturnValue = CallFunc_GetCurrentMontage_ReturnValue;
	Parms.CallFunc_NotEqual_ObjectObject_ReturnValue = CallFunc_NotEqual_ObjectObject_ReturnValue;
	Parms.CallFunc_PlayAnimMontage_ReturnValue = CallFunc_PlayAnimMontage_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Action_Coop_AssaultRifle_Move_Monkey.BP_Action_Coop_AssaultRifle_Move_Monkey_C.OnBeginAction
// (Event, Public, BlueprintEvent)
// Parameters:

void UBP_Action_Coop_AssaultRifle_Move_Monkey_C::OnBeginAction()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Action_Coop_AssaultRifle_Move_Monkey_C", "OnBeginAction");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Action_Coop_AssaultRifle_Move_Monkey.BP_Action_Coop_AssaultRifle_Move_Monkey_C.OnEndAction
// (Event, Public, BlueprintEvent)
// Parameters:

void UBP_Action_Coop_AssaultRifle_Move_Monkey_C::OnEndAction()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Action_Coop_AssaultRifle_Move_Monkey_C", "OnEndAction");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Action_Coop_AssaultRifle_Move_Monkey.BP_Action_Coop_AssaultRifle_Move_Monkey_C.ExecuteUbergraph_BP_Action_Coop_AssaultRifle_Move_Monkey
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APalCharacter*               CallFunc_GetActionCharacter_ReturnValue                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UBP_CoopParam_AssaultRifleMode_C*CallFunc_GetComponentByClass_ReturnValue                         (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UBP_Action_Coop_AssaultRifle_Move_Monkey_C::ExecuteUbergraph_BP_Action_Coop_AssaultRifle_Move_Monkey(int32 EntryPoint, class APalCharacter* CallFunc_GetActionCharacter_ReturnValue, class UBP_CoopParam_AssaultRifleMode_C* CallFunc_GetComponentByClass_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Action_Coop_AssaultRifle_Move_Monkey_C", "ExecuteUbergraph_BP_Action_Coop_AssaultRifle_Move_Monkey");

	Params::UBP_Action_Coop_AssaultRifle_Move_Monkey_C_ExecuteUbergraph_BP_Action_Coop_AssaultRifle_Move_Monkey_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetActionCharacter_ReturnValue = CallFunc_GetActionCharacter_ReturnValue;
	Parms.CallFunc_GetComponentByClass_ReturnValue = CallFunc_GetComponentByClass_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


