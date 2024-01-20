#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xC0 (0x508 - 0x448)
// WidgetBlueprintGeneratedClass WBP_PalStorageMenu.WBP_PalStorageMenu_C
class UWBP_PalStorageMenu_C : public UPalUIPalBoxBase
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x448(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                      Default_In;                                        // 0x450(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWBP_IngameMenu_PalBox_C*              WBP_IngameMenu_PalBox;                             // 0x458(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_UIPalStorageManageModel_C*         Model;                                             // 0x460(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FPalDataTableRowName_UIInputAction    NextBoxInput;                                      // 0x468(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FPalDataTableRowName_UIInputAction    PrevBoxInput;                                      // 0x470(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FDataTableRowHandle                   TitleMsgID;                                        // 0x478(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	struct FDataTableRowHandle                   LoosePalCheckMsgId;                                // 0x488(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	TSoftObjectPtr<class UPalIndividualCharacterSlot> CachedLooseSlot;                                   // 0x498(0x30)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	enum class EPalBoxHoveredSlotType            HoverdSlotType;                                    // 0x4C8(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_43B8[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPalDataTableRowName_UIInputAction    PrevCursorShortcutInput;                           // 0x4CC(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FPalDataTableRowName_UIInputAction    NextCursorShortcutInput;                           // 0x4D4(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FPalDataTableRowName_UIInputAction    SendSlotInput;                                     // 0x4DC(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FPalUIActionBindData                  SendSlotInputHandle;                               // 0x4E4(0x4)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	struct FPalUIActionBindData                  ViewDetailInputHandle;                             // 0x4E8(0x4)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	uint8                                        Pad_43BE[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UPalIndividualCharacterSlot*           CachedLastHoveredSlot;                             // 0x4F0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class FName                                  TabActionName;                                     // 0x4F8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FPalDataTableRowName_UIInputAction    ViewDetailInput;                                   // 0x500(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UWBP_PalStorageMenu_C* GetDefaultObj();

	void SelectSlot(class UPalIndividualCharacterSlot* Slot, enum class EPalItemSlotPressType PressType, class UPalHUDService* CallFunc_GetHUDService_ReturnValue, class UPalUILiftSlotModel* CallFunc_GetLiftSlotModel_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_IsLift_ReturnValue);
	void OnViewDetailInput(class UPalHUDDispatchParameter_MonsterDetail* CallFunc_CreateDispatchParameterForK2Node_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UPalIndividualCharacterHandle* CallFunc_GetHandle_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_IsEmpty_ReturnValue, class UPalHUDService* CallFunc_GetHUDService_ReturnValue, class UPalUILiftSlotModel* CallFunc_GetLiftSlotModel_ReturnValue, bool CallFunc_IsValid_ReturnValue_2, bool CallFunc_IsValid_ReturnValue_3, bool CallFunc_IsLift_ReturnValue);
	void OnSendSlotInput(bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsEmpty_ReturnValue, class UPalHUDService* CallFunc_GetHUDService_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool K2Node_SwitchEnum_CmpSuccess, class UPalUILiftSlotModel* CallFunc_GetLiftSlotModel_ReturnValue, bool CallFunc_IsLift_ReturnValue, bool CallFunc_IsValid_ReturnValue_2);
	void UnregisterPalOperateInput();
	void RegisterPalOperateInput(FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FPalUIActionBindData& CallFunc_RegisterActionBinding_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, const struct FPalUIActionBindData& CallFunc_RegisterActionBinding_ReturnValue_1);
	void OnCursorShortcutNext(bool K2Node_SwitchEnum_CmpSuccess);
	void OnCursorShortcutPrev(bool K2Node_SwitchEnum_CmpSuccess);
	class UWidget* BP_GetDesiredFocusTarget(class UWidget* CallFunc_GetFocusTarget_TargetWidget);
	void RegisterStaticActionInput(FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, const struct FPalUIActionBindData& CallFunc_RegisterActionBinding_ReturnValue, const struct FPalUIActionBindData& CallFunc_RegisterActionBinding_ReturnValue_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, const struct FPalUIActionBindData& CallFunc_RegisterActionBinding_ReturnValue_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, const struct FPalUIActionBindData& CallFunc_RegisterActionBinding_ReturnValue_3, const struct FPalUIActionBindData& CallFunc_RegisterActionBinding_ReturnValue_4);
	void OnRecieveLostDialogResponse(bool bResult, class UObject* CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue, bool CallFunc_IsValidSoftObjectReference_ReturnValue, class UPalIndividualCharacterSlot* K2Node_DynamicCast_AsPal_Individual_Character_Slot, bool K2Node_DynamicCast_bSuccess);
	void CheckLoosePal(class UPalIndividualCharacterSlot* Slot, class UPalIndividualCharacterHandle* CallFunc_GetHandle_ReturnValue, bool CallFunc_IsValid_ReturnValue, class FText CallFunc_GetLocalizedText_ReturnValue, class UPalIndividualCharacterParameter* CallFunc_TryGetIndividualParameter_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_IsValid_ReturnValue_1, const class FString& CallFunc_GetNickName_outName, class FText CallFunc_Conv_StringToText_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue);
	void Setup(class UPalHUDDispatchParameterBase* CallFunc_GetParam_ReturnValue, class UPalHUDDispatchParameter_PalBox* K2Node_DynamicCast_AsPal_HUDDispatch_Parameter_Pal_Box, bool K2Node_DynamicCast_bSuccess);
	void OnSetup();
	void OnUpdatePageWorkerList(TArray<class UPalIndividualCharacterSlot*>& SlotList);
	void OnUpdatePagePalBoxList(int32 NowPage, TArray<class UPalIndividualCharacterSlot*>& SlotList);
	void BndEvt__WBP_PalStorageMenu_WBP_IngameMenu_PalBox_K2Node_ComponentBoundEvent_4_OnClickedPalBoxPal__DelegateSignature(class UPalIndividualCharacterSlot* Slot, enum class EPalItemSlotPressType PressType);
	void BndEvt__WBP_PalStorageMenu_WBP_IngameMenu_PalBox_K2Node_ComponentBoundEvent_5_OnClickedPartySlot__DelegateSignature(class UPalIndividualCharacterSlot* TargetSlot);
	void BndEvt__WBP_PalStorageMenu_WBP_IngameMenu_PalBox_K2Node_ComponentBoundEvent_7_OnClickedBaseCampPal__DelegateSignature(class UPalIndividualCharacterSlot* Slot, enum class EPalItemSlotPressType PressType);
	void BndEvt__WBP_PalStorageMenu_WBP_IngameMenu_PalBox_K2Node_ComponentBoundEvent_6_OnClickedPalBoxNextPage__DelegateSignature();
	void BndEvt__WBP_PalStorageMenu_WBP_IngameMenu_PalBox_K2Node_ComponentBoundEvent_8_OnClickedPalBoxPrevPage__DelegateSignature();
	void BndEvt__WBP_PalStorageMenu_WBP_IngameMenu_PalBox_K2Node_ComponentBoundEvent_9_OnClickedCloseButton__DelegateSignature();
	void BndEvt__WBP_PalStorageMenu_WBP_IngameMenu_PalBox_K2Node_ComponentBoundEvent_10_OnAnySlotHovered__DelegateSignature(class UPalIndividualCharacterSlot* Slot);
	void BndEvt__WBP_PalStorageMenu_WBP_IngameMenu_PalBox_K2Node_ComponentBoundEvent_11_OnClickedLooseButton__DelegateSignature();
	void BndEvt__WBP_PalStorageMenu_WBP_IngameMenu_PalBox_K2Node_ComponentBoundEvent_0_OnHoveredPartySlot__DelegateSignature(class UPalIndividualCharacterSlot* Slot);
	void BndEvt__WBP_PalStorageMenu_WBP_IngameMenu_PalBox_K2Node_ComponentBoundEvent_1_OnHoveredBoxSlot__DelegateSignature(class UPalIndividualCharacterSlot* Slot);
	void BndEvt__WBP_PalStorageMenu_WBP_IngameMenu_PalBox_K2Node_ComponentBoundEvent_2_OnHoveredWorkerSlot__DelegateSignature(class UPalIndividualCharacterSlot* Slot);
	void BndEvt__WBP_PalStorageMenu_WBP_IngameMenu_PalBox_K2Node_ComponentBoundEvent_3_OnAnySlotUnhovered__DelegateSignature();
	void BndEvt__WBP_PalStorageMenu_WBP_IngameMenu_PalBox_K2Node_ComponentBoundEvent_12_OnRightClickedBoxSlot__DelegateSignature(class UPalIndividualCharacterSlot* Slot);
	void BndEvt__WBP_PalStorageMenu_WBP_IngameMenu_PalBox_K2Node_ComponentBoundEvent_13_OnRightClickedWorkerSlot__DelegateSignature(class UPalIndividualCharacterSlot* Slot);
	void BndEvt__WBP_PalStorageMenu_WBP_IngameMenu_PalBox_K2Node_ComponentBoundEvent_14_OnSelectedSortType__DelegateSignature(enum class EPalCharacterContainerSortType SortType);
	void ExecuteUbergraph_WBP_PalStorageMenu(int32 EntryPoint, enum class EPalCharacterContainerSortType K2Node_ComponentBoundEvent_SortType, TArray<class UPalIndividualCharacterSlot*>& K2Node_Event_slotList_1, int32 K2Node_Event_nowPage, TArray<class UPalIndividualCharacterSlot*>& K2Node_Event_slotList, class UPalIndividualCharacterSlot* K2Node_ComponentBoundEvent_Slot_7, enum class EPalItemSlotPressType K2Node_ComponentBoundEvent_pressType_1, class UPalIndividualCharacterSlot* K2Node_ComponentBoundEvent_targetSlot, class UPalIndividualCharacterSlot* K2Node_ComponentBoundEvent_Slot_6, enum class EPalItemSlotPressType K2Node_ComponentBoundEvent_pressType, class UPalIndividualCharacterSlot* K2Node_ComponentBoundEvent_Slot_5, bool CallFunc_IsEmpty_ReturnValue, class UPalHUDService* CallFunc_GetHUDService_ReturnValue, class UPalUILiftSlotModel* CallFunc_GetLiftSlotModel_ReturnValue, class UPalIndividualCharacterSlot* K2Node_ComponentBoundEvent_Slot_4, bool CallFunc_IsLift_ReturnValue, TSoftObjectPtr<class UPalIndividualCharacterSlot> CallFunc_Conv_ObjectToSoftObjectReference_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UPalIndividualCharacterSlot* K2Node_ComponentBoundEvent_Slot_3, class UPalIndividualCharacterSlot* K2Node_ComponentBoundEvent_Slot_2, class UPalHUDService* CallFunc_GetHUDService_ReturnValue_1, class UPalUILiftSlotModel* CallFunc_GetLiftSlotModel_ReturnValue_1, bool CallFunc_IsLift_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_1, class UPalIndividualCharacterSlot* K2Node_ComponentBoundEvent_Slot_1, class UPalIndividualCharacterSlot* K2Node_ComponentBoundEvent_Slot, class UPalHUDService* CallFunc_GetHUDService_ReturnValue_2, class UPalTutorialManager* CallFunc_GetTutorialManager_ReturnValue, class UPalUILiftSlotModel* CallFunc_GetLiftSlotModel_ReturnValue_2, bool CallFunc_IsLift_ReturnValue_2);
};

}


