#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x16 (0x2C9 - 0x2B3)
// BlueprintGeneratedClass BP_ActionThunderBall.BP_ActionThunderBall_C
class UBP_ActionThunderBall_C : public UBP_ActionGeneralAttackFarBase_C
{
public:
	uint8                                        Pad_1D0C[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x2B8(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	double                                       BulletSpeed_0;                                     // 0x2C0(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsShooted;                                         // 0x2C8(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UBP_ActionThunderBall_C* GetDefaultObj();

	void OnSpawnEffect(class APalSkillEffectBase* Effect, class AActor* CallFunc_GetActionTarget_ReturnValue, class UProjectileMovementComponent* CallFunc_GetComponentByClass_ReturnValue, class USceneComponent* CallFunc_K2_GetRootComponent_ReturnValue);
	void OnBreakAction();
	void OnShoot();
	void OnStartProcessAnimation();
	void ExecuteUbergraph_BP_ActionThunderBall(int32 EntryPoint, const struct FVector& CallFunc_GetTargetLocation_ReturnValue, class APalSkillEffectBase* CallFunc_FindEffectByClass_Effect, bool CallFunc_IsValid_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, const struct FVector& CallFunc_Subtract_VectorVector_ReturnValue, class UProjectileMovementComponent* CallFunc_GetComponentByClass_ReturnValue, const struct FVector& CallFunc_Normal_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue, float K2Node_VariableSet_MaxSpeed_ImplicitCast);
};

}


