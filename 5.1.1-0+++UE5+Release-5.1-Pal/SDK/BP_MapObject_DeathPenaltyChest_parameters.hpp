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

// 0x12 (0x12 - 0x0)
// Function BP_MapObject_DeathPenaltyChest.BP_MapObject_DeathPenaltyChest_C.SetActiveFXInLocal
struct ABP_MapObject_DeathPenaltyChest_C_SetActiveFXInLocal_Params
{
public:
	class UPalMapObjectConcreteModelBase*        ConcreteModel;                                     // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalMapObjectDeathPenaltyStorageModel* K2Node_DynamicCast_AsPal_Map_Object_Death_Penalty_Storage_Model; // 0x8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsSameGuildInLocalPlayer_ReturnValue;     // 0x11(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function BP_MapObject_DeathPenaltyChest.BP_MapObject_DeathPenaltyChest_C.BP_OnSetConcreteModel
struct ABP_MapObject_DeathPenaltyChest_C_BP_OnSetConcreteModel_Params
{
public:
	class UPalMapObjectConcreteModelBase*        ConcreteModel;                                     // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function BP_MapObject_DeathPenaltyChest.BP_MapObject_DeathPenaltyChest_C.OnNotifiedGuildUpdateInClient
struct ABP_MapObject_DeathPenaltyChest_C_OnNotifiedGuildUpdateInClient_Params
{
public:
	class UPalMapObjectDeathPenaltyStorageModel* Model;                                             // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x34 (0x34 - 0x0)
// Function BP_MapObject_DeathPenaltyChest.BP_MapObject_DeathPenaltyChest_C.ExecuteUbergraph_BP_MapObject_DeathPenaltyChest
struct ABP_MapObject_DeathPenaltyChest_C_ExecuteUbergraph_BP_MapObject_DeathPenaltyChest_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_811[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UPalMapObjectDeathPenaltyStorageModel* K2Node_CustomEvent_Model;                          // 0x8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalMapObjectConcreteModelBase*        K2Node_Event_ConcreteModel;                        // 0x10(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalMapObjectDeathPenaltyStorageModel* K2Node_DynamicCast_AsPal_Map_Object_Death_Penalty_Storage_Model; // 0x18(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_816[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x24(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

}
}


