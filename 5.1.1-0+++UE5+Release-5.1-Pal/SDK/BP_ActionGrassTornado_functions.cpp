#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_ActionGrassTornado.BP_ActionGrassTornado_C
// (None)

class UClass* UBP_ActionGrassTornado_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_ActionGrassTornado_C");

	return Clss;
}


// BP_ActionGrassTornado_C BP_ActionGrassTornado.Default__BP_ActionGrassTornado_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_ActionGrassTornado_C* UBP_ActionGrassTornado_C::GetDefaultObj()
{
	static class UBP_ActionGrassTornado_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_ActionGrassTornado_C*>(UBP_ActionGrassTornado_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_ActionGrassTornado.BP_ActionGrassTornado_C.OnStartProcessAnimation
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                     CallFunc_GetTargetLocation_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSkillEffectSpawnParameter  CallFunc_Array_Get_Item                                          (NoDestructor)
// class APalSkillEffectBase*         CallFunc_FindEffectByClass_Effect                                (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IBPI_SkillEffect_C>K2Node_DynamicCast_AsBPI_Skill_Effect                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_ActionGrassTornado_C::OnStartProcessAnimation(const struct FVector& CallFunc_GetTargetLocation_ReturnValue, const struct FSkillEffectSpawnParameter& CallFunc_Array_Get_Item, class APalSkillEffectBase* CallFunc_FindEffectByClass_Effect, TScriptInterface<class IBPI_SkillEffect_C> K2Node_DynamicCast_AsBPI_Skill_Effect, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ActionGrassTornado_C", "OnStartProcessAnimation");

	Params::UBP_ActionGrassTornado_C_OnStartProcessAnimation_Params Parms{};

	Parms.CallFunc_GetTargetLocation_ReturnValue = CallFunc_GetTargetLocation_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_FindEffectByClass_Effect = CallFunc_FindEffectByClass_Effect;
	Parms.K2Node_DynamicCast_AsBPI_Skill_Effect = K2Node_DynamicCast_AsBPI_Skill_Effect;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}

}


