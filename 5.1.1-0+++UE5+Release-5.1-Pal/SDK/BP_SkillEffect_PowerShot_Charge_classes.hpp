#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x19 (0x3D9 - 0x3C0)
// BlueprintGeneratedClass BP_SkillEffect_PowerShot_Charge.BP_SkillEffect_PowerShot_Charge_C
class ABP_SkillEffect_PowerShot_Charge_C : public ABP_SkillEffectBase_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x3C0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UNiagaraComponent*                     Charge;                                            // 0x3C8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	double                                       HomingOffDistance;                                 // 0x3D0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsHoming;                                          // 0x3D8(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ABP_SkillEffect_PowerShot_Charge_C* GetDefaultObj();

	void ShootBullet(const struct FVector& TargetLocation);
	void CancelShoot();
	void ReceiveBeginPlay();
	void FadeOutEffect(double DeltaSecond);
	void ExecuteUbergraph_BP_SkillEffect_PowerShot_Charge(int32 EntryPoint, const struct FVector& K2Node_Event_TargetLocation, double K2Node_Event_DeltaSecond);
};

}


