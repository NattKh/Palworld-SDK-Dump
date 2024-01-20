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

// 0x4 (0x4 - 0x0)
// Function BP_Explosion_RocketLauncher.BP_Explosion_RocketLauncher_C.GetEffectValue
struct ABP_Explosion_RocketLauncher_C_GetEffectValue_Params
{
public:
	int32                                        Value;                                             // 0x0(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function BP_Explosion_RocketLauncher.BP_Explosion_RocketLauncher_C.GetEffectType
struct ABP_Explosion_RocketLauncher_C_GetEffectType_Params
{
public:
	enum class EPalAdditionalEffectType          Effect;                                            // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function BP_Explosion_RocketLauncher.BP_Explosion_RocketLauncher_C.BndEvt__BP_Explosion_PenguinLauncher_Explosive_K2Node_ComponentBoundEvent_0_OnNiagaraSystemFinished__DelegateSignature
struct ABP_Explosion_RocketLauncher_C_BndEvt__BP_Explosion_PenguinLauncher_Explosive_K2Node_ComponentBoundEvent_0_OnNiagaraSystemFinished__DelegateSignature_Params
{
public:
	class UNiagaraComponent*                     PSystem;                                           // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function BP_Explosion_RocketLauncher.BP_Explosion_RocketLauncher_C.ExecuteUbergraph_BP_Explosion_RocketLauncher
struct ABP_Explosion_RocketLauncher_C_ExecuteUbergraph_BP_Explosion_RocketLauncher_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_405C[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UNiagaraComponent*                     K2Node_ComponentBoundEvent_PSystem;                // 0x8(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};

}
}


