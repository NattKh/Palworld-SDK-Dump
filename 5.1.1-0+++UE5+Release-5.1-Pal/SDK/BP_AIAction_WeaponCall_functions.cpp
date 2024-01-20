#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_AIAction_WeaponCall.BP_AIAction_WeaponCall_C
// (None)

class UClass* UBP_AIAction_WeaponCall_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_AIAction_WeaponCall_C");

	return Clss;
}


// BP_AIAction_WeaponCall_C BP_AIAction_WeaponCall.Default__BP_AIAction_WeaponCall_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_AIAction_WeaponCall_C* UBP_AIAction_WeaponCall_C::GetDefaultObj()
{
	static class UBP_AIAction_WeaponCall_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_AIAction_WeaponCall_C*>(UBP_AIAction_WeaponCall_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_AIAction_WeaponCall.BP_AIAction_WeaponCall_C.CanChangeNextWeapon
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class APalCharacter*               Character                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CanChange                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPalShooterComponent*        CallFunc_GetComponentByClass_ReturnValue                         (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_CanChangeNextWeapon_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_AIAction_WeaponCall_C::CanChangeNextWeapon(class APalCharacter* Character, bool* CanChange, class UPalShooterComponent* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_CanChangeNextWeapon_ReturnValue, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_AIAction_WeaponCall_C", "CanChangeNextWeapon");

	Params::UBP_AIAction_WeaponCall_C_CanChangeNextWeapon_Params Parms{};

	Parms.Character = Character;
	Parms.CallFunc_GetComponentByClass_ReturnValue = CallFunc_GetComponentByClass_ReturnValue;
	Parms.CallFunc_CanChangeNextWeapon_ReturnValue = CallFunc_CanChangeNextWeapon_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (CanChange != nullptr)
		*CanChange = Parms.CanChange;

}


// Function BP_AIAction_WeaponCall.BP_AIAction_WeaponCall_C.HasAnyAction
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class APalCharacter*               Character                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               HasAction                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPalActionBase*              CallFunc_GetCurrentAction_ReturnValue                            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_ObjectObject_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_AIAction_WeaponCall_C::HasAnyAction(class APalCharacter* Character, bool* HasAction, class UPalActionBase* CallFunc_GetCurrentAction_ReturnValue, bool CallFunc_NotEqual_ObjectObject_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_AIAction_WeaponCall_C", "HasAnyAction");

	Params::UBP_AIAction_WeaponCall_C_HasAnyAction_Params Parms{};

	Parms.Character = Character;
	Parms.CallFunc_GetCurrentAction_ReturnValue = CallFunc_GetCurrentAction_ReturnValue;
	Parms.CallFunc_NotEqual_ObjectObject_ReturnValue = CallFunc_NotEqual_ObjectObject_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (HasAction != nullptr)
		*HasAction = Parms.HasAction;

}


// Function BP_AIAction_WeaponCall.BP_AIAction_WeaponCall_C.PlayAttachAction
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                      Action                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class APalCharacter*               Outer                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class APalCharacter*               Target                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPalActionBase*              NewAction                                                        (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPalActionBase*              CallFunc_PlayAction_ReturnValue                                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UBP_AIAction_WeaponCall_C::PlayAttachAction(class UClass* Action, class APalCharacter* Outer, class APalCharacter* Target, class UPalActionBase** NewAction, class UPalActionBase* CallFunc_PlayAction_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_AIAction_WeaponCall_C", "PlayAttachAction");

	Params::UBP_AIAction_WeaponCall_C_PlayAttachAction_Params Parms{};

	Parms.Action = Action;
	Parms.Outer = Outer;
	Parms.Target = Target;
	Parms.CallFunc_PlayAction_ReturnValue = CallFunc_PlayAction_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (NewAction != nullptr)
		*NewAction = Parms.NewAction;

}


// Function BP_AIAction_WeaponCall.BP_AIAction_WeaponCall_C.FindAttachAction
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UClass*                      Action                                                           (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UBP_CoopParam_Weapon_C*      CallFunc_GetComponentByClass_ReturnValue                         (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValidClass_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_AIAction_WeaponCall_C::FindAttachAction(class UClass** Action, class UBP_CoopParam_Weapon_C* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValidClass_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_AIAction_WeaponCall_C", "FindAttachAction");

	Params::UBP_AIAction_WeaponCall_C_FindAttachAction_Params Parms{};

	Parms.CallFunc_GetComponentByClass_ReturnValue = CallFunc_GetComponentByClass_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsValidClass_ReturnValue = CallFunc_IsValidClass_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Action != nullptr)
		*Action = Parms.Action;

}


// Function BP_AIAction_WeaponCall.BP_AIAction_WeaponCall_C.EquipWeapon
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AController*                 CallFunc_GetController_ReturnValue                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UBP_AIAction_WeaponUsing_C*  CallFunc_SpawnObject_ReturnValue                                 (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_PushChildAction_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_AIAction_WeaponCall_C::EquipWeapon(class AController* CallFunc_GetController_ReturnValue, class UBP_AIAction_WeaponUsing_C* CallFunc_SpawnObject_ReturnValue, bool CallFunc_PushChildAction_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_AIAction_WeaponCall_C", "EquipWeapon");

	Params::UBP_AIAction_WeaponCall_C_EquipWeapon_Params Parms{};

	Parms.CallFunc_GetController_ReturnValue = CallFunc_GetController_ReturnValue;
	Parms.CallFunc_SpawnObject_ReturnValue = CallFunc_SpawnObject_ReturnValue;
	Parms.CallFunc_PushChildAction_ReturnValue = CallFunc_PushChildAction_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_AIAction_WeaponCall.BP_AIAction_WeaponCall_C.ActionTick
// (Event, Public, BlueprintEvent)
// Parameters:
// class APawn*                       ControlledPawn                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// float                              DeltaSeconds                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_AIAction_WeaponCall_C::ActionTick(class APawn* ControlledPawn, float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_AIAction_WeaponCall_C", "ActionTick");

	Params::UBP_AIAction_WeaponCall_C_ActionTick_Params Parms{};

	Parms.ControlledPawn = ControlledPawn;
	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_AIAction_WeaponCall.BP_AIAction_WeaponCall_C.ExecuteUbergraph_BP_AIAction_WeaponCall
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasAnyAction_HasAction                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                       K2Node_Event_ControlledPawn                                      (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_DeltaSeconds                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetCharacterRadius_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetCharacterRadius_ReturnValue_1                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_CanChangeNextWeapon_CanChange                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Add_DoubleDouble_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Add_DoubleDouble_ReturnValue_1                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsNearTwoActor_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Add_DoubleDouble_B_ImplicitCast                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Add_DoubleDouble_A_ImplicitCast                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_IsNearTwoActor_distance_ImplicitCast                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_AIAction_WeaponCall_C::ExecuteUbergraph_BP_AIAction_WeaponCall(int32 EntryPoint, bool CallFunc_HasAnyAction_HasAction, class APawn* K2Node_Event_ControlledPawn, float K2Node_Event_DeltaSeconds, float CallFunc_GetCharacterRadius_ReturnValue, float CallFunc_GetCharacterRadius_ReturnValue_1, bool CallFunc_CanChangeNextWeapon_CanChange, double CallFunc_Add_DoubleDouble_ReturnValue, double CallFunc_Add_DoubleDouble_ReturnValue_1, bool CallFunc_IsNearTwoActor_ReturnValue, double CallFunc_Add_DoubleDouble_B_ImplicitCast, double CallFunc_Add_DoubleDouble_A_ImplicitCast, float CallFunc_IsNearTwoActor_distance_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_AIAction_WeaponCall_C", "ExecuteUbergraph_BP_AIAction_WeaponCall");

	Params::UBP_AIAction_WeaponCall_C_ExecuteUbergraph_BP_AIAction_WeaponCall_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_HasAnyAction_HasAction = CallFunc_HasAnyAction_HasAction;
	Parms.K2Node_Event_ControlledPawn = K2Node_Event_ControlledPawn;
	Parms.K2Node_Event_DeltaSeconds = K2Node_Event_DeltaSeconds;
	Parms.CallFunc_GetCharacterRadius_ReturnValue = CallFunc_GetCharacterRadius_ReturnValue;
	Parms.CallFunc_GetCharacterRadius_ReturnValue_1 = CallFunc_GetCharacterRadius_ReturnValue_1;
	Parms.CallFunc_CanChangeNextWeapon_CanChange = CallFunc_CanChangeNextWeapon_CanChange;
	Parms.CallFunc_Add_DoubleDouble_ReturnValue = CallFunc_Add_DoubleDouble_ReturnValue;
	Parms.CallFunc_Add_DoubleDouble_ReturnValue_1 = CallFunc_Add_DoubleDouble_ReturnValue_1;
	Parms.CallFunc_IsNearTwoActor_ReturnValue = CallFunc_IsNearTwoActor_ReturnValue;
	Parms.CallFunc_Add_DoubleDouble_B_ImplicitCast = CallFunc_Add_DoubleDouble_B_ImplicitCast;
	Parms.CallFunc_Add_DoubleDouble_A_ImplicitCast = CallFunc_Add_DoubleDouble_A_ImplicitCast;
	Parms.CallFunc_IsNearTwoActor_distance_ImplicitCast = CallFunc_IsNearTwoActor_distance_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}

}


