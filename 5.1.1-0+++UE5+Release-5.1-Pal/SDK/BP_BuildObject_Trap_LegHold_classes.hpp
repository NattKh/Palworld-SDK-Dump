#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x5D0 - 0x5C8)
// BlueprintGeneratedClass BP_BuildObject_Trap_LegHold.BP_BuildObject_Trap_LegHold_C
class ABP_BuildObject_Trap_LegHold_C : public ABP_BuildObject_Trap_Base_C
{
public:
	class USkeletalMeshComponent*                SkeletalMesh;                                      // 0x5C8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ABP_BuildObject_Trap_LegHold_C* GetDefaultObj();

	void GetTrapTime(class AActor* HitTarget, double* Time, double Const_DefaultTrapTime, class UPalCharacterParameterComponent* CallFunc_GetComponentByClass_ReturnValue, int32 CallFunc_GetLegHoldResistLevel_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, double CallFunc_Conv_IntToDouble_ReturnValue, double CallFunc_MultiplyMultiply_FloatFloat_ReturnValue, double CallFunc_Divide_DoubleDouble_ReturnValue, double CallFunc_FClamp_ReturnValue);
	void OnEndTrap_ForAll(class AActor* TargetActor);
	void OnTriggerTrap_ForAll(class AActor* TargetActor);
	void OnEndTrap_ForServer(class AActor* Target, class UPalCharacterParameterComponent* CallFunc_GetComponentByClass_ReturnValue);
	void OnTriggerTrap_ForServer(class AActor* TargetActor, class UPalCharacterParameterComponent* CallFunc_GetComponentByClass_ReturnValue);
};

}


