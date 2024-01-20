#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x20 (0x158 - 0x138)
// BlueprintGeneratedClass BP_AIActionFunnelSkill_CollectItem.BP_AIActionFunnelSkill_CollectItem_C
class UBP_AIActionFunnelSkill_CollectItem_C : public UPalAIActionFunnelSkillBase
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x138(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	bool                                         bPickupped;                                        // 0x140(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1316[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UPalFunnelSkillModuleCollectItem*      ModuleCollectItem;                                 // 0x148(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UAnimMontage*                          PickupAnimation;                                   // 0x150(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UBP_AIActionFunnelSkill_CollectItem_C* GetDefaultObj();

	void Get_Actor_Root_Location(struct FVector* Location, class AController* CallFunc_GetController_ReturnValue, class APawn* CallFunc_K2_GetPawn_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, class UCapsuleComponent* CallFunc_GetComponentByClass_ReturnValue, double CallFunc_BreakVector_X, double CallFunc_BreakVector_Y, double CallFunc_BreakVector_Z, double CallFunc_Subtract_DoubleDouble_ReturnValue, const struct FVector& CallFunc_MakeVector_ReturnValue, double CallFunc_Subtract_DoubleDouble_B_ImplicitCast);
	void OnFail_8BFB17EA4AA5F3D3D1A5E8867E5C4F6E(enum class EPathFollowingResult MovementResult);
	void OnSuccess_8BFB17EA4AA5F3D3D1A5E8867E5C4F6E(enum class EPathFollowingResult MovementResult);
	void ActionStart(class APawn* ControlledPawn);
	void ActionTick(class APawn* ControlledPawn, float DeltaSeconds);
	void ExecuteUbergraph_BP_AIActionFunnelSkill_CollectItem(int32 EntryPoint, enum class EPathFollowingResult K2Node_CustomEvent_MovementResult_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, enum class EPathFollowingResult K2Node_CustomEvent_MovementResult, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, enum class EPathFollowingResult Temp_byte_Variable, class APawn* K2Node_Event_ControlledPawn_1, bool K2Node_SwitchEnum_CmpSuccess, class APawn* K2Node_Event_ControlledPawn, float K2Node_Event_DeltaSeconds, const struct FVector& CallFunc_Get_Actor_Root_Location_Location, class AController* CallFunc_GetController_ReturnValue, class APawn* CallFunc_K2_GetPawn_ReturnValue, class UPalFunnelSkillModuleCollectItem* K2Node_DynamicCast_AsPal_Funnel_Skill_Module_Collect_Item, bool K2Node_DynamicCast_bSuccess, class AController* CallFunc_GetController_ReturnValue_1, bool CallFunc_Not_PreBool_ReturnValue, class APalMapObject* CallFunc_GetTargetObject_ReturnValue, class UPalInteractiveObjectSphereComponent* CallFunc_GetComponentByClass_ReturnValue, class UAIAsyncTaskBlueprintProxy* CallFunc_CreateMoveToProxyObject_ReturnValue, bool CallFunc_Pickup_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsNearTargetLocation_ReturnValue, class APalCharacter* CallFunc_GetCharacter_ReturnValue, class UPalSkeletalMeshComponent* CallFunc_GetMainMesh_ReturnValue, class UAnimInstance* CallFunc_GetAnimInstance_ReturnValue, class UPalAnimInstance* K2Node_DynamicCast_AsPal_Anim_Instance, bool K2Node_DynamicCast_bSuccess_1, float CallFunc_Montage_Play_ReturnValue);
};

}


