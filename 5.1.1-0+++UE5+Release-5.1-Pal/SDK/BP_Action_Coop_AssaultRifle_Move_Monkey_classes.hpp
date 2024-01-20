#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x18 (0x150 - 0x138)
// BlueprintGeneratedClass BP_Action_Coop_AssaultRifle_Move_Monkey.BP_Action_Coop_AssaultRifle_Move_Monkey_C
class UBP_Action_Coop_AssaultRifle_Move_Monkey_C : public UPalActionBase
{
public:
	uint8                                        Pad_3F40[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x140(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UBP_CoopParam_AssaultRifleMode_C*      CoopParam;                                         // 0x148(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UBP_Action_Coop_AssaultRifle_Move_Monkey_C* GetDefaultObj();

	void ChangeAnime(class UAnimMontage* NewAnime, class UAnimMontage* StopAnime, class UAnimMontage* StopAnime2, class APalCharacter* CallFunc_GetActionCharacter_ReturnValue, class APalCharacter* CallFunc_GetActionCharacter_ReturnValue_1, class APalCharacter* CallFunc_GetActionCharacter_ReturnValue_2, class APalCharacter* CallFunc_GetActionCharacter_ReturnValue_3, class UAnimMontage* CallFunc_GetCurrentMontage_ReturnValue, bool CallFunc_NotEqual_ObjectObject_ReturnValue, float CallFunc_PlayAnimMontage_ReturnValue);
	void OnBeginAction();
	void OnEndAction();
	void ExecuteUbergraph_BP_Action_Coop_AssaultRifle_Move_Monkey(int32 EntryPoint, class APalCharacter* CallFunc_GetActionCharacter_ReturnValue, class UBP_CoopParam_AssaultRifleMode_C* CallFunc_GetComponentByClass_ReturnValue);
};

}


