#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_Action_BubbleShot.BP_Action_BubbleShot_C
// (None)

class UClass* UBP_Action_BubbleShot_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_Action_BubbleShot_C");

	return Clss;
}


// BP_Action_BubbleShot_C BP_Action_BubbleShot.Default__BP_Action_BubbleShot_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_Action_BubbleShot_C* UBP_Action_BubbleShot_C::GetDefaultObj()
{
	static class UBP_Action_BubbleShot_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_Action_BubbleShot_C*>(UBP_Action_BubbleShot_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_Action_BubbleShot.BP_Action_BubbleShot_C.OnBeginAction
// (Event, Public, BlueprintEvent)
// Parameters:

void UBP_Action_BubbleShot_C::OnBeginAction()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Action_BubbleShot_C", "OnBeginAction");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Action_BubbleShot.BP_Action_BubbleShot_C.TickAction
// (Event, Public, BlueprintEvent)
// Parameters:
// float                              DeltaTime                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_Action_BubbleShot_C::TickAction(float DeltaTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Action_BubbleShot_C", "TickAction");

	Params::UBP_Action_BubbleShot_C_TickAction_Params Parms{};

	Parms.DeltaTime = DeltaTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Action_BubbleShot.BP_Action_BubbleShot_C.OnSpawnEffect
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APalSkillEffectBase*         Effect                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UBP_Action_BubbleShot_C::OnSpawnEffect(class APalSkillEffectBase* Effect)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Action_BubbleShot_C", "OnSpawnEffect");

	Params::UBP_Action_BubbleShot_C_OnSpawnEffect_Params Parms{};

	Parms.Effect = Effect;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Action_BubbleShot.BP_Action_BubbleShot_C.ExecuteUbergraph_BP_Action_BubbleShot
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_DeltaTime                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APalSkillEffectBase*         K2Node_Event_Effect                                              (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UBP_Action_BubbleShot_C::ExecuteUbergraph_BP_Action_BubbleShot(int32 EntryPoint, bool CallFunc_IsValid_ReturnValue, float K2Node_Event_DeltaTime, class APalSkillEffectBase* K2Node_Event_Effect)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Action_BubbleShot_C", "ExecuteUbergraph_BP_Action_BubbleShot");

	Params::UBP_Action_BubbleShot_C_ExecuteUbergraph_BP_Action_BubbleShot_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_Event_DeltaTime = K2Node_Event_DeltaTime;
	Parms.K2Node_Event_Effect = K2Node_Event_Effect;

	UObject::ProcessEvent(Func, &Parms);

}

}


