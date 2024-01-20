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

// 0xC0 (0xC0 - 0x0)
// Function BP_Ammo_Rocket.BP_Ammo_Rocket_C.SetTranformForReload
struct ABP_Ammo_Rocket_C_SetTranformForReload_Params
{
public:
	struct FTransform                            AmmoReloadingTransform;                            // 0x0(0x60)(Parm, OutParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTransform                            CallFunc_MakeTransform_ReturnValue;                // 0x60(0x60)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x60 (0x60 - 0x0)
// Function BP_Ammo_Rocket.BP_Ammo_Rocket_C.UserConstructionScript
struct ABP_Ammo_Rocket_C_UserConstructionScript_Params
{
public:
	struct FTransform                            CallFunc_SetTranformForReload_AmmoReloadingTransform; // 0x0(0x60)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


