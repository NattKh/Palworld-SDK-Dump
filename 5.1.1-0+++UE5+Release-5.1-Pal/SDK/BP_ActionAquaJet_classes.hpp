#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xE (0x2C1 - 0x2B3)
// BlueprintGeneratedClass BP_ActionAquaJet.BP_ActionAquaJet_C
class UBP_ActionAquaJet_C : public UBP_ActionGeneralAttackFarBase_C
{
public:
	uint8                                        Pad_40F7[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x2B8(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	bool                                         IsShooted;                                         // 0x2C0(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UBP_ActionAquaJet_C* GetDefaultObj();

	void BulletHasShooted(class APalSkillEffectBase* Effect, const struct FVector& CallFunc_GetPredictedTargetLocation_Location, class UProjectileMovementComponent* CallFunc_GetComponentByClass_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, const struct FVector& CallFunc_Subtract_VectorVector_ReturnValue, const struct FVector& CallFunc_Normal_ReturnValue, const struct FVector& CallFunc_Conv_DoubleToVector_ReturnValue, const struct FSkillEffectSpawnParameter& CallFunc_Array_Get_Item, const struct FVector& CallFunc_Multiply_VectorVector_ReturnValue, class APalSkillEffectBase* CallFunc_FindEffectByClass_Effect, bool CallFunc_IsValid_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue);
	void SetHomingTarget(class APalSkillEffectBase* Effect);
	void OnShoot();
	void OnStartProcessAnimation();
	void ExecuteUbergraph_BP_ActionAquaJet(int32 EntryPoint, const struct FVector& CallFunc_GetTargetLocation_ReturnValue, const struct FSkillEffectSpawnParameter& CallFunc_Array_Get_Item, class APalSkillEffectBase* CallFunc_FindEffectByClass_Effect, class UProjectileMovementComponent* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, const struct FVector& CallFunc_Subtract_VectorVector_ReturnValue, const struct FVector& CallFunc_Normal_ReturnValue, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue, const struct FRotator& CallFunc_Conv_VectorToRotator_ReturnValue, bool CallFunc_K2_SetActorRotation_ReturnValue);
};

}


