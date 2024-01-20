#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x410 - 0x410)
// BlueprintGeneratedClass BP_SkillEffect_OneThunder.BP_SkillEffect_OneThunder_C
class ABP_SkillEffect_OneThunder_C : public ABP_BulletRain_C
{
public:

	static class UClass* StaticClass();
	static class ABP_SkillEffect_OneThunder_C* GetDefaultObj();

	void SpawnBullet(int32 Count, const struct FVector& CallFunc_GetActionTargetLocation_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue, const struct FVector& CallFunc_GetActorScale3D_ReturnValue, const struct FRotator& CallFunc_K2_GetActorRotation_ReturnValue, const struct FTransform& CallFunc_MakeTransform_ReturnValue, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, class AActor* CallFunc_FinishSpawningActor_ReturnValue, class AActor* CallFunc_AdjustActorToFloor_ReturnValue);
};

}


