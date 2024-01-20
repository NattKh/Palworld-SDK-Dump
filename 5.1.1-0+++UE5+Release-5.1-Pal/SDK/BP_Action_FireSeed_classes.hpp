#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x15 (0x2C8 - 0x2B3)
// BlueprintGeneratedClass BP_Action_FireSeed.BP_Action_FireSeed_C
class UBP_Action_FireSeed_C : public UBP_ActionGeneralAttackFarBase_C
{
public:
	uint8                                        Pad_340E[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x2B8(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	struct FRandomStream                         Rand;                                              // 0x2C0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor)

	static class UClass* StaticClass();
	static class UBP_Action_FireSeed_C* GetDefaultObj();

	void OnSpawnEffect(class APalSkillEffectBase* Effect, const struct FRandomStream& CallFunc_GetRandomStream_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, class UProjectileMovementComponent* CallFunc_GetComponentByClass_ReturnValue, class ABP_SkillEffect_FireSeed_C* K2Node_DynamicCast_AsBP_Skill_Effect_Fire_Seed, bool K2Node_DynamicCast_bSuccess, class AActor* CallFunc_GetActionTarget_ReturnValue, class USceneComponent* CallFunc_K2_GetRootComponent_ReturnValue, class USceneComponent* CallFunc_K2_GetRootComponent_ReturnValue_1, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, const struct FVector& CallFunc_GetPredictedTargetLocation_Location, const struct FVector& CallFunc_Subtract_VectorVector_ReturnValue, const struct FVector& CallFunc_Conv_DoubleToVector_ReturnValue, const struct FVector& CallFunc_Normal_ReturnValue, const struct FVector& CallFunc_Multiply_VectorVector_ReturnValue);
	void OnBeginAction();
	void TickAction(float DeltaTime);
	void ExecuteUbergraph_BP_Action_FireSeed(int32 EntryPoint, float K2Node_Event_DeltaTime);
};

}


