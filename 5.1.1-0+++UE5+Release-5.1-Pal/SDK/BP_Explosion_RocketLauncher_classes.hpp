#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x10 (0x2E0 - 0x2D0)
// BlueprintGeneratedClass BP_Explosion_RocketLauncher.BP_Explosion_RocketLauncher_C
class ABP_Explosion_RocketLauncher_C : public ABP_ExplosionAttackBase_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x2D0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UNiagaraComponent*                     Explosive;                                         // 0x2D8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ABP_Explosion_RocketLauncher_C* GetDefaultObj();

	void GetEffectValue(int32* Value);
	void GetEffectType(enum class EPalAdditionalEffectType* Effect);
	void BndEvt__BP_Explosion_PenguinLauncher_Explosive_K2Node_ComponentBoundEvent_0_OnNiagaraSystemFinished__DelegateSignature(class UNiagaraComponent* PSystem);
	void ExecuteUbergraph_BP_Explosion_RocketLauncher(int32 EntryPoint, class UNiagaraComponent* K2Node_ComponentBoundEvent_PSystem);
};

}


