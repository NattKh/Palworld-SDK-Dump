#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_ActionIceBlade.BP_ActionIceBlade_C
// (None)

class UClass* UBP_ActionIceBlade_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_ActionIceBlade_C");

	return Clss;
}


// BP_ActionIceBlade_C BP_ActionIceBlade.Default__BP_ActionIceBlade_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_ActionIceBlade_C* UBP_ActionIceBlade_C::GetDefaultObj()
{
	static class UBP_ActionIceBlade_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_ActionIceBlade_C*>(UBP_ActionIceBlade_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_ActionIceBlade.BP_ActionIceBlade_C.OnBeginAction
// (Event, Public, BlueprintEvent)
// Parameters:

void UBP_ActionIceBlade_C::OnBeginAction()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ActionIceBlade_C", "OnBeginAction");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_ActionIceBlade.BP_ActionIceBlade_C.TickAction
// (Event, Public, BlueprintEvent)
// Parameters:
// float                              DeltaTime                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_ActionIceBlade_C::TickAction(float DeltaTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ActionIceBlade_C", "TickAction");

	Params::UBP_ActionIceBlade_C_TickAction_Params Parms{};

	Parms.DeltaTime = DeltaTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_ActionIceBlade.BP_ActionIceBlade_C.OnSpawnEffect
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APalSkillEffectBase*         Effect                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UBP_ActionIceBlade_C::OnSpawnEffect(class APalSkillEffectBase* Effect)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ActionIceBlade_C", "OnSpawnEffect");

	Params::UBP_ActionIceBlade_C_OnSpawnEffect_Params Parms{};

	Parms.Effect = Effect;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_ActionIceBlade.BP_ActionIceBlade_C.ExecuteUbergraph_BP_ActionIceBlade
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APalSkillEffectBase*         K2Node_Event_Effect                                              (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ABP_SkillEffect_IceBlade_C*  K2Node_DynamicCast_AsBP_Skill_Effect_Ice_Blade                   (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_DeltaTime                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_ActionIceBlade_C::ExecuteUbergraph_BP_ActionIceBlade(int32 EntryPoint, class APalSkillEffectBase* K2Node_Event_Effect, class ABP_SkillEffect_IceBlade_C* K2Node_DynamicCast_AsBP_Skill_Effect_Ice_Blade, bool K2Node_DynamicCast_bSuccess, float K2Node_Event_DeltaTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ActionIceBlade_C", "ExecuteUbergraph_BP_ActionIceBlade");

	Params::UBP_ActionIceBlade_C_ExecuteUbergraph_BP_ActionIceBlade_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_Effect = K2Node_Event_Effect;
	Parms.K2Node_DynamicCast_AsBP_Skill_Effect_Ice_Blade = K2Node_DynamicCast_AsBP_Skill_Effect_Ice_Blade;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_Event_DeltaTime = K2Node_Event_DeltaTime;

	UObject::ProcessEvent(Func, &Parms);

}

}


