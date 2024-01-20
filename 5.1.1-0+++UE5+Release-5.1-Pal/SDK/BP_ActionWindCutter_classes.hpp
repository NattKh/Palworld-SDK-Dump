#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x4D (0x300 - 0x2B3)
// BlueprintGeneratedClass BP_ActionWindCutter.BP_ActionWindCutter_C
class UBP_ActionWindCutter_C : public UBP_ActionGeneralAttackFarBase_C
{
public:
	uint8                                        Pad_4107[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x2B8(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	bool                                         IsShooted;                                         // 0x2C0(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4109[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSkillEffectSpawnParameter            WhenRiddenGeneralParams;                           // 0x2C8(0x38)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)

	static class UClass* StaticClass();
	static class UBP_ActionWindCutter_C* GetDefaultObj();

	void Test(class AActor* Bullet);
	void OnBeginAction();
	void TickAction(float DeltaTime);
	void OnSpawnEffect(class APalSkillEffectBase* Effect);
	void OnSpawnBullet(class AActor* Bullet);
	void ExecuteUbergraph_BP_ActionWindCutter(int32 EntryPoint, class APalCharacter* CallFunc_GetActionCharacter_ReturnValue, bool CallFunc_IsPlayerControlled_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, float K2Node_Event_DeltaTime, const struct FVector& CallFunc_GetPredictedTargetLocation_Location, const struct FVector& CallFunc_Conv_DoubleToVector_ReturnValue, class APalSkillEffectBase* K2Node_Event_Effect, class AActor* K2Node_CustomEvent_Bullet, class ABP_SkillEffect_WindCutterShot_C* K2Node_DynamicCast_AsBP_Skill_Effect_Wind_Cutter_Shot, bool K2Node_DynamicCast_bSuccess, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, const struct FVector& CallFunc_Subtract_VectorVector_ReturnValue, const struct FVector& CallFunc_Normal_ReturnValue, class UProjectileMovementComponent* CallFunc_GetComponentByClass_ReturnValue, const struct FVector& CallFunc_Multiply_VectorVector_ReturnValue, float K2Node_VariableSet_MaxSpeed_ImplicitCast);
};

}


