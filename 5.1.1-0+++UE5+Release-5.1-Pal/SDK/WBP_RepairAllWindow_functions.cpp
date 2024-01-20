#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_RepairAllWindow.WBP_RepairAllWindow_C
// (None)

class UClass* UWBP_RepairAllWindow_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_RepairAllWindow_C");

	return Clss;
}


// WBP_RepairAllWindow_C WBP_RepairAllWindow.Default__WBP_RepairAllWindow_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_RepairAllWindow_C* UWBP_RepairAllWindow_C::GetDefaultObj()
{
	static class UWBP_RepairAllWindow_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_RepairAllWindow_C*>(UWBP_RepairAllWindow_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WBP_RepairAllWindow.WBP_RepairAllWindow_C.BP_GetDesiredFocusTarget
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UWidget*                     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     CallFunc_GetFocusTarget_FocusTarget                              (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

class UWidget* UWBP_RepairAllWindow_C::BP_GetDesiredFocusTarget(class UWidget* CallFunc_GetFocusTarget_FocusTarget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_RepairAllWindow_C", "BP_GetDesiredFocusTarget");

	Params::UWBP_RepairAllWindow_C_BP_GetDesiredFocusTarget_Params Parms{};

	Parms.CallFunc_GetFocusTarget_FocusTarget = CallFunc_GetFocusTarget_FocusTarget;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function WBP_RepairAllWindow.WBP_RepairAllWindow_C.OnSetup
// (Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_RepairAllWindow_C::OnSetup()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_RepairAllWindow_C", "OnSetup");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_RepairAllWindow.WBP_RepairAllWindow_C.BndEvt__WBP_RepairAllWindow_WBP_IngameMenu_RepairAll_K2Node_ComponentBoundEvent_0_OnClickedButton__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool                               IsYes                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_RepairAllWindow_C::BndEvt__WBP_RepairAllWindow_WBP_IngameMenu_RepairAll_K2Node_ComponentBoundEvent_0_OnClickedButton__DelegateSignature(bool IsYes)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_RepairAllWindow_C", "BndEvt__WBP_RepairAllWindow_WBP_IngameMenu_RepairAll_K2Node_ComponentBoundEvent_0_OnClickedButton__DelegateSignature");

	Params::UWBP_RepairAllWindow_C_BndEvt__WBP_RepairAllWindow_WBP_IngameMenu_RepairAll_K2Node_ComponentBoundEvent_0_OnClickedButton__DelegateSignature_Params Parms{};

	Parms.IsYes = IsYes;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_RepairAllWindow.WBP_RepairAllWindow_C.ExecuteUbergraph_WBP_RepairAllWindow
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPalHUDDispatchParameterBase*CallFunc_GetParam_ReturnValue                                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_ComponentBoundEvent_IsYes                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBP_RepairAllWindowDispatchParameter_C*K2Node_DynamicCast_AsBP_Repair_All_Window_Dispatch_Parameter     (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPalHUDDispatchParameterBase*CallFunc_GetParam_ReturnValue_1                                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UBP_RepairAllWindowDispatchParameter_C*K2Node_DynamicCast_AsBP_Repair_All_Window_Dispatch_Parameter_1   (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_RepairAllWindow_C::ExecuteUbergraph_WBP_RepairAllWindow(int32 EntryPoint, class UPalHUDDispatchParameterBase* CallFunc_GetParam_ReturnValue, bool K2Node_ComponentBoundEvent_IsYes, bool CallFunc_IsValid_ReturnValue, class UBP_RepairAllWindowDispatchParameter_C* K2Node_DynamicCast_AsBP_Repair_All_Window_Dispatch_Parameter, bool K2Node_DynamicCast_bSuccess, class UPalHUDDispatchParameterBase* CallFunc_GetParam_ReturnValue_1, class UBP_RepairAllWindowDispatchParameter_C* K2Node_DynamicCast_AsBP_Repair_All_Window_Dispatch_Parameter_1, bool K2Node_DynamicCast_bSuccess_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_RepairAllWindow_C", "ExecuteUbergraph_WBP_RepairAllWindow");

	Params::UWBP_RepairAllWindow_C_ExecuteUbergraph_WBP_RepairAllWindow_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetParam_ReturnValue = CallFunc_GetParam_ReturnValue;
	Parms.K2Node_ComponentBoundEvent_IsYes = K2Node_ComponentBoundEvent_IsYes;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_DynamicCast_AsBP_Repair_All_Window_Dispatch_Parameter = K2Node_DynamicCast_AsBP_Repair_All_Window_Dispatch_Parameter;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetParam_ReturnValue_1 = CallFunc_GetParam_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsBP_Repair_All_Window_Dispatch_Parameter_1 = K2Node_DynamicCast_AsBP_Repair_All_Window_Dispatch_Parameter_1;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;

	UObject::ProcessEvent(Func, &Parms);

}

}


