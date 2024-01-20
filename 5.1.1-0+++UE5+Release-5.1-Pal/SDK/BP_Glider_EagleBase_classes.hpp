#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x10 (0x328 - 0x318)
// BlueprintGeneratedClass BP_Glider_EagleBase.BP_Glider_EagleBase_C
class ABP_Glider_EagleBase_C : public ABP_GliderObjectBase_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x318(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class USkeletalMeshComponent*                EagleMesh;                                         // 0x320(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ABP_Glider_EagleBase_C* GetDefaultObj();

	void ReceiveBeginPlay();
	void OnStartGliding();
	void OnEndGliding();
	void ExecuteUbergraph_BP_Glider_EagleBase(int32 EntryPoint, class UNiagaraComponent* CallFunc_SpawnSystemAttached_ReturnValue);
};

}


