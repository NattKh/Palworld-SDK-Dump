#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x40 (0x170 - 0x130)
// BlueprintGeneratedClass BP_AIAction_WeaponUsing.BP_AIAction_WeaponUsing_C
class UBP_AIAction_WeaponUsing_C : public UPalAIActionBase
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x130(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class AActor*                                OwnerPawn;                                         // 0x138(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class APalCharacter*                         WeaponUser;                                        // 0x140(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UPalPartnerSkillParameterComponent*    PartnerSkillParam;                                 // 0x148(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UBP_CoopParam_Weapon_C*                CoopParam;                                         // 0x150(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UPalShooterComponent*                  Shooter;                                           // 0x158(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         IsShooting;                                        // 0x160(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3534[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UPalActionBase*                        AttachWeaponAction;                                // 0x168(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UBP_AIAction_WeaponUsing_C* GetDefaultObj();

	void StopAttachAction(bool CallFunc_IsValid_ReturnValue);
	void ProcFinish(class UPalLoadoutSelectorComponent* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_IsValid_ReturnValue);
	void StartPartnerSkill(class APalCharacter* K2Node_DynamicCast_AsPal_Character, bool K2Node_DynamicCast_bSuccess);
	void OnDetachWeapon(FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_IsRunning_ReturnValue, class APalCharacter* K2Node_DynamicCast_AsPal_Character, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue);
	void OnWeaponAttached(FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class APalCharacter* K2Node_DynamicCast_AsPal_Character, bool K2Node_DynamicCast_bSuccess);
	void OnEndAttachAction(FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate);
	void AttachWeaponProc(class UPalActionBase* CallFunc_PlayAttachAction_NewAction, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, bool CallFunc_AttachWeapon_Result, bool CallFunc_AttachWeapon_IsWeaponChanged, bool CallFunc_IsValid_ReturnValue);
	void Initialize(class APawn* ControlledPawn, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UPalShooterComponent* CallFunc_GetComponentByClass_ReturnValue, class UBP_CoopParam_Weapon_C* CallFunc_GetComponentByClass_ReturnValue_1);
	void SetShootDisableFlag(bool IsDisable, class FName FlagName, class APalCharacter* CallFunc_GetCharacter_ReturnValue, class APalCharacter* CallFunc_GetCharacter_ReturnValue_1, class APalPlayerCharacter* CallFunc_GetTrainerPlayer_ReturnValue, class APalPlayerCharacter* CallFunc_GetTrainerPlayer_ReturnValue_1, bool CallFunc_IsValid_ReturnValue, class UPalShooterComponent* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_IsValid_ReturnValue_1);
	void FindAttachAction(class UClass** Action, bool* Result, class UBP_CoopParam_Weapon_C* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValidClass_ReturnValue);
	void PlayAttachAction(class UPalActionBase** NewAction, class UClass* CallFunc_FindAttachAction_Action, bool CallFunc_FindAttachAction_Result, class APalCharacter* K2Node_DynamicCast_AsPal_Character, bool K2Node_DynamicCast_bSuccess, class UPalActionBase* CallFunc_PlayAction_ReturnValue);
	void AttachWeapon(bool* Result, bool* IsWeaponChanged, bool CallFunc_Attach_Weapon_Result, bool CallFunc_Attach_Weapon_IsWeaponChanged, bool CallFunc_IsValid_ReturnValue);
	void SetWeaponUser(class APalCharacter* WeaponUser);
	void BindCoopReleaseEvent();
	void UnbindCoopReleaseEvent();
	void CoopRelease();
	void OnDead(const struct FPalDeadInfo& DeadInfo);
	void OnStartPartnerSkill();
	void OnStopPartnerSkill();
	void OnWeaponNotify(enum class EWeaponNotifyType NotifyType);
	void OnPartnerSkillOverheat();
	void ActionStart(class APawn* ControlledPawn);
	void ActionFinished(class APawn* ControlledPawn, enum class EPawnActionResult WithResult);
	void ActionAbort(class APawn* ControlledPawn);
	void ExecuteUbergraph_BP_AIAction_WeaponUsing(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class AController* CallFunc_GetController_ReturnValue, class AController* CallFunc_GetController_ReturnValue_1, class APalPlayerController* K2Node_DynamicCast_AsPal_Player_Controller, bool K2Node_DynamicCast_bSuccess, class APalPlayerController* K2Node_DynamicCast_AsPal_Player_Controller_1, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_IsValid_ReturnValue, class UPalDamageReactionComponent* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, const struct FPalDeadInfo& K2Node_CustomEvent_DeadInfo, class UPalDamageReactionComponent* CallFunc_GetComponentByClass_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_2, bool CallFunc_IsValid_ReturnValue_3, bool CallFunc_IsValid_ReturnValue_4, class UPalPartnerSkillParameterComponent* CallFunc_GetComponentByClass_ReturnValue_2, bool CallFunc_IsValid_ReturnValue_5, bool CallFunc_IsValid_ReturnValue_6, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, enum class EWeaponNotifyType K2Node_CustomEvent_NotifyType, bool CallFunc_IsOverheat_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_IsValid_ReturnValue_7, bool CallFunc_IsValid_ReturnValue_8, bool CallFunc_IsValid_ReturnValue_9, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, class APawn* K2Node_Event_ControlledPawn_2, class APawn* K2Node_Event_ControlledPawn_1, enum class EPawnActionResult K2Node_Event_WithResult, class APawn* K2Node_Event_ControlledPawn);
};

}


