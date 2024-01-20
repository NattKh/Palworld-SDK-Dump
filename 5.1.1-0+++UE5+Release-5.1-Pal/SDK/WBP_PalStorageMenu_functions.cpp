#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_PalStorageMenu.WBP_PalStorageMenu_C
// (None)

class UClass* UWBP_PalStorageMenu_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_PalStorageMenu_C");

	return Clss;
}


// WBP_PalStorageMenu_C WBP_PalStorageMenu.Default__WBP_PalStorageMenu_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_PalStorageMenu_C* UWBP_PalStorageMenu_C::GetDefaultObj()
{
	static class UWBP_PalStorageMenu_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_PalStorageMenu_C*>(UWBP_PalStorageMenu_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WBP_PalStorageMenu.WBP_PalStorageMenu_C.SelectSlot
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPalIndividualCharacterSlot* Slot                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// enum class EPalItemSlotPressType   PressType                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPalHUDService*              CallFunc_GetHUDService_ReturnValue                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPalUILiftSlotModel*         CallFunc_GetLiftSlotModel_ReturnValue                            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsLift_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_PalStorageMenu_C::SelectSlot(class UPalIndividualCharacterSlot* Slot, enum class EPalItemSlotPressType PressType, class UPalHUDService* CallFunc_GetHUDService_ReturnValue, class UPalUILiftSlotModel* CallFunc_GetLiftSlotModel_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_IsLift_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PalStorageMenu_C", "SelectSlot");

	Params::UWBP_PalStorageMenu_C_SelectSlot_Params Parms{};

	Parms.Slot = Slot;
	Parms.PressType = PressType;
	Parms.CallFunc_GetHUDService_ReturnValue = CallFunc_GetHUDService_ReturnValue;
	Parms.CallFunc_GetLiftSlotModel_ReturnValue = CallFunc_GetLiftSlotModel_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_IsLift_ReturnValue = CallFunc_IsLift_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_PalStorageMenu.WBP_PalStorageMenu_C.OnViewDetailInput
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPalHUDDispatchParameter_MonsterDetail*CallFunc_CreateDispatchParameterForK2Node_ReturnValue            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPalIndividualCharacterHandle*CallFunc_GetHandle_ReturnValue                                   (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsEmpty_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPalHUDService*              CallFunc_GetHUDService_ReturnValue                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPalUILiftSlotModel*         CallFunc_GetLiftSlotModel_ReturnValue                            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_3                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsLift_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_PalStorageMenu_C::OnViewDetailInput(class UPalHUDDispatchParameter_MonsterDetail* CallFunc_CreateDispatchParameterForK2Node_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UPalIndividualCharacterHandle* CallFunc_GetHandle_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_IsEmpty_ReturnValue, class UPalHUDService* CallFunc_GetHUDService_ReturnValue, class UPalUILiftSlotModel* CallFunc_GetLiftSlotModel_ReturnValue, bool CallFunc_IsValid_ReturnValue_2, bool CallFunc_IsValid_ReturnValue_3, bool CallFunc_IsLift_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PalStorageMenu_C", "OnViewDetailInput");

	Params::UWBP_PalStorageMenu_C_OnViewDetailInput_Params Parms{};

	Parms.CallFunc_CreateDispatchParameterForK2Node_ReturnValue = CallFunc_CreateDispatchParameterForK2Node_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetHandle_ReturnValue = CallFunc_GetHandle_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_IsEmpty_ReturnValue = CallFunc_IsEmpty_ReturnValue;
	Parms.CallFunc_GetHUDService_ReturnValue = CallFunc_GetHUDService_ReturnValue;
	Parms.CallFunc_GetLiftSlotModel_ReturnValue = CallFunc_GetLiftSlotModel_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;
	Parms.CallFunc_IsValid_ReturnValue_3 = CallFunc_IsValid_ReturnValue_3;
	Parms.CallFunc_IsLift_ReturnValue = CallFunc_IsLift_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_PalStorageMenu.WBP_PalStorageMenu_C.OnSendSlotInput
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsEmpty_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPalHUDService*              CallFunc_GetHUDService_ReturnValue                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPalUILiftSlotModel*         CallFunc_GetLiftSlotModel_ReturnValue                            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsLift_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_PalStorageMenu_C::OnSendSlotInput(bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsEmpty_ReturnValue, class UPalHUDService* CallFunc_GetHUDService_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool K2Node_SwitchEnum_CmpSuccess, class UPalUILiftSlotModel* CallFunc_GetLiftSlotModel_ReturnValue, bool CallFunc_IsLift_ReturnValue, bool CallFunc_IsValid_ReturnValue_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PalStorageMenu_C", "OnSendSlotInput");

	Params::UWBP_PalStorageMenu_C_OnSendSlotInput_Params Parms{};

	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsEmpty_ReturnValue = CallFunc_IsEmpty_ReturnValue;
	Parms.CallFunc_GetHUDService_ReturnValue = CallFunc_GetHUDService_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_GetLiftSlotModel_ReturnValue = CallFunc_GetLiftSlotModel_ReturnValue;
	Parms.CallFunc_IsLift_ReturnValue = CallFunc_IsLift_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_PalStorageMenu.WBP_PalStorageMenu_C.UnregisterPalOperateInput
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_PalStorageMenu_C::UnregisterPalOperateInput()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PalStorageMenu_C", "UnregisterPalOperateInput");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_PalStorageMenu.WBP_PalStorageMenu_C.RegisterPalOperateInput
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FPalUIActionBindData        CallFunc_RegisterActionBinding_ReturnValue                       (NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FPalUIActionBindData        CallFunc_RegisterActionBinding_ReturnValue_1                     (NoDestructor)

void UWBP_PalStorageMenu_C::RegisterPalOperateInput(FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FPalUIActionBindData& CallFunc_RegisterActionBinding_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, const struct FPalUIActionBindData& CallFunc_RegisterActionBinding_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PalStorageMenu_C", "RegisterPalOperateInput");

	Params::UWBP_PalStorageMenu_C_RegisterPalOperateInput_Params Parms{};

	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_RegisterActionBinding_ReturnValue = CallFunc_RegisterActionBinding_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.CallFunc_RegisterActionBinding_ReturnValue_1 = CallFunc_RegisterActionBinding_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_PalStorageMenu.WBP_PalStorageMenu_C.OnCursorShortcutNext
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_PalStorageMenu_C::OnCursorShortcutNext(bool K2Node_SwitchEnum_CmpSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PalStorageMenu_C", "OnCursorShortcutNext");

	Params::UWBP_PalStorageMenu_C_OnCursorShortcutNext_Params Parms{};

	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_PalStorageMenu.WBP_PalStorageMenu_C.OnCursorShortcutPrev
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_PalStorageMenu_C::OnCursorShortcutPrev(bool K2Node_SwitchEnum_CmpSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PalStorageMenu_C", "OnCursorShortcutPrev");

	Params::UWBP_PalStorageMenu_C_OnCursorShortcutPrev_Params Parms{};

	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_PalStorageMenu.WBP_PalStorageMenu_C.BP_GetDesiredFocusTarget
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UWidget*                     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     CallFunc_GetFocusTarget_TargetWidget                             (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

class UWidget* UWBP_PalStorageMenu_C::BP_GetDesiredFocusTarget(class UWidget* CallFunc_GetFocusTarget_TargetWidget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PalStorageMenu_C", "BP_GetDesiredFocusTarget");

	Params::UWBP_PalStorageMenu_C_BP_GetDesiredFocusTarget_Params Parms{};

	Parms.CallFunc_GetFocusTarget_TargetWidget = CallFunc_GetFocusTarget_TargetWidget;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function WBP_PalStorageMenu.WBP_PalStorageMenu_C.RegisterStaticActionInput
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FPalUIActionBindData        CallFunc_RegisterActionBinding_ReturnValue                       (NoDestructor)
// struct FPalUIActionBindData        CallFunc_RegisterActionBinding_ReturnValue_1                     (NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_3                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FPalUIActionBindData        CallFunc_RegisterActionBinding_ReturnValue_2                     (NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_4                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FPalUIActionBindData        CallFunc_RegisterActionBinding_ReturnValue_3                     (NoDestructor)
// struct FPalUIActionBindData        CallFunc_RegisterActionBinding_ReturnValue_4                     (NoDestructor)

void UWBP_PalStorageMenu_C::RegisterStaticActionInput(FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, const struct FPalUIActionBindData& CallFunc_RegisterActionBinding_ReturnValue, const struct FPalUIActionBindData& CallFunc_RegisterActionBinding_ReturnValue_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, const struct FPalUIActionBindData& CallFunc_RegisterActionBinding_ReturnValue_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, const struct FPalUIActionBindData& CallFunc_RegisterActionBinding_ReturnValue_3, const struct FPalUIActionBindData& CallFunc_RegisterActionBinding_ReturnValue_4)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PalStorageMenu_C", "RegisterStaticActionInput");

	Params::UWBP_PalStorageMenu_C_RegisterStaticActionInput_Params Parms{};

	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.CallFunc_RegisterActionBinding_ReturnValue = CallFunc_RegisterActionBinding_ReturnValue;
	Parms.CallFunc_RegisterActionBinding_ReturnValue_1 = CallFunc_RegisterActionBinding_ReturnValue_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;
	Parms.K2Node_CreateDelegate_OutputDelegate_3 = K2Node_CreateDelegate_OutputDelegate_3;
	Parms.CallFunc_RegisterActionBinding_ReturnValue_2 = CallFunc_RegisterActionBinding_ReturnValue_2;
	Parms.K2Node_CreateDelegate_OutputDelegate_4 = K2Node_CreateDelegate_OutputDelegate_4;
	Parms.CallFunc_RegisterActionBinding_ReturnValue_3 = CallFunc_RegisterActionBinding_ReturnValue_3;
	Parms.CallFunc_RegisterActionBinding_ReturnValue_4 = CallFunc_RegisterActionBinding_ReturnValue_4;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_PalStorageMenu.WBP_PalStorageMenu_C.OnRecieveLostDialogResponse
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bResult                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValidSoftObjectReference_ReturnValue                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPalIndividualCharacterSlot* K2Node_DynamicCast_AsPal_Individual_Character_Slot               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_PalStorageMenu_C::OnRecieveLostDialogResponse(bool bResult, class UObject* CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue, bool CallFunc_IsValidSoftObjectReference_ReturnValue, class UPalIndividualCharacterSlot* K2Node_DynamicCast_AsPal_Individual_Character_Slot, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PalStorageMenu_C", "OnRecieveLostDialogResponse");

	Params::UWBP_PalStorageMenu_C_OnRecieveLostDialogResponse_Params Parms{};

	Parms.bResult = bResult;
	Parms.CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue = CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue;
	Parms.CallFunc_IsValidSoftObjectReference_ReturnValue = CallFunc_IsValidSoftObjectReference_ReturnValue;
	Parms.K2Node_DynamicCast_AsPal_Individual_Character_Slot = K2Node_DynamicCast_AsPal_Individual_Character_Slot;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_PalStorageMenu.WBP_PalStorageMenu_C.CheckLoosePal
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPalIndividualCharacterSlot* Slot                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPalIndividualCharacterHandle*CallFunc_GetHandle_ReturnValue                                   (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_GetLocalizedText_ReturnValue                            (None)
// class UPalIndividualCharacterParameter*CallFunc_TryGetIndividualParameter_ReturnValue                   (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetNickName_outName                                     (ZeroConstructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (None)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData                             (HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array                                           (ReferenceParm)
// class FText                        CallFunc_Format_ReturnValue                                      (None)

void UWBP_PalStorageMenu_C::CheckLoosePal(class UPalIndividualCharacterSlot* Slot, class UPalIndividualCharacterHandle* CallFunc_GetHandle_ReturnValue, bool CallFunc_IsValid_ReturnValue, class FText CallFunc_GetLocalizedText_ReturnValue, class UPalIndividualCharacterParameter* CallFunc_TryGetIndividualParameter_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_IsValid_ReturnValue_1, const class FString& CallFunc_GetNickName_outName, class FText CallFunc_Conv_StringToText_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PalStorageMenu_C", "CheckLoosePal");

	Params::UWBP_PalStorageMenu_C_CheckLoosePal_Params Parms{};

	Parms.Slot = Slot;
	Parms.CallFunc_GetHandle_ReturnValue = CallFunc_GetHandle_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetLocalizedText_ReturnValue = CallFunc_GetLocalizedText_ReturnValue;
	Parms.CallFunc_TryGetIndividualParameter_ReturnValue = CallFunc_TryGetIndividualParameter_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_GetNickName_outName = CallFunc_GetNickName_outName;
	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;
	Parms.K2Node_MakeStruct_FormatArgumentData = K2Node_MakeStruct_FormatArgumentData;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_Format_ReturnValue = CallFunc_Format_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_PalStorageMenu.WBP_PalStorageMenu_C.Setup
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPalHUDDispatchParameterBase*CallFunc_GetParam_ReturnValue                                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPalHUDDispatchParameter_PalBox*K2Node_DynamicCast_AsPal_HUDDispatch_Parameter_Pal_Box           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_PalStorageMenu_C::Setup(class UPalHUDDispatchParameterBase* CallFunc_GetParam_ReturnValue, class UPalHUDDispatchParameter_PalBox* K2Node_DynamicCast_AsPal_HUDDispatch_Parameter_Pal_Box, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PalStorageMenu_C", "Setup");

	Params::UWBP_PalStorageMenu_C_Setup_Params Parms{};

	Parms.CallFunc_GetParam_ReturnValue = CallFunc_GetParam_ReturnValue;
	Parms.K2Node_DynamicCast_AsPal_HUDDispatch_Parameter_Pal_Box = K2Node_DynamicCast_AsPal_HUDDispatch_Parameter_Pal_Box;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_PalStorageMenu.WBP_PalStorageMenu_C.OnSetup
// (Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_PalStorageMenu_C::OnSetup()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PalStorageMenu_C", "OnSetup");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_PalStorageMenu.WBP_PalStorageMenu_C.OnUpdatePageWorkerList
// (Event, Protected, HasOutParams, BlueprintEvent)
// Parameters:
// TArray<class UPalIndividualCharacterSlot*>SlotList                                                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UWBP_PalStorageMenu_C::OnUpdatePageWorkerList(TArray<class UPalIndividualCharacterSlot*>& SlotList)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PalStorageMenu_C", "OnUpdatePageWorkerList");

	Params::UWBP_PalStorageMenu_C_OnUpdatePageWorkerList_Params Parms{};

	Parms.SlotList = SlotList;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_PalStorageMenu.WBP_PalStorageMenu_C.OnUpdatePagePalBoxList
// (Event, Protected, HasOutParams, BlueprintEvent)
// Parameters:
// int32                              NowPage                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UPalIndividualCharacterSlot*>SlotList                                                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UWBP_PalStorageMenu_C::OnUpdatePagePalBoxList(int32 NowPage, TArray<class UPalIndividualCharacterSlot*>& SlotList)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PalStorageMenu_C", "OnUpdatePagePalBoxList");

	Params::UWBP_PalStorageMenu_C_OnUpdatePagePalBoxList_Params Parms{};

	Parms.NowPage = NowPage;
	Parms.SlotList = SlotList;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_PalStorageMenu.WBP_PalStorageMenu_C.BndEvt__WBP_PalStorageMenu_WBP_IngameMenu_PalBox_K2Node_ComponentBoundEvent_4_OnClickedPalBoxPal__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UPalIndividualCharacterSlot* Slot                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// enum class EPalItemSlotPressType   PressType                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_PalStorageMenu_C::BndEvt__WBP_PalStorageMenu_WBP_IngameMenu_PalBox_K2Node_ComponentBoundEvent_4_OnClickedPalBoxPal__DelegateSignature(class UPalIndividualCharacterSlot* Slot, enum class EPalItemSlotPressType PressType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PalStorageMenu_C", "BndEvt__WBP_PalStorageMenu_WBP_IngameMenu_PalBox_K2Node_ComponentBoundEvent_4_OnClickedPalBoxPal__DelegateSignature");

	Params::UWBP_PalStorageMenu_C_BndEvt__WBP_PalStorageMenu_WBP_IngameMenu_PalBox_K2Node_ComponentBoundEvent_4_OnClickedPalBoxPal__DelegateSignature_Params Parms{};

	Parms.Slot = Slot;
	Parms.PressType = PressType;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_PalStorageMenu.WBP_PalStorageMenu_C.BndEvt__WBP_PalStorageMenu_WBP_IngameMenu_PalBox_K2Node_ComponentBoundEvent_5_OnClickedPartySlot__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UPalIndividualCharacterSlot* TargetSlot                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_PalStorageMenu_C::BndEvt__WBP_PalStorageMenu_WBP_IngameMenu_PalBox_K2Node_ComponentBoundEvent_5_OnClickedPartySlot__DelegateSignature(class UPalIndividualCharacterSlot* TargetSlot)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PalStorageMenu_C", "BndEvt__WBP_PalStorageMenu_WBP_IngameMenu_PalBox_K2Node_ComponentBoundEvent_5_OnClickedPartySlot__DelegateSignature");

	Params::UWBP_PalStorageMenu_C_BndEvt__WBP_PalStorageMenu_WBP_IngameMenu_PalBox_K2Node_ComponentBoundEvent_5_OnClickedPartySlot__DelegateSignature_Params Parms{};

	Parms.TargetSlot = TargetSlot;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_PalStorageMenu.WBP_PalStorageMenu_C.BndEvt__WBP_PalStorageMenu_WBP_IngameMenu_PalBox_K2Node_ComponentBoundEvent_7_OnClickedBaseCampPal__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UPalIndividualCharacterSlot* Slot                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// enum class EPalItemSlotPressType   PressType                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_PalStorageMenu_C::BndEvt__WBP_PalStorageMenu_WBP_IngameMenu_PalBox_K2Node_ComponentBoundEvent_7_OnClickedBaseCampPal__DelegateSignature(class UPalIndividualCharacterSlot* Slot, enum class EPalItemSlotPressType PressType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PalStorageMenu_C", "BndEvt__WBP_PalStorageMenu_WBP_IngameMenu_PalBox_K2Node_ComponentBoundEvent_7_OnClickedBaseCampPal__DelegateSignature");

	Params::UWBP_PalStorageMenu_C_BndEvt__WBP_PalStorageMenu_WBP_IngameMenu_PalBox_K2Node_ComponentBoundEvent_7_OnClickedBaseCampPal__DelegateSignature_Params Parms{};

	Parms.Slot = Slot;
	Parms.PressType = PressType;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_PalStorageMenu.WBP_PalStorageMenu_C.BndEvt__WBP_PalStorageMenu_WBP_IngameMenu_PalBox_K2Node_ComponentBoundEvent_6_OnClickedPalBoxNextPage__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWBP_PalStorageMenu_C::BndEvt__WBP_PalStorageMenu_WBP_IngameMenu_PalBox_K2Node_ComponentBoundEvent_6_OnClickedPalBoxNextPage__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PalStorageMenu_C", "BndEvt__WBP_PalStorageMenu_WBP_IngameMenu_PalBox_K2Node_ComponentBoundEvent_6_OnClickedPalBoxNextPage__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_PalStorageMenu.WBP_PalStorageMenu_C.BndEvt__WBP_PalStorageMenu_WBP_IngameMenu_PalBox_K2Node_ComponentBoundEvent_8_OnClickedPalBoxPrevPage__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWBP_PalStorageMenu_C::BndEvt__WBP_PalStorageMenu_WBP_IngameMenu_PalBox_K2Node_ComponentBoundEvent_8_OnClickedPalBoxPrevPage__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PalStorageMenu_C", "BndEvt__WBP_PalStorageMenu_WBP_IngameMenu_PalBox_K2Node_ComponentBoundEvent_8_OnClickedPalBoxPrevPage__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_PalStorageMenu.WBP_PalStorageMenu_C.BndEvt__WBP_PalStorageMenu_WBP_IngameMenu_PalBox_K2Node_ComponentBoundEvent_9_OnClickedCloseButton__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWBP_PalStorageMenu_C::BndEvt__WBP_PalStorageMenu_WBP_IngameMenu_PalBox_K2Node_ComponentBoundEvent_9_OnClickedCloseButton__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PalStorageMenu_C", "BndEvt__WBP_PalStorageMenu_WBP_IngameMenu_PalBox_K2Node_ComponentBoundEvent_9_OnClickedCloseButton__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_PalStorageMenu.WBP_PalStorageMenu_C.BndEvt__WBP_PalStorageMenu_WBP_IngameMenu_PalBox_K2Node_ComponentBoundEvent_10_OnAnySlotHovered__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UPalIndividualCharacterSlot* Slot                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_PalStorageMenu_C::BndEvt__WBP_PalStorageMenu_WBP_IngameMenu_PalBox_K2Node_ComponentBoundEvent_10_OnAnySlotHovered__DelegateSignature(class UPalIndividualCharacterSlot* Slot)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PalStorageMenu_C", "BndEvt__WBP_PalStorageMenu_WBP_IngameMenu_PalBox_K2Node_ComponentBoundEvent_10_OnAnySlotHovered__DelegateSignature");

	Params::UWBP_PalStorageMenu_C_BndEvt__WBP_PalStorageMenu_WBP_IngameMenu_PalBox_K2Node_ComponentBoundEvent_10_OnAnySlotHovered__DelegateSignature_Params Parms{};

	Parms.Slot = Slot;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_PalStorageMenu.WBP_PalStorageMenu_C.BndEvt__WBP_PalStorageMenu_WBP_IngameMenu_PalBox_K2Node_ComponentBoundEvent_11_OnClickedLooseButton__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWBP_PalStorageMenu_C::BndEvt__WBP_PalStorageMenu_WBP_IngameMenu_PalBox_K2Node_ComponentBoundEvent_11_OnClickedLooseButton__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PalStorageMenu_C", "BndEvt__WBP_PalStorageMenu_WBP_IngameMenu_PalBox_K2Node_ComponentBoundEvent_11_OnClickedLooseButton__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_PalStorageMenu.WBP_PalStorageMenu_C.BndEvt__WBP_PalStorageMenu_WBP_IngameMenu_PalBox_K2Node_ComponentBoundEvent_0_OnHoveredPartySlot__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UPalIndividualCharacterSlot* Slot                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_PalStorageMenu_C::BndEvt__WBP_PalStorageMenu_WBP_IngameMenu_PalBox_K2Node_ComponentBoundEvent_0_OnHoveredPartySlot__DelegateSignature(class UPalIndividualCharacterSlot* Slot)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PalStorageMenu_C", "BndEvt__WBP_PalStorageMenu_WBP_IngameMenu_PalBox_K2Node_ComponentBoundEvent_0_OnHoveredPartySlot__DelegateSignature");

	Params::UWBP_PalStorageMenu_C_BndEvt__WBP_PalStorageMenu_WBP_IngameMenu_PalBox_K2Node_ComponentBoundEvent_0_OnHoveredPartySlot__DelegateSignature_Params Parms{};

	Parms.Slot = Slot;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_PalStorageMenu.WBP_PalStorageMenu_C.BndEvt__WBP_PalStorageMenu_WBP_IngameMenu_PalBox_K2Node_ComponentBoundEvent_1_OnHoveredBoxSlot__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UPalIndividualCharacterSlot* Slot                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_PalStorageMenu_C::BndEvt__WBP_PalStorageMenu_WBP_IngameMenu_PalBox_K2Node_ComponentBoundEvent_1_OnHoveredBoxSlot__DelegateSignature(class UPalIndividualCharacterSlot* Slot)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PalStorageMenu_C", "BndEvt__WBP_PalStorageMenu_WBP_IngameMenu_PalBox_K2Node_ComponentBoundEvent_1_OnHoveredBoxSlot__DelegateSignature");

	Params::UWBP_PalStorageMenu_C_BndEvt__WBP_PalStorageMenu_WBP_IngameMenu_PalBox_K2Node_ComponentBoundEvent_1_OnHoveredBoxSlot__DelegateSignature_Params Parms{};

	Parms.Slot = Slot;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_PalStorageMenu.WBP_PalStorageMenu_C.BndEvt__WBP_PalStorageMenu_WBP_IngameMenu_PalBox_K2Node_ComponentBoundEvent_2_OnHoveredWorkerSlot__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UPalIndividualCharacterSlot* Slot                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_PalStorageMenu_C::BndEvt__WBP_PalStorageMenu_WBP_IngameMenu_PalBox_K2Node_ComponentBoundEvent_2_OnHoveredWorkerSlot__DelegateSignature(class UPalIndividualCharacterSlot* Slot)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PalStorageMenu_C", "BndEvt__WBP_PalStorageMenu_WBP_IngameMenu_PalBox_K2Node_ComponentBoundEvent_2_OnHoveredWorkerSlot__DelegateSignature");

	Params::UWBP_PalStorageMenu_C_BndEvt__WBP_PalStorageMenu_WBP_IngameMenu_PalBox_K2Node_ComponentBoundEvent_2_OnHoveredWorkerSlot__DelegateSignature_Params Parms{};

	Parms.Slot = Slot;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_PalStorageMenu.WBP_PalStorageMenu_C.BndEvt__WBP_PalStorageMenu_WBP_IngameMenu_PalBox_K2Node_ComponentBoundEvent_3_OnAnySlotUnhovered__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWBP_PalStorageMenu_C::BndEvt__WBP_PalStorageMenu_WBP_IngameMenu_PalBox_K2Node_ComponentBoundEvent_3_OnAnySlotUnhovered__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PalStorageMenu_C", "BndEvt__WBP_PalStorageMenu_WBP_IngameMenu_PalBox_K2Node_ComponentBoundEvent_3_OnAnySlotUnhovered__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_PalStorageMenu.WBP_PalStorageMenu_C.BndEvt__WBP_PalStorageMenu_WBP_IngameMenu_PalBox_K2Node_ComponentBoundEvent_12_OnRightClickedBoxSlot__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UPalIndividualCharacterSlot* Slot                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_PalStorageMenu_C::BndEvt__WBP_PalStorageMenu_WBP_IngameMenu_PalBox_K2Node_ComponentBoundEvent_12_OnRightClickedBoxSlot__DelegateSignature(class UPalIndividualCharacterSlot* Slot)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PalStorageMenu_C", "BndEvt__WBP_PalStorageMenu_WBP_IngameMenu_PalBox_K2Node_ComponentBoundEvent_12_OnRightClickedBoxSlot__DelegateSignature");

	Params::UWBP_PalStorageMenu_C_BndEvt__WBP_PalStorageMenu_WBP_IngameMenu_PalBox_K2Node_ComponentBoundEvent_12_OnRightClickedBoxSlot__DelegateSignature_Params Parms{};

	Parms.Slot = Slot;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_PalStorageMenu.WBP_PalStorageMenu_C.BndEvt__WBP_PalStorageMenu_WBP_IngameMenu_PalBox_K2Node_ComponentBoundEvent_13_OnRightClickedWorkerSlot__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UPalIndividualCharacterSlot* Slot                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_PalStorageMenu_C::BndEvt__WBP_PalStorageMenu_WBP_IngameMenu_PalBox_K2Node_ComponentBoundEvent_13_OnRightClickedWorkerSlot__DelegateSignature(class UPalIndividualCharacterSlot* Slot)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PalStorageMenu_C", "BndEvt__WBP_PalStorageMenu_WBP_IngameMenu_PalBox_K2Node_ComponentBoundEvent_13_OnRightClickedWorkerSlot__DelegateSignature");

	Params::UWBP_PalStorageMenu_C_BndEvt__WBP_PalStorageMenu_WBP_IngameMenu_PalBox_K2Node_ComponentBoundEvent_13_OnRightClickedWorkerSlot__DelegateSignature_Params Parms{};

	Parms.Slot = Slot;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_PalStorageMenu.WBP_PalStorageMenu_C.BndEvt__WBP_PalStorageMenu_WBP_IngameMenu_PalBox_K2Node_ComponentBoundEvent_14_OnSelectedSortType__DelegateSignature
// (BlueprintEvent)
// Parameters:
// enum class EPalCharacterContainerSortTypeSortType                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_PalStorageMenu_C::BndEvt__WBP_PalStorageMenu_WBP_IngameMenu_PalBox_K2Node_ComponentBoundEvent_14_OnSelectedSortType__DelegateSignature(enum class EPalCharacterContainerSortType SortType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PalStorageMenu_C", "BndEvt__WBP_PalStorageMenu_WBP_IngameMenu_PalBox_K2Node_ComponentBoundEvent_14_OnSelectedSortType__DelegateSignature");

	Params::UWBP_PalStorageMenu_C_BndEvt__WBP_PalStorageMenu_WBP_IngameMenu_PalBox_K2Node_ComponentBoundEvent_14_OnSelectedSortType__DelegateSignature_Params Parms{};

	Parms.SortType = SortType;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_PalStorageMenu.WBP_PalStorageMenu_C.ExecuteUbergraph_WBP_PalStorageMenu
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EPalCharacterContainerSortTypeK2Node_ComponentBoundEvent_SortType                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UPalIndividualCharacterSlot*>K2Node_Event_slotList_1                                          (ConstParm, ReferenceParm)
// int32                              K2Node_Event_nowPage                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UPalIndividualCharacterSlot*>K2Node_Event_slotList                                            (ConstParm, ReferenceParm)
// class UPalIndividualCharacterSlot* K2Node_ComponentBoundEvent_Slot_7                                (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// enum class EPalItemSlotPressType   K2Node_ComponentBoundEvent_pressType_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPalIndividualCharacterSlot* K2Node_ComponentBoundEvent_targetSlot                            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPalIndividualCharacterSlot* K2Node_ComponentBoundEvent_Slot_6                                (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// enum class EPalItemSlotPressType   K2Node_ComponentBoundEvent_pressType                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPalIndividualCharacterSlot* K2Node_ComponentBoundEvent_Slot_5                                (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsEmpty_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPalHUDService*              CallFunc_GetHUDService_ReturnValue                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPalUILiftSlotModel*         CallFunc_GetLiftSlotModel_ReturnValue                            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPalIndividualCharacterSlot* K2Node_ComponentBoundEvent_Slot_4                                (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsLift_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TSoftObjectPtr<class UPalIndividualCharacterSlot>CallFunc_Conv_ObjectToSoftObjectReference_ReturnValue            (UObjectWrapper, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPalIndividualCharacterSlot* K2Node_ComponentBoundEvent_Slot_3                                (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPalIndividualCharacterSlot* K2Node_ComponentBoundEvent_Slot_2                                (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPalHUDService*              CallFunc_GetHUDService_ReturnValue_1                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPalUILiftSlotModel*         CallFunc_GetLiftSlotModel_ReturnValue_1                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsLift_ReturnValue_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPalIndividualCharacterSlot* K2Node_ComponentBoundEvent_Slot_1                                (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPalIndividualCharacterSlot* K2Node_ComponentBoundEvent_Slot                                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPalHUDService*              CallFunc_GetHUDService_ReturnValue_2                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPalTutorialManager*         CallFunc_GetTutorialManager_ReturnValue                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPalUILiftSlotModel*         CallFunc_GetLiftSlotModel_ReturnValue_2                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsLift_ReturnValue_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_PalStorageMenu_C::ExecuteUbergraph_WBP_PalStorageMenu(int32 EntryPoint, enum class EPalCharacterContainerSortType K2Node_ComponentBoundEvent_SortType, TArray<class UPalIndividualCharacterSlot*>& K2Node_Event_slotList_1, int32 K2Node_Event_nowPage, TArray<class UPalIndividualCharacterSlot*>& K2Node_Event_slotList, class UPalIndividualCharacterSlot* K2Node_ComponentBoundEvent_Slot_7, enum class EPalItemSlotPressType K2Node_ComponentBoundEvent_pressType_1, class UPalIndividualCharacterSlot* K2Node_ComponentBoundEvent_targetSlot, class UPalIndividualCharacterSlot* K2Node_ComponentBoundEvent_Slot_6, enum class EPalItemSlotPressType K2Node_ComponentBoundEvent_pressType, class UPalIndividualCharacterSlot* K2Node_ComponentBoundEvent_Slot_5, bool CallFunc_IsEmpty_ReturnValue, class UPalHUDService* CallFunc_GetHUDService_ReturnValue, class UPalUILiftSlotModel* CallFunc_GetLiftSlotModel_ReturnValue, class UPalIndividualCharacterSlot* K2Node_ComponentBoundEvent_Slot_4, bool CallFunc_IsLift_ReturnValue, TSoftObjectPtr<class UPalIndividualCharacterSlot> CallFunc_Conv_ObjectToSoftObjectReference_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UPalIndividualCharacterSlot* K2Node_ComponentBoundEvent_Slot_3, class UPalIndividualCharacterSlot* K2Node_ComponentBoundEvent_Slot_2, class UPalHUDService* CallFunc_GetHUDService_ReturnValue_1, class UPalUILiftSlotModel* CallFunc_GetLiftSlotModel_ReturnValue_1, bool CallFunc_IsLift_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_1, class UPalIndividualCharacterSlot* K2Node_ComponentBoundEvent_Slot_1, class UPalIndividualCharacterSlot* K2Node_ComponentBoundEvent_Slot, class UPalHUDService* CallFunc_GetHUDService_ReturnValue_2, class UPalTutorialManager* CallFunc_GetTutorialManager_ReturnValue, class UPalUILiftSlotModel* CallFunc_GetLiftSlotModel_ReturnValue_2, bool CallFunc_IsLift_ReturnValue_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PalStorageMenu_C", "ExecuteUbergraph_WBP_PalStorageMenu");

	Params::UWBP_PalStorageMenu_C_ExecuteUbergraph_WBP_PalStorageMenu_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_ComponentBoundEvent_SortType = K2Node_ComponentBoundEvent_SortType;
	Parms.K2Node_Event_slotList_1 = K2Node_Event_slotList_1;
	Parms.K2Node_Event_nowPage = K2Node_Event_nowPage;
	Parms.K2Node_Event_slotList = K2Node_Event_slotList;
	Parms.K2Node_ComponentBoundEvent_Slot_7 = K2Node_ComponentBoundEvent_Slot_7;
	Parms.K2Node_ComponentBoundEvent_pressType_1 = K2Node_ComponentBoundEvent_pressType_1;
	Parms.K2Node_ComponentBoundEvent_targetSlot = K2Node_ComponentBoundEvent_targetSlot;
	Parms.K2Node_ComponentBoundEvent_Slot_6 = K2Node_ComponentBoundEvent_Slot_6;
	Parms.K2Node_ComponentBoundEvent_pressType = K2Node_ComponentBoundEvent_pressType;
	Parms.K2Node_ComponentBoundEvent_Slot_5 = K2Node_ComponentBoundEvent_Slot_5;
	Parms.CallFunc_IsEmpty_ReturnValue = CallFunc_IsEmpty_ReturnValue;
	Parms.CallFunc_GetHUDService_ReturnValue = CallFunc_GetHUDService_ReturnValue;
	Parms.CallFunc_GetLiftSlotModel_ReturnValue = CallFunc_GetLiftSlotModel_ReturnValue;
	Parms.K2Node_ComponentBoundEvent_Slot_4 = K2Node_ComponentBoundEvent_Slot_4;
	Parms.CallFunc_IsLift_ReturnValue = CallFunc_IsLift_ReturnValue;
	Parms.CallFunc_Conv_ObjectToSoftObjectReference_ReturnValue = CallFunc_Conv_ObjectToSoftObjectReference_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_ComponentBoundEvent_Slot_3 = K2Node_ComponentBoundEvent_Slot_3;
	Parms.K2Node_ComponentBoundEvent_Slot_2 = K2Node_ComponentBoundEvent_Slot_2;
	Parms.CallFunc_GetHUDService_ReturnValue_1 = CallFunc_GetHUDService_ReturnValue_1;
	Parms.CallFunc_GetLiftSlotModel_ReturnValue_1 = CallFunc_GetLiftSlotModel_ReturnValue_1;
	Parms.CallFunc_IsLift_ReturnValue_1 = CallFunc_IsLift_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.K2Node_ComponentBoundEvent_Slot_1 = K2Node_ComponentBoundEvent_Slot_1;
	Parms.K2Node_ComponentBoundEvent_Slot = K2Node_ComponentBoundEvent_Slot;
	Parms.CallFunc_GetHUDService_ReturnValue_2 = CallFunc_GetHUDService_ReturnValue_2;
	Parms.CallFunc_GetTutorialManager_ReturnValue = CallFunc_GetTutorialManager_ReturnValue;
	Parms.CallFunc_GetLiftSlotModel_ReturnValue_2 = CallFunc_GetLiftSlotModel_ReturnValue_2;
	Parms.CallFunc_IsLift_ReturnValue_2 = CallFunc_IsLift_ReturnValue_2;

	UObject::ProcessEvent(Func, &Parms);

}

}


