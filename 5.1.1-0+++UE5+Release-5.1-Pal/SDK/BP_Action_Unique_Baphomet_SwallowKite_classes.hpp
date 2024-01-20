#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x10 (0x219 - 0x209)
// BlueprintGeneratedClass BP_Action_Unique_Baphomet_SwallowKite.BP_Action_Unique_Baphomet_SwallowKite_C
class UBP_Action_Unique_Baphomet_SwallowKite_C : public UBP_ActionUniqueAttackBase_C
{
public:
	uint8                                        Pad_419C[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x210(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	bool                                         IsHoming;                                          // 0x218(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UBP_Action_Unique_Baphomet_SwallowKite_C* GetDefaultObj();

	void GetMontage(class UAnimMontage** Montage, class APalCharacter* CallFunc_GetActionCharacter_ReturnValue, class UPalStaticCharacterParameterComponent* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_IsBossPal_Database_ReturnValue);
	void OnMontageNotify(class UAnimMontage* Montage, class FName NotifyName, bool CallFunc_EqualEqual_NameName_ReturnValue, bool CallFunc_EqualEqual_NameName_ReturnValue_1);
	void OnNotifyEnd_7005D59D448F88E6383CA38524775CD3(class FName NotifyName);
	void OnNotifyBegin_7005D59D448F88E6383CA38524775CD3(class FName NotifyName);
	void OnInterrupted_7005D59D448F88E6383CA38524775CD3(class FName NotifyName);
	void OnBlendOut_7005D59D448F88E6383CA38524775CD3(class FName NotifyName);
	void OnCompleted_7005D59D448F88E6383CA38524775CD3(class FName NotifyName);
	void OnBeginAction();
	void OnEndAction();
	void TickAction(float DeltaTime);
	void ExecuteUbergraph_BP_Action_Unique_Baphomet_SwallowKite(int32 EntryPoint, class UAnimMontage* CallFunc_GetMontage_Montage, class FName K2Node_CustomEvent_NotifyName_4, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class FName K2Node_CustomEvent_NotifyName_3, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class FName K2Node_CustomEvent_NotifyName_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, class FName K2Node_CustomEvent_NotifyName_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, class FName K2Node_CustomEvent_NotifyName, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, class FName Temp_name_Variable, class APalCharacter* CallFunc_GetActionCharacter_ReturnValue, class UPalSkeletalMeshComponent* CallFunc_GetMainMesh_ReturnValue, class APalCharacter* CallFunc_GetActionCharacter_ReturnValue_1, float K2Node_Event_DeltaTime, const struct FRotator& CallFunc_GetRotation_Rotation, class UPalAnimInstance* CallFunc_GetPalAnimInstance_AnimInstance, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_5, class UPalAnimInstance* CallFunc_GetPalAnimInstance_AnimInstance_1, class APalCharacter* CallFunc_GetActionCharacter_ReturnValue_2, bool CallFunc_K2_SetActorRotation_ReturnValue, class UAnimMontage* CallFunc_GetMontage_Montage_1, class UPlayMontageCallbackProxy* CallFunc_CreateProxyObjectForPlayMontage_ReturnValue, bool CallFunc_IsValid_ReturnValue, double CallFunc_GetRotation_DeltaTime_ImplicitCast);
};

}


