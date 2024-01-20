#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_Kitsunebi.BP_Kitsunebi_C
// (Actor, Pawn)

class UClass* ABP_Kitsunebi_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_Kitsunebi_C");

	return Clss;
}


// BP_Kitsunebi_C BP_Kitsunebi.Default__BP_Kitsunebi_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_Kitsunebi_C* ABP_Kitsunebi_C::GetDefaultObj()
{
	static class ABP_Kitsunebi_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_Kitsunebi_C*>(ABP_Kitsunebi_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_Kitsunebi.BP_Kitsunebi_C.GetVisual_ExceptMainMesh_SyncAnyway
// (Event, Protected, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class USceneComponent*>     OutComponent                                                     (Parm, OutParm, ContainsInstancedReference)
// TArray<class USceneComponent*>     NewLocalVar_0                                                    (Edit, BlueprintVisible, ContainsInstancedReference)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Kitsunebi_C::GetVisual_ExceptMainMesh_SyncAnyway(TArray<class USceneComponent*>* OutComponent, const TArray<class USceneComponent*>& NewLocalVar_0, int32 CallFunc_Array_Add_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Kitsunebi_C", "GetVisual_ExceptMainMesh_SyncAnyway");

	Params::ABP_Kitsunebi_C_GetVisual_ExceptMainMesh_SyncAnyway_Params Parms{};

	Parms.NewLocalVar_0 = NewLocalVar_0;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (OutComponent != nullptr)
		*OutComponent = std::move(Parms.OutComponent);

}


// Function BP_Kitsunebi.BP_Kitsunebi_C.BndEvt__BP_Kitsunebi_PalPartnerSkillParameter_K2Node_ComponentBoundEvent_2_OnStop__DelegateSignature
// (BlueprintEvent)
// Parameters:

void ABP_Kitsunebi_C::BndEvt__BP_Kitsunebi_PalPartnerSkillParameter_K2Node_ComponentBoundEvent_2_OnStop__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Kitsunebi_C", "BndEvt__BP_Kitsunebi_PalPartnerSkillParameter_K2Node_ComponentBoundEvent_2_OnStop__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Kitsunebi.BP_Kitsunebi_C.ExecuteUbergraph_BP_Kitsunebi
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APalPlayerCharacter*         CallFunc_GetTrainerPlayer_ReturnValue                            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APalPlayerCharacter*         CallFunc_GetTrainerPlayer_ReturnValue_1                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class APalPlayerCharacter*         CallFunc_GetTrainerPlayer_ReturnValue_2                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_GetTransform_ReturnValue                                (ConstParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_K2_GetActorRotation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_BreakTransform_Location                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_BreakTransform_Rotation                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_BreakTransform_Scale                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_K2_SetActorRotation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                  CallFunc_K2_SetActorLocation_SweepHitResult                      (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// bool                               CallFunc_K2_SetActorLocation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Kitsunebi_C::ExecuteUbergraph_BP_Kitsunebi(int32 EntryPoint, class APalPlayerCharacter* CallFunc_GetTrainerPlayer_ReturnValue, bool CallFunc_IsValid_ReturnValue, class APalPlayerCharacter* CallFunc_GetTrainerPlayer_ReturnValue_1, class APalPlayerCharacter* CallFunc_GetTrainerPlayer_ReturnValue_2, const struct FTransform& CallFunc_GetTransform_ReturnValue, const struct FRotator& CallFunc_K2_GetActorRotation_ReturnValue, const struct FVector& CallFunc_BreakTransform_Location, const struct FRotator& CallFunc_BreakTransform_Rotation, const struct FVector& CallFunc_BreakTransform_Scale, bool CallFunc_K2_SetActorRotation_ReturnValue, const struct FHitResult& CallFunc_K2_SetActorLocation_SweepHitResult, bool CallFunc_K2_SetActorLocation_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Kitsunebi_C", "ExecuteUbergraph_BP_Kitsunebi");

	Params::ABP_Kitsunebi_C_ExecuteUbergraph_BP_Kitsunebi_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetTrainerPlayer_ReturnValue = CallFunc_GetTrainerPlayer_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetTrainerPlayer_ReturnValue_1 = CallFunc_GetTrainerPlayer_ReturnValue_1;
	Parms.CallFunc_GetTrainerPlayer_ReturnValue_2 = CallFunc_GetTrainerPlayer_ReturnValue_2;
	Parms.CallFunc_GetTransform_ReturnValue = CallFunc_GetTransform_ReturnValue;
	Parms.CallFunc_K2_GetActorRotation_ReturnValue = CallFunc_K2_GetActorRotation_ReturnValue;
	Parms.CallFunc_BreakTransform_Location = CallFunc_BreakTransform_Location;
	Parms.CallFunc_BreakTransform_Rotation = CallFunc_BreakTransform_Rotation;
	Parms.CallFunc_BreakTransform_Scale = CallFunc_BreakTransform_Scale;
	Parms.CallFunc_K2_SetActorRotation_ReturnValue = CallFunc_K2_SetActorRotation_ReturnValue;
	Parms.CallFunc_K2_SetActorLocation_SweepHitResult = CallFunc_K2_SetActorLocation_SweepHitResult;
	Parms.CallFunc_K2_SetActorLocation_ReturnValue = CallFunc_K2_SetActorLocation_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


