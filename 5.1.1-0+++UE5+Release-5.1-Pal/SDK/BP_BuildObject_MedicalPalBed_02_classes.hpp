#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x30 (0x5A0 - 0x570)
// BlueprintGeneratedClass BP_BuildObject_MedicalPalBed_02.BP_BuildObject_MedicalPalBed_02_C
class ABP_BuildObject_MedicalPalBed_02_C : public APalBuildObject
{
public:
	class UPalMapObjectMedicalPalBedParameterComponent* MedicalPalBedParameter;                            // 0x570(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBP_InteractableCapsule_C*             BP_InteractableCapsule;                            // 0x578(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                  StaticMesh;                                        // 0x580(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBoxComponent*                         BuildWorkableBounds;                               // 0x588(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBoxComponent*                         CheckOverlapCollision;                             // 0x590(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                       Root;                                              // 0x598(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ABP_BuildObject_MedicalPalBed_02_C* GetDefaultObj();

};

}


