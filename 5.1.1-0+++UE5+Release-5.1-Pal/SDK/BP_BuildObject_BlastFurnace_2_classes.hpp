#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x38 (0x5A8 - 0x570)
// BlueprintGeneratedClass BP_BuildObject_BlastFurnace_2.BP_BuildObject_BlastFurnace_2_C
class ABP_BuildObject_BlastFurnace_2_C : public APalBuildObject
{
public:
	class UBoxComponent*                         CheckOverlapCollision;                             // 0x570(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UPalWorkFacingComponent*               WorkFacing;                                        // 0x578(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBP_InteractableBox_C*                 BP_InteractableBox;                                // 0x580(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UPalMapObjectItemConverterParameterComponent* ItemConverterParameter;                            // 0x588(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                  Mesh;                                              // 0x590(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBoxComponent*                         BuildWorkableBounds;                               // 0x598(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                       Root;                                              // 0x5A0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ABP_BuildObject_BlastFurnace_2_C* GetDefaultObj();

};

}

