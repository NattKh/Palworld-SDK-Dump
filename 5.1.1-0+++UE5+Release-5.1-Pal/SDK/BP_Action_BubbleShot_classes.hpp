#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xD (0x2C0 - 0x2B3)
// BlueprintGeneratedClass BP_Action_BubbleShot.BP_Action_BubbleShot_C
class UBP_Action_BubbleShot_C : public UBP_ActionGeneralAttackFarBase_C
{
public:
	uint8                                        Pad_4014[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x2B8(0x8)(ZeroConstructor, Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class UBP_Action_BubbleShot_C* GetDefaultObj();

	void OnBeginAction();
	void TickAction(float DeltaTime);
	void OnSpawnEffect(class APalSkillEffectBase* Effect);
	void ExecuteUbergraph_BP_Action_BubbleShot(int32 EntryPoint, bool CallFunc_IsValid_ReturnValue, float K2Node_Event_DeltaTime, class APalSkillEffectBase* K2Node_Event_Effect);
};

}


