#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x58 (0x958 - 0x900)
// BlueprintGeneratedClass BP_Monkey.BP_Monkey_C
class ABP_Monkey_C : public ABP_MonsterBase_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x900(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class USkeletalMeshComponent*                SkeletalMesh;                                      // 0x908(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                       AssultrifleModeRayStart;                           // 0x910(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBP_CoopParam_AssaultRifleMode_C*      BP_CoopParam_AssaultRifleMode;                     // 0x918(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UPalBodyPartsCapsuleComponent*         PalBodyPartsCapsule2;                              // 0x920(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UPalBodyPartsCapsuleComponent*         PalBodyPartsCapsule1;                              // 0x928(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UPalBodyPartsCapsuleComponent*         PalBodyPartsCapsule;                               // 0x930(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	TArray<double>                               AimBlurAngles;                                     // 0x938(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<double>                               PartnerSkillMagnification;                         // 0x948(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)

	static class UClass* StaticClass();
	static class ABP_Monkey_C* GetDefaultObj();

	void ReceiveBeginPlay();
	void ExecuteUbergraph_BP_Monkey(int32 EntryPoint);
};

}


