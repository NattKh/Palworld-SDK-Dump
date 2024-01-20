#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xE (0x2C1 - 0x2B3)
// BlueprintGeneratedClass BP_ActionPowerShot.BP_ActionPowerShot_C
class UBP_ActionPowerShot_C : public UBP_ActionGeneralAttackFarBase_C
{
public:
	uint8                                        Pad_8D5[0x5];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x2B8(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	bool                                         IsShooted;                                         // 0x2C0(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UBP_ActionPowerShot_C* GetDefaultObj();

	void OnSpawnEffect(class APalSkillEffectBase* Effect, const struct FVector& CallFunc_GetPredictedTargetLocation_Location, class UProjectileMovementComponent* CallFunc_GetComponentByClass_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, bool CallFunc_IsValid_ReturnValue, const struct FVector& CallFunc_Subtract_VectorVector_ReturnValue, const struct FVector& CallFunc_Normal_ReturnValue, const struct FVector& CallFunc_Conv_DoubleToVector_ReturnValue, const struct FVector& CallFunc_Multiply_VectorVector_ReturnValue);
	void SetHomingTarget(class APalSkillEffectBase* Effect);
	void SetBulletSpeed(class APalSkillEffectBase** Effect);
	void OnBeginAction();
	void ExecuteUbergraph_BP_ActionPowerShot(int32 EntryPoint, class APalCharacter* CallFunc_GetActionCharacter_ReturnValue, bool CallFunc_IsPlayerControlled_ReturnValue);
};

}


