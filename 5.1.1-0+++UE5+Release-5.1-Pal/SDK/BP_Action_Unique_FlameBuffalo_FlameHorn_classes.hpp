#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x1F (0x228 - 0x209)
// BlueprintGeneratedClass BP_Action_Unique_FlameBuffalo_FlameHorn.BP_Action_Unique_FlameBuffalo_FlameHorn_C
class UBP_Action_Unique_FlameBuffalo_FlameHorn_C : public UBP_ActionUniqueAttackBase_C
{
public:
	uint8                                        Pad_4153[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x210(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UBP_UniqueSkillModule_Tackle_C*        TackleModule;                                      // 0x218(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	double                                       TackleEndDistance;                                 // 0x220(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UBP_Action_Unique_FlameBuffalo_FlameHorn_C* GetDefaultObj();

	void OnCompletedEndMontage();
	void OnMontageNotify(class UAnimMontage* Montage, class FName NotifyName);
	void OnBeginAction();
	void TickAction(float DeltaTime);
	void OnEndAction();
	void CallEndAttack();
	void ExecuteUbergraph_BP_Action_Unique_FlameBuffalo_FlameHorn(int32 EntryPoint, bool Temp_bool_Has_Been_Initd_Variable, enum class EAction_Unique_Tackle CallFunc_GetCurrentState_State, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool Temp_bool_Has_Been_Initd_Variable_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UBP_UniqueSkillModule_Tackle_C* CallFunc_CreateSkillActionModule_Module, class AActor* CallFunc_GetUniqueActionTarget_TargetActor, class AActor* CallFunc_GetUniqueActionTarget_TargetActor_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, class UAnimMontage* K2Node_CustomEvent_Montage, class FName K2Node_CustomEvent_NotifyName, float K2Node_Event_DeltaTime, bool Temp_bool_IsClosed_Variable, class AActor* CallFunc_GetUniqueActionTarget_TargetActor_2, class APalCharacter* CallFunc_GetActionCharacter_ReturnValue, bool CallFunc_IsValid_ReturnValue, float CallFunc_GetDistanceTo_ReturnValue, bool CallFunc_Less_DoubleDouble_ReturnValue, bool Temp_bool_IsClosed_Variable_1, double CallFunc_Less_DoubleDouble_A_ImplicitCast);
};

}


