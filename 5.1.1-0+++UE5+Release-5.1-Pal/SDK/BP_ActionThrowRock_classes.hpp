#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x56 (0x309 - 0x2B3)
// BlueprintGeneratedClass BP_ActionThrowRock.BP_ActionThrowRock_C
class UBP_ActionThrowRock_C : public UBP_ActionGeneralAttackFarBase_C
{
public:
	uint8                                        Pad_3818[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x2B8(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	bool                                         IsShooted;                                         // 0x2C0(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_381C[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class APalSkillEffectBase*                   Effect_0;                                          // 0x2C8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	double                                       ThrowReadyTime;                                    // 0x2D0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsSpawned;                                         // 0x2D8(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_381E[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               SpawnedLocation;                                   // 0x2E0(0x18)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       ShootHeight;                                       // 0x2F8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TSubclassOf<class ABP_SkillEffect_ThrowRockBullet_C> Actor_Class;                                       // 0x300(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	bool                                         NearTarget;                                        // 0x308(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UBP_ActionThrowRock_C* GetDefaultObj();

	void MoveRock(double ElapsedTime, const struct FVector& CallFunc_MakeVector_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, double CallFunc_NormalizeToRange_ReturnValue, const struct FVector& CallFunc_VEase_ReturnValue, bool CallFunc_IsValid_ReturnValue, const struct FHitResult& CallFunc_K2_SetActorLocation_SweepHitResult, bool CallFunc_K2_SetActorLocation_ReturnValue, float CallFunc_VEase_Alpha_ImplicitCast);
	void OnStartProcessAnimation();
	void Shoot();
	void OnBreakAction();
	void OnSpawnEffect(class APalSkillEffectBase* Effect);
	void TickAction(float DeltaTime);
	void ExecuteUbergraph_BP_ActionThrowRock(int32 EntryPoint, const struct FVector& CallFunc_GetTargetLocation_ReturnValue, class APalSkillEffectBase* K2Node_Event_Effect, float K2Node_Event_DeltaTime, const struct FSkillEffectSpawnParameter& CallFunc_Array_Get_Item, const struct FSkillEffectSpawnParameter& CallFunc_Array_Get_Item_1, class APalSkillEffectBase* CallFunc_FindEffectByClass_Effect, class USceneComponent* CallFunc_K2_GetRootComponent_ReturnValue, class APalSkillEffectBase* CallFunc_FindEffectByClass_Effect_1, class UPrimitiveComponent* K2Node_DynamicCast_AsPrimitive_Component, bool K2Node_DynamicCast_bSuccess, TScriptInterface<class IBPI_SkillEffect_C> K2Node_DynamicCast_AsBPI_Skill_Effect, bool K2Node_DynamicCast_bSuccess_1, TScriptInterface<class IBPI_SkillEffect_C> K2Node_DynamicCast_AsBPI_Skill_Effect_1, bool K2Node_DynamicCast_bSuccess_2, class ABP_SkillEffect_ThrowRockBullet_C* K2Node_DynamicCast_AsBP_Skill_Effect_Throw_Rock_Bullet, bool K2Node_DynamicCast_bSuccess_3, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, bool Temp_bool_Variable, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class APalCharacter* CallFunc_GetActionCharacter_ReturnValue, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_1, float CallFunc_K2_GetTimerElapsedTimeHandle_ReturnValue, const struct FVector& CallFunc_Subtract_VectorVector_ReturnValue, double CallFunc_VSize_ReturnValue, class APalCharacter* CallFunc_GetActionCharacter_ReturnValue_1, const struct FRandomStream& CallFunc_GetRandomStream_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_2, const struct FRotator& CallFunc_RandomRotatorFromStream_ReturnValue, const struct FVector& CallFunc_Subtract_VectorVector_ReturnValue_1, const struct FVector& CallFunc_GetTargetLocation_ReturnValue_1, double CallFunc_VSize_ReturnValue_1, class APalCharacter* CallFunc_GetActionCharacter_ReturnValue_2, bool CallFunc_Less_DoubleDouble_ReturnValue, bool CallFunc_IsPlayerControlled_ReturnValue, const struct FVector& CallFunc_GetPredictedTargetLocation_Location, const struct FVector& K2Node_Select_Default, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_3, const struct FVector& CallFunc_SuggestProjectileVelocity_CustomArc_OutLaunchVelocity, bool CallFunc_SuggestProjectileVelocity_CustomArc_ReturnValue, class UStaticMeshComponent* CallFunc_GetComponentByClass_ReturnValue, const struct FHitResult& CallFunc_K2_AddLocalRotation_SweepHitResult, const struct FHitResult& CallFunc_K2_SetRelativeRotation_SweepHitResult, float CallFunc_K2_SetTimerDelegate_Time_ImplicitCast, double CallFunc_MoveRock_ElapsedTime_ImplicitCast);
};

}


