#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8E (0x4C8 - 0x43A)
// WidgetBlueprintGeneratedClass WBP_PalCharacterScrollList.WBP_PalCharacterScrollList_C
class UWBP_PalCharacterScrollList_C : public UWBP_PalCommonScrollList_C
{
public:
	uint8                                        Pad_2F67[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x440(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UClass*                                SlotWidgetClass;                                   // 0x448(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_            OnLeftClickedSlot;                                 // 0x450(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_            OnRightClickedSlot;                                // 0x460(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_            OnHoveredSlot;                                     // 0x470(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_            OnUnhoveredSlot;                                   // 0x480(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_            OnFocusedSlot;                                     // 0x490(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_            OnUnfocusedSlot;                                   // 0x4A0(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_            OnCreatedSlot;                                     // 0x4B0(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	class UWBP_CharacterScrollListBlock_C*       MyBlock;                                           // 0x4C0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UWBP_PalCharacterScrollList_C* GetDefaultObj();

	void GetTopFocusTarget(class UWidget** Widget, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, TArray<class UWidget*>& CallFunc_GetAllChildren_ReturnValue, class UWidget* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_IsVisible_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, class UWBP_PalCharacterSlotButtonBase_C* K2Node_DynamicCast_AsWBP_Pal_Character_Slot_Button_Base, bool K2Node_DynamicCast_bSuccess, bool CallFunc_HasAnyChildren_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue);
	void Get_All_Children(TArray<class UWidget*>* Widgets, TArray<class UWidget*>& CallFunc_GetAllChildren_ReturnValue);
	void RemoveChild(class UWBP_PalCharacterSlotButtonBase_C* TargetChild, TArray<class UWidget*>& CallFunc_GetAllChildren_ReturnValue, bool CallFunc_Array_RemoveItem_ReturnValue);
	void FocusPreviousButton(class UWBP_PalCharacterSlotButtonBase_C* RootSlotButton, int32 FindedIndex, int32 TmpCount, int32 Temp_int_Variable, int32 CallFunc_Subtract_IntInt_ReturnValue, int32 Temp_int_Variable_1, bool CallFunc_NotEqual_IntInt_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue_1, bool CallFunc_GreaterEqual_IntInt_ReturnValue, TArray<class UWidget*>& CallFunc_GetAllChildren_ReturnValue, int32 CallFunc_Array_Find_ReturnValue, class UWidget* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, class UWBP_PalCharacterSlotButtonBase_C* K2Node_DynamicCast_AsWBP_Pal_Character_Slot_Button_Base, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsVisible_ReturnValue, class UWBP_PalCharacterSlotButtonBase_C* K2Node_DynamicCast_AsWBP_Pal_Character_Slot_Button_Base_1, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_IsVisible_ReturnValue_1, int32 CallFunc_Array_LastIndex_ReturnValue);
	void ClearAllChildren();
	void FocusToTopContent(class UWidget* CallFunc_GetTopFocusTarget_Widget);
	void ChangeChildrenPadding(const struct FVector2D& Padding);
	void ClearInnnerChildren();
	void AddCharacterSlots(TArray<class UPalIndividualCharacterSlot*>& TargetSlots, int32 CallFunc_Array_Length_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, class UPalIndividualCharacterSlot* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue);
	void OnUnfocused_Internal(class UWBP_PalCharacterSlotButtonBase_C* Widget);
	void OnFocused_Internal(class UWBP_PalCharacterSlotButtonBase_C* Widget);
	void OnUnhovered_Internal(class UWBP_PalCharacterSlotButtonBase_C* Widget);
	void OnHovered_Internal(class UWBP_PalCharacterSlotButtonBase_C* Widget);
	void On_Right_Clicked_Internal(class UWBP_PalCharacterSlotButtonBase_C* ButtonBase);
	void OnLeftClicked_Internal(class UWBP_PalCharacterSlotButtonBase_C* Widget, enum class EPalItemSlotPressType PressType);
	void AddSlotButtonToScrollList(class UWBP_PalCharacterSlotButtonBase_C* CreatedSlotButton, class UWrapBoxSlot* CallFunc_AddChildToWrapBox_ReturnValue);
	void BindButtonEvents(class UWBP_PalCharacterSlotButtonBase_C* CreatedSlotButton, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_5);
	void CreateSlotWidget(class UPalIndividualCharacterSlot* TargetSlot, class UWBP_PalCharacterSlotButtonBase_C** CreatedSlotButton, class APlayerController* CallFunc_GetLocalPlayerController_ReturnValue, class UWBP_PalCharacterSlotButtonBase_C* CallFunc_Create_ReturnValue);
	void AddCharacterSlot(class UPalIndividualCharacterSlot* TargetSlot, class UWBP_PalCharacterSlotButtonBase_C* CallFunc_CreateSlotWidget_createdSlotButton);
	void AddCharacterContainer(class UPalIndividualCharacterContainer* Container, int32 Temp_int_Array_Index_Variable, int32 CallFunc_Array_Length_ReturnValue, class UPalIndividualCharacterSlot* CallFunc_Array_Get_Item, class UWBP_PalCharacterSlotButtonBase_C* CallFunc_CreateSlotWidget_createdSlotButton, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue);
	void Construct();
	void OnInitialized();
	void ExecuteUbergraph_WBP_PalCharacterScrollList(int32 EntryPoint, class UScrollBox* CallFunc_GetScrollBox_ScrollBox, class APlayerController* CallFunc_GetLocalPlayerController_ReturnValue, class UWBP_CharacterScrollListBlock_C* CallFunc_Create_ReturnValue, class UPanelSlot* CallFunc_AddChild_ReturnValue);
	void OnCreatedSlot__DelegateSignature(class UWBP_PalCharacterSlotButtonBase_C* CreatedSlot);
	void OnUnfocusedSlot__DelegateSignature(class UWBP_PalCharacterSlotButtonBase_C* Widget);
	void OnFocusedSlot__DelegateSignature(class UWBP_PalCharacterSlotButtonBase_C* Widget);
	void OnUnhoveredSlot__DelegateSignature(class UWBP_PalCharacterSlotButtonBase_C* Widget);
	void OnHoveredSlot__DelegateSignature(class UWBP_PalCharacterSlotButtonBase_C* Widget);
	void OnRightClickedSlot__DelegateSignature(class UWBP_PalCharacterSlotButtonBase_C* Widget);
	void OnLeftClickedSlot__DelegateSignature(class UWBP_PalCharacterSlotButtonBase_C* Widget, enum class EPalItemSlotPressType PressType);
};

}


