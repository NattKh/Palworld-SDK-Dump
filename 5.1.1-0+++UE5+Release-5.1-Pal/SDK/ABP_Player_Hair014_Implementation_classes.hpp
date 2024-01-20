#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x4598 (0x48E0 - 0x348)
// AnimBlueprintGeneratedClass ABP_Player_Hair014_Implementation.ABP_Player_Hair014_Implementation_C
class UABP_Player_Hair014_Implementation_C : public UAnimInstance
{
public:
	uint8                                        Pad_3EE6[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x350(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimSubsystemInstance                AnimBlueprintExtension_PropertyAccess;             // 0x358(0x8)(None)
	struct FAnimSubsystemInstance                AnimBlueprintExtension_Base;                       // 0x360(0x8)(None)
	struct FAnimNode_Root                        AnimGraphNode_Root_1;                              // 0x368(0x20)(None)
	struct FAnimNode_LinkedInputPose             AnimGraphNode_LinkedInputPose;                     // 0x388(0xC8)(None)
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace;               // 0x450(0x20)(None)
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace;               // 0x470(0x20)(None)
	struct FAnimNode_KawaiiPhysics               AnimGraphNode_KawaiiPhysics_8;                     // 0x490(0x790)(None)
	struct FAnimNode_KawaiiPhysics               AnimGraphNode_KawaiiPhysics_7;                     // 0xC20(0x790)(None)
	struct FAnimNode_KawaiiPhysics               AnimGraphNode_KawaiiPhysics_6;                     // 0x13B0(0x790)(None)
	struct FAnimNode_KawaiiPhysics               AnimGraphNode_KawaiiPhysics_5;                     // 0x1B40(0x790)(None)
	struct FAnimNode_KawaiiPhysics               AnimGraphNode_KawaiiPhysics_4;                     // 0x22D0(0x790)(None)
	struct FAnimNode_KawaiiPhysics               AnimGraphNode_KawaiiPhysics_3;                     // 0x2A60(0x790)(None)
	struct FAnimNode_KawaiiPhysics               AnimGraphNode_KawaiiPhysics_2;                     // 0x31F0(0x790)(None)
	struct FAnimNode_KawaiiPhysics               AnimGraphNode_KawaiiPhysics_1;                     // 0x3980(0x790)(None)
	struct FAnimNode_KawaiiPhysics               AnimGraphNode_KawaiiPhysics;                       // 0x4110(0x790)(None)
	struct FAnimNode_Root                        AnimGraphNode_Root;                                // 0x48A0(0x20)(None)
	struct FKawaiiPhysicsSettings                PhysicsSettings;                                   // 0x48C0(0x18)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	double                                       Alpha;                                             // 0x48D8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UABP_Player_Hair014_Implementation_C* GetDefaultObj();

	void HairLayer(const struct FPoseLink& InPose, struct FPoseLink* HairLayer);
	void AnimGraph(struct FPoseLink* AnimGraph);
	void ExecuteUbergraph_ABP_Player_Hair014_Implementation(int32 EntryPoint);
};

}


