#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x14 (0x2A4 - 0x290)
// BlueprintGeneratedClass BP_Item_Anim_PalEgg_Base.BP_Item_Anim_PalEgg_Base_C
class ABP_Item_Anim_PalEgg_Base_C : public AActor
{
public:
	class USkeletalMeshComponent*                SK_Kurinuki_EggA;                                  // 0x290(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                       DefaultSceneRoot;                                  // 0x298(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	int32                                        HatchingTemperature;                               // 0x2A0(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ABP_Item_Anim_PalEgg_Base_C* GetDefaultObj();

	void GetHatchingTemperature(int32* Temperature);
	void SetAnimPlayState(bool IsPlay);
};

}


