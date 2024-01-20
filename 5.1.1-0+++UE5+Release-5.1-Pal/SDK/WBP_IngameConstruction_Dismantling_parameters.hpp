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

// 0xA0 (0xA0 - 0x0)
// Function WBP_IngameConstruction_Dismantling.WBP_IngameConstruction_Dismantling_C.SetupKeyGuide
struct UWBP_IngameConstruction_Dismantling_C_SetupKeyGuide_Params
{
public:
	class FName                                  CallFunc_Conv_StringToName_ReturnValue;            // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  CallFunc_Conv_StringToName_ReturnValue_1;          // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class FName>                          K2Node_MakeArray_Array;                            // 0x10(0x10)(ReferenceParm)
	TArray<class FName>                          K2Node_MakeArray_Array_1;                          // 0x20(0x10)(ReferenceParm)
	class FName                                  CallFunc_Conv_StringToName_ReturnValue_2;          // 0x30(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class FName>                          K2Node_MakeArray_Array_2;                          // 0x38(0x10)(ReferenceParm)
	class FText                                  CallFunc_GetLocalizedText_ReturnValue;             // 0x48(0x18)(None)
	class FText                                  CallFunc_GetLocalizedText_ReturnValue_1;           // 0x60(0x18)(None)
	class FText                                  CallFunc_GetLocalizedText_ReturnValue_2;           // 0x78(0x18)(None)
	TArray<class UWBP_IngameConstruction_Num_C*> K2Node_MakeArray_Array_3;                          // 0x90(0x10)(ReferenceParm, ContainsInstancedReference)
};

// 0x1 (0x1 - 0x0)
// Function WBP_IngameConstruction_Dismantling.WBP_IngameConstruction_Dismantling_C.SetEnableWarning
struct UWBP_IngameConstruction_Dismantling_C_SetEnableWarning_Params
{
public:
	bool                                         IsEnable;                                          // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x90 (0x90 - 0x0)
// Function WBP_IngameConstruction_Dismantling.WBP_IngameConstruction_Dismantling_C.Setup
struct UWBP_IngameConstruction_Dismantling_C_Setup_Params
{
public:
	struct FPalBuildObjectData                   InBuildObjectData;                                 // 0x0(0x78)(BlueprintVisible, BlueprintReadOnly, Parm)
	class FText                                  CallFunc_GetMapObjectName_outName;                 // 0x78(0x18)(None)
};

// 0x19 (0x19 - 0x0)
// Function WBP_IngameConstruction_Dismantling.WBP_IngameConstruction_Dismantling_C.SetWarningText
struct UWBP_IngameConstruction_Dismantling_C_SetWarningText_Params
{
public:
	class FText                                  InText;                                            // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                         CallFunc_TextIsEmpty_ReturnValue;                  // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x79 (0x79 - 0x0)
// Function WBP_IngameConstruction_Dismantling.WBP_IngameConstruction_Dismantling_C.SetMaterial
struct UWBP_IngameConstruction_Dismantling_C_SetMaterial_Params
{
public:
	int32                                        Index;                                             // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  StaticItemId;                                      // 0x4(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        ItemCount;                                         // 0xC(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWBP_PalCommonItemIcon_C*              TargetIcon;                                        // 0x10(0x8)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UWBP_IngameConstruction_Num_C*         TargetNum;                                         // 0x18(0x8)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class APalPlayerCharacter*                   CallFunc_GetPalmi_ReturnValue;                     // 0x20(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UWBP_PalCommonItemIcon_C*              CallFunc_Array_Get_Item;                           // 0x28(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UWBP_IngameConstruction_Num_C*         CallFunc_Array_Get_Item_1;                         // 0x30(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	TArray<class FName>                          K2Node_MakeArray_Array;                            // 0x38(0x10)(ReferenceParm)
	TArray<struct FPalStaticItemIdAndNum>        CallFunc_CollectItemInfoEnableToUseMaterial_OutItemInfos; // 0x48(0x10)(ReferenceParm)
	class UPalItemIDManager*                     CallFunc_GetItemIDManager_ReturnValue;             // 0x58(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FPalStaticItemIdAndNum                CallFunc_Array_Get_Item_2;                         // 0x60(0xC)(NoDestructor)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x6C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3849[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UPalStaticItemDataBase*                CallFunc_GetStaticItemData_ReturnValue;            // 0x70(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_1;                    // 0x78(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// Function WBP_IngameConstruction_Dismantling.WBP_IngameConstruction_Dismantling_C.SetDismantleObjectName
struct UWBP_IngameConstruction_Dismantling_C_SetDismantleObjectName_Params
{
public:
	class FText                                  InName;                                            // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, Parm)
};

// 0x20 (0x20 - 0x0)
// Function WBP_IngameConstruction_Dismantling.WBP_IngameConstruction_Dismantling_C.ExecuteUbergraph_WBP_IngameConstruction_Dismantling
struct UWBP_IngameConstruction_Dismantling_C_ExecuteUbergraph_WBP_IngameConstruction_Dismantling_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_390B[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UUMGSequencePlayer*                    CallFunc_PlayAnimation_ReturnValue;                // 0x8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TArray<class UWBP_PalCommonItemIcon_C*>      K2Node_MakeArray_Array;                            // 0x10(0x10)(ReferenceParm, ContainsInstancedReference)
};

}
}


