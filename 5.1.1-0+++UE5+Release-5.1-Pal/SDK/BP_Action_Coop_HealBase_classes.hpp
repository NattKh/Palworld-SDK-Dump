#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x40 (0x178 - 0x138)
// BlueprintGeneratedClass BP_Action_Coop_HealBase.BP_Action_Coop_HealBase_C
class UBP_Action_Coop_HealBase_C : public UPalActionBase
{
public:
	uint8                                        Pad_2EDF[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x140(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UAnimMontage*                          Anim_Montage;                                      // 0x148(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	double                                       ElapsedTime;                                       // 0x150(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       FinishTime;                                        // 0x158(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       HealTime;                                          // 0x160(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsHealed;                                          // 0x168(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2F24[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AActor*                                HealTarget;                                        // 0x170(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UBP_Action_Coop_HealBase_C* GetDefaultObj();

	void TickAction(float DeltaTime);
	void OnBeginAction();
	void OnEndAction();
	void ExecuteUbergraph_BP_Action_Coop_HealBase(int32 EntryPoint, class FName CallFunc_GetBoneNameFromEHumanBone_ReturnValue, class APalCharacter* CallFunc_GetActionCharacter_ReturnValue, float K2Node_Event_DeltaTime, double CallFunc_Add_DoubleDouble_ReturnValue, float CallFunc_PlayAnimMontage_ReturnValue, bool CallFunc_Less_DoubleDouble_ReturnValue, bool CallFunc_GreaterEqual_DoubleDouble_ReturnValue, class USkeletalMeshComponent* CallFunc_GetMainMeshByActor_ReturnValue, class UNiagaraComponent* CallFunc_SpawnSystemAttached_ReturnValue, class APalCharacter* CallFunc_GetActionCharacter_ReturnValue_1, class AActor* CallFunc_GetActionTarget_ReturnValue, double CallFunc_Add_DoubleDouble_A_ImplicitCast);
};

}


