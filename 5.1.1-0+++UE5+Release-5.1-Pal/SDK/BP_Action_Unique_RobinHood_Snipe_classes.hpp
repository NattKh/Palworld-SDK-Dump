#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x38 (0x241 - 0x209)
// BlueprintGeneratedClass BP_Action_Unique_RobinHood_Snipe.BP_Action_Unique_RobinHood_Snipe_C
class UBP_Action_Unique_RobinHood_Snipe_C : public UBP_ActionUniqueAttackBase_C
{
public:
	uint8                                        Pad_1501[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x210(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class ABP_SkillEffect_Unique_RobinHood_Snipe_BowAndArrow_C* SpawnedActor_Bow;                                  // 0x218(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class ABP_SkillEffect_Unique_RobinHood_Snipe_Arrow_C* SpawnedActor_Arrow;                                // 0x220(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	bool                                         IsShooted;                                         // 0x228(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1504[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       HomingDegree;                                      // 0x230(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       HomingDistance;                                    // 0x238(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsFollowing;                                       // 0x240(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UBP_Action_Unique_RobinHood_Snipe_C* GetDefaultObj();

	void SpawnArrowBullet(class APalCharacter* CallFunc_GetActionCharacter_ReturnValue, const struct FRotator& CallFunc_K2_GetActorRotation_ReturnValue, bool CallFunc_K2_SetActorRotation_ReturnValue, class AActor* CallFunc_GetActionTarget_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, class AActor* CallFunc_GetUniqueActionTarget_TargetActor, const struct FRandomStream& CallFunc_GetRandomStream_ReturnValue, class APalCharacter* CallFunc_GetActionCharacter_ReturnValue_1, class APalCharacter* CallFunc_GetActionCharacter_ReturnValue_2, class UPalSkeletalMeshComponent* CallFunc_GetMainMesh_ReturnValue, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue, const struct FRotator& CallFunc_K2_GetComponentRotation_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, const struct FTransform& CallFunc_MakeTransform_ReturnValue, const struct FHitResult& CallFunc_K2_SetActorLocation_SweepHitResult, bool CallFunc_K2_SetActorLocation_ReturnValue, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, const struct FRotator& CallFunc_FindLookAtRotation_ReturnValue, class ABP_SkillEffect_Unique_RobinHood_Snipe_Arrow_C* CallFunc_FinishSpawningActor_ReturnValue, bool CallFunc_K2_SetActorRotation_ReturnValue_1);
	void SpawnBowAndArrow(class APalCharacter* CallFunc_GetActionCharacter_ReturnValue, class UPalSkeletalMeshComponent* CallFunc_GetMainMesh_ReturnValue, const struct FRotator& CallFunc_K2_GetComponentRotation_ReturnValue, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue, const struct FTransform& CallFunc_MakeTransform_ReturnValue, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, class ABP_SkillEffect_Unique_RobinHood_Snipe_BowAndArrow_C* CallFunc_FinishSpawningActor_ReturnValue);
	void OnNotifyEnd_2BC7936F4DB6083A28A20A84A18DB1EF(class FName NotifyName);
	void OnNotifyBegin_2BC7936F4DB6083A28A20A84A18DB1EF(class FName NotifyName);
	void OnInterrupted_2BC7936F4DB6083A28A20A84A18DB1EF(class FName NotifyName);
	void OnBlendOut_2BC7936F4DB6083A28A20A84A18DB1EF(class FName NotifyName);
	void OnCompleted_2BC7936F4DB6083A28A20A84A18DB1EF(class FName NotifyName);
	void OnBeginAction();
	void OnEndAction();
	void TickAction(float DeltaTime);
	void ExecuteUbergraph_BP_Action_Unique_RobinHood_Snipe(int32 EntryPoint, class FName K2Node_CustomEvent_NotifyName_3, bool CallFunc_IsValid_ReturnValue, class FName K2Node_CustomEvent_NotifyName_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class FName K2Node_CustomEvent_NotifyName_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class FName K2Node_CustomEvent_NotifyName, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, class FName Temp_name_Variable, bool CallFunc_EqualEqual_NameName_ReturnValue, bool CallFunc_EqualEqual_NameName_ReturnValue_1, bool CallFunc_EqualEqual_NameName_ReturnValue_2, class APalCharacter* CallFunc_GetActionCharacter_ReturnValue, class UPalSkeletalMeshComponent* CallFunc_GetMainMesh_ReturnValue, class UPlayMontageCallbackProxy* CallFunc_CreateProxyObjectForPlayMontage_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, float K2Node_Event_DeltaTime, const struct FRotator& CallFunc_GetRotation_Rotation, class APalCharacter* CallFunc_GetActionCharacter_ReturnValue_1, bool CallFunc_K2_SetActorRotation_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, class APalCharacter* CallFunc_GetActionCharacter_ReturnValue_2, class AActor* CallFunc_GetActionTarget_ReturnValue, bool CallFunc_InFanShapAndDitance_ReturnValue, class FName K2Node_CustomEvent_NotifyName_4, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, double CallFunc_GetRotation_DeltaTime_ImplicitCast, float CallFunc_InFanShapAndDitance_Degree_ImplicitCast, float CallFunc_InFanShapAndDitance_Distance_ImplicitCast);
};

}


