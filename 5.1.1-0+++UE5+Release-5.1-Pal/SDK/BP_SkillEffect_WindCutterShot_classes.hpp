#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x38 (0x3F8 - 0x3C0)
// BlueprintGeneratedClass BP_SkillEffect_WindCutterShot.BP_SkillEffect_WindCutterShot_C
class ABP_SkillEffect_WindCutterShot_C : public ABP_SkillEffectBase_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x3C0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UNiagaraComponent*                     NS_WindCutterShoot;                                // 0x3C8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	double                                       ShootIntervalTime;                                 // 0x3D0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                          TimeHandle;                                        // 0x3D8(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UClass*                                bulletClass;                                       // 0x3E0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_            OnSpawnBulletDelegate;                             // 0x3E8(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

	static class UClass* StaticClass();
	static class ABP_SkillEffect_WindCutterShot_C* GetDefaultObj();

	void SetTargetLocation(const struct FVector& TargetLocation, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, const struct FVector& CallFunc_Subtract_VectorVector_ReturnValue, const struct FRotator& CallFunc_MakeRotFromX_ReturnValue, bool CallFunc_K2_SetActorRotation_ReturnValue);
	void ReceiveBeginPlay();
	void Shoot();
	void OnDestroyed______0(class AActor* DestroyedActor);
	void OnSystemFinished(class UNiagaraComponent* PSystem);
	void ExecuteUbergraph_BP_SkillEffect_WindCutterShot(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, const struct FTransform& CallFunc_GetTransform_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue, class AActor* K2Node_CustomEvent_DestroyedActor, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, class AActor* CallFunc_FinishSpawningActor_ReturnValue, class UNiagaraComponent* K2Node_CustomEvent_PSystem, class APalCharacter* CallFunc_GetOwnerCharacter_ReturnValue, bool CallFunc_IsPlayerControlled_ReturnValue, float CallFunc_K2_SetTimerDelegate_Time_ImplicitCast);
	void OnSpawnBulletDelegate__DelegateSignature(class AActor* Bullet);
};

}


