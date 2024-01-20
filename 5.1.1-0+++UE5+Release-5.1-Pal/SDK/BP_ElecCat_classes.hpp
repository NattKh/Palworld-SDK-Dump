#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x18 (0x918 - 0x900)
// BlueprintGeneratedClass BP_ElecCat.BP_ElecCat_C
class ABP_ElecCat_C : public ABP_MonsterBase_C
{
public:
	class UBP_PalTimerPointLightComponent_C*     BP_PalTimerPointLightComponent;                    // 0x900(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UPalBodyPartsSphereComponent*          PalBodyPartsSphere1;                               // 0x908(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UPalBodyPartsSphereComponent*          PalBodyPartsSphere;                                // 0x910(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ABP_ElecCat_C* GetDefaultObj();

	void GetVisual_ExceptMainMesh_SyncAnyway(TArray<class USceneComponent*>* OutComponent, const TArray<class USceneComponent*>& NewLocalVar, int32 CallFunc_Array_Add_ReturnValue);
};

}


