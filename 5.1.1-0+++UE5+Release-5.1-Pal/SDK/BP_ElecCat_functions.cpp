#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_ElecCat.BP_ElecCat_C
// (Actor, Pawn)

class UClass* ABP_ElecCat_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_ElecCat_C");

	return Clss;
}


// BP_ElecCat_C BP_ElecCat.Default__BP_ElecCat_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_ElecCat_C* ABP_ElecCat_C::GetDefaultObj()
{
	static class ABP_ElecCat_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_ElecCat_C*>(ABP_ElecCat_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_ElecCat.BP_ElecCat_C.GetVisual_ExceptMainMesh_SyncAnyway
// (Event, Protected, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class USceneComponent*>     OutComponent                                                     (Parm, OutParm, ContainsInstancedReference)
// TArray<class USceneComponent*>     NewLocalVar                                                      (Edit, BlueprintVisible, ContainsInstancedReference)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_ElecCat_C::GetVisual_ExceptMainMesh_SyncAnyway(TArray<class USceneComponent*>* OutComponent, const TArray<class USceneComponent*>& NewLocalVar, int32 CallFunc_Array_Add_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ElecCat_C", "GetVisual_ExceptMainMesh_SyncAnyway");

	Params::ABP_ElecCat_C_GetVisual_ExceptMainMesh_SyncAnyway_Params Parms{};

	Parms.NewLocalVar = NewLocalVar;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (OutComponent != nullptr)
		*OutComponent = std::move(Parms.OutComponent);

}

}


