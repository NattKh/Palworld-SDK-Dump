#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// AnimBlueprintGeneratedClass ABP_Player_Hair014_Implementation.ABP_Player_Hair014_Implementation_C
// (None)

class UClass* UABP_Player_Hair014_Implementation_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ABP_Player_Hair014_Implementation_C");

	return Clss;
}


// ABP_Player_Hair014_Implementation_C ABP_Player_Hair014_Implementation.Default__ABP_Player_Hair014_Implementation_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UABP_Player_Hair014_Implementation_C* UABP_Player_Hair014_Implementation_C::GetDefaultObj()
{
	static class UABP_Player_Hair014_Implementation_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UABP_Player_Hair014_Implementation_C*>(UABP_Player_Hair014_Implementation_C::StaticClass()->DefaultObject);

	return Default;
}


// Function ABP_Player_Hair014_Implementation.ABP_Player_Hair014_Implementation_C.HairLayer
// (HasOutParams, BlueprintCallable)
// Parameters:
// struct FPoseLink                   InPose                                                           (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FPoseLink                   HairLayer                                                        (Parm, OutParm, NoDestructor)

void UABP_Player_Hair014_Implementation_C::HairLayer(const struct FPoseLink& InPose, struct FPoseLink* HairLayer)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ABP_Player_Hair014_Implementation_C", "HairLayer");

	Params::UABP_Player_Hair014_Implementation_C_HairLayer_Params Parms{};

	Parms.InPose = InPose;

	UObject::ProcessEvent(Func, &Parms);

	if (HairLayer != nullptr)
		*HairLayer = std::move(Parms.HairLayer);

}


// Function ABP_Player_Hair014_Implementation.ABP_Player_Hair014_Implementation_C.AnimGraph
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                   AnimGraph                                                        (Parm, OutParm, NoDestructor)

void UABP_Player_Hair014_Implementation_C::AnimGraph(struct FPoseLink* AnimGraph)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ABP_Player_Hair014_Implementation_C", "AnimGraph");

	Params::UABP_Player_Hair014_Implementation_C_AnimGraph_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (AnimGraph != nullptr)
		*AnimGraph = std::move(Parms.AnimGraph);

}


// Function ABP_Player_Hair014_Implementation.ABP_Player_Hair014_Implementation_C.ExecuteUbergraph_ABP_Player_Hair014_Implementation
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UABP_Player_Hair014_Implementation_C::ExecuteUbergraph_ABP_Player_Hair014_Implementation(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ABP_Player_Hair014_Implementation_C", "ExecuteUbergraph_ABP_Player_Hair014_Implementation");

	Params::UABP_Player_Hair014_Implementation_C_ExecuteUbergraph_ABP_Player_Hair014_Implementation_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


