#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x38 (0x3D8 - 0x3A0)
// BlueprintGeneratedClass BP_MapObject_DeathPenaltyChest.BP_MapObject_DeathPenaltyChest_C
class ABP_MapObject_DeathPenaltyChest_C : public APalMapObject
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x3A0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UNiagaraComponent*                     NS_MapObject_DroppedCharacter;                     // 0x3A8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UPalMapObjectItemChestParameterComponent* PalMapObjectItemChestParameter;                    // 0x3B0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBoxComponent*                         CheckOverlapCollision;                             // 0x3B8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBP_InteractableBox_C*                 BP_InteractableBox;                                // 0x3C0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                  Mesh;                                              // 0x3C8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                       Root;                                              // 0x3D0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ABP_MapObject_DeathPenaltyChest_C* GetDefaultObj();

	void SetActiveFXInLocal(class UPalMapObjectConcreteModelBase* ConcreteModel, class UPalMapObjectDeathPenaltyStorageModel* K2Node_DynamicCast_AsPal_Map_Object_Death_Penalty_Storage_Model, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsSameGuildInLocalPlayer_ReturnValue);
	void BP_OnSetConcreteModel(class UPalMapObjectConcreteModelBase* ConcreteModel);
	void OnNotifiedGuildUpdateInClient(class UPalMapObjectDeathPenaltyStorageModel* Model);
	void ExecuteUbergraph_BP_MapObject_DeathPenaltyChest(int32 EntryPoint, class UPalMapObjectDeathPenaltyStorageModel* K2Node_CustomEvent_Model, class UPalMapObjectConcreteModelBase* K2Node_Event_ConcreteModel, class UPalMapObjectDeathPenaltyStorageModel* K2Node_DynamicCast_AsPal_Map_Object_Death_Penalty_Storage_Model, bool K2Node_DynamicCast_bSuccess, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate);
};

}


