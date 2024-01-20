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

// 0x1 (0x1 - 0x0)
// Function BP_BuildObject_OlympicCauldron.BP_BuildObject_OlympicCauldron_C.SetActive_Internal
struct ABP_BuildObject_OlympicCauldron_C_SetActive_Internal_Params
{
public:
	bool                                         bOn;                                               // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function BP_BuildObject_OlympicCauldron.BP_BuildObject_OlympicCauldron_C.BP_OnSetConcreteModel
struct ABP_BuildObject_OlympicCauldron_C_BP_OnSetConcreteModel_Params
{
public:
	class UPalMapObjectConcreteModelBase*        ConcreteModel;                                     // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function BP_BuildObject_OlympicCauldron.BP_BuildObject_OlympicCauldron_C.CustomEvent
struct ABP_BuildObject_OlympicCauldron_C_CustomEvent_Params
{
public:
	class UPalMapObjectConcreteModelBase*        Model;                                             // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x28 (0x28 - 0x0)
// Function BP_BuildObject_OlympicCauldron.BP_BuildObject_OlympicCauldron_C.ExecuteUbergraph_BP_BuildObject_OlympicCauldron
struct ABP_BuildObject_OlympicCauldron_C_ExecuteUbergraph_BP_BuildObject_OlympicCauldron_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x4(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3D00[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UPalMapObjectConcreteModelBase*        K2Node_Event_ConcreteModel;                        // 0x18(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalMapObjectConcreteModelBase*        K2Node_CustomEvent_Model;                          // 0x20(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

}
}


