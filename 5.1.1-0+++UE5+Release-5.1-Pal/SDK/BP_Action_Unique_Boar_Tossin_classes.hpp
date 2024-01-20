#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x17 (0x220 - 0x209)
// BlueprintGeneratedClass BP_Action_Unique_Boar_Tossin.BP_Action_Unique_Boar_Tossin_C
class UBP_Action_Unique_Boar_Tossin_C : public UBP_ActionUniqueAttackBase_C
{
public:
	uint8                                        Pad_216F[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x210(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UBP_UniqueSkillModule_Tackle_C*        TackleModule;                                      // 0x218(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UBP_Action_Unique_Boar_Tossin_C* GetDefaultObj();

	void OnBeginAction();
	void OnEndAction();
	void TickAction(float DeltaTime);
	void OnCompletedEndMontage();
	void OnMontageNotify(class UAnimMontage* Montage, class FName NotifyName);
	void OnEndAttack();
	void ExecuteUbergraph_BP_Action_Unique_Boar_Tossin(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, float K2Node_Event_DeltaTime, class UBP_UniqueSkillModule_Tackle_C* CallFunc_CreateSkillActionModule_Module, class AActor* CallFunc_GetUniqueActionTarget_TargetActor, class AActor* CallFunc_GetUniqueActionTarget_TargetActor_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, class UAnimMontage* K2Node_CustomEvent_Montage, class FName K2Node_CustomEvent_NotifyName, bool CallFunc_EqualEqual_NameName_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3);
};

}


