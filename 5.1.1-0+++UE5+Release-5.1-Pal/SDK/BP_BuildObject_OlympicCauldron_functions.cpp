#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_BuildObject_OlympicCauldron.BP_BuildObject_OlympicCauldron_C
// (Actor)

class UClass* ABP_BuildObject_OlympicCauldron_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_BuildObject_OlympicCauldron_C");

	return Clss;
}


// BP_BuildObject_OlympicCauldron_C BP_BuildObject_OlympicCauldron.Default__BP_BuildObject_OlympicCauldron_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_BuildObject_OlympicCauldron_C* ABP_BuildObject_OlympicCauldron_C::GetDefaultObj()
{
	static class ABP_BuildObject_OlympicCauldron_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_BuildObject_OlympicCauldron_C*>(ABP_BuildObject_OlympicCauldron_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_BuildObject_OlympicCauldron.BP_BuildObject_OlympicCauldron_C.SetActive_Internal
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bOn                                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_BuildObject_OlympicCauldron_C::SetActive_Internal(bool bOn)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_BuildObject_OlympicCauldron_C", "SetActive_Internal");

	Params::ABP_BuildObject_OlympicCauldron_C_SetActive_Internal_Params Parms{};

	Parms.bOn = bOn;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_BuildObject_OlympicCauldron.BP_BuildObject_OlympicCauldron_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void ABP_BuildObject_OlympicCauldron_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_BuildObject_OlympicCauldron_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_BuildObject_OlympicCauldron.BP_BuildObject_OlympicCauldron_C.BP_OnSetConcreteModel
// (Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPalMapObjectConcreteModelBase*ConcreteModel                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_BuildObject_OlympicCauldron_C::BP_OnSetConcreteModel(class UPalMapObjectConcreteModelBase* ConcreteModel)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_BuildObject_OlympicCauldron_C", "BP_OnSetConcreteModel");

	Params::ABP_BuildObject_OlympicCauldron_C_BP_OnSetConcreteModel_Params Parms{};

	Parms.ConcreteModel = ConcreteModel;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_BuildObject_OlympicCauldron.BP_BuildObject_OlympicCauldron_C.CustomEvent
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPalMapObjectConcreteModelBase*Model                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_BuildObject_OlympicCauldron_C::CustomEvent(class UPalMapObjectConcreteModelBase* Model)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_BuildObject_OlympicCauldron_C", "CustomEvent");

	Params::ABP_BuildObject_OlympicCauldron_C_CustomEvent_Params Parms{};

	Parms.Model = Model;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_BuildObject_OlympicCauldron.BP_BuildObject_OlympicCauldron_C.ExecuteUbergraph_BP_BuildObject_OlympicCauldron
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPalMapObjectConcreteModelBase*K2Node_Event_ConcreteModel                                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPalMapObjectConcreteModelBase*K2Node_CustomEvent_Model                                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_BuildObject_OlympicCauldron_C::ExecuteUbergraph_BP_BuildObject_OlympicCauldron(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UPalMapObjectConcreteModelBase* K2Node_Event_ConcreteModel, class UPalMapObjectConcreteModelBase* K2Node_CustomEvent_Model)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_BuildObject_OlympicCauldron_C", "ExecuteUbergraph_BP_BuildObject_OlympicCauldron");

	Params::ABP_BuildObject_OlympicCauldron_C_ExecuteUbergraph_BP_BuildObject_OlympicCauldron_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_Event_ConcreteModel = K2Node_Event_ConcreteModel;
	Parms.K2Node_CustomEvent_Model = K2Node_CustomEvent_Model;

	UObject::ProcessEvent(Func, &Parms);

}

}


