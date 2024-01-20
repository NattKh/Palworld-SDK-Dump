#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x14 (0x198 - 0x184)
// BlueprintGeneratedClass BP_AIAction_UseWaza.BP_AIAction_UseWaza_C
class UBP_AIAction_UseWaza_C : public UBP_AIAction_AttackToReticleTarget_C
{
public:
	uint8                                        Pad_3BFD[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x188(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class ABP_MonsterAIController_Otomo_C*       AIController;                                      // 0x190(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UBP_AIAction_UseWaza_C* GetDefaultObj();

	void CanFindTarget(bool* Result, bool CallFunc_IsAvailableWaza_Result);
	void GetWazaID(enum class EPalWazaID* WazaID, enum class EPalWazaID CallFunc_GetWazaID_ReturnValue, bool CallFunc_IsValid_ReturnValue);
	void SetupAction(class APawn* ControlledPawn, class AController* CallFunc_GetController_ReturnValue, class ABP_MonsterAIController_Otomo_C* K2Node_DynamicCast_AsBP_Monster_AIController_Otomo, bool K2Node_DynamicCast_bSuccess);
	class FText GetSkillName(enum class EPalWazaID CallFunc_GetWazaID_WazaID, class FText CallFunc_GetWazaName_outName);
	void IsAvailableWaza(bool* Result, const TArray<enum class EPalStatusID>& CheckStatus, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, TArray<enum class EPalStatusID>& K2Node_MakeArray_Array, enum class EPalStatusID CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, class UPalStatusBase* CallFunc_GetExecutionStatus_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, class UPalActionBase* CallFunc_GetCurrentAction_ReturnValue, bool CallFunc_IsValid_ReturnValue_2, bool CallFunc_IsValid_ReturnValue_3, bool CallFunc_Not_PreBool_ReturnValue);
	void ExecAction(class AActor* TargetActor, enum class EPalWazaID CallFunc_GetWazaID_WazaID, bool CallFunc_NotEqual_ByteByte_ReturnValue, class APalPlayerCharacter* K2Node_DynamicCast_AsPal_Player_Character, bool K2Node_DynamicCast_bSuccess, class UPalActionBase* CallFunc_PlayAction_ReturnValue);
	void ActionStart(class APawn* ControlledPawn);
	void OnTargetFound(class AActor* TargetActor);
	void ExecuteUbergraph_BP_AIAction_UseWaza(int32 EntryPoint, class APawn* K2Node_Event_ControlledPawn, bool CallFunc_IsAvailableWaza_Result, class AActor* K2Node_Event_TargetActor, class APalCharacter* CallFunc_GetCharacter_ReturnValue, class UPalOtomoHolderComponentBase* CallFunc_GetOtomoHolderByOtomoPal_ReturnValue);
};

}


