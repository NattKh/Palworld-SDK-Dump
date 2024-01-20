#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x48 - 0x48)
// BlueprintGeneratedClass BP_UIOtomoListModel.BP_UIOtomoListModel_C
class UBP_UIOtomoListModel_C : public UPalUIOtomoListModel
{
public:

	static class UClass* StaticClass();
	static class UBP_UIOtomoListModel_C* GetDefaultObj();

	int32 GetSlotCountInPage(TArray<class UPalIndividualCharacterSlot*>& CallFunc_GetCurrentPageSlots_OutSlots, int32 CallFunc_Array_Length_ReturnValue);
	void GetCurrentPageSlots(TArray<class UPalIndividualCharacterSlot*>* OutSlots, class UPalOtomoHolderComponentBase* OtomoHolder, class UPalIndividualCharacterContainer* CallFunc_TryGetContainer_Container, bool CallFunc_TryGetContainer_ReturnValue, class APlayerController* CallFunc_GetLocalPlayerController_ReturnValue, TArray<class UPalIndividualCharacterSlot*>& CallFunc_GetSlots_ReturnValue, class UPalOtomoHolderComponentBase* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_IsValid_ReturnValue);
};

}


