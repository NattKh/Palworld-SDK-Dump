#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_ActionFunnelThunder.BP_ActionFunnelThunder_C
// (None)

class UClass* UBP_ActionFunnelThunder_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_ActionFunnelThunder_C");

	return Clss;
}


// BP_ActionFunnelThunder_C BP_ActionFunnelThunder.Default__BP_ActionFunnelThunder_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_ActionFunnelThunder_C* UBP_ActionFunnelThunder_C::GetDefaultObj()
{
	static class UBP_ActionFunnelThunder_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_ActionFunnelThunder_C*>(UBP_ActionFunnelThunder_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_ActionFunnelThunder.BP_ActionFunnelThunder_C.Get Attack Owner
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class AActor*                      OwnerActor                                                       (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class APalCharacter*               CallFunc_GetActionCharacter_ReturnValue                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class APalCharacter*               CallFunc_GetActionCharacter_ReturnValue_1                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class APalFunnelCharacter*         K2Node_DynamicCast_AsPal_Funnel_Character                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APalCharacter*               CallFunc_GetOwnerPal_ReturnValue                                 (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UBP_ActionFunnelThunder_C::Get_Attack_Owner(class AActor** OwnerActor, class APalCharacter* CallFunc_GetActionCharacter_ReturnValue, class APalCharacter* CallFunc_GetActionCharacter_ReturnValue_1, class APalFunnelCharacter* K2Node_DynamicCast_AsPal_Funnel_Character, bool K2Node_DynamicCast_bSuccess, class APalCharacter* CallFunc_GetOwnerPal_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ActionFunnelThunder_C", "Get Attack Owner");

	Params::UBP_ActionFunnelThunder_C_Get_Attack_Owner_Params Parms{};

	Parms.CallFunc_GetActionCharacter_ReturnValue = CallFunc_GetActionCharacter_ReturnValue;
	Parms.CallFunc_GetActionCharacter_ReturnValue_1 = CallFunc_GetActionCharacter_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsPal_Funnel_Character = K2Node_DynamicCast_AsPal_Funnel_Character;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetOwnerPal_ReturnValue = CallFunc_GetOwnerPal_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (OwnerActor != nullptr)
		*OwnerActor = Parms.OwnerActor;

}

}


