#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_Action_ParabolaBallBase.BP_Action_ParabolaBallBase_C
// (None)

class UClass* UBP_Action_ParabolaBallBase_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_Action_ParabolaBallBase_C");

	return Clss;
}


// BP_Action_ParabolaBallBase_C BP_Action_ParabolaBallBase.Default__BP_Action_ParabolaBallBase_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_Action_ParabolaBallBase_C* UBP_Action_ParabolaBallBase_C::GetDefaultObj()
{
	static class UBP_Action_ParabolaBallBase_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_Action_ParabolaBallBase_C*>(UBP_Action_ParabolaBallBase_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_Action_ParabolaBallBase.BP_Action_ParabolaBallBase_C.GetTaegetLocation
// (Private, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FVector                     Pos                                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APalCharacter*               CallFunc_GetActionCharacter_ReturnValue                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetPredictedTargetLocation_Location                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APalPlayerCharacter*         CallFunc_GetTrainerPlayer_ReturnValue                            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPalCharacterParameterComponent*CallFunc_GetComponentByClass_ReturnValue                         (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class APalCharacter*               CallFunc_GetActionCharacter_ReturnValue_1                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetOverrideTargetLocation_ConsiderRide_ReturnValue      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsPlayerControlled_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_Action_ParabolaBallBase_C::GetTaegetLocation(struct FVector* Pos, class APalCharacter* CallFunc_GetActionCharacter_ReturnValue, const struct FVector& CallFunc_GetPredictedTargetLocation_Location, class APalPlayerCharacter* CallFunc_GetTrainerPlayer_ReturnValue, class UPalCharacterParameterComponent* CallFunc_GetComponentByClass_ReturnValue, class APalCharacter* CallFunc_GetActionCharacter_ReturnValue_1, const struct FVector& CallFunc_GetOverrideTargetLocation_ConsiderRide_ReturnValue, bool CallFunc_IsPlayerControlled_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Action_ParabolaBallBase_C", "GetTaegetLocation");

	Params::UBP_Action_ParabolaBallBase_C_GetTaegetLocation_Params Parms{};

	Parms.CallFunc_GetActionCharacter_ReturnValue = CallFunc_GetActionCharacter_ReturnValue;
	Parms.CallFunc_GetPredictedTargetLocation_Location = CallFunc_GetPredictedTargetLocation_Location;
	Parms.CallFunc_GetTrainerPlayer_ReturnValue = CallFunc_GetTrainerPlayer_ReturnValue;
	Parms.CallFunc_GetComponentByClass_ReturnValue = CallFunc_GetComponentByClass_ReturnValue;
	Parms.CallFunc_GetActionCharacter_ReturnValue_1 = CallFunc_GetActionCharacter_ReturnValue_1;
	Parms.CallFunc_GetOverrideTargetLocation_ConsiderRide_ReturnValue = CallFunc_GetOverrideTargetLocation_ConsiderRide_ReturnValue;
	Parms.CallFunc_IsPlayerControlled_ReturnValue = CallFunc_IsPlayerControlled_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Pos != nullptr)
		*Pos = std::move(Parms.Pos);

}


// Function BP_Action_ParabolaBallBase.BP_Action_ParabolaBallBase_C.OnStartProcessAnimation
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_Action_ParabolaBallBase_C::OnStartProcessAnimation()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Action_ParabolaBallBase_C", "OnStartProcessAnimation");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Action_ParabolaBallBase.BP_Action_ParabolaBallBase_C.ExecuteUbergraph_BP_Action_ParabolaBallBase
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetTaegetLocation_Pos                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetTargetLocation_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSkillEffectSpawnParameter  CallFunc_Array_Get_Item                                          (NoDestructor)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_SuggestProjectileVelocity_CustomArc_OutLaunchVelocity   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_SuggestProjectileVelocity_CustomArc_ReturnValue         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APalSkillEffectBase*         CallFunc_FindEffectByClass_Effect                                (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_DoubleDouble_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IBPI_SkillEffect_C>K2Node_DynamicCast_AsBPI_Skill_Effect                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UProjectileMovementComponent*CallFunc_GetComponentByClass_ReturnValue                         (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Delay_Duration_ImplicitCast                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_Action_ParabolaBallBase_C::ExecuteUbergraph_BP_Action_ParabolaBallBase(int32 EntryPoint, const struct FVector& CallFunc_GetTaegetLocation_Pos, const struct FVector& CallFunc_GetTargetLocation_ReturnValue, const struct FSkillEffectSpawnParameter& CallFunc_Array_Get_Item, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, const struct FVector& CallFunc_SuggestProjectileVelocity_CustomArc_OutLaunchVelocity, bool CallFunc_SuggestProjectileVelocity_CustomArc_ReturnValue, class APalSkillEffectBase* CallFunc_FindEffectByClass_Effect, bool CallFunc_Greater_DoubleDouble_ReturnValue, TScriptInterface<class IBPI_SkillEffect_C> K2Node_DynamicCast_AsBPI_Skill_Effect, bool K2Node_DynamicCast_bSuccess, class UProjectileMovementComponent* CallFunc_GetComponentByClass_ReturnValue, float CallFunc_Delay_Duration_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Action_ParabolaBallBase_C", "ExecuteUbergraph_BP_Action_ParabolaBallBase");

	Params::UBP_Action_ParabolaBallBase_C_ExecuteUbergraph_BP_Action_ParabolaBallBase_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetTaegetLocation_Pos = CallFunc_GetTaegetLocation_Pos;
	Parms.CallFunc_GetTargetLocation_ReturnValue = CallFunc_GetTargetLocation_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue = CallFunc_K2_GetActorLocation_ReturnValue;
	Parms.CallFunc_SuggestProjectileVelocity_CustomArc_OutLaunchVelocity = CallFunc_SuggestProjectileVelocity_CustomArc_OutLaunchVelocity;
	Parms.CallFunc_SuggestProjectileVelocity_CustomArc_ReturnValue = CallFunc_SuggestProjectileVelocity_CustomArc_ReturnValue;
	Parms.CallFunc_FindEffectByClass_Effect = CallFunc_FindEffectByClass_Effect;
	Parms.CallFunc_Greater_DoubleDouble_ReturnValue = CallFunc_Greater_DoubleDouble_ReturnValue;
	Parms.K2Node_DynamicCast_AsBPI_Skill_Effect = K2Node_DynamicCast_AsBPI_Skill_Effect;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetComponentByClass_ReturnValue = CallFunc_GetComponentByClass_ReturnValue;
	Parms.CallFunc_Delay_Duration_ImplicitCast = CallFunc_Delay_Duration_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}

}


