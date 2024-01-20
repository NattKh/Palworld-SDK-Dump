#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// AnimBlueprintGeneratedClass ABP_PlantSlime_Implementation.ABP_PlantSlime_Implementation_C
// (None)

class UClass* UABP_PlantSlime_Implementation_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ABP_PlantSlime_Implementation_C");

	return Clss;
}


// ABP_PlantSlime_Implementation_C ABP_PlantSlime_Implementation.Default__ABP_PlantSlime_Implementation_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UABP_PlantSlime_Implementation_C* UABP_PlantSlime_Implementation_C::GetDefaultObj()
{
	static class UABP_PlantSlime_Implementation_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UABP_PlantSlime_Implementation_C*>(UABP_PlantSlime_Implementation_C::StaticClass()->DefaultObject);

	return Default;
}


// Function ABP_PlantSlime_Implementation.ABP_PlantSlime_Implementation_C.AimingOverride
// (HasOutParams, BlueprintCallable)
// Parameters:
// struct FPoseLink                   DefaultPose                                                      (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FRotator                    AimRotator                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FPoseLink                   AimingOverride                                                   (Parm, OutParm, NoDestructor)

void UABP_PlantSlime_Implementation_C::AimingOverride(const struct FPoseLink& DefaultPose, const struct FRotator& AimRotator, struct FPoseLink* AimingOverride)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ABP_PlantSlime_Implementation_C", "AimingOverride");

	Params::UABP_PlantSlime_Implementation_C_AimingOverride_Params Parms{};

	Parms.DefaultPose = DefaultPose;
	Parms.AimRotator = AimRotator;

	UObject::ProcessEvent(Func, &Parms);

	if (AimingOverride != nullptr)
		*AimingOverride = std::move(Parms.AimingOverride);

}


// Function ABP_PlantSlime_Implementation.ABP_PlantSlime_Implementation_C.LookAtOverride
// (HasOutParams, BlueprintCallable)
// Parameters:
// struct FPoseLink                   InPose                                                           (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FVector                     LookAtWorldLocation                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FPoseLink                   LookAtOverride                                                   (Parm, OutParm, NoDestructor)

void UABP_PlantSlime_Implementation_C::LookAtOverride(const struct FPoseLink& InPose, const struct FVector& LookAtWorldLocation, struct FPoseLink* LookAtOverride)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ABP_PlantSlime_Implementation_C", "LookAtOverride");

	Params::UABP_PlantSlime_Implementation_C_LookAtOverride_Params Parms{};

	Parms.InPose = InPose;
	Parms.LookAtWorldLocation = LookAtWorldLocation;

	UObject::ProcessEvent(Func, &Parms);

	if (LookAtOverride != nullptr)
		*LookAtOverride = std::move(Parms.LookAtOverride);

}


// Function ABP_PlantSlime_Implementation.ABP_PlantSlime_Implementation_C.UpperOverride
// (HasOutParams, BlueprintCallable)
// Parameters:
// struct FPoseLink                   NativePose                                                       (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FPoseLink                   ActionPose                                                       (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FPoseLink                   UpperOverride                                                    (Parm, OutParm, NoDestructor)

void UABP_PlantSlime_Implementation_C::UpperOverride(const struct FPoseLink& NativePose, const struct FPoseLink& ActionPose, struct FPoseLink* UpperOverride)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ABP_PlantSlime_Implementation_C", "UpperOverride");

	Params::UABP_PlantSlime_Implementation_C_UpperOverride_Params Parms{};

	Parms.NativePose = NativePose;
	Parms.ActionPose = ActionPose;

	UObject::ProcessEvent(Func, &Parms);

	if (UpperOverride != nullptr)
		*UpperOverride = std::move(Parms.UpperOverride);

}


// Function ABP_PlantSlime_Implementation.ABP_PlantSlime_Implementation_C.AnimGraph
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                   AnimGraph                                                        (Parm, OutParm, NoDestructor)

void UABP_PlantSlime_Implementation_C::AnimGraph(struct FPoseLink* AnimGraph)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ABP_PlantSlime_Implementation_C", "AnimGraph");

	Params::UABP_PlantSlime_Implementation_C_AnimGraph_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (AnimGraph != nullptr)
		*AnimGraph = std::move(Parms.AnimGraph);

}


// Function ABP_PlantSlime_Implementation.ABP_PlantSlime_Implementation_C.ExecuteUbergraph_ABP_PlantSlime_Implementation
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UABP_PlantSlime_Implementation_C::ExecuteUbergraph_ABP_PlantSlime_Implementation(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ABP_PlantSlime_Implementation_C", "ExecuteUbergraph_ABP_PlantSlime_Implementation");

	Params::UABP_PlantSlime_Implementation_C_ExecuteUbergraph_ABP_PlantSlime_Implementation_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


