#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xE (0x120 - 0x112)
// BlueprintGeneratedClass BP_UniqueSkillModule_Tackle_Deer.BP_UniqueSkillModule_Tackle_Deer_C
class UBP_UniqueSkillModule_Tackle_Deer_C : public UBP_UniqueSkillModule_Tackle_C
{
public:
	uint8                                        Pad_4208[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x118(0x8)(ZeroConstructor, Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class UBP_UniqueSkillModule_Tackle_Deer_C* GetDefaultObj();

	void OnNotifyEnd_F25B6FF046ECCC92AD6B569983A3096F(class FName NotifyName);
	void OnNotifyBegin_F25B6FF046ECCC92AD6B569983A3096F(class FName NotifyName);
	void OnInterrupted_F25B6FF046ECCC92AD6B569983A3096F(class FName NotifyName);
	void OnBlendOut_F25B6FF046ECCC92AD6B569983A3096F(class FName NotifyName);
	void OnCompleted_F25B6FF046ECCC92AD6B569983A3096F(class FName NotifyName);
	void OnBeginModule();
	void ExecuteUbergraph_BP_UniqueSkillModule_Tackle_Deer(int32 EntryPoint, class FName K2Node_CustomEvent_NotifyName_3, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class FName K2Node_CustomEvent_NotifyName_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class FName K2Node_CustomEvent_NotifyName_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, class FName K2Node_CustomEvent_NotifyName, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, class FName Temp_name_Variable, class FName K2Node_CustomEvent_NotifyName_4, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, class APalCharacter* CallFunc_GetActionCharacter_ReturnValue, class APalCharacter* CallFunc_GetActionCharacter_ReturnValue_1, class UPalSkeletalMeshComponent* CallFunc_GetMainMesh_ReturnValue, class UPalCharacterMovementComponent* CallFunc_GetComponentByClass_ReturnValue, class UAnimInstance* CallFunc_GetAnimInstance_ReturnValue, class UPalAnimInstance* K2Node_DynamicCast_AsPal_Anim_Instance, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_5, class UPlayMontageCallbackProxy* CallFunc_CreateProxyObjectForPlayMontage_ReturnValue, bool CallFunc_IsValid_ReturnValue_1);
};

}


