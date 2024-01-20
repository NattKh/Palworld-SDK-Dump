#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_StungArrow.BP_StungArrow_C
// (Actor)

class UClass* ABP_StungArrow_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_StungArrow_C");

	return Clss;
}


// BP_StungArrow_C BP_StungArrow.Default__BP_StungArrow_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_StungArrow_C* ABP_StungArrow_C::GetDefaultObj()
{
	static class ABP_StungArrow_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_StungArrow_C*>(ABP_StungArrow_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_StungArrow.BP_StungArrow_C.Set Attach Mesh
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USkeletalMeshComponent*      AttachMeshComponent                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void ABP_StungArrow_C::Set_Attach_Mesh(class USkeletalMeshComponent* AttachMeshComponent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_StungArrow_C", "Set Attach Mesh");

	Params::ABP_StungArrow_C_Set_Attach_Mesh_Params Parms{};

	Parms.AttachMeshComponent = AttachMeshComponent;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_StungArrow.BP_StungArrow_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                              DeltaSeconds                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_StungArrow_C::ReceiveTick(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_StungArrow_C", "ReceiveTick");

	Params::ABP_StungArrow_C_ReceiveTick_Params Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_StungArrow.BP_StungArrow_C.ExecuteUbergraph_BP_StungArrow
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_DeltaSeconds                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_StungArrow_C::ExecuteUbergraph_BP_StungArrow(int32 EntryPoint, float K2Node_Event_DeltaSeconds, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_StungArrow_C", "ExecuteUbergraph_BP_StungArrow");

	Params::ABP_StungArrow_C_ExecuteUbergraph_BP_StungArrow_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_DeltaSeconds = K2Node_Event_DeltaSeconds;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


