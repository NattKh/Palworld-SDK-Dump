#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_BuildObject_Torch_Base.BP_BuildObject_Torch_Base_C
// (Actor)

class UClass* ABP_BuildObject_Torch_Base_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_BuildObject_Torch_Base_C");

	return Clss;
}


// BP_BuildObject_Torch_Base_C BP_BuildObject_Torch_Base.Default__BP_BuildObject_Torch_Base_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_BuildObject_Torch_Base_C* ABP_BuildObject_Torch_Base_C::GetDefaultObj()
{
	static class ABP_BuildObject_Torch_Base_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_BuildObject_Torch_Base_C*>(ABP_BuildObject_Torch_Base_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_BuildObject_Torch_Base.BP_BuildObject_Torch_Base_C.OnReadySwitchModule
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPalMapObjectConcreteModelBase*Model                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPalMapObjectConcreteModelModuleBase*Module                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPalMapObjectSwitchModule*   SwitchModule                                                     (Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPalMapObjectSwitchModule*   CallFunc_GetSwitchModule_ReturnValue                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_BuildObject_Torch_Base_C::OnReadySwitchModule(class UPalMapObjectConcreteModelBase* Model, class UPalMapObjectConcreteModelModuleBase* Module, class UPalMapObjectSwitchModule* SwitchModule, class UPalMapObjectSwitchModule* CallFunc_GetSwitchModule_ReturnValue, bool CallFunc_IsValid_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_BuildObject_Torch_Base_C", "OnReadySwitchModule");

	Params::ABP_BuildObject_Torch_Base_C_OnReadySwitchModule_Params Parms{};

	Parms.Model = Model;
	Parms.Module = Module;
	Parms.SwitchModule = SwitchModule;
	Parms.CallFunc_GetSwitchModule_ReturnValue = CallFunc_GetSwitchModule_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_BuildObject_Torch_Base.BP_BuildObject_Torch_Base_C.OnUpdateTorchStateInternal
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPalMapObjectSwitchModule*   SwitchModule                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// enum class EPalMapObjectSwitchStateCallFunc_GetSwitchState_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_BuildObject_Torch_Base_C::OnUpdateTorchStateInternal(class UPalMapObjectSwitchModule* SwitchModule, enum class EPalMapObjectSwitchState CallFunc_GetSwitchState_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_BuildObject_Torch_Base_C", "OnUpdateTorchStateInternal");

	Params::ABP_BuildObject_Torch_Base_C_OnUpdateTorchStateInternal_Params Parms{};

	Parms.SwitchModule = SwitchModule;
	Parms.CallFunc_GetSwitchState_ReturnValue = CallFunc_GetSwitchState_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_BuildObject_Torch_Base.BP_BuildObject_Torch_Base_C.SetActiveLight
// (Protected, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bActive                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetObjectName_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (None)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData                             (HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array                                           (ReferenceParm)
// class FText                        CallFunc_Format_ReturnValue                                      (None)
// class FString                      CallFunc_Conv_TextToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)

void ABP_BuildObject_Torch_Base_C::SetActiveLight(bool bActive, const class FString& CallFunc_GetObjectName_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue, const class FString& CallFunc_Conv_TextToString_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_BuildObject_Torch_Base_C", "SetActiveLight");

	Params::ABP_BuildObject_Torch_Base_C_SetActiveLight_Params Parms{};

	Parms.bActive = bActive;
	Parms.CallFunc_GetObjectName_ReturnValue = CallFunc_GetObjectName_ReturnValue;
	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;
	Parms.K2Node_MakeStruct_FormatArgumentData = K2Node_MakeStruct_FormatArgumentData;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_Format_ReturnValue = CallFunc_Format_ReturnValue;
	Parms.CallFunc_Conv_TextToString_ReturnValue = CallFunc_Conv_TextToString_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_BuildObject_Torch_Base.BP_BuildObject_Torch_Base_C.BP_OnSetConcreteModel
// (Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPalMapObjectConcreteModelBase*ConcreteModel                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_BuildObject_Torch_Base_C::BP_OnSetConcreteModel(class UPalMapObjectConcreteModelBase* ConcreteModel)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_BuildObject_Torch_Base_C", "BP_OnSetConcreteModel");

	Params::ABP_BuildObject_Torch_Base_C_BP_OnSetConcreteModel_Params Parms{};

	Parms.ConcreteModel = ConcreteModel;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_BuildObject_Torch_Base.BP_BuildObject_Torch_Base_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void ABP_BuildObject_Torch_Base_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_BuildObject_Torch_Base_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_BuildObject_Torch_Base.BP_BuildObject_Torch_Base_C.ExecuteUbergraph_BP_BuildObject_Torch_Base
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPalMapObjectConcreteModelBase*K2Node_Event_ConcreteModel                                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_BuildObject_Torch_Base_C::ExecuteUbergraph_BP_BuildObject_Torch_Base(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UPalMapObjectConcreteModelBase* K2Node_Event_ConcreteModel)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_BuildObject_Torch_Base_C", "ExecuteUbergraph_BP_BuildObject_Torch_Base");

	Params::ABP_BuildObject_Torch_Base_C_ExecuteUbergraph_BP_BuildObject_Torch_Base_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_Event_ConcreteModel = K2Node_Event_ConcreteModel;

	UObject::ProcessEvent(Func, &Parms);

}

}


