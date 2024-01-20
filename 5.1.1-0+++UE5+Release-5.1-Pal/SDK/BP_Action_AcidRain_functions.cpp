#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_Action_AcidRain.BP_Action_AcidRain_C
// (None)

class UClass* UBP_Action_AcidRain_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_Action_AcidRain_C");

	return Clss;
}


// BP_Action_AcidRain_C BP_Action_AcidRain.Default__BP_Action_AcidRain_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_Action_AcidRain_C* UBP_Action_AcidRain_C::GetDefaultObj()
{
	static class UBP_Action_AcidRain_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_Action_AcidRain_C*>(UBP_Action_AcidRain_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_Action_AcidRain.BP_Action_AcidRain_C.OnSpawnEffect
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APalSkillEffectBase*         Effect                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UBP_Action_AcidRain_C::OnSpawnEffect(class APalSkillEffectBase* Effect)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Action_AcidRain_C", "OnSpawnEffect");

	Params::UBP_Action_AcidRain_C_OnSpawnEffect_Params Parms{};

	Parms.Effect = Effect;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Action_AcidRain.BP_Action_AcidRain_C.ExecuteUbergraph_BP_Action_AcidRain
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APalSkillEffectBase*         K2Node_Event_Effect                                              (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ABP_SkillEffect_AcidRain_Cloud_C*K2Node_DynamicCast_AsBP_Skill_Effect_Acid_Rain_Cloud             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APalSkillEffectBase*         CallFunc_FindEffectByClass_Effect                                (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ABP_SkillEffect_AcidRain_C*  K2Node_DynamicCast_AsBP_Skill_Effect_Acid_Rain                   (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetTargetLocation_Location                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                  CallFunc_K2_SetActorLocation_SweepHitResult                      (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// bool                               CallFunc_K2_SetActorLocation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_Action_AcidRain_C::ExecuteUbergraph_BP_Action_AcidRain(int32 EntryPoint, class APalSkillEffectBase* K2Node_Event_Effect, class ABP_SkillEffect_AcidRain_Cloud_C* K2Node_DynamicCast_AsBP_Skill_Effect_Acid_Rain_Cloud, bool K2Node_DynamicCast_bSuccess, class APalSkillEffectBase* CallFunc_FindEffectByClass_Effect, class ABP_SkillEffect_AcidRain_C* K2Node_DynamicCast_AsBP_Skill_Effect_Acid_Rain, bool K2Node_DynamicCast_bSuccess_1, const struct FVector& CallFunc_GetTargetLocation_Location, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, const struct FHitResult& CallFunc_K2_SetActorLocation_SweepHitResult, bool CallFunc_K2_SetActorLocation_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Action_AcidRain_C", "ExecuteUbergraph_BP_Action_AcidRain");

	Params::UBP_Action_AcidRain_C_ExecuteUbergraph_BP_Action_AcidRain_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_Effect = K2Node_Event_Effect;
	Parms.K2Node_DynamicCast_AsBP_Skill_Effect_Acid_Rain_Cloud = K2Node_DynamicCast_AsBP_Skill_Effect_Acid_Rain_Cloud;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_FindEffectByClass_Effect = CallFunc_FindEffectByClass_Effect;
	Parms.K2Node_DynamicCast_AsBP_Skill_Effect_Acid_Rain = K2Node_DynamicCast_AsBP_Skill_Effect_Acid_Rain;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_GetTargetLocation_Location = CallFunc_GetTargetLocation_Location;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue = CallFunc_K2_GetActorLocation_ReturnValue;
	Parms.CallFunc_K2_SetActorLocation_SweepHitResult = CallFunc_K2_SetActorLocation_SweepHitResult;
	Parms.CallFunc_K2_SetActorLocation_ReturnValue = CallFunc_K2_SetActorLocation_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


