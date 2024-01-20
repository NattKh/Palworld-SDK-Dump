#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// AnimBlueprintGeneratedClass ABP_Kitsunebi_PartnerSkill.ABP_Kitsunebi_PartnerSkill_C
// (None)

class UClass* UABP_Kitsunebi_PartnerSkill_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ABP_Kitsunebi_PartnerSkill_C");

	return Clss;
}


// ABP_Kitsunebi_PartnerSkill_C ABP_Kitsunebi_PartnerSkill.Default__ABP_Kitsunebi_PartnerSkill_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UABP_Kitsunebi_PartnerSkill_C* UABP_Kitsunebi_PartnerSkill_C::GetDefaultObj()
{
	static class UABP_Kitsunebi_PartnerSkill_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UABP_Kitsunebi_PartnerSkill_C*>(UABP_Kitsunebi_PartnerSkill_C::StaticClass()->DefaultObject);

	return Default;
}


// Function ABP_Kitsunebi_PartnerSkill.ABP_Kitsunebi_PartnerSkill_C.AnimGraph
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                   AnimGraph                                                        (Parm, OutParm, NoDestructor)

void UABP_Kitsunebi_PartnerSkill_C::AnimGraph(struct FPoseLink* AnimGraph)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ABP_Kitsunebi_PartnerSkill_C", "AnimGraph");

	Params::UABP_Kitsunebi_PartnerSkill_C_AnimGraph_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (AnimGraph != nullptr)
		*AnimGraph = std::move(Parms.AnimGraph);

}


// Function ABP_Kitsunebi_PartnerSkill.ABP_Kitsunebi_PartnerSkill_C.ExecuteUbergraph_ABP_Kitsunebi_PartnerSkill
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UABP_Kitsunebi_PartnerSkill_C::ExecuteUbergraph_ABP_Kitsunebi_PartnerSkill(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ABP_Kitsunebi_PartnerSkill_C", "ExecuteUbergraph_ABP_Kitsunebi_PartnerSkill");

	Params::UABP_Kitsunebi_PartnerSkill_C_ExecuteUbergraph_ABP_Kitsunebi_PartnerSkill_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


