#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x17 (0x220 - 0x209)
// BlueprintGeneratedClass BP_Action_Unique_GrassMammoth_Earthquake.BP_Action_Unique_GrassMammoth_Earthquake_C
class UBP_Action_Unique_GrassMammoth_Earthquake_C : public UBP_ActionUniqueAttackBase_C
{
public:
	uint8                                        Pad_31F6[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x210(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class ABP_SkillEffectBase_C*                 SkillEffect;                                       // 0x218(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UBP_Action_Unique_GrassMammoth_Earthquake_C* GetDefaultObj();

	void OnNotifyEnd_6A44829442629F9E2C402AAB423252DC(class FName NotifyName);
	void OnNotifyBegin_6A44829442629F9E2C402AAB423252DC(class FName NotifyName);
	void OnInterrupted_6A44829442629F9E2C402AAB423252DC(class FName NotifyName);
	void OnBlendOut_6A44829442629F9E2C402AAB423252DC(class FName NotifyName);
	void OnCompleted_6A44829442629F9E2C402AAB423252DC(class FName NotifyName);
	void OnBeginAction();
	void OnEndAction();
	void ExecuteUbergraph_BP_Action_Unique_GrassMammoth_Earthquake(int32 EntryPoint, class FName K2Node_CustomEvent_NotifyName_4, class FName K2Node_CustomEvent_NotifyName_3, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class FName K2Node_CustomEvent_NotifyName_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class FName K2Node_CustomEvent_NotifyName_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, class FName K2Node_CustomEvent_NotifyName, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, class FName Temp_name_Variable, bool CallFunc_EqualEqual_NameName_ReturnValue, class APalCharacter* CallFunc_GetActionCharacter_ReturnValue, class UPalSkeletalMeshComponent* CallFunc_GetMainMesh_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, class UPlayMontageCallbackProxy* CallFunc_CreateProxyObjectForPlayMontage_ReturnValue, bool CallFunc_IsValid_ReturnValue, class APalCharacter* CallFunc_GetActionCharacter_ReturnValue_1, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, const struct FTransform& CallFunc_MakeTransform_ReturnValue, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, class ABP_SkillEffect_Unique_GrassMammoth_Earthquake_C* CallFunc_FinishSpawningActor_ReturnValue);
};

}


