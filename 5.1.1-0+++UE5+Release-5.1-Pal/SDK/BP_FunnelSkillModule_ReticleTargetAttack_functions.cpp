#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_FunnelSkillModule_ReticleTargetAttack.BP_FunnelSkillModule_ReticleTargetAttack_C
// (None)

class UClass* UBP_FunnelSkillModule_ReticleTargetAttack_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_FunnelSkillModule_ReticleTargetAttack_C");

	return Clss;
}


// BP_FunnelSkillModule_ReticleTargetAttack_C BP_FunnelSkillModule_ReticleTargetAttack.Default__BP_FunnelSkillModule_ReticleTargetAttack_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_FunnelSkillModule_ReticleTargetAttack_C* UBP_FunnelSkillModule_ReticleTargetAttack_C::GetDefaultObj()
{
	static class UBP_FunnelSkillModule_ReticleTargetAttack_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_FunnelSkillModule_ReticleTargetAttack_C*>(UBP_FunnelSkillModule_ReticleTargetAttack_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_FunnelSkillModule_ReticleTargetAttack.BP_FunnelSkillModule_ReticleTargetAttack_C.ShouldSetSkillAction
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_ShouldSetSkillAction_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APalCharacter*               CallFunc_GetTrainer_ReturnValue                                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APalPlayerCharacter*         K2Node_DynamicCast_AsPal_Player_Character                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APalPlayerController*        CallFunc_GetPalPlayerController_ReturnValue                      (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPalOtomoHolderComponentBase*CallFunc_GetComponentByClass_ReturnValue                         (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EPalOtomoPalOrderType   CallFunc_GetOtomoOrder_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_ByteByte_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool UBP_FunnelSkillModule_ReticleTargetAttack_C::ShouldSetSkillAction(bool CallFunc_ShouldSetSkillAction_ReturnValue, class APalCharacter* CallFunc_GetTrainer_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, class APalPlayerCharacter* K2Node_DynamicCast_AsPal_Player_Character, bool K2Node_DynamicCast_bSuccess, class APalPlayerController* CallFunc_GetPalPlayerController_ReturnValue, class UPalOtomoHolderComponentBase* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_IsValid_ReturnValue_2, enum class EPalOtomoPalOrderType CallFunc_GetOtomoOrder_ReturnValue, bool CallFunc_NotEqual_ByteByte_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_FunnelSkillModule_ReticleTargetAttack_C", "ShouldSetSkillAction");

	Params::UBP_FunnelSkillModule_ReticleTargetAttack_C_ShouldSetSkillAction_Params Parms{};

	Parms.CallFunc_ShouldSetSkillAction_ReturnValue = CallFunc_ShouldSetSkillAction_ReturnValue;
	Parms.CallFunc_GetTrainer_ReturnValue = CallFunc_GetTrainer_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsPal_Player_Character = K2Node_DynamicCast_AsPal_Player_Character;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetPalPlayerController_ReturnValue = CallFunc_GetPalPlayerController_ReturnValue;
	Parms.CallFunc_GetComponentByClass_ReturnValue = CallFunc_GetComponentByClass_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;
	Parms.CallFunc_GetOtomoOrder_ReturnValue = CallFunc_GetOtomoOrder_ReturnValue;
	Parms.CallFunc_NotEqual_ByteByte_ReturnValue = CallFunc_NotEqual_ByteByte_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}

}


