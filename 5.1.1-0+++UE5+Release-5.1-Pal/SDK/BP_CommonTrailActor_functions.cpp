#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_CommonTrailActor.BP_CommonTrailActor_C
// (Actor)

class UClass* ABP_CommonTrailActor_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_CommonTrailActor_C");

	return Clss;
}


// BP_CommonTrailActor_C BP_CommonTrailActor.Default__BP_CommonTrailActor_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_CommonTrailActor_C* ABP_CommonTrailActor_C::GetDefaultObj()
{
	static class ABP_CommonTrailActor_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_CommonTrailActor_C*>(ABP_CommonTrailActor_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_CommonTrailActor.BP_CommonTrailActor_C.SetEffect
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UNiagaraSystem*              EffectAsset                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_CommonTrailActor_C::SetEffect(class UNiagaraSystem* EffectAsset)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CommonTrailActor_C", "SetEffect");

	Params::ABP_CommonTrailActor_C_SetEffect_Params Parms{};

	Parms.EffectAsset = EffectAsset;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_CommonTrailActor.BP_CommonTrailActor_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                              DeltaSeconds                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_CommonTrailActor_C::ReceiveTick(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CommonTrailActor_C", "ReceiveTick");

	Params::ABP_CommonTrailActor_C_ReceiveTick_Params Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_CommonTrailActor.BP_CommonTrailActor_C.DeleteEffect
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             FadeOutTime                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCurveFloat*                 FadeOutCurve                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_CommonTrailActor_C::DeleteEffect(double FadeOutTime, class UCurveFloat* FadeOutCurve)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CommonTrailActor_C", "DeleteEffect");

	Params::ABP_CommonTrailActor_C_DeleteEffect_Params Parms{};

	Parms.FadeOutTime = FadeOutTime;
	Parms.FadeOutCurve = FadeOutCurve;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_CommonTrailActor.BP_CommonTrailActor_C.ExecuteUbergraph_BP_CommonTrailActor
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_CustomEvent_FadeOutTime                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCurveFloat*                 K2Node_CustomEvent_FadeOutCurve                                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_DeltaSeconds                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_FClamp_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetFloatValue_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Divide_DoubleDouble_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Add_DoubleDouble_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Divide_DoubleDouble_A_ImplicitCast                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Delay_Duration_ImplicitCast                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetFloatValue_InTime_ImplicitCast                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_CommonTrailActor_C::ExecuteUbergraph_BP_CommonTrailActor(int32 EntryPoint, double K2Node_CustomEvent_FadeOutTime, class UCurveFloat* K2Node_CustomEvent_FadeOutCurve, bool CallFunc_IsValid_ReturnValue, float K2Node_Event_DeltaSeconds, double CallFunc_FClamp_ReturnValue, float CallFunc_GetFloatValue_ReturnValue, double CallFunc_Divide_DoubleDouble_ReturnValue, double CallFunc_Add_DoubleDouble_ReturnValue, double CallFunc_Divide_DoubleDouble_A_ImplicitCast, float CallFunc_Delay_Duration_ImplicitCast, float CallFunc_GetFloatValue_InTime_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CommonTrailActor_C", "ExecuteUbergraph_BP_CommonTrailActor");

	Params::ABP_CommonTrailActor_C_ExecuteUbergraph_BP_CommonTrailActor_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CustomEvent_FadeOutTime = K2Node_CustomEvent_FadeOutTime;
	Parms.K2Node_CustomEvent_FadeOutCurve = K2Node_CustomEvent_FadeOutCurve;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_Event_DeltaSeconds = K2Node_Event_DeltaSeconds;
	Parms.CallFunc_FClamp_ReturnValue = CallFunc_FClamp_ReturnValue;
	Parms.CallFunc_GetFloatValue_ReturnValue = CallFunc_GetFloatValue_ReturnValue;
	Parms.CallFunc_Divide_DoubleDouble_ReturnValue = CallFunc_Divide_DoubleDouble_ReturnValue;
	Parms.CallFunc_Add_DoubleDouble_ReturnValue = CallFunc_Add_DoubleDouble_ReturnValue;
	Parms.CallFunc_Divide_DoubleDouble_A_ImplicitCast = CallFunc_Divide_DoubleDouble_A_ImplicitCast;
	Parms.CallFunc_Delay_Duration_ImplicitCast = CallFunc_Delay_Duration_ImplicitCast;
	Parms.CallFunc_GetFloatValue_InTime_ImplicitCast = CallFunc_GetFloatValue_InTime_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}

}


