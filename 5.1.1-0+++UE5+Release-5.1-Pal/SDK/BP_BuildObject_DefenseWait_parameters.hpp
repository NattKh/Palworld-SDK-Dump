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

// 0x18 (0x18 - 0x0)
// Function BP_BuildObject_DefenseWait.BP_BuildObject_DefenseWait_C.GetCharacterRotation
struct ABP_BuildObject_DefenseWait_C_GetCharacterRotation_Params
{
public:
	struct FRotator                              ReturnValue;                                       // 0x0(0x18)(ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0x30 (0x30 - 0x0)
// Function BP_BuildObject_DefenseWait.BP_BuildObject_DefenseWait_C.GetCharacterLocation
struct ABP_BuildObject_DefenseWait_C_GetCharacterLocation_Params
{
public:
	struct FVector                               ReturnValue;                                       // 0x0(0x18)(ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_K2_GetComponentLocation_ReturnValue;      // 0x18(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function BP_BuildObject_DefenseWait.BP_BuildObject_DefenseWait_C.IsShowOutlineInReticleTargetting
struct ABP_BuildObject_DefenseWait_C_IsShowOutlineInReticleTargetting_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0xC (0xC - 0x0)
// Function BP_BuildObject_DefenseWait.BP_BuildObject_DefenseWait_C.TurnToTarget
struct ABP_BuildObject_DefenseWait_C_TurnToTarget_Params
{
public:
	class AActor*                                TargetActor;                                       // 0x0(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	float                                        DeltaTime;                                         // 0x8(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function BP_BuildObject_DefenseWait.BP_BuildObject_DefenseWait_C.SetOwnerCharacter
struct ABP_BuildObject_DefenseWait_C_SetOwnerCharacter_Params
{
public:
	class APalCharacter*                         OwnerCharacter;                                    // 0x0(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function BP_BuildObject_DefenseWait.BP_BuildObject_DefenseWait_C.SetEnableTrigger
struct ABP_BuildObject_DefenseWait_C_SetEnableTrigger_Params
{
public:
	bool                                         EnableTrigger;                                     // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x20 (0x20 - 0x0)
// Function BP_BuildObject_DefenseWait.BP_BuildObject_DefenseWait_C.ExecuteUbergraph_BP_BuildObject_DefenseWait
struct ABP_BuildObject_DefenseWait_C_ExecuteUbergraph_BP_BuildObject_DefenseWait_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_Event_EnableTrigger;                        // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_19B0[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AActor*                                K2Node_Event_TargetActor;                          // 0x8(0x8)(ConstParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	float                                        K2Node_Event_DeltaTime;                            // 0x10(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_19B3[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class APalCharacter*                         K2Node_Event_OwnerCharacter;                       // 0x18(0x8)(ConstParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

}
}


