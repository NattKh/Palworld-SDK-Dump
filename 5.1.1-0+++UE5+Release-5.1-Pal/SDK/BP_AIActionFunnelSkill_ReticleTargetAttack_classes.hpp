#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x18 (0x150 - 0x138)
// BlueprintGeneratedClass BP_AIActionFunnelSkill_ReticleTargetAttack.BP_AIActionFunnelSkill_ReticleTargetAttack_C
class UBP_AIActionFunnelSkill_ReticleTargetAttack_C : public UPalAIActionFunnelSkillBase
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x138(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UPalFunnelSkillModuleReticleTargetAttack* ModuleReticleAttack;                               // 0x140(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	TSubclassOf<class UPalActionWazaBase>        WazaAction;                                        // 0x148(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, UObjectWrapper, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UBP_AIActionFunnelSkill_ReticleTargetAttack_C* GetDefaultObj();

	void SetCoolTime(enum class EPalWazaID WazaID, class UPalWazaDatabase* CallFunc_GetWazaDatabase_ReturnValue, const struct FPalWazaDatabaseRaw& CallFunc_FindWazaForBP_OutData, bool CallFunc_FindWazaForBP_ReturnValue);
	void ActionStart(class APawn* ControlledPawn);
	void ActionTick(class APawn* ControlledPawn, float DeltaSeconds);
	void OnActionEnd();
	void ExecuteUbergraph_BP_AIActionFunnelSkill_ReticleTargetAttack(int32 EntryPoint, class APawn* K2Node_Event_ControlledPawn_1, class APawn* K2Node_Event_ControlledPawn, float K2Node_Event_DeltaSeconds, class APalCharacter* CallFunc_GetCharacter_ReturnValue, class UPalFunnelSkillModuleReticleTargetAttack* K2Node_DynamicCast_AsPal_Funnel_Skill_Module_Reticle_Target_Attack, bool K2Node_DynamicCast_bSuccess, class APalCharacter* CallFunc_GetTarget_ReturnValue, class UPalActionBase* CallFunc_PlayAction_ReturnValue, class UPalActionWazaBase* K2Node_DynamicCast_AsPal_Action_Waza_Base, bool K2Node_DynamicCast_bSuccess_1, enum class EPalWazaID CallFunc_GetWazaID_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate);
};

}


