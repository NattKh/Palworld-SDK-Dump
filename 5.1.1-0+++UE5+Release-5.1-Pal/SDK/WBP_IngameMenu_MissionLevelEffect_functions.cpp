#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_IngameMenu_MissionLevelEffect.WBP_IngameMenu_MissionLevelEffect_C
// (None)

class UClass* UWBP_IngameMenu_MissionLevelEffect_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_IngameMenu_MissionLevelEffect_C");

	return Clss;
}


// WBP_IngameMenu_MissionLevelEffect_C WBP_IngameMenu_MissionLevelEffect.Default__WBP_IngameMenu_MissionLevelEffect_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_IngameMenu_MissionLevelEffect_C* UWBP_IngameMenu_MissionLevelEffect_C::GetDefaultObj()
{
	static class UWBP_IngameMenu_MissionLevelEffect_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_IngameMenu_MissionLevelEffect_C*>(UWBP_IngameMenu_MissionLevelEffect_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WBP_IngameMenu_MissionLevelEffect.WBP_IngameMenu_MissionLevelEffect_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UWBP_IngameMenu_MissionLevelEffect_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_IngameMenu_MissionLevelEffect_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_IngameMenu_MissionLevelEffect.WBP_IngameMenu_MissionLevelEffect_C.SetEffectInfo
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              PreCount                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              AftCount                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               IsMax                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CanLevelup                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_IngameMenu_MissionLevelEffect_C::SetEffectInfo(int32 PreCount, int32 AftCount, bool IsMax, bool CanLevelup)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_IngameMenu_MissionLevelEffect_C", "SetEffectInfo");

	Params::UWBP_IngameMenu_MissionLevelEffect_C_SetEffectInfo_Params Parms{};

	Parms.PreCount = PreCount;
	Parms.AftCount = AftCount;
	Parms.IsMax = IsMax;
	Parms.CanLevelup = CanLevelup;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_IngameMenu_MissionLevelEffect.WBP_IngameMenu_MissionLevelEffect_C.ExecuteUbergraph_WBP_IngameMenu_MissionLevelEffect
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_CustomEvent_PreCount                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_CustomEvent_AftCount                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_IsMax                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_CanLevelup                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_GetLocalizedTextFromHandle_Text                         (None)
// struct FLinearColor                CallFunc_SelectColor_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSlateColor                 K2Node_MakeStruct_SlateColor                                     (None)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_IntToText_ReturnValue                              (None)
// class FText                        CallFunc_Conv_IntToText_ReturnValue_1                            (None)

void UWBP_IngameMenu_MissionLevelEffect_C::ExecuteUbergraph_WBP_IngameMenu_MissionLevelEffect(int32 EntryPoint, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, int32 K2Node_CustomEvent_PreCount, int32 K2Node_CustomEvent_AftCount, bool K2Node_CustomEvent_IsMax, bool K2Node_CustomEvent_CanLevelup, class FText CallFunc_GetLocalizedTextFromHandle_Text, const struct FLinearColor& CallFunc_SelectColor_ReturnValue, const struct FSlateColor& K2Node_MakeStruct_SlateColor, enum class ESlateVisibility K2Node_Select_Default, class FText CallFunc_Conv_IntToText_ReturnValue, class FText CallFunc_Conv_IntToText_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_IngameMenu_MissionLevelEffect_C", "ExecuteUbergraph_WBP_IngameMenu_MissionLevelEffect");

	Params::UWBP_IngameMenu_MissionLevelEffect_C_ExecuteUbergraph_WBP_IngameMenu_MissionLevelEffect_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.K2Node_CustomEvent_PreCount = K2Node_CustomEvent_PreCount;
	Parms.K2Node_CustomEvent_AftCount = K2Node_CustomEvent_AftCount;
	Parms.K2Node_CustomEvent_IsMax = K2Node_CustomEvent_IsMax;
	Parms.K2Node_CustomEvent_CanLevelup = K2Node_CustomEvent_CanLevelup;
	Parms.CallFunc_GetLocalizedTextFromHandle_Text = CallFunc_GetLocalizedTextFromHandle_Text;
	Parms.CallFunc_SelectColor_ReturnValue = CallFunc_SelectColor_ReturnValue;
	Parms.K2Node_MakeStruct_SlateColor = K2Node_MakeStruct_SlateColor;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_Conv_IntToText_ReturnValue = CallFunc_Conv_IntToText_ReturnValue;
	Parms.CallFunc_Conv_IntToText_ReturnValue_1 = CallFunc_Conv_IntToText_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}

}


