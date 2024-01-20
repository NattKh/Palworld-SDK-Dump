#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x18 (0x448 - 0x430)
// WidgetBlueprintGeneratedClass WBP_RepairAllWindow.WBP_RepairAllWindow_C
class UWBP_RepairAllWindow_C : public UPalUserWidgetOverlayUI
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x430(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UImage*                                Image_35;                                          // 0x438(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_IngameMenu_RepairAll_C*           WBP_IngameMenu_RepairAll;                          // 0x440(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UWBP_RepairAllWindow_C* GetDefaultObj();

	class UWidget* BP_GetDesiredFocusTarget(class UWidget* CallFunc_GetFocusTarget_FocusTarget);
	void OnSetup();
	void BndEvt__WBP_RepairAllWindow_WBP_IngameMenu_RepairAll_K2Node_ComponentBoundEvent_0_OnClickedButton__DelegateSignature(bool IsYes);
	void ExecuteUbergraph_WBP_RepairAllWindow(int32 EntryPoint, class UPalHUDDispatchParameterBase* CallFunc_GetParam_ReturnValue, bool K2Node_ComponentBoundEvent_IsYes, bool CallFunc_IsValid_ReturnValue, class UBP_RepairAllWindowDispatchParameter_C* K2Node_DynamicCast_AsBP_Repair_All_Window_Dispatch_Parameter, bool K2Node_DynamicCast_bSuccess, class UPalHUDDispatchParameterBase* CallFunc_GetParam_ReturnValue_1, class UBP_RepairAllWindowDispatchParameter_C* K2Node_DynamicCast_AsBP_Repair_All_Window_Dispatch_Parameter_1, bool K2Node_DynamicCast_bSuccess_1);
};

}


