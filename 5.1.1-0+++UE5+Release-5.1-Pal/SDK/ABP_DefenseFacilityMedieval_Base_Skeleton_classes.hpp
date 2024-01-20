#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x374 (0x984 - 0x610)
// AnimBlueprintGeneratedClass ABP_DefenseFacilityMedieval_Base_Skeleton.ABP_DefenseFacilityMedieval_Base_Skeleton_C
class UABP_DefenseFacilityMedieval_Base_Skeleton_C : public UPalAnimInstance
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x610(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimSubsystemInstance                AnimBlueprintExtension_PropertyAccess;             // 0x618(0x8)(None)
	struct FAnimSubsystemInstance                AnimBlueprintExtension_Base;                       // 0x620(0x8)(None)
	struct FAnimNode_Root                        AnimGraphNode_Root;                                // 0x628(0x20)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer;                      // 0x648(0x48)(None)
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace;               // 0x690(0x20)(None)
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace;               // 0x6B0(0x20)(None)
	struct FAnimNode_ModifyBone                  AnimGraphNode_ModifyBone_1;                        // 0x6D0(0x128)(None)
	struct FAnimNode_ModifyBone                  AnimGraphNode_ModifyBone;                          // 0x7F8(0x128)(None)
	struct FAnimNode_Slot                        AnimGraphNode_Slot;                                // 0x920(0x48)(None)
	struct FRotator                              Rotatation;                                        // 0x968(0x18)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	float                                        Y__Pitch_;                                         // 0x980(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UABP_DefenseFacilityMedieval_Base_Skeleton_C* GetDefaultObj();

	void AnimGraph(struct FPoseLink* AnimGraph);
	void SetRotate(const struct FRotator& Rotation);
	void BlueprintUpdateAnimation(float DeltaTimeX);
	void ExecuteUbergraph_ABP_DefenseFacilityMedieval_Base_Skeleton(int32 EntryPoint, float K2Node_Event_DeltaTimeX);
};

}


