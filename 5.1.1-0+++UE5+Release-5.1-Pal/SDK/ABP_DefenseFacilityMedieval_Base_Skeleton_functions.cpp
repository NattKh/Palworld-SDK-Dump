#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// AnimBlueprintGeneratedClass ABP_DefenseFacilityMedieval_Base_Skeleton.ABP_DefenseFacilityMedieval_Base_Skeleton_C
// (None)

class UClass* UABP_DefenseFacilityMedieval_Base_Skeleton_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ABP_DefenseFacilityMedieval_Base_Skeleton_C");

	return Clss;
}


// ABP_DefenseFacilityMedieval_Base_Skeleton_C ABP_DefenseFacilityMedieval_Base_Skeleton.Default__ABP_DefenseFacilityMedieval_Base_Skeleton_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UABP_DefenseFacilityMedieval_Base_Skeleton_C* UABP_DefenseFacilityMedieval_Base_Skeleton_C::GetDefaultObj()
{
	static class UABP_DefenseFacilityMedieval_Base_Skeleton_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UABP_DefenseFacilityMedieval_Base_Skeleton_C*>(UABP_DefenseFacilityMedieval_Base_Skeleton_C::StaticClass()->DefaultObject);

	return Default;
}


// Function ABP_DefenseFacilityMedieval_Base_Skeleton.ABP_DefenseFacilityMedieval_Base_Skeleton_C.AnimGraph
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                   AnimGraph                                                        (Parm, OutParm, NoDestructor)

void UABP_DefenseFacilityMedieval_Base_Skeleton_C::AnimGraph(struct FPoseLink* AnimGraph)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ABP_DefenseFacilityMedieval_Base_Skeleton_C", "AnimGraph");

	Params::UABP_DefenseFacilityMedieval_Base_Skeleton_C_AnimGraph_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (AnimGraph != nullptr)
		*AnimGraph = std::move(Parms.AnimGraph);

}


// Function ABP_DefenseFacilityMedieval_Base_Skeleton.ABP_DefenseFacilityMedieval_Base_Skeleton_C.SetRotate
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FRotator                    Rotation                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UABP_DefenseFacilityMedieval_Base_Skeleton_C::SetRotate(const struct FRotator& Rotation)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ABP_DefenseFacilityMedieval_Base_Skeleton_C", "SetRotate");

	Params::UABP_DefenseFacilityMedieval_Base_Skeleton_C_SetRotate_Params Parms{};

	Parms.Rotation = Rotation;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ABP_DefenseFacilityMedieval_Base_Skeleton.ABP_DefenseFacilityMedieval_Base_Skeleton_C.BlueprintUpdateAnimation
// (Event, Public, BlueprintEvent)
// Parameters:
// float                              DeltaTimeX                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UABP_DefenseFacilityMedieval_Base_Skeleton_C::BlueprintUpdateAnimation(float DeltaTimeX)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ABP_DefenseFacilityMedieval_Base_Skeleton_C", "BlueprintUpdateAnimation");

	Params::UABP_DefenseFacilityMedieval_Base_Skeleton_C_BlueprintUpdateAnimation_Params Parms{};

	Parms.DeltaTimeX = DeltaTimeX;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ABP_DefenseFacilityMedieval_Base_Skeleton.ABP_DefenseFacilityMedieval_Base_Skeleton_C.ExecuteUbergraph_ABP_DefenseFacilityMedieval_Base_Skeleton
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_DeltaTimeX                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UABP_DefenseFacilityMedieval_Base_Skeleton_C::ExecuteUbergraph_ABP_DefenseFacilityMedieval_Base_Skeleton(int32 EntryPoint, float K2Node_Event_DeltaTimeX)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ABP_DefenseFacilityMedieval_Base_Skeleton_C", "ExecuteUbergraph_ABP_DefenseFacilityMedieval_Base_Skeleton");

	Params::UABP_DefenseFacilityMedieval_Base_Skeleton_C_ExecuteUbergraph_ABP_DefenseFacilityMedieval_Base_Skeleton_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_DeltaTimeX = K2Node_Event_DeltaTimeX;

	UObject::ProcessEvent(Func, &Parms);

}

}


