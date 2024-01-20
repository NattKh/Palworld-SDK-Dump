#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xD60 (0x10A8 - 0x348)
// AnimBlueprintGeneratedClass ABP_Serpent_Implementation.ABP_Serpent_Implementation_C
class UABP_Serpent_Implementation_C : public UAnimInstance
{
public:
	uint8                                        Pad_3310[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x350(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimSubsystemInstance                AnimBlueprintExtension_PropertyAccess;             // 0x358(0x8)(None)
	struct FAnimSubsystemInstance                AnimBlueprintExtension_Base;                       // 0x360(0x8)(None)
	struct FAnimNode_Root                        AnimGraphNode_Root_3;                              // 0x368(0x20)(None)
	struct FAnimNode_LinkedInputPose             AnimGraphNode_LinkedInputPose_3;                   // 0x388(0xC8)(None)
	struct FAnimNode_LinkedInputPose             AnimGraphNode_LinkedInputPose_2;                   // 0x450(0xC8)(None)
	struct FAnimNode_Root                        AnimGraphNode_Root_2;                              // 0x518(0x20)(None)
	struct FAnimNode_LinkedInputPose             AnimGraphNode_LinkedInputPose_1;                   // 0x538(0xC8)(None)
	struct FAnimNode_Root                        AnimGraphNode_Root_1;                              // 0x600(0x20)(None)
	struct FAnimNode_LinkedInputPose             AnimGraphNode_LinkedInputPose;                     // 0x620(0xC8)(None)
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace;               // 0x6E8(0x20)(None)
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace;               // 0x708(0x20)(None)
	uint8                                        Pad_3314[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FAnimNode_LookAt                      AnimGraphNode_LookAt_3;                            // 0x730(0x250)(None)
	struct FAnimNode_LookAt                      AnimGraphNode_LookAt_2;                            // 0x980(0x250)(None)
	struct FAnimNode_LookAt                      AnimGraphNode_LookAt_1;                            // 0xBD0(0x250)(None)
	struct FAnimNode_LookAt                      AnimGraphNode_LookAt;                              // 0xE20(0x250)(None)
	struct FAnimNode_Root                        AnimGraphNode_Root;                                // 0x1070(0x20)(None)
	struct FVector                               LookAtWorldLocation;                               // 0x1090(0x18)(BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UABP_Serpent_Implementation_C* GetDefaultObj();

	void UpperOverride(const struct FPoseLink& NativePose, const struct FPoseLink& ActionPose, struct FPoseLink* UpperOverride);
	void AimingOverride(const struct FPoseLink& DefaultPose, const struct FRotator& AimRotator, struct FPoseLink* AimingOverride);
	void LookAtOverride(const struct FPoseLink& InPose, const struct FVector& LookAtWorldLocation, struct FPoseLink* LookAtOverride);
	void AnimGraph(struct FPoseLink* AnimGraph);
	void ExecuteUbergraph_ABP_Serpent_Implementation(int32 EntryPoint);
};

}


