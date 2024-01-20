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

// 0x8 (0x8 - 0x0)
// Function BP_SkillEffect_FlareArrowShoot.BP_SkillEffect_FlareArrowShoot_C.OnDestroyed_§ŸÛ»_0
struct ABP_SkillEffect_FlareArrowShoot_C_OnDestroyed______0_Params
{
public:
	class AActor*                                DestroyedActor;                                    // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function BP_SkillEffect_FlareArrowShoot.BP_SkillEffect_FlareArrowShoot_C.OnSystemFinished_§ŸÛ»_0
struct ABP_SkillEffect_FlareArrowShoot_C_OnSystemFinished______0_Params
{
public:
	class UParticleSystemComponent*              PSystem;                                           // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// Function BP_SkillEffect_FlareArrowShoot.BP_SkillEffect_FlareArrowShoot_C.ExecuteUbergraph_BP_SkillEffect_FlareArrowShoot
struct ABP_SkillEffect_FlareArrowShoot_C_ExecuteUbergraph_BP_SkillEffect_FlareArrowShoot_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_11F[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class AActor*                                K2Node_CustomEvent_DestroyedActor;                 // 0x8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*              K2Node_CustomEvent_PSystem;                        // 0x10(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};

}
}


