#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x10 (0x188 - 0x178)
// BlueprintGeneratedClass BP_AIAction_WeaponCall.BP_AIAction_WeaponCall_C
class UBP_AIAction_WeaponCall_C : public UBP_AIAction_CallBase_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x178(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class APawn*                                 ControlledPawn;                                    // 0x180(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UBP_AIAction_WeaponCall_C* GetDefaultObj();

	void CanChangeNextWeapon(class APalCharacter* Character, bool* CanChange, class UPalShooterComponent* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_CanChangeNextWeapon_ReturnValue, bool CallFunc_IsValid_ReturnValue);
	void HasAnyAction(class APalCharacter* Character, bool* HasAction, class UPalActionBase* CallFunc_GetCurrentAction_ReturnValue, bool CallFunc_NotEqual_ObjectObject_ReturnValue);
	void PlayAttachAction(class UClass* Action, class APalCharacter* Outer, class APalCharacter* Target, class UPalActionBase** NewAction, class UPalActionBase* CallFunc_PlayAction_ReturnValue);
	void FindAttachAction(class UClass** Action, class UBP_CoopParam_Weapon_C* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValidClass_ReturnValue);
	void EquipWeapon(class AController* CallFunc_GetController_ReturnValue, class UBP_AIAction_WeaponUsing_C* CallFunc_SpawnObject_ReturnValue, bool CallFunc_PushChildAction_ReturnValue);
	void ActionTick(class APawn* ControlledPawn, float DeltaSeconds);
	void ExecuteUbergraph_BP_AIAction_WeaponCall(int32 EntryPoint, bool CallFunc_HasAnyAction_HasAction, class APawn* K2Node_Event_ControlledPawn, float K2Node_Event_DeltaSeconds, float CallFunc_GetCharacterRadius_ReturnValue, float CallFunc_GetCharacterRadius_ReturnValue_1, bool CallFunc_CanChangeNextWeapon_CanChange, double CallFunc_Add_DoubleDouble_ReturnValue, double CallFunc_Add_DoubleDouble_ReturnValue_1, bool CallFunc_IsNearTwoActor_ReturnValue, double CallFunc_Add_DoubleDouble_B_ImplicitCast, double CallFunc_Add_DoubleDouble_A_ImplicitCast, float CallFunc_IsNearTwoActor_distance_ImplicitCast);
};

}


