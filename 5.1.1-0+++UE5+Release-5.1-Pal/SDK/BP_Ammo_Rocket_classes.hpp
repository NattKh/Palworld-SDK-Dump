#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x80 (0x310 - 0x290)
// BlueprintGeneratedClass BP_Ammo_Rocket.BP_Ammo_Rocket_C
class ABP_Ammo_Rocket_C : public AActor
{
public:
	class USkeletalMeshComponent*                SkeletalMesh;                                      // 0x290(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                  StaticMesh;                                        // 0x298(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                       DefaultSceneRoot;                                  // 0x2A0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3F4E[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            Ammo_Reloading_Transform;                          // 0x2B0(0x60)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ABP_Ammo_Rocket_C* GetDefaultObj();

	void SetTranformForReload(struct FTransform* AmmoReloadingTransform, const struct FTransform& CallFunc_MakeTransform_ReturnValue);
	void UserConstructionScript(const struct FTransform& CallFunc_SetTranformForReload_AmmoReloadingTransform);
};

}


