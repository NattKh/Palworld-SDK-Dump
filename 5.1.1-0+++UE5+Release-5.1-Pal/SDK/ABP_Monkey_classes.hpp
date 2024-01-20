#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x2288 - 0x2280)
// AnimBlueprintGeneratedClass ABP_Monkey.ABP_Monkey_C
class UABP_Monkey_C : public UABP_MonsterBase_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x2280(0x8)(ZeroConstructor, Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class UABP_Monkey_C* GetDefaultObj();

	void UpdateAiming(class UPalSkeletalMeshComponent* SkeletalMesh, class UPalLookAtComponent* Lookat, class UBP_CoopParam_AssaultRifleMode_C* CoopParam, class UPalPartnerSkillParameterComponent* PartnerSkill, class APawn* Owner, class UBP_CoopParam_AssaultRifleMode_C* CallFunc_GetComponentByClass_ReturnValue, class UPalPartnerSkillParameterComponent* CallFunc_GetComponentByClass_ReturnValue_1, bool CallFunc_IsValid_ReturnValue, class UPalLookAtComponent* CallFunc_GetComponentByClass_ReturnValue_2, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_2, class UPalSkeletalMeshComponent* CallFunc_GetComponentByClass_ReturnValue_3, bool CallFunc_IsValid_ReturnValue_3, bool CallFunc_IsEnableLookAt_ReturnValue, bool CallFunc_IsRunning_ReturnValue, class APawn* CallFunc_TryGetPawnOwner_ReturnValue, bool CallFunc_IsValid_ReturnValue_4);
	void BlueprintUpdateAnimation(float DeltaTimeX);
	void ExecuteUbergraph_ABP_Monkey(int32 EntryPoint, float K2Node_Event_DeltaTimeX);
};

}


