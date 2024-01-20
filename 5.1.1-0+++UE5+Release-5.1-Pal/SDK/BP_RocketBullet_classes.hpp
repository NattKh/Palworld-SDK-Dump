#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x21 (0x391 - 0x370)
// BlueprintGeneratedClass BP_RocketBullet.BP_RocketBullet_C
class ABP_RocketBullet_C : public ABP_AttackBulletBase_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x370(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UNiagaraComponent*                     Niagara;                                           // 0x378(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                  StaticMesh;                                        // 0x380(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UPalHitFilter*                         HitFilter;                                         // 0x388(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	bool                                         IsExploded;                                        // 0x390(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ABP_RocketBullet_C* GetDefaultObj();

	void GetExplosionClass(class UClass** ExplosionClass);
	void OnHitToActor(class UPrimitiveComponent* HitComp, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, struct FHitResult& Hit);
	void ReceiveBeginPlay();
	void ReceiveTick(float DeltaSeconds);
	void OnDestroy(class UPrimitiveComponent* HitComp, class AActor* OtherCharacter, class UPrimitiveComponent* OtherComp, struct FHitResult& Hit);
	void ExecuteUbergraph_BP_RocketBullet(int32 EntryPoint, class UClass* CallFunc_GetExplosionClass_ExplosionClass, float K2Node_Event_DeltaSeconds, class UPrimitiveComponent* K2Node_Event_HitComp, class AActor* K2Node_Event_OtherCharacter, class UPrimitiveComponent* K2Node_Event_OtherComp, const struct FHitResult& K2Node_Event_Hit, const struct FTransform& CallFunc_GetTransform_ReturnValue, int32 CallFunc_GetWeaponDamage_ReturnValue, class APalCharacter* CallFunc_FindOwnerPalCharacter_ReturnValue, float CallFunc_GetSneakAttackRate_ReturnValue, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, class ABP_ExplosionAttackBase_C* CallFunc_FinishSpawningActor_ReturnValue, const struct FHitResult& CallFunc_K2_AddLocalRotation_SweepHitResult, double CallFunc_SetPower_SnakeRate_ImplicitCast);
};

}


