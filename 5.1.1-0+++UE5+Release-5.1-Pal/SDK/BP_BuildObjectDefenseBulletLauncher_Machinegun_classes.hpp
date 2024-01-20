#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x30 (0x600 - 0x5D0)
// BlueprintGeneratedClass BP_BuildObjectDefenseBulletLauncher_Machinegun.BP_BuildObjectDefenseBulletLauncher_Machinegun_C
class ABP_BuildObjectDefenseBulletLauncher_Machinegun_C : public ABP_BuildObjectDefenseBulletLauncher_Base_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x5D0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UStaticMeshComponent*                  Table;                                             // 0x5D8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBoxComponent*                         CheckOverlapCollision;                             // 0x5E0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBP_InteractableBox_C*                 BP_InteractableBox;                                // 0x5E8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UArrowComponent*                       CharacterLocation;                                 // 0x5F0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBoxComponent*                         BuildWorkableBounds;                               // 0x5F8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ABP_BuildObjectDefenseBulletLauncher_Machinegun_C* GetDefaultObj();

	struct FRotator GetCharacterRotation(const struct FRotator& CallFunc_K2_GetComponentRotation_ReturnValue);
	struct FVector GetCharacterLocation(const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue);
	void TurnToTarget(class AActor* TargetActor, float DeltaTime);
	void ReceiveBeginPlay();
	void SetOwnerCharacter(class APalCharacter* OwnerCharacter);
	void SetEnableTrigger(bool EnableTrigger);
	void ExecuteUbergraph_BP_BuildObjectDefenseBulletLauncher_Machinegun(int32 EntryPoint, bool CallFunc_IsValid_ReturnValue, class AActor* K2Node_Event_TargetActor, float K2Node_Event_DeltaTime, const struct FVector& CallFunc_GetCharacterLocation_ReturnValue, class APalCharacter* K2Node_Event_OwnerCharacter, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, TSoftObjectPtr<class APalCharacter> CallFunc_Conv_ObjectToSoftObjectReference_ReturnValue, bool K2Node_Event_EnableTrigger, bool CallFunc_IsValid_ReturnValue_1, double CallFunc_TurnToTarget_Internal_DeltaTime_ImplicitCast);
};

}


