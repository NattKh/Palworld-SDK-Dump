#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_IngameMenu_PalBox_PageControl.WBP_IngameMenu_PalBox_PageControl_C
// (None)

class UClass* UWBP_IngameMenu_PalBox_PageControl_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_IngameMenu_PalBox_PageControl_C");

	return Clss;
}


// WBP_IngameMenu_PalBox_PageControl_C WBP_IngameMenu_PalBox_PageControl.Default__WBP_IngameMenu_PalBox_PageControl_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_IngameMenu_PalBox_PageControl_C* UWBP_IngameMenu_PalBox_PageControl_C::GetDefaultObj()
{
	static class UWBP_IngameMenu_PalBox_PageControl_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_IngameMenu_PalBox_PageControl_C*>(UWBP_IngameMenu_PalBox_PageControl_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WBP_IngameMenu_PalBox_PageControl.WBP_IngameMenu_PalBox_PageControl_C.AnmEvent_Select
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_IngameMenu_PalBox_PageControl_C::AnmEvent_Select()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_IngameMenu_PalBox_PageControl_C", "AnmEvent_Select");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_IngameMenu_PalBox_PageControl.WBP_IngameMenu_PalBox_PageControl_C.AnmEvent_Unselect
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_IngameMenu_PalBox_PageControl_C::AnmEvent_Unselect()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_IngameMenu_PalBox_PageControl_C", "AnmEvent_Unselect");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_IngameMenu_PalBox_PageControl.WBP_IngameMenu_PalBox_PageControl_C.ExecuteUbergraph_WBP_IngameMenu_PalBox_PageControl
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue_1                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_IngameMenu_PalBox_PageControl_C::ExecuteUbergraph_WBP_IngameMenu_PalBox_PageControl(int32 EntryPoint, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_IngameMenu_PalBox_PageControl_C", "ExecuteUbergraph_WBP_IngameMenu_PalBox_PageControl");

	Params::UWBP_IngameMenu_PalBox_PageControl_C_ExecuteUbergraph_WBP_IngameMenu_PalBox_PageControl_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;
	Parms.CallFunc_PlayAnimation_ReturnValue_1 = CallFunc_PlayAnimation_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}

}


