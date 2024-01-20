#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_BuildObject_Stone_DoorWall.BP_BuildObject_Stone_DoorWall_C
// (Actor)

class UClass* ABP_BuildObject_Stone_DoorWall_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_BuildObject_Stone_DoorWall_C");

	return Clss;
}


// BP_BuildObject_Stone_DoorWall_C BP_BuildObject_Stone_DoorWall.Default__BP_BuildObject_Stone_DoorWall_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_BuildObject_Stone_DoorWall_C* ABP_BuildObject_Stone_DoorWall_C::GetDefaultObj()
{
	static class ABP_BuildObject_Stone_DoorWall_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_BuildObject_Stone_DoorWall_C*>(ABP_BuildObject_Stone_DoorWall_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_BuildObject_Stone_DoorWall.BP_BuildObject_Stone_DoorWall_C.SetRotateDoor
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UStaticMeshComponent*        Mesh                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// double                             RotateAngle                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_MakeRotator_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FHitResult                  CallFunc_K2_SetRelativeRotation_SweepHitResult                   (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// float                              CallFunc_MakeRotator_Yaw_ImplicitCast                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_BuildObject_Stone_DoorWall_C::SetRotateDoor(class UStaticMeshComponent* Mesh, double RotateAngle, const struct FRotator& CallFunc_MakeRotator_ReturnValue, const struct FHitResult& CallFunc_K2_SetRelativeRotation_SweepHitResult, float CallFunc_MakeRotator_Yaw_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_BuildObject_Stone_DoorWall_C", "SetRotateDoor");

	Params::ABP_BuildObject_Stone_DoorWall_C_SetRotateDoor_Params Parms{};

	Parms.Mesh = Mesh;
	Parms.RotateAngle = RotateAngle;
	Parms.CallFunc_MakeRotator_ReturnValue = CallFunc_MakeRotator_ReturnValue;
	Parms.CallFunc_K2_SetRelativeRotation_SweepHitResult = CallFunc_K2_SetRelativeRotation_SweepHitResult;
	Parms.CallFunc_MakeRotator_Yaw_ImplicitCast = CallFunc_MakeRotator_Yaw_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_BuildObject_Stone_DoorWall.BP_BuildObject_Stone_DoorWall_C.OnUpdateSwitchState
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPalMapObjectSwitchModule*   Module                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 Temp_delegate_Variable                                           (ConstParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FAkExternalSourceInfo>Temp_struct_Variable                                             (ConstParm, ReferenceParm)
// FDelegateProperty_                 Temp_delegate_Variable_1                                         (ConstParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_PostEvent_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FAkExternalSourceInfo>Temp_struct_Variable_1                                           (ConstParm, ReferenceParm)
// int32                              CallFunc_PostEvent_ReturnValue_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsAvailable_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EPalMapObjectSwitchStateCallFunc_GetSwitchState_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_BuildObject_Stone_DoorWall_C::OnUpdateSwitchState(class UPalMapObjectSwitchModule* Module, FDelegateProperty_ Temp_delegate_Variable, bool CallFunc_IsValid_ReturnValue, TArray<struct FAkExternalSourceInfo>& Temp_struct_Variable, FDelegateProperty_ Temp_delegate_Variable_1, int32 CallFunc_PostEvent_ReturnValue, TArray<struct FAkExternalSourceInfo>& Temp_struct_Variable_1, int32 CallFunc_PostEvent_ReturnValue_1, bool CallFunc_IsAvailable_ReturnValue, enum class EPalMapObjectSwitchState CallFunc_GetSwitchState_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_BuildObject_Stone_DoorWall_C", "OnUpdateSwitchState");

	Params::ABP_BuildObject_Stone_DoorWall_C_OnUpdateSwitchState_Params Parms{};

	Parms.Module = Module;
	Parms.Temp_delegate_Variable = Temp_delegate_Variable;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.Temp_struct_Variable = Temp_struct_Variable;
	Parms.Temp_delegate_Variable_1 = Temp_delegate_Variable_1;
	Parms.CallFunc_PostEvent_ReturnValue = CallFunc_PostEvent_ReturnValue;
	Parms.Temp_struct_Variable_1 = Temp_struct_Variable_1;
	Parms.CallFunc_PostEvent_ReturnValue_1 = CallFunc_PostEvent_ReturnValue_1;
	Parms.CallFunc_IsAvailable_ReturnValue = CallFunc_IsAvailable_ReturnValue;
	Parms.CallFunc_GetSwitchState_ReturnValue = CallFunc_GetSwitchState_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_BuildObject_Stone_DoorWall.BP_BuildObject_Stone_DoorWall_C.OnReadySwitchModule
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPalMapObjectConcreteModelBase*Model                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPalMapObjectConcreteModelModuleBase*Module                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPalMapObjectSwitchModule*   SwitchModule                                                     (Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPalMapObjectSwitchModule*   CallFunc_GetSwitchModule_ReturnValue                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_BuildObject_Stone_DoorWall_C::OnReadySwitchModule(class UPalMapObjectConcreteModelBase* Model, class UPalMapObjectConcreteModelModuleBase* Module, class UPalMapObjectSwitchModule* SwitchModule, class UPalMapObjectSwitchModule* CallFunc_GetSwitchModule_ReturnValue, bool CallFunc_IsValid_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_BuildObject_Stone_DoorWall_C", "OnReadySwitchModule");

	Params::ABP_BuildObject_Stone_DoorWall_C_OnReadySwitchModule_Params Parms{};

	Parms.Model = Model;
	Parms.Module = Module;
	Parms.SwitchModule = SwitchModule;
	Parms.CallFunc_GetSwitchModule_ReturnValue = CallFunc_GetSwitchModule_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_BuildObject_Stone_DoorWall.BP_BuildObject_Stone_DoorWall_C.¿¤àé¤ó__FinishedFunc
// (BlueprintEvent)
// Parameters:

void ABP_BuildObject_Stone_DoorWall_C::________FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_BuildObject_Stone_DoorWall_C", "¿¤àé¤ó__FinishedFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_BuildObject_Stone_DoorWall.BP_BuildObject_Stone_DoorWall_C.¿¤àé¤ó__UpdateFunc
// (BlueprintEvent)
// Parameters:

void ABP_BuildObject_Stone_DoorWall_C::________UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_BuildObject_Stone_DoorWall_C", "¿¤àé¤ó__UpdateFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_BuildObject_Stone_DoorWall.BP_BuildObject_Stone_DoorWall_C.BP_OnSetConcreteModel
// (Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPalMapObjectConcreteModelBase*ConcreteModel                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_BuildObject_Stone_DoorWall_C::BP_OnSetConcreteModel(class UPalMapObjectConcreteModelBase* ConcreteModel)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_BuildObject_Stone_DoorWall_C", "BP_OnSetConcreteModel");

	Params::ABP_BuildObject_Stone_DoorWall_C_BP_OnSetConcreteModel_Params Parms{};

	Parms.ConcreteModel = ConcreteModel;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_BuildObject_Stone_DoorWall.BP_BuildObject_Stone_DoorWall_C.OpenDoorAnimation
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_BuildObject_Stone_DoorWall_C::OpenDoorAnimation()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_BuildObject_Stone_DoorWall_C", "OpenDoorAnimation");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_BuildObject_Stone_DoorWall.BP_BuildObject_Stone_DoorWall_C.CloseDoorAnimation
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_BuildObject_Stone_DoorWall_C::CloseDoorAnimation()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_BuildObject_Stone_DoorWall_C", "CloseDoorAnimation");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_BuildObject_Stone_DoorWall.BP_BuildObject_Stone_DoorWall_C.ExecuteUbergraph_BP_BuildObject_Stone_DoorWall
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPalMapObjectConcreteModelBase*K2Node_Event_ConcreteModel                                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_SetRotateDoor_RotateAngle_ImplicitCast                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_BuildObject_Stone_DoorWall_C::ExecuteUbergraph_BP_BuildObject_Stone_DoorWall(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UPalMapObjectConcreteModelBase* K2Node_Event_ConcreteModel, double CallFunc_SetRotateDoor_RotateAngle_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_BuildObject_Stone_DoorWall_C", "ExecuteUbergraph_BP_BuildObject_Stone_DoorWall");

	Params::ABP_BuildObject_Stone_DoorWall_C_ExecuteUbergraph_BP_BuildObject_Stone_DoorWall_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_Event_ConcreteModel = K2Node_Event_ConcreteModel;
	Parms.CallFunc_SetRotateDoor_RotateAngle_ImplicitCast = CallFunc_SetRotateDoor_RotateAngle_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}

}


