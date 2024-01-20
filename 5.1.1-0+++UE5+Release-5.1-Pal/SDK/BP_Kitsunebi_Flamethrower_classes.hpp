#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xBC (0x5F4 - 0x538)
// BlueprintGeneratedClass BP_Kitsunebi_Flamethrower.BP_Kitsunebi_Flamethrower_C
class ABP_Kitsunebi_Flamethrower_C : public APalWeaponBase
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x538(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UBP_PalTimerPointLightComponent_C*     BP_PalTimerPointLightComponent;                    // 0x540(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UPalFacialComponent*                   PalFacial;                                         // 0x548(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                Mesh;                                              // 0x550(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USphereComponent*                      Root;                                              // 0x558(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	bool                                         IsAttach;                                          // 0x560(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         OnTrigger;                                         // 0x561(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsReqClose;                                        // 0x562(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_412D[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UNiagaraComponent*                     FlameEffect;                                       // 0x568(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	double                                       ElapsedTime;                                       // 0x570(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TMap<class AActor*, double>                  IgnoreHitActors;                                   // 0x578(0x50)(Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance)
	double                                       HitIntarvalTimeSec;                                // 0x5C8(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ETraceTypeQuery                   HitTraceChannel;                                   // 0x5D0(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4131[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UNiagaraSystem*                        EffectAsset_Flamethrower;                          // 0x5D8(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	int32                                        WeaponDmageByOutside;                              // 0x5E0(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4133[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AActor*                                AttackerMonster;                                   // 0x5E8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)
	int32                                        TempCount;                                         // 0x5F0(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ABP_Kitsunebi_Flamethrower_C* GetDefaultObj();

	class AActor* GetWeaponAttacker(class AActor* CallFunc_GetOwner_ReturnValue, bool CallFunc_IsValid_ReturnValue);
	void GetAttackType(enum class EPalAttackType* AttackType);
	void PlayShootMotion(class UAnimInstance* CallFunc_GetAnimInstance_ReturnValue, float CallFunc_Montage_Play_ReturnValue);
	void PlayIdleMotion(bool StopAllMontages, const struct FAlphaBlendArgs& K2Node_MakeStruct_AlphaBlendArgs, class UAnimInstance* CallFunc_GetAnimInstance_ReturnValue, class UAnimInstance* CallFunc_GetAnimInstance_ReturnValue_1, float CallFunc_Montage_PlayWithBlendIn_ReturnValue, float CallFunc_Montage_Play_ReturnValue);
	void ResetMeshDisplay();
	void SetMeshDisplay();
	void ApplyDamage(class UPrimitiveComponent* HitComp, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, const struct FVector& HitLocation, const struct FHitResult& Hit, int32 WeaponDamage, class AActor* CallFunc_GetWeaponAttacker_ReturnValue, class AActor* CallFunc_GetWeaponAttacker_ReturnValue_1, enum class EPalAttackType CallFunc_GetAttackType_AttackType, class AActor* CallFunc_GetWeaponAttacker_ReturnValue_2, class APalPlayerCharacter* CallFunc_GetTrainerPlayer_ReturnValue, int32 CallFunc_GetWeaponDamage_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, class APalCharacter* CallFunc_FindOwnerPalCharacter_ReturnValue, float CallFunc_GetSneakAttackRate_ReturnValue, const struct FPalMakeDamageInfo& K2Node_MakeStruct_PalMakeDamageInfo, const struct FPalDamageInfo& CallFunc_MakeDamageInfo_ReturnValue);
	void SetIgnoreActor(class AActor* HitActor);
	void IsActorAlreadyHit(class AActor* HitActor, bool* IsAlreadyHit, double CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue);
	void Trace_Hit_Flame(TArray<struct FBasicParticleData>& Data, class UNiagaraSystem* NiagaraSystem, const struct FVector& SimulationPositionOffset, class UPrimitiveComponent* HitComponent, class AActor* HitActor, const struct FVector& HitLocation, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, int32 Temp_int_Variable, bool CallFunc_LessEqual_IntInt_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, class APalCharacter* CallFunc_GetOwnerCharacter_ReturnValue, bool CallFunc_IsActorAlreadyHit_IsAlreadyHit, bool CallFunc_IsFriend_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_1, class UPrimitiveComponent* CallFunc_GetComponentByClass_ReturnValue, TArray<class AActor*>& Temp_object_Variable, const struct FVector& CallFunc_Conv_FloatToVector_ReturnValue, const struct FVector& CallFunc_Multiply_VectorVector_ReturnValue, class APalCharacter* K2Node_DynamicCast_AsPal_Character, bool K2Node_DynamicCast_bSuccess, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, const struct FHitResult& CallFunc_SphereTraceSingle_OutHit, bool CallFunc_SphereTraceSingle_ReturnValue, bool CallFunc_BreakHitResult_bBlockingHit, bool CallFunc_BreakHitResult_bInitialOverlap, float CallFunc_BreakHitResult_Time, float CallFunc_BreakHitResult_Distance, const struct FVector& CallFunc_BreakHitResult_Location, const struct FVector& CallFunc_BreakHitResult_ImpactPoint, const struct FVector& CallFunc_BreakHitResult_Normal, const struct FVector& CallFunc_BreakHitResult_ImpactNormal, class UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat, class AActor* CallFunc_BreakHitResult_HitActor, class UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent, class FName CallFunc_BreakHitResult_HitBoneName, class FName CallFunc_BreakHitResult_BoneName, int32 CallFunc_BreakHitResult_HitItem, int32 CallFunc_BreakHitResult_ElementIndex, int32 CallFunc_BreakHitResult_FaceIndex, const struct FVector& CallFunc_BreakHitResult_TraceStart, const struct FVector& CallFunc_BreakHitResult_TraceEnd, bool CallFunc_IsApplicableDamage_ReturnValue, double CallFunc_Multiply_DoubleDouble_A_ImplicitCast, float CallFunc_SphereTraceSingle_Radius_ImplicitCast);
	void GetRotatorToTarget(struct FRotator* NewRotation, class APalCharacter* CallFunc_GetOwnerCharacter_ReturnValue, const struct FTransform& CallFunc_GetSocketTransform_ReturnValue, class UPalCharacterParameterComponent* CallFunc_GetComponentByClass_ReturnValue, const struct FVector& CallFunc_BreakTransform_Location, const struct FRotator& CallFunc_BreakTransform_Rotation, const struct FVector& CallFunc_BreakTransform_Scale, bool CallFunc_IsValid_ReturnValue, const struct FVector& CallFunc_Subtract_VectorVector_ReturnValue, const struct FRotator& CallFunc_MakeRotFromX_ReturnValue);
	void UpdateEffectTransform(const struct FVector& Location, const struct FRotator& Rot, const struct FRotator& CallFunc_GetRotatorToTarget_NewRotation, const struct FTransform& CallFunc_MakeTransform_ReturnValue, const struct FVector& CallFunc_GetForwardVector_ReturnValue, const struct FTransform& CallFunc_GetSocketTransform_ReturnValue, const struct FVector& CallFunc_BreakTransform_Location, const struct FRotator& CallFunc_BreakTransform_Rotation, const struct FVector& CallFunc_BreakTransform_Scale, bool CallFunc_IsValid_ReturnValue, const struct FVector& CallFunc_Conv_FloatToVector_ReturnValue, const struct FHitResult& CallFunc_K2_SetWorldTransform_SweepHitResult, const struct FVector& CallFunc_Multiply_VectorVector_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue);
	void StopEfffect(bool CallFunc_IsValid_ReturnValue);
	void Tick_Ignore_Hit_Actors(double DeltaTime, double RemainTimeSec, class AActor* TmpActor, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_Greater_DoubleDouble_ReturnValue, bool CallFunc_Map_Remove_ReturnValue, double CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, TArray<class AActor*>& CallFunc_Map_Keys_Keys, double CallFunc_Subtract_DoubleDouble_ReturnValue, class AActor* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue);
	void Tick_Shooting(double DeltaTime, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_GreaterEqual_DoubleDouble_ReturnValue, double CallFunc_Add_DoubleDouble_ReturnValue, bool CallFunc_IsValid_ReturnValue);
	void BeginShoot(class UNiagaraComponent** FlameEffect, int32 CallFunc_Add_IntInt_ReturnValue, class UNiagaraComponent* CallFunc_SpawnSystemAtLocation_ReturnValue, int32 Temp_int_Variable, bool CallFunc_IsValid_ReturnValue);
	int32 GetWeaponDamage();
	class FName GetEquipSocketName();
	void OnNotifyEnd_266D644B475C5EADF9D744838A1159F1(class FName NotifyName);
	void OnNotifyBegin_266D644B475C5EADF9D744838A1159F1(class FName NotifyName);
	void OnInterrupted_266D644B475C5EADF9D744838A1159F1(class FName NotifyName);
	void OnBlendOut_266D644B475C5EADF9D744838A1159F1(class FName NotifyName);
	void OnCompleted_266D644B475C5EADF9D744838A1159F1(class FName NotifyName);
	void ReceiveBeginPlay();
	void ReceiveTick(float DeltaSeconds);
	void OnPullTrigger();
	void OnReleaseTrigger();
	void OnAttachWeapon(class AActor* AttachActor);
	void OnDetachWeapon(class AActor* DetachActor);
	void OnRequestClosing();
	void ReceiveParticleData(TArray<struct FBasicParticleData>& Data, class UNiagaraSystem* NiagaraSystem, struct FVector& SimulationPositionOffset);
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason);
	void OnShootFire();
	void SetWeaponDamage(int32 Damageam);
	void SetAttacker(class AActor* AttackerPal);
	void ExecuteUbergraph_BP_Kitsunebi_Flamethrower(int32 EntryPoint, class UPlayMontageCallbackProxy* CallFunc_CreateProxyObjectForPlayMontage_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_IsValid_ReturnValue, class FName K2Node_CustomEvent_NotifyName_3, class FName K2Node_CustomEvent_NotifyName_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, class FName K2Node_CustomEvent_NotifyName_1, class FName K2Node_CustomEvent_NotifyName, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, class FName Temp_name_Variable, bool CallFunc_EqualEqual_NameName_ReturnValue, float K2Node_Event_DeltaSeconds, class AActor* K2Node_Event_attachActor, class AActor* K2Node_Event_detachActor, bool CallFunc_Not_PreBool_ReturnValue, TArray<struct FBasicParticleData>& K2Node_Event_Data, class UNiagaraSystem* K2Node_Event_NiagaraSystem, const struct FVector& K2Node_Event_SimulationPositionOffset, bool CallFunc_IsValid_ReturnValue_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, enum class EEndPlayReason K2Node_Event_EndPlayReason, bool CallFunc_IsValid_ReturnValue_2, class FName K2Node_CustomEvent_NotifyName_4, class UNiagaraComponent* CallFunc_BeginShoot_FlameEffect, int32 K2Node_Event_Damageam, class AActor* K2Node_Event_AttackerPal, double CallFunc_Tick_Shooting_DeltaTime_ImplicitCast, double CallFunc_Tick_Ignore_Hit_Actors_DeltaTime_ImplicitCast);
};

}


