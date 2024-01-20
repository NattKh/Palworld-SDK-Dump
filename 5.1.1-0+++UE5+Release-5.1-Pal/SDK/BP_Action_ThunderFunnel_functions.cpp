#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_Action_ThunderFunnel.BP_Action_ThunderFunnel_C
// (None)

class UClass* UBP_Action_ThunderFunnel_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_Action_ThunderFunnel_C");

	return Clss;
}


// BP_Action_ThunderFunnel_C BP_Action_ThunderFunnel.Default__BP_Action_ThunderFunnel_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_Action_ThunderFunnel_C* UBP_Action_ThunderFunnel_C::GetDefaultObj()
{
	static class UBP_Action_ThunderFunnel_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_Action_ThunderFunnel_C*>(UBP_Action_ThunderFunnel_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_Action_ThunderFunnel.BP_Action_ThunderFunnel_C.OnSpawnEffect
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APalSkillEffectBase*         Effect                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetTargetLocation_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_VectorToString_ReturnValue                         (ZeroConstructor, HasGetValueTypeHash)
// class ABP_Skill_ThunderFunnel_C*   K2Node_DynamicCast_AsBP_Skill_Thunder_Funnel                     (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetActionTarget_ReturnValue                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UBP_Action_ThunderFunnel_C::OnSpawnEffect(class APalSkillEffectBase* Effect, const struct FVector& CallFunc_GetTargetLocation_ReturnValue, const class FString& CallFunc_Conv_VectorToString_ReturnValue, class ABP_Skill_ThunderFunnel_C* K2Node_DynamicCast_AsBP_Skill_Thunder_Funnel, bool K2Node_DynamicCast_bSuccess, class AActor* CallFunc_GetActionTarget_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Action_ThunderFunnel_C", "OnSpawnEffect");

	Params::UBP_Action_ThunderFunnel_C_OnSpawnEffect_Params Parms{};

	Parms.Effect = Effect;
	Parms.CallFunc_GetTargetLocation_ReturnValue = CallFunc_GetTargetLocation_ReturnValue;
	Parms.CallFunc_Conv_VectorToString_ReturnValue = CallFunc_Conv_VectorToString_ReturnValue;
	Parms.K2Node_DynamicCast_AsBP_Skill_Thunder_Funnel = K2Node_DynamicCast_AsBP_Skill_Thunder_Funnel;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetActionTarget_ReturnValue = CallFunc_GetActionTarget_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


