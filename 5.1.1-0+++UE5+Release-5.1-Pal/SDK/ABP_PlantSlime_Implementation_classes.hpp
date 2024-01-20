#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8B8 (0xEC8 - 0x610)
// AnimBlueprintGeneratedClass ABP_PlantSlime_Implementation.ABP_PlantSlime_Implementation_C
class UABP_PlantSlime_Implementation_C : public UPalAnimInstance
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x610(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimSubsystemInstance                AnimBlueprintExtension_PropertyAccess;             // 0x618(0x8)(None)
	struct FAnimSubsystemInstance                AnimBlueprintExtension_Base;                       // 0x620(0x8)(None)
	struct FAnimNode_Root                        AnimGraphNode_Root_3;                              // 0x628(0x20)(None)
	struct FAnimNode_LinkedInputPose             AnimGraphNode_LinkedInputPose_3;                   // 0x648(0xC8)(None)
	struct FAnimNode_Root                        AnimGraphNode_Root_2;                              // 0x710(0x20)(None)
	struct FAnimNode_LinkedInputPose             AnimGraphNode_LinkedInputPose_2;                   // 0x730(0xC8)(None)
	uint8                                        Pad_19D0[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FAnimNode_LookAt                      AnimGraphNode_LookAt_1;                            // 0x800(0x250)(None)
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace;               // 0xA50(0x20)(None)
	struct FAnimNode_LookAt                      AnimGraphNode_LookAt;                              // 0xA70(0x250)(None)
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace;               // 0xCC0(0x20)(None)
	struct FAnimNode_Root                        AnimGraphNode_Root_1;                              // 0xCE0(0x20)(None)
	struct FAnimNode_LinkedInputPose             AnimGraphNode_LinkedInputPose_1;                   // 0xD00(0xC8)(None)
	struct FAnimNode_LinkedInputPose             AnimGraphNode_LinkedInputPose;                     // 0xDC8(0xC8)(None)
	struct FAnimNode_Root                        AnimGraphNode_Root;                                // 0xE90(0x20)(None)
	struct FVector                               LookAtWorldLocation;                               // 0xEB0(0x18)(BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UABP_PlantSlime_Implementation_C* GetDefaultObj();

	void AimingOverride(const struct FPoseLink& DefaultPose, const struct FRotator& AimRotator, struct FPoseLink* AimingOverride);
	void LookAtOverride(const struct FPoseLink& InPose, const struct FVector& LookAtWorldLocation, struct FPoseLink* LookAtOverride);
	void UpperOverride(const struct FPoseLink& NativePose, const struct FPoseLink& ActionPose, struct FPoseLink* UpperOverride);
	void AnimGraph(struct FPoseLink* AnimGraph);
	void ExecuteUbergraph_ABP_PlantSlime_Implementation(int32 EntryPoint);
};

}


