#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x28 (0x3E8 - 0x3C0)
// BlueprintGeneratedClass BP_SkillEffect_FlareArrowShoot.BP_SkillEffect_FlareArrowShoot_C
class ABP_SkillEffect_FlareArrowShoot_C : public ABP_SkillEffectBase_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x3C0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UParticleSystemComponent*              PS_FireBlastShoot;                                 // 0x3C8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UClass*                                bulletClass;                                       // 0x3D0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	double                                       ShootIntervalTime;                                 // 0x3D8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                          TimeHandle;                                        // 0x3E0(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ABP_SkillEffect_FlareArrowShoot_C* GetDefaultObj();

	void OnDestroyed______0(class AActor* DestroyedActor);
	void ReceiveBeginPlay();
	void OnSystemFinished______0(class UParticleSystemComponent* PSystem);
	void Shoot();
	void ExecuteUbergraph_BP_SkillEffect_FlareArrowShoot(int32 EntryPoint, class AActor* K2Node_CustomEvent_DestroyedActor, class UParticleSystemComponent* K2Node_CustomEvent_PSystem);
};

}


