#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x30 (0x5B8 - 0x588)
// BlueprintGeneratedClass BP_BuildObject_HeaterMedieval.BP_BuildObject_HeaterMedieval_C
class ABP_BuildObject_HeaterMedieval_C : public ABP_BuildObject_SwitchHeatSource_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x588(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UBoxComponent*                         CheckOverlapCollision;                             // 0x590(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBP_InteractableBox_C*                 BP_InteractableBox;                                // 0x598(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBoxComponent*                         BuildWorkableBounds;                               // 0x5A0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                  SM_HeaterMedieval;                                 // 0x5A8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UNiagaraComponent*                     NS_StableFire_HeaterMedieval;                      // 0x5B0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ABP_BuildObject_HeaterMedieval_C* GetDefaultObj();

	void SetActive_Internal(bool bOn);
	void ReceiveBeginPlay();
	void OnAvailable_BlueprintImpl();
	void ExecuteUbergraph_BP_BuildObject_HeaterMedieval(int32 EntryPoint);
};

}


