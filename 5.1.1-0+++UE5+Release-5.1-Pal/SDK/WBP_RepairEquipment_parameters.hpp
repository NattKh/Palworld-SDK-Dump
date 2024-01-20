#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
namespace Params
{
//---------------------------------------------------------------------------------------------------------------------
// PARAMETERS
//---------------------------------------------------------------------------------------------------------------------

// 0x11 (0x11 - 0x0)
// Function WBP_RepairEquipment.WBP_RepairEquipment_C.OnClosedRepairAllWindow
struct UWBP_RepairEquipment_C_OnClosedRepairAllWindow_Params
{
public:
	class UPalHUDDispatchParameterBase*          Param;                                             // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UBP_RepairAllWindowDispatchParameter_C* K2Node_DynamicCast_AsBP_Repair_All_Window_Dispatch_Parameter; // 0x8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x30 (0x30 - 0x0)
// Function WBP_RepairEquipment.WBP_RepairEquipment_C.OpenRepairAllWindow
struct UWBP_RepairEquipment_C_OpenRepairAllWindow_Params
{
public:
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x0(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalHUDService*                        CallFunc_GetHUDService_ReturnValue;                // 0x10(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UBP_RepairAllWindowDispatchParameter_C* CallFunc_SpawnObject_ReturnValue;                  // 0x18(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FGuid                                 CallFunc_Push_ReturnValue;                         // 0x20(0x10)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function WBP_RepairEquipment.WBP_RepairEquipment_C.BP_GetDesiredFocusTarget
struct UWBP_RepairEquipment_C_BP_GetDesiredFocusTarget_Params
{
public:
	class UWidget*                               ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UWidget*                               CallFunc_GetDefaultFocusTarget_TargetWidget;       // 0x8(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function WBP_RepairEquipment.WBP_RepairEquipment_C.EndRepair
struct UWBP_RepairEquipment_C_EndRepair_Params
{
public:
	class UWidget*                               CallFunc_GetDefaultFocusTarget_TargetWidget;       // 0x0(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// Function WBP_RepairEquipment.WBP_RepairEquipment_C.StartRepair
struct UWBP_RepairEquipment_C_StartRepair_Params
{
public:
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x0(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                          CallFunc_K2_SetTimerDelegate_ReturnValue;          // 0x10(0x8)(NoDestructor, HasGetValueTypeHash)
};

// 0x14 (0x14 - 0x0)
// Function WBP_RepairEquipment.WBP_RepairEquipment_C.Setup
struct UWBP_RepairEquipment_C_Setup_Params
{
public:
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x0(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FPalUIActionBindData                  CallFunc_RegisterActionBinding_ReturnValue;        // 0x10(0x4)(NoDestructor)
};

// 0x28 (0x28 - 0x0)
// Function WBP_RepairEquipment.WBP_RepairEquipment_C.RefreshUI
struct UWBP_RepairEquipment_C_RefreshUI_Params
{
public:
	TArray<struct FPalStaticItemIdAndNum>        CallFunc_CollectRepairInfo_OutRequiredMaterials;   // 0x0(0x10)(ReferenceParm)
	bool                                         CallFunc_CollectRepairInfo_OutCanRepair;           // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9F6[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class UPalItemSlot*>                  CallFunc_CollectRepairableSlot_OutRepairableSlots; // 0x18(0x10)(ReferenceParm)
};

// 0x8 (0x8 - 0x0)
// Function WBP_RepairEquipment.WBP_RepairEquipment_C.BndEvt__WBP_RepairEquipment_WBP_IngameMenu_Repair_K2Node_ComponentBoundEvent_1_OnClickedAnyItemSlot__DelegateSignature
struct UWBP_RepairEquipment_C_BndEvt__WBP_RepairEquipment_WBP_IngameMenu_Repair_K2Node_ComponentBoundEvent_1_OnClickedAnyItemSlot__DelegateSignature_Params
{
public:
	class UPalItemSlot*                          ItemSlot;                                          // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function WBP_RepairEquipment.WBP_RepairEquipment_C.OnRecievedRepairResult
struct UWBP_RepairEquipment_C_OnRecievedRepairResult_Params
{
public:
	bool                                         IsSuccess;                                         // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0xB0 (0xB0 - 0x0)
// Function WBP_RepairEquipment.WBP_RepairEquipment_C.ExecuteUbergraph_WBP_RepairEquipment
struct UWBP_RepairEquipment_C_ExecuteUbergraph_WBP_RepairEquipment_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_A39[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UPalItemSlot*                          K2Node_ComponentBoundEvent_ItemSlot;               // 0x8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Add_ReturnValue;                    // 0x10(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsEmpty_ReturnValue;                      // 0x14(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_A41[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FPalStaticItemIdAndNum>        CallFunc_CollectRepairInfo_OutRequiredMaterials;   // 0x18(0x10)(ReferenceParm)
	bool                                         CallFunc_CollectRepairInfo_OutCanRepair;           // 0x28(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsRepairableItem_ReturnValue;             // 0x29(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_A43[0x2];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x2C(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FPalUIActionBindData                  CallFunc_RegisterActionBinding_ReturnValue;        // 0x3C(0x4)(NoDestructor)
	bool                                         K2Node_Event_IsSuccess;                            // 0x40(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_A46[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UPalLogManager*                        CallFunc_GetLogManager_ReturnValue;                // 0x48(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FPalLogAdditionalData                 K2Node_MakeStruct_PalLogAdditionalData;            // 0x50(0x38)(None)
	class FText                                  CallFunc_GetLocalizedTextFromHandle_Text;          // 0x88(0x18)(None)
	struct FGuid                                 CallFunc_AddLog_ReturnValue;                       // 0xA0(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


