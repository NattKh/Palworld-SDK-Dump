#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_ActionAirCanon.BP_ActionAirCanon_C
// (None)

class UClass* UBP_ActionAirCanon_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_ActionAirCanon_C");

	return Clss;
}


// BP_ActionAirCanon_C BP_ActionAirCanon.Default__BP_ActionAirCanon_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_ActionAirCanon_C* UBP_ActionAirCanon_C::GetDefaultObj()
{
	static class UBP_ActionAirCanon_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_ActionAirCanon_C*>(UBP_ActionAirCanon_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_ActionAirCanon.BP_ActionAirCanon_C.SetBulletSpeed
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APalSkillEffectBase*         Effect                                                           (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class APalSkillEffectBase*         CallFunc_SetBulletSpeed_Effect                                   (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UBP_ActionAirCanon_C::SetBulletSpeed(class APalSkillEffectBase** Effect, class APalSkillEffectBase* CallFunc_SetBulletSpeed_Effect)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ActionAirCanon_C", "SetBulletSpeed");

	Params::UBP_ActionAirCanon_C_SetBulletSpeed_Params Parms{};

	Parms.CallFunc_SetBulletSpeed_Effect = CallFunc_SetBulletSpeed_Effect;

	UObject::ProcessEvent(Func, &Parms);

	if (Effect != nullptr)
		*Effect = Parms.Effect;

}


// Function BP_ActionAirCanon.BP_ActionAirCanon_C.OnBeginAction
// (Event, Public, BlueprintEvent)
// Parameters:

void UBP_ActionAirCanon_C::OnBeginAction()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ActionAirCanon_C", "OnBeginAction");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_ActionAirCanon.BP_ActionAirCanon_C.TickAction
// (Event, Public, BlueprintEvent)
// Parameters:
// float                              DeltaTime                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_ActionAirCanon_C::TickAction(float DeltaTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ActionAirCanon_C", "TickAction");

	Params::UBP_ActionAirCanon_C_TickAction_Params Parms{};

	Parms.DeltaTime = DeltaTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_ActionAirCanon.BP_ActionAirCanon_C.OnSpawnEffect
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APalSkillEffectBase*         Effect                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UBP_ActionAirCanon_C::OnSpawnEffect(class APalSkillEffectBase* Effect)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ActionAirCanon_C", "OnSpawnEffect");

	Params::UBP_ActionAirCanon_C_OnSpawnEffect_Params Parms{};

	Parms.Effect = Effect;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_ActionAirCanon.BP_ActionAirCanon_C.ExecuteUbergraph_BP_ActionAirCanon
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APalSkillEffectBase*         K2Node_Event_Effect                                              (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class APalCharacter*               CallFunc_GetActionCharacter_ReturnValue                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsPlayerControlled_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_DeltaTime                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_ActionAirCanon_C::ExecuteUbergraph_BP_ActionAirCanon(int32 EntryPoint, class APalSkillEffectBase* K2Node_Event_Effect, class APalCharacter* CallFunc_GetActionCharacter_ReturnValue, bool CallFunc_IsPlayerControlled_ReturnValue, float K2Node_Event_DeltaTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ActionAirCanon_C", "ExecuteUbergraph_BP_ActionAirCanon");

	Params::UBP_ActionAirCanon_C_ExecuteUbergraph_BP_ActionAirCanon_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_Effect = K2Node_Event_Effect;
	Parms.CallFunc_GetActionCharacter_ReturnValue = CallFunc_GetActionCharacter_ReturnValue;
	Parms.CallFunc_IsPlayerControlled_ReturnValue = CallFunc_IsPlayerControlled_ReturnValue;
	Parms.K2Node_Event_DeltaTime = K2Node_Event_DeltaTime;

	UObject::ProcessEvent(Func, &Parms);

}

}


