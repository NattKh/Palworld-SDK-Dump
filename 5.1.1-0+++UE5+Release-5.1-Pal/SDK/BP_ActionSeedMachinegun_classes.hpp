#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xE (0x2C1 - 0x2B3)
// BlueprintGeneratedClass BP_ActionSeedMachinegun.BP_ActionSeedMachinegun_C
class UBP_ActionSeedMachinegun_C : public UBP_ActionGeneralAttackFarBase_C
{
public:
	uint8                                        Pad_40C9[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x2B8(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	bool                                         HasSpanwed;                                        // 0x2C0(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UBP_ActionSeedMachinegun_C* GetDefaultObj();

	void CallEffect(struct FSkillEffectSpawnParameter& Parameter);
	void OnSpawnEffect(class APalSkillEffectBase* Effect);
	void ExecuteUbergraph_BP_ActionSeedMachinegun(int32 EntryPoint, class APalCharacter* CallFunc_GetActionCharacter_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, class UPalSkeletalMeshComponent* CallFunc_GetMainMesh_ReturnValue, const struct FSkillEffectSpawnParameter& K2Node_Event_Parameter, const struct FVector& CallFunc_GetSocketLocation_ReturnValue, class APalSkillEffectBase* K2Node_Event_Effect, const struct FHitResult& CallFunc_K2_AddActorLocalOffset_SweepHitResult, const struct FHitResult& CallFunc_K2_SetActorLocation_SweepHitResult, bool CallFunc_K2_SetActorLocation_ReturnValue, const struct FVector& CallFunc_GetTargetLocation_ReturnValue, const struct FRotator& CallFunc_FindLookAtRotation_ReturnValue, bool CallFunc_K2_SetActorRotation_ReturnValue);
};

}


