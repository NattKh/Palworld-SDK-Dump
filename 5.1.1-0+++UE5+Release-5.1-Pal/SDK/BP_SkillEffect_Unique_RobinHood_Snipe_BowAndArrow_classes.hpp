#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x18 (0x3D8 - 0x3C0)
// BlueprintGeneratedClass BP_SkillEffect_Unique_RobinHood_Snipe_BowAndArrow.BP_SkillEffect_Unique_RobinHood_Snipe_BowAndArrow_C
class ABP_SkillEffect_Unique_RobinHood_Snipe_BowAndArrow_C : public ABP_SkillEffectBase_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x3C0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class USkeletalMeshComponent*                SK_RobinHood_arrow;                                // 0x3C8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                SK_RobinHood_bow;                                  // 0x3D0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ABP_SkillEffect_Unique_RobinHood_Snipe_BowAndArrow_C* GetDefaultObj();

	void FadeOutEffect(double DeltaSecond);
	void OnShootArrow_Event();
	void ExecuteUbergraph_BP_SkillEffect_Unique_RobinHood_Snipe_BowAndArrow(int32 EntryPoint, double K2Node_Event_DeltaSecond);
};

}


