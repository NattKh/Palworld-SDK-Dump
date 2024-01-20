#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x25 (0x2D8 - 0x2B3)
// BlueprintGeneratedClass BP_ActionFlareArrow.BP_ActionFlareArrow_C
class UBP_ActionFlareArrow_C : public UBP_ActionGeneralAttackFarBase_C
{
public:
	uint8                                        Pad_81A[0x5];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x2B8(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	bool                                         IsShooted;                                         // 0x2C0(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)
	uint8                                        Pad_81C[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Counter;                                           // 0x2C4(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)
	int32                                        BulletNum;                                         // 0x2C8(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        BulletInterval;                                    // 0x2CC(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                          BulletTimer;                                       // 0x2D0(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UBP_ActionFlareArrow_C* GetDefaultObj();

	void SetBulletSpeed(class APalSkillEffectBase** Effect, const struct FVector& CallFunc_MakeVector_ReturnValue, class USceneComponent* CallFunc_K2_GetRootComponent_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UProjectileMovementComponent* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, float K2Node_VariableSet_MaxSpeed_ImplicitCast);
	void BulletHasShooted(class APalSkillEffectBase* Effect, const struct FSkillEffectSpawnParameter& CallFunc_Array_Get_Item, class APalSkillEffectBase* CallFunc_FindEffectByClass_Effect, bool CallFunc_IsValid_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue);
	void OnSpawnEffect(class APalSkillEffectBase* Effect);
	void SpawnBullet();
	void OnEndAction();
	void ExecuteUbergraph_BP_ActionFlareArrow(int32 EntryPoint, class APalSkillEffectBase* K2Node_Event_Effect, int32 CallFunc_Add_IntInt_ReturnValue, const struct FSkillEffectSpawnParameter& CallFunc_Array_Get_Item, int32 CallFunc_Subtract_IntInt_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 Temp_int_Variable, class APalCharacter* CallFunc_GetActionCharacter_ReturnValue, const struct FSkillEffectSpawnParameter& CallFunc_Array_Get_Item_1, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, const struct FVector& CallFunc_GetTargetLocation_ReturnValue, class APalSkillEffectBase* CallFunc_FindEffectByClass_Effect, const struct FRotator& CallFunc_FindLookAtRotation_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, bool CallFunc_K2_SetActorRotation_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue);
};

}


