#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x270 (0x4E8 - 0x278)
// WidgetBlueprintGeneratedClass WBP_IngameMenu_PalBox.WBP_IngameMenu_PalBox_C
class UWBP_IngameMenu_PalBox_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x278(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                      Anm_Close;                                         // 0x280(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      Anm_Open;                                          // 0x288(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UCanvasPanel*                          Canvas_PalBox;                                     // 0x290(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                          Canvas_PalCamp;                                    // 0x298(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                               CloseButton;                                       // 0x2A0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                        HorizontalBox_PageControle;                        // 0x2A8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_PalTextBlock_C*                    Text_BaseCampName;                                 // 0x2B0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_PalTextBlock_C*                    Text_BoxName;                                      // 0x2B8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_PalCharacterScrollList_C*         WBP_BaseCampPalList;                               // 0x2C0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_PalCharacterScrollList_C*         WBP_BoxPalScrollList;                              // 0x2C8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_GuildHeadButton_C*                WBP_BoxSortCombo;                                  // 0x2D0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_IngameMenu_PalBox_PalDetail_C*    WBP_IngameMenu_PalBox_PalDetail;                   // 0x2D8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_IngameMenu_PalBox_PalList_C*      WBP_IngameMenu_PalBox_PalList_0;                   // 0x2E0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_IngameMenu_PalBox_PalList_C*      WBP_IngameMenu_PalBox_PalList_1;                   // 0x2E8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_IngameMenu_PalBox_PalList_C*      WBP_IngameMenu_PalBox_PalList_2;                   // 0x2F0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_IngameMenu_PalBox_PalList_C*      WBP_IngameMenu_PalBox_PalList_3;                   // 0x2F8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_IngameMenu_PalBox_PalList_C*      WBP_IngameMenu_PalBox_PalList_4;                   // 0x300(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Menu_btn_C*                       WBP_Menu_btn;                                      // 0x308(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	TArray<class UWBP_IngameMenu_PalBox_PalList_C*> PartyPalDetails;                                   // 0x310(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	FMulticastInlineDelegateProperty_            OnClickedPartySlot;                                // 0x320(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	TArray<class UWBP_IngameMenu_PalBox_PageControl_C*> PalBoxPageSelectImage;                             // 0x330(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	int32                                        LastPalBoxPageNum;                                 // 0x340(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3CDE[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FMulticastInlineDelegateProperty_            OnClickedPalBoxPal;                                // 0x348(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_            OnClickedBaseCampPal;                              // 0x358(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_            OnClickedPalBoxNextPage;                           // 0x368(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_            OnClickedPalBoxPrevPage;                           // 0x378(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_            OnClickedCloseButton;                              // 0x388(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_            OnAnySlotHovered;                                  // 0x398(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_            OnAnySlotUnhovered;                                // 0x3A8(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_            OnClickedLooseButton;                              // 0x3B8(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_            OnHoveredPartySlot;                                // 0x3C8(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_            OnHoveredBoxSlot;                                  // 0x3D8(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_            OnHoveredWorkerSlot;                               // 0x3E8(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	struct FDataTableRowHandle                   BoxNameMsgID;                                      // 0x3F8(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	FMulticastInlineDelegateProperty_            OnRightClickedBoxSlot;                             // 0x408(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_            OnRightClickedWorkerSlot;                          // 0x418(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	TMap<enum class EPalCharacterContainerSortType, struct FDataTableRowHandle> BoxSortTypeMsgIDMap;                               // 0x428(0x50)(Edit, BlueprintVisible, DisableEditOnInstance)
	TMap<class FString, enum class EPalCharacterContainerSortType> BoxSortTypeMap;                                    // 0x478(0x50)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<class FString>                        BoxSortTypeStringArray;                            // 0x4C8(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	FMulticastInlineDelegateProperty_            OnSelectedSortType;                                // 0x4D8(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

	static class UClass* StaticClass();
	static class UWBP_IngameMenu_PalBox_C* GetDefaultObj();

	class UWidget* DoCustomNavigation(enum class EUINavigation Navigation, class UWidget* CallFunc_GetTopFocusTarget_Widget);
	class UWidget* CustomNavi_ToSortButton(enum class EUINavigation Navigation);
	void FocusToWorkerTopSlot();
	void FocusToBoxTopSlot();
	void FocusToPartyTopSlot();
	void Display_Pal_Detail(class UPalIndividualCharacterSlot* Slot, enum class EPalBoxHoveredSlotType SlotType, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UPalIndividualCharacterHandle* CallFunc_GetHandle_ReturnValue, bool CallFunc_IsValid_ReturnValue_1);
	void SetCurrentPalBoxPageNum(int32 PageNum, int32 CallFunc_Add_IntInt_ReturnValue, class UWBP_IngameMenu_PalBox_PageControl_C* CallFunc_Array_Get_Item, int64 CallFunc_Conv_IntToInt64_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_GetLocalizedTextFromHandle_Text, class FText CallFunc_Format_ReturnValue, class UWBP_IngameMenu_PalBox_PageControl_C* CallFunc_Array_Get_Item_1);
	void SetPalBoxList(TArray<class UPalIndividualCharacterSlot*>& TargetSlots, int32 PageNum, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, int32 Temp_int_Variable, TArray<class UWidget*>& CallFunc_Get_All_Children_widgets, class UWidget* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue);
	void SetBaseCampPalList(TArray<class UPalIndividualCharacterSlot*>& Slots);
	void GetFocusTarget(class UWidget** TargetWidget);
	void Setup_Party_Pal(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class UPalOtomoHolderComponentBase* CallFunc_GetOtomoHolderComponent_ReturnValue, class UWBP_IngameMenu_PalBox_PalList_C* CallFunc_Array_Get_Item, TArray<class UPalIndividualCharacterSlot*>& CallFunc_GetSlots_Slots, int32 CallFunc_Array_Length_ReturnValue, class UPalIndividualCharacterSlot* CallFunc_Array_Get_Item_1, bool CallFunc_Less_IntInt_ReturnValue);
	void Setup();
	void AnmEvent_Open();
	void AnmEvent_Close();
	void OnInitialized();
	void OnClickedPartySlotInternal(class UPalIndividualCharacterSlot* TargetSlot);
	void BndEvt__WBP_IngameMenu_PalBox_WBP_BoxPalScrollList_K2Node_ComponentBoundEvent_1_OnCreatedSlot__DelegateSignature(class UWBP_PalCharacterSlotButtonBase_C* CreatedSlot);
	void BndEvt__WBP_IngameMenu_PalBox_WBP_BaseCampPalList_K2Node_ComponentBoundEvent_0_OnCreatedSlot__DelegateSignature(class UWBP_PalCharacterSlotButtonBase_C* CreatedSlot);
	void BndEvt__WBP_IngameMenu_PalBox_WBP_BoxPalScrollList_K2Node_ComponentBoundEvent_2_OnLeftClickedSlot__DelegateSignature(class UWBP_PalCharacterSlotButtonBase_C* Widget, enum class EPalItemSlotPressType PressType);
	void BndEvt__WBP_IngameMenu_PalBox_WBP_BaseCampPalList_K2Node_ComponentBoundEvent_3_OnLeftClickedSlot__DelegateSignature(class UWBP_PalCharacterSlotButtonBase_C* Widget, enum class EPalItemSlotPressType PressType);
	void OnHoveredPartySlot_Internal(class UPalIndividualCharacterSlot* Slot);
	void BndEvt__WBP_IngameMenu_PalBox_WBP_BoxPalScrollList_K2Node_ComponentBoundEvent_7_OnHoveredSlot__DelegateSignature(class UWBP_PalCharacterSlotButtonBase_C* Widget);
	void BndEvt__WBP_IngameMenu_PalBox_WBP_BaseCampPalList_K2Node_ComponentBoundEvent_8_OnHoveredSlot__DelegateSignature(class UWBP_PalCharacterSlotButtonBase_C* Widget);
	void BndEvt__WBP_IngameMenu_PalBox_WBP_BoxPalScrollList_K2Node_ComponentBoundEvent_4_OnUnhoveredSlot__DelegateSignature(class UWBP_PalCharacterSlotButtonBase_C* Widget);
	void OnUnhoveredPartySlot_Internal();
	void BndEvt__WBP_IngameMenu_PalBox_WBP_BaseCampPalList_K2Node_ComponentBoundEvent_5_OnUnhoveredSlot__DelegateSignature(class UWBP_PalCharacterSlotButtonBase_C* Widget);
	void BndEvt__WBP_IngameMenu_PalBox_WBP_BoxPalScrollList_K2Node_ComponentBoundEvent_9_OnRightClickedSlot__DelegateSignature(class UWBP_PalCharacterSlotButtonBase_C* Widget);
	void BndEvt__WBP_IngameMenu_PalBox_WBP_BaseCampPalList_K2Node_ComponentBoundEvent_10_OnRightClickedSlot__DelegateSignature(class UWBP_PalCharacterSlotButtonBase_C* Widget);
	void BndEvt__WBP_InGameMainMenu_WBP_Menu_btn_K2Node_ComponentBoundEvent_0_OnButtonClicked__DelegateSignature();
	void BndEvt__WBP_IngameMenu_PalBox_WBP_BoxSortCombo_K2Node_ComponentBoundEvent_6_OnSelected__DelegateSignature(const class FString& SelectedOption);
	void Construct();
	void BndEvt__WBP_IngameMenu_PalBox_WBP_BoxSortCombo_K2Node_ComponentBoundEvent_12_OnOpenedDropDown__DelegateSignature();
	void BndEvt__WBP_IngameMenu_PalBox_WBP_BoxSortCombo_K2Node_ComponentBoundEvent_13_OnRemovedFocus__DelegateSignature();
	void BndEvt__WBP_IngameMenu_PalBox_WBP_BoxSortCombo_K2Node_ComponentBoundEvent_14_OnAddFocus__DelegateSignature();
	void ExecuteUbergraph_WBP_IngameMenu_PalBox(int32 EntryPoint, int32 CallFunc_Array_Length_ReturnValue, int32 Temp_int_Variable, int32 Temp_int_Variable_1, uint8 CallFunc_Conv_IntToByte_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, uint8 CallFunc_GetValidValue_ReturnValue, uint8 CallFunc_Conv_IntToByte_ReturnValue_1, uint8 CallFunc_GetEnumeratorValueFromIndex_ReturnValue, int32 CallFunc_Conv_ByteToInt_ReturnValue, const class FString& Temp_string_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 Temp_int_Array_Index_Variable, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, int32 CallFunc_MakeLiteralInt_ReturnValue, int32 Temp_int_Array_Index_Variable_1, bool CallFunc_Less_IntInt_ReturnValue, int32 Temp_int_Loop_Counter_Variable_1, bool CallFunc_Less_IntInt_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue_2, int32 Temp_int_Array_Index_Variable_2, class UWBP_IngameMenu_PalBox_PageControl_C* CallFunc_Array_Get_Item, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_1, class UPalIndividualCharacterSlot* K2Node_CustomEvent_targetSlot, TArray<class UWBP_IngameMenu_PalBox_PalList_C*>& K2Node_MakeArray_Array, class UWBP_PalCharacterSlotButtonBase_C* K2Node_ComponentBoundEvent_createdSlot_1, TArray<class UWidget*>& CallFunc_GetAllChildren_ReturnValue, class UWBP_PalCommonCharacterSlotButton_C* K2Node_DynamicCast_AsWBP_Pal_Common_Character_Slot_Button, bool K2Node_DynamicCast_bSuccess, class UWidget* CallFunc_Array_Get_Item_1, class UWBP_IngameMenu_PalBox_PageControl_C* K2Node_DynamicCast_AsWBP_Ingame_Menu_Pal_Box_Page_Control, bool K2Node_DynamicCast_bSuccess_1, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue_2, class UWBP_PalCharacterSlotButtonBase_C* K2Node_ComponentBoundEvent_createdSlot, class UWBP_PalCommonCharacterSlotButton_C* K2Node_DynamicCast_AsWBP_Pal_Common_Character_Slot_Button_1, bool K2Node_DynamicCast_bSuccess_2, class UWBP_PalCharacterSlotButtonBase_C* K2Node_ComponentBoundEvent_Widget_7, enum class EPalItemSlotPressType K2Node_ComponentBoundEvent_pressType_1, class UPalIndividualCharacterSlot* CallFunc_GetTargetSlot_targetSlot, class UWBP_PalCharacterSlotButtonBase_C* K2Node_ComponentBoundEvent_Widget_6, enum class EPalItemSlotPressType K2Node_ComponentBoundEvent_pressType, class UPalIndividualCharacterSlot* CallFunc_GetTargetSlot_targetSlot_1, class UPalIndividualCharacterSlot* K2Node_CustomEvent_slot, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class UWBP_PalCharacterSlotButtonBase_C* K2Node_ComponentBoundEvent_Widget_5, class UWBP_PalCharacterSlotButtonBase_C* K2Node_ComponentBoundEvent_Widget_4, class UPalIndividualCharacterSlot* CallFunc_GetTargetSlot_targetSlot_2, class UPalIndividualCharacterSlot* CallFunc_GetTargetSlot_targetSlot_3, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, class UWBP_IngameMenu_PalBox_PalList_C* CallFunc_Array_Get_Item_2, int32 CallFunc_Array_Length_ReturnValue_2, class UWBP_PalCharacterSlotButtonBase_C* K2Node_ComponentBoundEvent_Widget_3, class UWBP_PalCharacterSlotButtonBase_C* K2Node_ComponentBoundEvent_Widget_2, class UWBP_PalCharacterSlotButtonBase_C* K2Node_ComponentBoundEvent_Widget_1, class UWBP_PalCharacterSlotButtonBase_C* K2Node_ComponentBoundEvent_Widget, class UPalIndividualCharacterSlot* CallFunc_GetTargetSlot_targetSlot_4, class UPalIndividualCharacterSlot* CallFunc_GetTargetSlot_targetSlot_5, int32 CallFunc_Array_Add_ReturnValue, const struct FDataTableRowHandle& CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, class FText CallFunc_GetLocalizedTextFromHandle_Text, const class FString& CallFunc_Conv_TextToString_ReturnValue, int32 CallFunc_Array_Add_ReturnValue_1, const class FString& K2Node_ComponentBoundEvent_SelectedOption, enum class EPalCharacterContainerSortType CallFunc_Map_Find_Value_1, bool CallFunc_Map_Find_ReturnValue_1, int32 CallFunc_Array_Add_ReturnValue_2, int32 Temp_int_Loop_Counter_Variable_2, bool CallFunc_Less_IntInt_ReturnValue_3, int32 CallFunc_Add_IntInt_ReturnValue_3, bool CallFunc_Array_IsNotEmpty_ReturnValue);
	void OnSelectedSortType__DelegateSignature(enum class EPalCharacterContainerSortType SortType);
	void OnRightClickedWorkerSlot__DelegateSignature(class UPalIndividualCharacterSlot* Slot);
	void OnRightClickedBoxSlot__DelegateSignature(class UPalIndividualCharacterSlot* Slot);
	void OnAnySlotUnhovered__DelegateSignature();
	void OnHoveredWorkerSlot__DelegateSignature(class UPalIndividualCharacterSlot* Slot);
	void OnHoveredBoxSlot__DelegateSignature(class UPalIndividualCharacterSlot* Slot);
	void OnHoveredPartySlot__DelegateSignature(class UPalIndividualCharacterSlot* Slot);
	void OnClickedLooseButton__DelegateSignature();
	void OnAnySlotHovered__DelegateSignature(class UPalIndividualCharacterSlot* Slot);
	void OnClickedCloseButton__DelegateSignature();
	void OnClickedPalBoxPrevPage__DelegateSignature();
	void OnClickedPalBoxNextPage__DelegateSignature();
	void OnClickedBaseCampPal__DelegateSignature(class UPalIndividualCharacterSlot* Slot, enum class EPalItemSlotPressType PressType);
	void OnClickedPalBoxPal__DelegateSignature(class UPalIndividualCharacterSlot* Slot, enum class EPalItemSlotPressType PressType);
	void OnClickedPartySlot__DelegateSignature(class UPalIndividualCharacterSlot* TargetSlot);
};

}


