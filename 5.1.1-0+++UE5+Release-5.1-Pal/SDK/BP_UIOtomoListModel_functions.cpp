#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_UIOtomoListModel.BP_UIOtomoListModel_C
// (None)

class UClass* UBP_UIOtomoListModel_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_UIOtomoListModel_C");

	return Clss;
}


// BP_UIOtomoListModel_C BP_UIOtomoListModel.Default__BP_UIOtomoListModel_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_UIOtomoListModel_C* UBP_UIOtomoListModel_C::GetDefaultObj()
{
	static class UBP_UIOtomoListModel_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_UIOtomoListModel_C*>(UBP_UIOtomoListModel_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_UIOtomoListModel.BP_UIOtomoListModel_C.GetSlotCountInPage
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UPalIndividualCharacterSlot*>CallFunc_GetCurrentPageSlots_OutSlots                            (ReferenceParm)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

int32 UBP_UIOtomoListModel_C::GetSlotCountInPage(TArray<class UPalIndividualCharacterSlot*>& CallFunc_GetCurrentPageSlots_OutSlots, int32 CallFunc_Array_Length_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_UIOtomoListModel_C", "GetSlotCountInPage");

	Params::UBP_UIOtomoListModel_C_GetSlotCountInPage_Params Parms{};

	Parms.CallFunc_GetCurrentPageSlots_OutSlots = CallFunc_GetCurrentPageSlots_OutSlots;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_UIOtomoListModel.BP_UIOtomoListModel_C.GetCurrentPageSlots
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// TArray<class UPalIndividualCharacterSlot*>OutSlots                                                         (Parm, OutParm)
// class UPalOtomoHolderComponentBase*OtomoHolder                                                      (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UPalIndividualCharacterContainer*CallFunc_TryGetContainer_Container                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_TryGetContainer_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetLocalPlayerController_ReturnValue                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TArray<class UPalIndividualCharacterSlot*>CallFunc_GetSlots_ReturnValue                                    (ReferenceParm)
// class UPalOtomoHolderComponentBase*CallFunc_GetComponentByClass_ReturnValue                         (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_UIOtomoListModel_C::GetCurrentPageSlots(TArray<class UPalIndividualCharacterSlot*>* OutSlots, class UPalOtomoHolderComponentBase* OtomoHolder, class UPalIndividualCharacterContainer* CallFunc_TryGetContainer_Container, bool CallFunc_TryGetContainer_ReturnValue, class APlayerController* CallFunc_GetLocalPlayerController_ReturnValue, TArray<class UPalIndividualCharacterSlot*>& CallFunc_GetSlots_ReturnValue, class UPalOtomoHolderComponentBase* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_UIOtomoListModel_C", "GetCurrentPageSlots");

	Params::UBP_UIOtomoListModel_C_GetCurrentPageSlots_Params Parms{};

	Parms.OtomoHolder = OtomoHolder;
	Parms.CallFunc_TryGetContainer_Container = CallFunc_TryGetContainer_Container;
	Parms.CallFunc_TryGetContainer_ReturnValue = CallFunc_TryGetContainer_ReturnValue;
	Parms.CallFunc_GetLocalPlayerController_ReturnValue = CallFunc_GetLocalPlayerController_ReturnValue;
	Parms.CallFunc_GetSlots_ReturnValue = CallFunc_GetSlots_ReturnValue;
	Parms.CallFunc_GetComponentByClass_ReturnValue = CallFunc_GetComponentByClass_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (OutSlots != nullptr)
		*OutSlots = std::move(Parms.OutSlots);

}

}


