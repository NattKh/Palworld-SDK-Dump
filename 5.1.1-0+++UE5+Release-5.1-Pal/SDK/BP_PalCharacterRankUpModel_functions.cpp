#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_PalCharacterRankUpModel.BP_PalCharacterRankUpModel_C
// (None)

class UClass* UBP_PalCharacterRankUpModel_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_PalCharacterRankUpModel_C");

	return Clss;
}


// BP_PalCharacterRankUpModel_C BP_PalCharacterRankUpModel.Default__BP_PalCharacterRankUpModel_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_PalCharacterRankUpModel_C* UBP_PalCharacterRankUpModel_C::GetDefaultObj()
{
	static class UBP_PalCharacterRankUpModel_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_PalCharacterRankUpModel_C*>(UBP_PalCharacterRankUpModel_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_PalCharacterRankUpModel.BP_PalCharacterRankUpModel_C.IsSelectableSlot
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class UPalIndividualCharacterSlot* Slot                                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsSelectableSlotInternal_ReturnValue                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool UBP_PalCharacterRankUpModel_C::IsSelectableSlot(class UPalIndividualCharacterSlot* Slot, bool CallFunc_IsSelectableSlotInternal_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PalCharacterRankUpModel_C", "IsSelectableSlot");

	Params::UBP_PalCharacterRankUpModel_C_IsSelectableSlot_Params Parms{};

	Parms.Slot = Slot;
	Parms.CallFunc_IsSelectableSlotInternal_ReturnValue = CallFunc_IsSelectableSlotInternal_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}

}


