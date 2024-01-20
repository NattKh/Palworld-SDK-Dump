#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xE (0x2C1 - 0x2B3)
// BlueprintGeneratedClass BP_ActionAirCanon.BP_ActionAirCanon_C
class UBP_ActionAirCanon_C : public UBP_ActionGeneralAttackFarBase_C
{
public:
	uint8                                        Pad_14D[0x5];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x2B8(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	bool                                         IsShooted;                                         // 0x2C0(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UBP_ActionAirCanon_C* GetDefaultObj();

	void SetBulletSpeed(class APalSkillEffectBase** Effect, class APalSkillEffectBase* CallFunc_SetBulletSpeed_Effect);
	void OnBeginAction();
	void TickAction(float DeltaTime);
	void OnSpawnEffect(class APalSkillEffectBase* Effect);
	void ExecuteUbergraph_BP_ActionAirCanon(int32 EntryPoint, class APalSkillEffectBase* K2Node_Event_Effect, class APalCharacter* CallFunc_GetActionCharacter_ReturnValue, bool CallFunc_IsPlayerControlled_ReturnValue, float K2Node_Event_DeltaTime);
};

}


