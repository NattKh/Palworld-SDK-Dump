#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x10 (0x3A8 - 0x398)
// BlueprintGeneratedClass BP_ThrowObject_GrenadeBase.BP_ThrowObject_GrenadeBase_C
class ABP_ThrowObject_GrenadeBase_C : public ABP_ThrowObjectBase_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x398(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UStaticMeshComponent*                  StaticMesh;                                        // 0x3A0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ABP_ThrowObject_GrenadeBase_C* GetDefaultObj();

	void MeshRotate(double DeltaTime, double AddRotate, double RotateSpeed, float CallFunc_GetMaxSpeed_ReturnValue, double CallFunc_VSize_ReturnValue, double CallFunc_Divide_DoubleDouble_ReturnValue, float CallFunc_BreakRotator_Roll, float CallFunc_BreakRotator_Pitch, float CallFunc_BreakRotator_Yaw, double CallFunc_Add_DoubleDouble_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue, double CallFunc_Add_DoubleDouble_ReturnValue_1, double CallFunc_Multiply_DoubleDouble_ReturnValue_1, const struct FRotator& CallFunc_MakeRotator_ReturnValue, const struct FHitResult& CallFunc_K2_SetRelativeRotation_SweepHitResult, double CallFunc_Divide_DoubleDouble_B_ImplicitCast, double CallFunc_Add_DoubleDouble_A_ImplicitCast, double CallFunc_Add_DoubleDouble_A_ImplicitCast_1, float CallFunc_MakeRotator_Yaw_ImplicitCast, float CallFunc_MakeRotator_Roll_ImplicitCast);
	void GetExplosionClass(class UClass** ExClass);
	void GetMaxBoundCount(int32* Count);
	void ReceiveBeginPlay();
	void ReceiveTick(float DeltaSeconds);
	void ExecuteUbergraph_BP_ThrowObject_GrenadeBase(int32 EntryPoint, float K2Node_Event_DeltaSeconds, class UClass* CallFunc_GetExplosionClass_ExClass, const struct FTransform& CallFunc_GetTransform_ReturnValue, int32 CallFunc_GetWeaponDamage_ReturnValue, class APalCharacter* CallFunc_FindOwnerPalCharacter_ReturnValue, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, class ABP_ExplosionAttackBase_C* CallFunc_FinishSpawningActor_ReturnValue, double CallFunc_MeshRotate_DeltaTime_ImplicitCast);
};

}


