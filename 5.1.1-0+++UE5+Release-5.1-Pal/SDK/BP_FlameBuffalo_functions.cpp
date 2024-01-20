#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_FlameBuffalo.BP_FlameBuffalo_C
// (Actor, Pawn)

class UClass* ABP_FlameBuffalo_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_FlameBuffalo_C");

	return Clss;
}


// BP_FlameBuffalo_C BP_FlameBuffalo.Default__BP_FlameBuffalo_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_FlameBuffalo_C* ABP_FlameBuffalo_C::GetDefaultObj()
{
	static class ABP_FlameBuffalo_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_FlameBuffalo_C*>(ABP_FlameBuffalo_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_FlameBuffalo.BP_FlameBuffalo_C.GetVisual_ExceptMainMesh_SyncAnyway
// (Event, Protected, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class USceneComponent*>     OutComponent                                                     (Parm, OutParm, ContainsInstancedReference)
// TArray<class USceneComponent*>     NewLocalVar                                                      (Edit, BlueprintVisible, ContainsInstancedReference)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_FlameBuffalo_C::GetVisual_ExceptMainMesh_SyncAnyway(TArray<class USceneComponent*>* OutComponent, const TArray<class USceneComponent*>& NewLocalVar, int32 CallFunc_Array_Add_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_FlameBuffalo_C", "GetVisual_ExceptMainMesh_SyncAnyway");

	Params::ABP_FlameBuffalo_C_GetVisual_ExceptMainMesh_SyncAnyway_Params Parms{};

	Parms.NewLocalVar = NewLocalVar;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (OutComponent != nullptr)
		*OutComponent = std::move(Parms.OutComponent);

}

}


