#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_AIActionFunnelSkill_ReticleTargetAttack.BP_AIActionFunnelSkill_ReticleTargetAttack_C
// (None)

class UClass* UBP_AIActionFunnelSkill_ReticleTargetAttack_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_AIActionFunnelSkill_ReticleTargetAttack_C");

	return Clss;
}


// BP_AIActionFunnelSkill_ReticleTargetAttack_C BP_AIActionFunnelSkill_ReticleTargetAttack.Default__BP_AIActionFunnelSkill_ReticleTargetAttack_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_AIActionFunnelSkill_ReticleTargetAttack_C* UBP_AIActionFunnelSkill_ReticleTargetAttack_C::GetDefaultObj()
{
	static class UBP_AIActionFunnelSkill_ReticleTargetAttack_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_AIActionFunnelSkill_ReticleTargetAttack_C*>(UBP_AIActionFunnelSkill_ReticleTargetAttack_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_AIActionFunnelSkill_ReticleTargetAttack.BP_AIActionFunnelSkill_ReticleTargetAttack_C.SetCoolTime
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EPalWazaID              WazaID                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPalWazaDatabase*            CallFunc_GetWazaDatabase_ReturnValue                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FPalWazaDatabaseRaw         CallFunc_FindWazaForBP_OutData                                   (None)
// bool                               CallFunc_FindWazaForBP_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_AIActionFunnelSkill_ReticleTargetAttack_C::SetCoolTime(enum class EPalWazaID WazaID, class UPalWazaDatabase* CallFunc_GetWazaDatabase_ReturnValue, const struct FPalWazaDatabaseRaw& CallFunc_FindWazaForBP_OutData, bool CallFunc_FindWazaForBP_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_AIActionFunnelSkill_ReticleTargetAttack_C", "SetCoolTime");

	Params::UBP_AIActionFunnelSkill_ReticleTargetAttack_C_SetCoolTime_Params Parms{};

	Parms.WazaID = WazaID;
	Parms.CallFunc_GetWazaDatabase_ReturnValue = CallFunc_GetWazaDatabase_ReturnValue;
	Parms.CallFunc_FindWazaForBP_OutData = CallFunc_FindWazaForBP_OutData;
	Parms.CallFunc_FindWazaForBP_ReturnValue = CallFunc_FindWazaForBP_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_AIActionFunnelSkill_ReticleTargetAttack.BP_AIActionFunnelSkill_ReticleTargetAttack_C.ActionStart
// (Event, Public, BlueprintEvent)
// Parameters:
// class APawn*                       ControlledPawn                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UBP_AIActionFunnelSkill_ReticleTargetAttack_C::ActionStart(class APawn* ControlledPawn)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_AIActionFunnelSkill_ReticleTargetAttack_C", "ActionStart");

	Params::UBP_AIActionFunnelSkill_ReticleTargetAttack_C_ActionStart_Params Parms{};

	Parms.ControlledPawn = ControlledPawn;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_AIActionFunnelSkill_ReticleTargetAttack.BP_AIActionFunnelSkill_ReticleTargetAttack_C.ActionTick
// (Event, Public, BlueprintEvent)
// Parameters:
// class APawn*                       ControlledPawn                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// float                              DeltaSeconds                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_AIActionFunnelSkill_ReticleTargetAttack_C::ActionTick(class APawn* ControlledPawn, float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_AIActionFunnelSkill_ReticleTargetAttack_C", "ActionTick");

	Params::UBP_AIActionFunnelSkill_ReticleTargetAttack_C_ActionTick_Params Parms{};

	Parms.ControlledPawn = ControlledPawn;
	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_AIActionFunnelSkill_ReticleTargetAttack.BP_AIActionFunnelSkill_ReticleTargetAttack_C.OnActionEnd
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_AIActionFunnelSkill_ReticleTargetAttack_C::OnActionEnd()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_AIActionFunnelSkill_ReticleTargetAttack_C", "OnActionEnd");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_AIActionFunnelSkill_ReticleTargetAttack.BP_AIActionFunnelSkill_ReticleTargetAttack_C.ExecuteUbergraph_BP_AIActionFunnelSkill_ReticleTargetAttack
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                       K2Node_Event_ControlledPawn_1                                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class APawn*                       K2Node_Event_ControlledPawn                                      (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_DeltaSeconds                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APalCharacter*               CallFunc_GetCharacter_ReturnValue                                (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPalFunnelSkillModuleReticleTargetAttack*K2Node_DynamicCast_AsPal_Funnel_Skill_Module_Reticle_Target_Attack(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APalCharacter*               CallFunc_GetTarget_ReturnValue                                   (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPalActionBase*              CallFunc_PlayAction_ReturnValue                                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPalActionWazaBase*          K2Node_DynamicCast_AsPal_Action_Waza_Base                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EPalWazaID              CallFunc_GetWazaID_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UBP_AIActionFunnelSkill_ReticleTargetAttack_C::ExecuteUbergraph_BP_AIActionFunnelSkill_ReticleTargetAttack(int32 EntryPoint, class APawn* K2Node_Event_ControlledPawn_1, class APawn* K2Node_Event_ControlledPawn, float K2Node_Event_DeltaSeconds, class APalCharacter* CallFunc_GetCharacter_ReturnValue, class UPalFunnelSkillModuleReticleTargetAttack* K2Node_DynamicCast_AsPal_Funnel_Skill_Module_Reticle_Target_Attack, bool K2Node_DynamicCast_bSuccess, class APalCharacter* CallFunc_GetTarget_ReturnValue, class UPalActionBase* CallFunc_PlayAction_ReturnValue, class UPalActionWazaBase* K2Node_DynamicCast_AsPal_Action_Waza_Base, bool K2Node_DynamicCast_bSuccess_1, enum class EPalWazaID CallFunc_GetWazaID_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_AIActionFunnelSkill_ReticleTargetAttack_C", "ExecuteUbergraph_BP_AIActionFunnelSkill_ReticleTargetAttack");

	Params::UBP_AIActionFunnelSkill_ReticleTargetAttack_C_ExecuteUbergraph_BP_AIActionFunnelSkill_ReticleTargetAttack_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_ControlledPawn_1 = K2Node_Event_ControlledPawn_1;
	Parms.K2Node_Event_ControlledPawn = K2Node_Event_ControlledPawn;
	Parms.K2Node_Event_DeltaSeconds = K2Node_Event_DeltaSeconds;
	Parms.CallFunc_GetCharacter_ReturnValue = CallFunc_GetCharacter_ReturnValue;
	Parms.K2Node_DynamicCast_AsPal_Funnel_Skill_Module_Reticle_Target_Attack = K2Node_DynamicCast_AsPal_Funnel_Skill_Module_Reticle_Target_Attack;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetTarget_ReturnValue = CallFunc_GetTarget_ReturnValue;
	Parms.CallFunc_PlayAction_ReturnValue = CallFunc_PlayAction_ReturnValue;
	Parms.K2Node_DynamicCast_AsPal_Action_Waza_Base = K2Node_DynamicCast_AsPal_Action_Waza_Base;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_GetWazaID_ReturnValue = CallFunc_GetWazaID_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;

	UObject::ProcessEvent(Func, &Parms);

}

}


