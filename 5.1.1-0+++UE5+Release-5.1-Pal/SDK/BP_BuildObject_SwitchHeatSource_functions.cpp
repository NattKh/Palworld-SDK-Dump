#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_BuildObject_SwitchHeatSource.BP_BuildObject_SwitchHeatSource_C
// (Actor)

class UClass* ABP_BuildObject_SwitchHeatSource_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_BuildObject_SwitchHeatSource_C");

	return Clss;
}


// BP_BuildObject_SwitchHeatSource_C BP_BuildObject_SwitchHeatSource.Default__BP_BuildObject_SwitchHeatSource_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_BuildObject_SwitchHeatSource_C* ABP_BuildObject_SwitchHeatSource_C::GetDefaultObj()
{
	static class ABP_BuildObject_SwitchHeatSource_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_BuildObject_SwitchHeatSource_C*>(ABP_BuildObject_SwitchHeatSource_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_BuildObject_SwitchHeatSource.BP_BuildObject_SwitchHeatSource_C.OnUpdateSwitch
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPalMapObjectSwitchModule*   Module                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// enum class EPalMapObjectSwitchStateCallFunc_GetSwitchState_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_BuildObject_SwitchHeatSource_C::OnUpdateSwitch(class UPalMapObjectSwitchModule* Module, enum class EPalMapObjectSwitchState CallFunc_GetSwitchState_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_BuildObject_SwitchHeatSource_C", "OnUpdateSwitch");

	Params::ABP_BuildObject_SwitchHeatSource_C_OnUpdateSwitch_Params Parms{};

	Parms.Module = Module;
	Parms.CallFunc_GetSwitchState_ReturnValue = CallFunc_GetSwitchState_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_BuildObject_SwitchHeatSource.BP_BuildObject_SwitchHeatSource_C.BP_OnSetConcreteModel
// (Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPalMapObjectConcreteModelBase*ConcreteModel                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_BuildObject_SwitchHeatSource_C::BP_OnSetConcreteModel(class UPalMapObjectConcreteModelBase* ConcreteModel)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_BuildObject_SwitchHeatSource_C", "BP_OnSetConcreteModel");

	Params::ABP_BuildObject_SwitchHeatSource_C_BP_OnSetConcreteModel_Params Parms{};

	Parms.ConcreteModel = ConcreteModel;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_BuildObject_SwitchHeatSource.BP_BuildObject_SwitchHeatSource_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void ABP_BuildObject_SwitchHeatSource_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_BuildObject_SwitchHeatSource_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_BuildObject_SwitchHeatSource.BP_BuildObject_SwitchHeatSource_C.OnReadySwitchModule
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPalMapObjectConcreteModelBase*Model                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPalMapObjectConcreteModelModuleBase*Module                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_BuildObject_SwitchHeatSource_C::OnReadySwitchModule(class UPalMapObjectConcreteModelBase* Model, class UPalMapObjectConcreteModelModuleBase* Module)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_BuildObject_SwitchHeatSource_C", "OnReadySwitchModule");

	Params::ABP_BuildObject_SwitchHeatSource_C_OnReadySwitchModule_Params Parms{};

	Parms.Model = Model;
	Parms.Module = Module;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_BuildObject_SwitchHeatSource.BP_BuildObject_SwitchHeatSource_C.OnAvailableConcreteModel
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPalMapObjectConcreteModelBase*Model                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_BuildObject_SwitchHeatSource_C::OnAvailableConcreteModel(class UPalMapObjectConcreteModelBase* Model)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_BuildObject_SwitchHeatSource_C", "OnAvailableConcreteModel");

	Params::ABP_BuildObject_SwitchHeatSource_C_OnAvailableConcreteModel_Params Parms{};

	Parms.Model = Model;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_BuildObject_SwitchHeatSource.BP_BuildObject_SwitchHeatSource_C.ExecuteUbergraph_BP_BuildObject_SwitchHeatSource
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPalMapObjectConcreteModelBase*K2Node_CustomEvent_Model                                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPalMapObjectConcreteModelBase*K2Node_Event_ConcreteModel                                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPalMapObjectConcreteModelBase*K2Node_CustomEvent_Model_1                                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPalMapObjectConcreteModelModuleBase*K2Node_CustomEvent_Module                                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPalMapObjectSwitchModule*   K2Node_DynamicCast_AsPal_Map_Object_Switch_Module                (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_BuildObject_SwitchHeatSource_C::ExecuteUbergraph_BP_BuildObject_SwitchHeatSource(int32 EntryPoint, class UPalMapObjectConcreteModelBase* K2Node_CustomEvent_Model, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class UPalMapObjectConcreteModelBase* K2Node_Event_ConcreteModel, class UPalMapObjectConcreteModelBase* K2Node_CustomEvent_Model_1, class UPalMapObjectConcreteModelModuleBase* K2Node_CustomEvent_Module, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, class UPalMapObjectSwitchModule* K2Node_DynamicCast_AsPal_Map_Object_Switch_Module, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_BuildObject_SwitchHeatSource_C", "ExecuteUbergraph_BP_BuildObject_SwitchHeatSource");

	Params::ABP_BuildObject_SwitchHeatSource_C_ExecuteUbergraph_BP_BuildObject_SwitchHeatSource_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CustomEvent_Model = K2Node_CustomEvent_Model;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.K2Node_Event_ConcreteModel = K2Node_Event_ConcreteModel;
	Parms.K2Node_CustomEvent_Model_1 = K2Node_CustomEvent_Model_1;
	Parms.K2Node_CustomEvent_Module = K2Node_CustomEvent_Module;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;
	Parms.K2Node_DynamicCast_AsPal_Map_Object_Switch_Module = K2Node_DynamicCast_AsPal_Map_Object_Switch_Module;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}

}


