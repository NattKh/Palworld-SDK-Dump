#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x158 - 0x150)
// BlueprintGeneratedClass BP_AIActionBaseCamp_InSpa.BP_AIActionBaseCamp_InSpa_C
class UBP_AIActionBaseCamp_InSpa_C : public UPalAIActionBaseCampInUsingAmusement
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x150(0x8)(ZeroConstructor, Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class UBP_AIActionBaseCamp_InSpa_C* GetDefaultObj();

	float GetUsingTime(class UPalGameSetting* CallFunc_GetGameSetting_ReturnValue);
	void OnFinishedImpl(class AActor* ControlledPawn, class UPalActionComponent* CallFunc_GetComponentByClass_ReturnValue, class APalCharacter* K2Node_DynamicCast_AsPal_Character, bool K2Node_DynamicCast_bSuccess, class UPalCharacterMovementComponent* CallFunc_GetPalCharacterMovementComponent_ReturnValue);
	void OnStartImpl(class AActor* ControlledPawn, class UPalActionComponent* CallFunc_GetComponentByClass_ReturnValue, class APalCharacter* K2Node_DynamicCast_AsPal_Character, bool K2Node_DynamicCast_bSuccess, class UPalActionBase* CallFunc_PlayActionByType_ReturnValue, class UPalCharacterMovementComponent* CallFunc_GetPalCharacterMovementComponent_ReturnValue);
	void ActionStart(class APawn* ControlledPawn);
	void ActionFinished(class APawn* ControlledPawn, enum class EPawnActionResult WithResult);
	void ExecuteUbergraph_BP_AIActionBaseCamp_InSpa(int32 EntryPoint, class APawn* K2Node_Event_ControlledPawn, enum class EPawnActionResult K2Node_Event_WithResult, class APawn* K2Node_Event_ControlledPawn_1);
};

}


