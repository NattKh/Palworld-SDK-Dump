#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x58 (0x5C8 - 0x570)
// BlueprintGeneratedClass BP_BuildObject_Trap_Base.BP_BuildObject_Trap_Base_C
class ABP_BuildObject_Trap_Base_C : public APalBuildObject
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x570(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UBoxComponent*                         AttackBox;                                         // 0x578(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBP_InteractableBox_C*                 BP_InteractableBox;                                // 0x580(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBoxComponent*                         CheckOverlapCollision;                             // 0x588(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBoxComponent*                         BuildWorkableBounds;                               // 0x590(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                       DefaultSceneRoot;                                  // 0x598(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	double                                       Const_TrapTime;                                    // 0x5A0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                HitTarget;                                         // 0x5A8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	bool                                         Const_AutoMeshDisable;                             // 0x5B0(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3743[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<enum class EPalSizeType>              Const_HitSizeList;                                 // 0x5B8(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)

	static class UClass* StaticClass();
	static class ABP_BuildObject_Trap_Base_C* GetDefaultObj();

	void IsHitableCharacter(class AActor* HitActor, bool* IsHit, bool IsPvP, bool CallFunc_IsWildNPC_ReturnValue);
	void IsTargetEnemy(class AActor* TargetActor, bool* bReturnValue, class UPalIndividualCharacterParameter* TargetIndividualParameter, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, const struct FGuid& CallFunc_GetGroupIdBelongTo_ReturnValue, const struct FGuid& CallFunc_GetGroupId_ReturnValue, bool CallFunc_NotEqual_GuidGuid_ReturnValue, class UPalCharacterParameterComponent* CallFunc_GetComponentByClass_ReturnValue, class UPalIndividualCharacterParameter* CallFunc_GetIndividualParameter_ReturnValue);
	void IsHitByFlag(class AActor* Actor, bool* Hit);
	void IsRiding(class AActor* HitActor, bool* IsRiding, class UPalRiderComponent* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_IsRiding_ReturnValue, bool CallFunc_IsValid_ReturnValue);
	void IsHitBySize(class AActor* HitCharacter, bool* IsHit, enum class EPalSizeType TargetSize, class UPalStaticCharacterParameterComponent* CallFunc_GetComponentByClass_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, enum class EPalSizeType CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_EqualEqual_IntInt_ReturnValue);
	void GetTrapTime(class AActor* HitTarget, double* Time);
	void GetMesh(class UMeshComponent** Mesh, class UMeshComponent* CallFunc_GetComponentByClass_ReturnValue);
	void OnEndTrap_ForAll(class AActor* TargetActor);
	void OnEndTrap_ForServer(class AActor* Target);
	void OnTriggerTrap_ForAll(class AActor* TargetActor);
	void OnTriggerTrap_ForServer(class AActor* TargetActor);
	void OnTriggerTrapEvent_ToAll(class AActor* TargetActor);
	void OnEndTrapEvent_ToAll(class AActor* TargetActor);
	void BndEvt__BP_BuildObject_Trap_Base_AttackBox_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, struct FHitResult& SweepResult);
	void ExecuteUbergraph_BP_BuildObject_Trap_Base(int32 EntryPoint, bool CallFunc_IsServer_ReturnValue, bool Temp_bool_Has_Been_Initd_Variable, class AActor* K2Node_CustomEvent_TargetActor_1, bool Temp_bool_IsClosed_Variable, bool CallFunc_IsValid_ReturnValue, class AActor* K2Node_CustomEvent_TargetActor, class UPrimitiveComponent* K2Node_ComponentBoundEvent_OverlappedComponent, class AActor* K2Node_ComponentBoundEvent_OtherActor, class UPrimitiveComponent* K2Node_ComponentBoundEvent_OtherComp, int32 K2Node_ComponentBoundEvent_OtherBodyIndex, bool K2Node_ComponentBoundEvent_bFromSweep, const struct FHitResult& K2Node_ComponentBoundEvent_SweepResult, bool CallFunc_IsHitByFlag_Hit, bool CallFunc_IsRiding_IsRiding, bool CallFunc_IsHitBySize_IsHit, class APalCharacter* K2Node_DynamicCast_AsPal_Character, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsTargetEnemy_bReturnValue, bool CallFunc_IsHitableCharacter_IsHit, class UMeshComponent* CallFunc_GetMesh_Mesh, bool CallFunc_IsValid_ReturnValue_1, double CallFunc_GetTrapTime_Time, bool CallFunc_IsAvailable_ReturnValue, float CallFunc_Delay_Duration_ImplicitCast);
};

}


