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

// 0x30 (0x30 - 0x0)
// Function BP_BuildObjectDefenseBulletLauncher_BowGun.BP_BuildObjectDefenseBulletLauncher_BowGun_C.GetCharacterRotation
struct ABP_BuildObjectDefenseBulletLauncher_BowGun_C_GetCharacterRotation_Params
{
public:
	struct FRotator                              ReturnValue;                                       // 0x0(0x18)(ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	struct FRotator                              CallFunc_K2_GetComponentRotation_ReturnValue;      // 0x18(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x30 (0x30 - 0x0)
// Function BP_BuildObjectDefenseBulletLauncher_BowGun.BP_BuildObjectDefenseBulletLauncher_BowGun_C.GetCharacterLocation
struct ABP_BuildObjectDefenseBulletLauncher_BowGun_C_GetCharacterLocation_Params
{
public:
	struct FVector                               ReturnValue;                                       // 0x0(0x18)(ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_K2_GetComponentLocation_ReturnValue;      // 0x18(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0xC (0xC - 0x0)
// Function BP_BuildObjectDefenseBulletLauncher_BowGun.BP_BuildObjectDefenseBulletLauncher_BowGun_C.TurnToTarget
struct ABP_BuildObjectDefenseBulletLauncher_BowGun_C_TurnToTarget_Params
{
public:
	class AActor*                                TargetActor;                                       // 0x0(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	float                                        DeltaTime;                                         // 0x8(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function BP_BuildObjectDefenseBulletLauncher_BowGun.BP_BuildObjectDefenseBulletLauncher_BowGun_C.SetOwnerCharacter
struct ABP_BuildObjectDefenseBulletLauncher_BowGun_C_SetOwnerCharacter_Params
{
public:
	class APalCharacter*                         OwnerCharacter;                                    // 0x0(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function BP_BuildObjectDefenseBulletLauncher_BowGun.BP_BuildObjectDefenseBulletLauncher_BowGun_C.SetEnableTrigger
struct ABP_BuildObjectDefenseBulletLauncher_BowGun_C_SetEnableTrigger_Params
{
public:
	bool                                         EnableTrigger;                                     // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x90 (0x90 - 0x0)
// Function BP_BuildObjectDefenseBulletLauncher_BowGun.BP_BuildObjectDefenseBulletLauncher_BowGun_C.ExecuteUbergraph_BP_BuildObjectDefenseBulletLauncher_BowGun
struct ABP_BuildObjectDefenseBulletLauncher_BowGun_C_ExecuteUbergraph_BP_BuildObjectDefenseBulletLauncher_BowGun_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3D43[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AActor*                                K2Node_Event_TargetActor;                          // 0x8(0x8)(ConstParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	float                                        K2Node_Event_DeltaTime;                            // 0x10(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3D46[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               CallFunc_GetCharacterLocation_ReturnValue;         // 0x18(0x18)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APalCharacter*                         K2Node_Event_OwnerCharacter;                       // 0x30(0x8)(ConstParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_Add_VectorVector_ReturnValue;             // 0x38(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TSoftObjectPtr<class APalCharacter>          CallFunc_Conv_ObjectToSoftObjectReference_ReturnValue; // 0x50(0x30)(UObjectWrapper, HasGetValueTypeHash)
	bool                                         K2Node_Event_EnableTrigger;                        // 0x80(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_1;                    // 0x81(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3D4C[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       CallFunc_TurnToTarget_Internal_DeltaTime_ImplicitCast; // 0x88(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


