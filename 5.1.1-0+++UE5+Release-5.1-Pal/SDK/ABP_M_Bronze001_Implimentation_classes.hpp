#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x24D0 (0x2818 - 0x348)
// AnimBlueprintGeneratedClass ABP_M_Bronze001_Implimentation.ABP_M_Bronze001_Implimentation_C
class UABP_M_Bronze001_Implimentation_C : public UAnimInstance
{
public:
	uint8                                        Pad_2006[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x350(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimSubsystemInstance                AnimBlueprintExtension_PropertyAccess;             // 0x358(0x8)(None)
	struct FAnimSubsystemInstance                AnimBlueprintExtension_Base;                       // 0x360(0x8)(None)
	uint8                                        Pad_200A[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FAnimNode_KawaiiPhysics               AnimGraphNode_KawaiiPhysics_3;                     // 0x370(0x790)(None)
	struct FAnimNode_KawaiiPhysics               AnimGraphNode_KawaiiPhysics_2;                     // 0xB00(0x790)(None)
	struct FAnimNode_KawaiiPhysics               AnimGraphNode_KawaiiPhysics_1;                     // 0x1290(0x790)(None)
	struct FAnimNode_KawaiiPhysics               AnimGraphNode_KawaiiPhysics;                       // 0x1A20(0x790)(None)
	struct FAnimNode_AnimDynamics                AnimGraphNode_AnimDynamics;                        // 0x21B0(0x520)(None)
	struct FAnimNode_Root                        AnimGraphNode_Root_1;                              // 0x26D0(0x20)(None)
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace;               // 0x26F0(0x20)(None)
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace;               // 0x2710(0x20)(None)
	struct FAnimNode_LinkedInputPose             AnimGraphNode_LinkedInputPose;                     // 0x2730(0xC8)(None)
	struct FAnimNode_Root                        AnimGraphNode_Root;                                // 0x27F8(0x20)(None)

	static class UClass* StaticClass();
	static class UABP_M_Bronze001_Implimentation_C* GetDefaultObj();

	void ClothLayer(const struct FPoseLink& InPose, struct FPoseLink* ClothLayer);
	void AnimGraph(struct FPoseLink* AnimGraph);
	void ExecuteUbergraph_ABP_M_Bronze001_Implimentation(int32 EntryPoint);
};

}


