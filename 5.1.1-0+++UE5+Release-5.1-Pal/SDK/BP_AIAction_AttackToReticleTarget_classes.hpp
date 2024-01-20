#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x54 (0x184 - 0x130)
// BlueprintGeneratedClass BP_AIAction_AttackToReticleTarget.BP_AIAction_AttackToReticleTarget_C
class UBP_AIAction_AttackToReticleTarget_C : public UPalAIActionBase
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x130(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class APawn*                                 ControlledPawn;                                    // 0x138(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class APalCharacter*                         OwnerCharacter;                                    // 0x140(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UPalPartnerSkillParameterComponent*    PartnerSkillParam;                                 // 0x148(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class APalCharacter*                         PlayerCharacter;                                   // 0x150(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	bool                                         IsAborted;                                         // 0x158(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_429D[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class APalCharacter*                         TargetCharacter;                                   // 0x160(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	double                                       FindTargetElapedTime;                              // 0x168(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       FindTargetTimeLimit;                               // 0x170(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsTargetFound;                                     // 0x178(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_42A2[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  FlagName;                                          // 0x17C(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UBP_AIAction_AttackToReticleTarget_C* GetDefaultObj();

	void SetEnableReticleTargetFlag(bool Enable, class UPalCharacterParameterComponent* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1);
	void CanFindTarget(bool* Result);
	class FText GetSkillName();
	void AddLogExecute(class APalCharacter* CallFunc_GetCharacter_ReturnValue, class UPalOtomoHolderComponentBase* CallFunc_GetOtomoHolderByOtomoPal_ReturnValue);
	void AddLogTargetNotFound(class APalCharacter* CallFunc_GetCharacter_ReturnValue, class UPalOtomoHolderComponentBase* CallFunc_GetOtomoHolderByOtomoPal_ReturnValue);
	void IsTargetValid(class APalCharacter* Target, bool* IsValid, bool CallFunc_IsLive_ReturnValue, bool CallFunc_IsValid_ReturnValue);
	void FinishAction(bool CallFunc_IsValid_ReturnValue);
	void FindTarget(bool* IsFound, class APalCharacter** Target, class UPalCharacterParameterComponent* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsApplicableDamage_ReturnValue, class APalCharacter* K2Node_DynamicCast_AsPal_Character, bool K2Node_DynamicCast_bSuccess);
	void Tick_ObserveTarget(double DeltaTime, bool CallFunc_IsTargetValid_IsValid);
	void Tick_FindTarget(double DeltaTime, bool* TargetFound, bool CallFunc_CanFindTarget_Result, bool CallFunc_Greater_DoubleDouble_ReturnValue, double CallFunc_Add_DoubleDouble_ReturnValue, bool CallFunc_FindTarget_IsFound, class APalCharacter* CallFunc_FindTarget_Target);
	void SetupAction(class APawn* ControlledPawn, class APalCharacter* K2Node_DynamicCast_AsPal_Character, bool K2Node_DynamicCast_bSuccess, class APalPlayerCharacter* CallFunc_GetTrainerPlayer_ReturnValue, class UPalPartnerSkillParameterComponent* CallFunc_GetComponentByClass_ReturnValue);
	void ActionTick(class APawn* ControlledPawn, float DeltaSeconds);
	void ActionStart(class APawn* ControlledPawn);
	void ActionAbort(class APawn* ControlledPawn);
	void ActionFinished(class APawn* ControlledPawn, enum class EPawnActionResult WithResult);
	void OnTargetFound(class AActor* TargetActor);
	void OnTargetLost();
	void ExecuteUbergraph_BP_AIAction_AttackToReticleTarget(int32 EntryPoint, class APawn* K2Node_Event_ControlledPawn, enum class EPawnActionResult K2Node_Event_WithResult, class APawn* K2Node_Event_ControlledPawn_1, class APawn* K2Node_Event_ControlledPawn_2, class APawn* K2Node_Event_ControlledPawn_3, float K2Node_Event_DeltaSeconds, bool CallFunc_Tick_FindTarget_TargetFound, class AActor* K2Node_CustomEvent_TargetActor, double CallFunc_Tick_FindTarget_DeltaTime_ImplicitCast, double CallFunc_Tick_ObserveTarget_DeltaTime_ImplicitCast);
};

}


