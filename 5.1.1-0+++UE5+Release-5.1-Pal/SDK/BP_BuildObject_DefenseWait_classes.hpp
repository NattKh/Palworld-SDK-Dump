#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x38 (0x5C0 - 0x588)
// BlueprintGeneratedClass BP_BuildObject_DefenseWait.BP_BuildObject_DefenseWait_C
class ABP_BuildObject_DefenseWait_C : public APalBuildObjectDefenseBase
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x588(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UArrowComponent*                       CharacterLocation;                                 // 0x590(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBP_InteractableBox_C*                 BP_InteractableBox;                                // 0x598(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBoxComponent*                         BuildWorkableBounds;                               // 0x5A0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBoxComponent*                         CheckOverlapCollision;                             // 0x5A8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                  Mesh;                                              // 0x5B0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                       Root;                                              // 0x5B8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ABP_BuildObject_DefenseWait_C* GetDefaultObj();

	struct FRotator GetCharacterRotation();
	struct FVector GetCharacterLocation(const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue);
	bool IsShowOutlineInReticleTargetting();
	void TurnToTarget(class AActor* TargetActor, float DeltaTime);
	void SetOwnerCharacter(class APalCharacter* OwnerCharacter);
	void SetEnableTrigger(bool EnableTrigger);
	void ExecuteUbergraph_BP_BuildObject_DefenseWait(int32 EntryPoint, bool K2Node_Event_EnableTrigger, class AActor* K2Node_Event_TargetActor, float K2Node_Event_DeltaTime, class APalCharacter* K2Node_Event_OwnerCharacter);
};

}


