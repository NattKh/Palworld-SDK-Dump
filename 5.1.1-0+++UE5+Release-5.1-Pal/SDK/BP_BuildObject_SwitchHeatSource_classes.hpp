#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x18 (0x588 - 0x570)
// BlueprintGeneratedClass BP_BuildObject_SwitchHeatSource.BP_BuildObject_SwitchHeatSource_C
class ABP_BuildObject_SwitchHeatSource_C : public APalBuildObject
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x570(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UBP_HeatSourceSphereComponent_C*       BP_HeatSourceComponent;                            // 0x578(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                       DefaultSceneRoot;                                  // 0x580(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ABP_BuildObject_SwitchHeatSource_C* GetDefaultObj();

	void OnUpdateSwitch(class UPalMapObjectSwitchModule* Module, enum class EPalMapObjectSwitchState CallFunc_GetSwitchState_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess);
	void BP_OnSetConcreteModel(class UPalMapObjectConcreteModelBase* ConcreteModel);
	void ReceiveBeginPlay();
	void OnReadySwitchModule(class UPalMapObjectConcreteModelBase* Model, class UPalMapObjectConcreteModelModuleBase* Module);
	void OnAvailableConcreteModel(class UPalMapObjectConcreteModelBase* Model);
	void ExecuteUbergraph_BP_BuildObject_SwitchHeatSource(int32 EntryPoint, class UPalMapObjectConcreteModelBase* K2Node_CustomEvent_Model, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class UPalMapObjectConcreteModelBase* K2Node_Event_ConcreteModel, class UPalMapObjectConcreteModelBase* K2Node_CustomEvent_Model_1, class UPalMapObjectConcreteModelModuleBase* K2Node_CustomEvent_Module, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, class UPalMapObjectSwitchModule* K2Node_DynamicCast_AsPal_Map_Object_Switch_Module, bool K2Node_DynamicCast_bSuccess);
};

}


