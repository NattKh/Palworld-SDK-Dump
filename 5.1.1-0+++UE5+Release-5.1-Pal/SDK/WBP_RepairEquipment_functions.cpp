#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_RepairEquipment.WBP_RepairEquipment_C
// (None)

class UClass* UWBP_RepairEquipment_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_RepairEquipment_C");

	return Clss;
}


// WBP_RepairEquipment_C WBP_RepairEquipment.Default__WBP_RepairEquipment_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_RepairEquipment_C* UWBP_RepairEquipment_C::GetDefaultObj()
{
	static class UWBP_RepairEquipment_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_RepairEquipment_C*>(UWBP_RepairEquipment_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WBP_RepairEquipment.WBP_RepairEquipment_C.TryRepairAll
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_RepairEquipment_C::TryRepairAll()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_RepairEquipment_C", "TryRepairAll");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_RepairEquipment.WBP_RepairEquipment_C.OnClosedRepairAllWindow
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPalHUDDispatchParameterBase*Param                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UBP_RepairAllWindowDispatchParameter_C*K2Node_DynamicCast_AsBP_Repair_All_Window_Dispatch_Parameter     (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_RepairEquipment_C::OnClosedRepairAllWindow(class UPalHUDDispatchParameterBase* Param, class UBP_RepairAllWindowDispatchParameter_C* K2Node_DynamicCast_AsBP_Repair_All_Window_Dispatch_Parameter, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_RepairEquipment_C", "OnClosedRepairAllWindow");

	Params::UWBP_RepairEquipment_C_OnClosedRepairAllWindow_Params Parms{};

	Parms.Param = Param;
	Parms.K2Node_DynamicCast_AsBP_Repair_All_Window_Dispatch_Parameter = K2Node_DynamicCast_AsBP_Repair_All_Window_Dispatch_Parameter;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_RepairEquipment.WBP_RepairEquipment_C.OpenRepairAllWindow
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPalHUDService*              CallFunc_GetHUDService_ReturnValue                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UBP_RepairAllWindowDispatchParameter_C*CallFunc_SpawnObject_ReturnValue                                 (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FGuid                       CallFunc_Push_ReturnValue                                        (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_RepairEquipment_C::OpenRepairAllWindow(FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UPalHUDService* CallFunc_GetHUDService_ReturnValue, class UBP_RepairAllWindowDispatchParameter_C* CallFunc_SpawnObject_ReturnValue, const struct FGuid& CallFunc_Push_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_RepairEquipment_C", "OpenRepairAllWindow");

	Params::UWBP_RepairEquipment_C_OpenRepairAllWindow_Params Parms{};

	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_GetHUDService_ReturnValue = CallFunc_GetHUDService_ReturnValue;
	Parms.CallFunc_SpawnObject_ReturnValue = CallFunc_SpawnObject_ReturnValue;
	Parms.CallFunc_Push_ReturnValue = CallFunc_Push_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_RepairEquipment.WBP_RepairEquipment_C.BP_GetDesiredFocusTarget
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UWidget*                     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     CallFunc_GetDefaultFocusTarget_TargetWidget                      (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

class UWidget* UWBP_RepairEquipment_C::BP_GetDesiredFocusTarget(class UWidget* CallFunc_GetDefaultFocusTarget_TargetWidget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_RepairEquipment_C", "BP_GetDesiredFocusTarget");

	Params::UWBP_RepairEquipment_C_BP_GetDesiredFocusTarget_Params Parms{};

	Parms.CallFunc_GetDefaultFocusTarget_TargetWidget = CallFunc_GetDefaultFocusTarget_TargetWidget;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function WBP_RepairEquipment.WBP_RepairEquipment_C.OnTimer_TimeoutRepair
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_RepairEquipment_C::OnTimer_TimeoutRepair()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_RepairEquipment_C", "OnTimer_TimeoutRepair");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_RepairEquipment.WBP_RepairEquipment_C.EndRepair
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget*                     CallFunc_GetDefaultFocusTarget_TargetWidget                      (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_RepairEquipment_C::EndRepair(class UWidget* CallFunc_GetDefaultFocusTarget_TargetWidget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_RepairEquipment_C", "EndRepair");

	Params::UWBP_RepairEquipment_C_EndRepair_Params Parms{};

	Parms.CallFunc_GetDefaultFocusTarget_TargetWidget = CallFunc_GetDefaultFocusTarget_TargetWidget;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_RepairEquipment.WBP_RepairEquipment_C.StartRepair
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FTimerHandle                CallFunc_K2_SetTimerDelegate_ReturnValue                         (NoDestructor, HasGetValueTypeHash)

void UWBP_RepairEquipment_C::StartRepair(FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_RepairEquipment_C", "StartRepair");

	Params::UWBP_RepairEquipment_C_StartRepair_Params Parms{};

	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_K2_SetTimerDelegate_ReturnValue = CallFunc_K2_SetTimerDelegate_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_RepairEquipment.WBP_RepairEquipment_C.Setup
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FPalUIActionBindData        CallFunc_RegisterActionBinding_ReturnValue                       (NoDestructor)

void UWBP_RepairEquipment_C::Setup(FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FPalUIActionBindData& CallFunc_RegisterActionBinding_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_RepairEquipment_C", "Setup");

	Params::UWBP_RepairEquipment_C_Setup_Params Parms{};

	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_RegisterActionBinding_ReturnValue = CallFunc_RegisterActionBinding_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_RepairEquipment.WBP_RepairEquipment_C.RefreshUI
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FPalStaticItemIdAndNum>CallFunc_CollectRepairInfo_OutRequiredMaterials                  (ReferenceParm)
// bool                               CallFunc_CollectRepairInfo_OutCanRepair                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UPalItemSlot*>        CallFunc_CollectRepairableSlot_OutRepairableSlots                (ReferenceParm)

void UWBP_RepairEquipment_C::RefreshUI(TArray<struct FPalStaticItemIdAndNum>& CallFunc_CollectRepairInfo_OutRequiredMaterials, bool CallFunc_CollectRepairInfo_OutCanRepair, TArray<class UPalItemSlot*>& CallFunc_CollectRepairableSlot_OutRepairableSlots)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_RepairEquipment_C", "RefreshUI");

	Params::UWBP_RepairEquipment_C_RefreshUI_Params Parms{};

	Parms.CallFunc_CollectRepairInfo_OutRequiredMaterials = CallFunc_CollectRepairInfo_OutRequiredMaterials;
	Parms.CallFunc_CollectRepairInfo_OutCanRepair = CallFunc_CollectRepairInfo_OutCanRepair;
	Parms.CallFunc_CollectRepairableSlot_OutRepairableSlots = CallFunc_CollectRepairableSlot_OutRepairableSlots;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_RepairEquipment.WBP_RepairEquipment_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UWBP_RepairEquipment_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_RepairEquipment_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_RepairEquipment.WBP_RepairEquipment_C.BndEvt__WBP_RepairEquipment_WBP_IngameMenu_Repair_K2Node_ComponentBoundEvent_0_OnClickedCloseButton__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWBP_RepairEquipment_C::BndEvt__WBP_RepairEquipment_WBP_IngameMenu_Repair_K2Node_ComponentBoundEvent_0_OnClickedCloseButton__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_RepairEquipment_C", "BndEvt__WBP_RepairEquipment_WBP_IngameMenu_Repair_K2Node_ComponentBoundEvent_0_OnClickedCloseButton__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_RepairEquipment.WBP_RepairEquipment_C.OnSetup
// (Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_RepairEquipment_C::OnSetup()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_RepairEquipment_C", "OnSetup");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_RepairEquipment.WBP_RepairEquipment_C.BndEvt__WBP_RepairEquipment_WBP_IngameMenu_Repair_K2Node_ComponentBoundEvent_1_OnClickedAnyItemSlot__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UPalItemSlot*                ItemSlot                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_RepairEquipment_C::BndEvt__WBP_RepairEquipment_WBP_IngameMenu_Repair_K2Node_ComponentBoundEvent_1_OnClickedAnyItemSlot__DelegateSignature(class UPalItemSlot* ItemSlot)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_RepairEquipment_C", "BndEvt__WBP_RepairEquipment_WBP_IngameMenu_Repair_K2Node_ComponentBoundEvent_1_OnClickedAnyItemSlot__DelegateSignature");

	Params::UWBP_RepairEquipment_C_BndEvt__WBP_RepairEquipment_WBP_IngameMenu_Repair_K2Node_ComponentBoundEvent_1_OnClickedAnyItemSlot__DelegateSignature_Params Parms{};

	Parms.ItemSlot = ItemSlot;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_RepairEquipment.WBP_RepairEquipment_C.BndEvt__WBP_RepairEquipment_WBP_IngameMenu_Repair_K2Node_ComponentBoundEvent_2_OnClickedRepairButton__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWBP_RepairEquipment_C::BndEvt__WBP_RepairEquipment_WBP_IngameMenu_Repair_K2Node_ComponentBoundEvent_2_OnClickedRepairButton__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_RepairEquipment_C", "BndEvt__WBP_RepairEquipment_WBP_IngameMenu_Repair_K2Node_ComponentBoundEvent_2_OnClickedRepairButton__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_RepairEquipment.WBP_RepairEquipment_C.OnRecievedRepairResult
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                               IsSuccess                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_RepairEquipment_C::OnRecievedRepairResult(bool IsSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_RepairEquipment_C", "OnRecievedRepairResult");

	Params::UWBP_RepairEquipment_C_OnRecievedRepairResult_Params Parms{};

	Parms.IsSuccess = IsSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_RepairEquipment.WBP_RepairEquipment_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UWBP_RepairEquipment_C::Destruct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_RepairEquipment_C", "Destruct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_RepairEquipment.WBP_RepairEquipment_C.BndEvt__WBP_RepairEquipment_WBP_IngameMenu_Repair_K2Node_ComponentBoundEvent_3_OnClickedRepairAllButton__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWBP_RepairEquipment_C::BndEvt__WBP_RepairEquipment_WBP_IngameMenu_Repair_K2Node_ComponentBoundEvent_3_OnClickedRepairAllButton__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_RepairEquipment_C", "BndEvt__WBP_RepairEquipment_WBP_IngameMenu_Repair_K2Node_ComponentBoundEvent_3_OnClickedRepairAllButton__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_RepairEquipment.WBP_RepairEquipment_C.ExecuteUbergraph_WBP_RepairEquipment
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPalItemSlot*                K2Node_ComponentBoundEvent_ItemSlot                              (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsEmpty_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FPalStaticItemIdAndNum>CallFunc_CollectRepairInfo_OutRequiredMaterials                  (ReferenceParm)
// bool                               CallFunc_CollectRepairInfo_OutCanRepair                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsRepairableItem_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FPalUIActionBindData        CallFunc_RegisterActionBinding_ReturnValue                       (NoDestructor)
// bool                               K2Node_Event_IsSuccess                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPalLogManager*              CallFunc_GetLogManager_ReturnValue                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FPalLogAdditionalData       K2Node_MakeStruct_PalLogAdditionalData                           (None)
// class FText                        CallFunc_GetLocalizedTextFromHandle_Text                         (None)
// struct FGuid                       CallFunc_AddLog_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_RepairEquipment_C::ExecuteUbergraph_WBP_RepairEquipment(int32 EntryPoint, class UPalItemSlot* K2Node_ComponentBoundEvent_ItemSlot, int32 CallFunc_Array_Add_ReturnValue, bool CallFunc_IsEmpty_ReturnValue, TArray<struct FPalStaticItemIdAndNum>& CallFunc_CollectRepairInfo_OutRequiredMaterials, bool CallFunc_CollectRepairInfo_OutCanRepair, bool CallFunc_IsRepairableItem_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FPalUIActionBindData& CallFunc_RegisterActionBinding_ReturnValue, bool K2Node_Event_IsSuccess, class UPalLogManager* CallFunc_GetLogManager_ReturnValue, const struct FPalLogAdditionalData& K2Node_MakeStruct_PalLogAdditionalData, class FText CallFunc_GetLocalizedTextFromHandle_Text, const struct FGuid& CallFunc_AddLog_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_RepairEquipment_C", "ExecuteUbergraph_WBP_RepairEquipment");

	Params::UWBP_RepairEquipment_C_ExecuteUbergraph_WBP_RepairEquipment_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_ComponentBoundEvent_ItemSlot = K2Node_ComponentBoundEvent_ItemSlot;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;
	Parms.CallFunc_IsEmpty_ReturnValue = CallFunc_IsEmpty_ReturnValue;
	Parms.CallFunc_CollectRepairInfo_OutRequiredMaterials = CallFunc_CollectRepairInfo_OutRequiredMaterials;
	Parms.CallFunc_CollectRepairInfo_OutCanRepair = CallFunc_CollectRepairInfo_OutCanRepair;
	Parms.CallFunc_IsRepairableItem_ReturnValue = CallFunc_IsRepairableItem_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_RegisterActionBinding_ReturnValue = CallFunc_RegisterActionBinding_ReturnValue;
	Parms.K2Node_Event_IsSuccess = K2Node_Event_IsSuccess;
	Parms.CallFunc_GetLogManager_ReturnValue = CallFunc_GetLogManager_ReturnValue;
	Parms.K2Node_MakeStruct_PalLogAdditionalData = K2Node_MakeStruct_PalLogAdditionalData;
	Parms.CallFunc_GetLocalizedTextFromHandle_Text = CallFunc_GetLocalizedTextFromHandle_Text;
	Parms.CallFunc_AddLog_ReturnValue = CallFunc_AddLog_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


