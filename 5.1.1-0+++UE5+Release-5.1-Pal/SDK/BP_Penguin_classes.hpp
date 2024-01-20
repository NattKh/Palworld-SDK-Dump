#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x40 (0x940 - 0x900)
// BlueprintGeneratedClass BP_Penguin.BP_Penguin_C
class ABP_Penguin_C : public ABP_MonsterBase_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x900(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UPalBodyPartsCapsuleComponent*         PalBodyPartsCapsule;                               // 0x908(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBP_CoopParam_Weapon_C*                BP_CoopParam_Weapon;                               // 0x910(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UPalBodyPartsSphereComponent*          PalBodyPartsSphere;                                // 0x918(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	TArray<double>                               PartnerSkillMagnification;                         // 0x920(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<double>                               SelfDamageRate;                                    // 0x930(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)

	static class UClass* StaticClass();
	static class ABP_Penguin_C* GetDefaultObj();

	int32 GetDamegeToSelf(int32 CallFunc_GetMaxHP_ReturnValue, double CallFunc_Conv_IntToDouble_ReturnValue, int32 CallFunc_GetRank_ReturnValue, int32 CallFunc_Array_LastIndex_ReturnValue, int32 CallFunc_Min_ReturnValue, double CallFunc_Array_Get_Item, double CallFunc_Multiply_DoubleDouble_ReturnValue, int32 CallFunc_FTrunc_ReturnValue, int32 CallFunc_Max_ReturnValue);
	void ProcessDamageSelf(int32 Damage, bool NoReaction, const struct FVector& BlowVelocity);
	void ProcessDamageSelfAndReaction(const struct FHitResult& HitResult, int32 Damage, const struct FVector& BlowVelocity, const struct FVector& CallFunc_GetBlowVelocity_BlowVelocity, const struct FFixedPoint& CallFunc_Convert_IntToFixedPoint_ReturnValue, int32 CallFunc_GetDamegeToSelf_ReturnValue, const struct FFixedPoint64& CallFunc_GetHP_ReturnValue, int32 CallFunc_Convert_FixedPoint64ToInt_ReturnValue, bool CallFunc_GreaterEqual_FixedPointInteger_ReturnValue);
	void GetBlowVelocity(const struct FHitResult& HitResult, struct FVector* BlowVelocity, double Force, const struct FVector& Blow, int32 CallFunc_RandomIntegerInRange_ReturnValue, bool CallFunc_BreakHitResult_bBlockingHit, bool CallFunc_BreakHitResult_bInitialOverlap, float CallFunc_BreakHitResult_Time, float CallFunc_BreakHitResult_Distance, const struct FVector& CallFunc_BreakHitResult_Location, const struct FVector& CallFunc_BreakHitResult_ImpactPoint, const struct FVector& CallFunc_BreakHitResult_Normal, const struct FVector& CallFunc_BreakHitResult_ImpactNormal, class UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat, class AActor* CallFunc_BreakHitResult_HitActor, class UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent, class FName CallFunc_BreakHitResult_HitBoneName, class FName CallFunc_BreakHitResult_BoneName, int32 CallFunc_BreakHitResult_HitItem, int32 CallFunc_BreakHitResult_ElementIndex, int32 CallFunc_BreakHitResult_FaceIndex, const struct FVector& CallFunc_BreakHitResult_TraceStart, const struct FVector& CallFunc_BreakHitResult_TraceEnd, float CallFunc_Conv_IntToFloat_ReturnValue, const struct FVector& CallFunc_Subtract_VectorVector_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue, double CallFunc_VSize_ReturnValue, const struct FVector& CallFunc_Normal_ReturnValue, bool CallFunc_Greater_DoubleDouble_ReturnValue, int32 CallFunc_RandomIntegerInRange_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue_1, const struct FVector& CallFunc_Conv_FloatToVector_ReturnValue, const struct FVector& CallFunc_Conv_DoubleToVector_ReturnValue, const struct FVector& CallFunc_Multiply_VectorVector_ReturnValue, const struct FVector& CallFunc_Multiply_VectorVector_ReturnValue_1, const struct FRotator& CallFunc_MakeRotFromX_ReturnValue, const struct FVector& CallFunc_GetAxes_X, const struct FVector& CallFunc_GetAxes_Y, const struct FVector& CallFunc_GetAxes_Z, const struct FVector& CallFunc_MakeVector_ReturnValue, const struct FVector& CallFunc_RotateAngleAxis_ReturnValue, const struct FRotator& CallFunc_MakeRotFromX_ReturnValue_1, double CallFunc_RandomFloatInRange_ReturnValue, const struct FVector& CallFunc_GetAxes_X_1, const struct FVector& CallFunc_GetAxes_Y_1, const struct FVector& CallFunc_GetAxes_Z_1, const struct FVector& CallFunc_RotateAngleAxis_ReturnValue_1, double CallFunc_Multiply_DoubleDouble_A_ImplicitCast, float CallFunc_RotateAngleAxis_AngleDeg_ImplicitCast);
	void Set_Disable_Throw_Pal_Flag(bool IsDisable, class FName FlagName);
	void OnActionEnd();
	void BndEvt__BP_Penguin_BP_CoopParam_Weapon_K2Node_ComponentBoundEvent_3_OnDestroyBulletDelegate__DelegateSignature(class UPrimitiveComponent* HitComp, class AActor* OtherCharacter, class UPrimitiveComponent* OtherComp, const struct FHitResult& HiTResult);
	void BndEvt__BP_Penguin_BP_CoopParam_Weapon_K2Node_ComponentBoundEvent_4_OnCreatedBulletDelegate__DelegateSignature(class APalBullet* Bullet);
	void BndEvt__BP_Penguin_PalPartnerSkillParameter_K2Node_ComponentBoundEvent_5_OnStop__DelegateSignature();
	void PlayStunBlow(const struct FVector& BlowVelocity);
	void ExecuteUbergraph_BP_Penguin(int32 EntryPoint, class APalPlayerCharacter* CallFunc_GetTrainerPlayer_ReturnValue, const struct FRotator& CallFunc_K2_GetActorRotation_ReturnValue, bool CallFunc_K2_SetActorRotation_ReturnValue, class UPrimitiveComponent* K2Node_ComponentBoundEvent_HitComp, class AActor* K2Node_ComponentBoundEvent_OtherCharacter, class UPrimitiveComponent* K2Node_ComponentBoundEvent_OtherComp, const struct FHitResult& K2Node_ComponentBoundEvent_Hi_Result, class APalBullet* K2Node_ComponentBoundEvent_Bullet, bool CallFunc_BreakHitResult_bBlockingHit, bool CallFunc_BreakHitResult_bInitialOverlap, float CallFunc_BreakHitResult_Time, float CallFunc_BreakHitResult_Distance, const struct FVector& CallFunc_BreakHitResult_Location, const struct FVector& CallFunc_BreakHitResult_ImpactPoint, const struct FVector& CallFunc_BreakHitResult_Normal, const struct FVector& CallFunc_BreakHitResult_ImpactNormal, class UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat, class AActor* CallFunc_BreakHitResult_HitActor, class UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent, class FName CallFunc_BreakHitResult_HitBoneName, class FName CallFunc_BreakHitResult_BoneName, int32 CallFunc_BreakHitResult_HitItem, int32 CallFunc_BreakHitResult_ElementIndex, int32 CallFunc_BreakHitResult_FaceIndex, const struct FVector& CallFunc_BreakHitResult_TraceStart, const struct FVector& CallFunc_BreakHitResult_TraceEnd, const struct FHitResult& CallFunc_K2_SetActorLocation_SweepHitResult, bool CallFunc_K2_SetActorLocation_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FVector& K2Node_CustomEvent_BlowVelocity, const struct FActionDynamicParameter& K2Node_MakeStruct_ActionDynamicParameter, class APalPlayerCharacter* CallFunc_GetTrainerPlayer_ReturnValue_1, class UPalActionBase* CallFunc_PlayActionParameter_ReturnValue, bool CallFunc_IsValid_ReturnValue, class APalPlayerCharacter* CallFunc_GetTrainerPlayer_ReturnValue_2, const struct FTransform& CallFunc_GetTransform_ReturnValue, const struct FVector& CallFunc_BreakTransform_Location, const struct FRotator& CallFunc_BreakTransform_Rotation, const struct FVector& CallFunc_BreakTransform_Scale, const struct FHitResult& CallFunc_K2_SetActorLocation_SweepHitResult_1, bool CallFunc_K2_SetActorLocation_ReturnValue_1);
};

}


