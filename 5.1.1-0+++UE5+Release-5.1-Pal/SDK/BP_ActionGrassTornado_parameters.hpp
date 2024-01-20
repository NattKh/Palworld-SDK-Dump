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

// 0x69 (0x69 - 0x0)
// Function BP_ActionGrassTornado.BP_ActionGrassTornado_C.OnStartProcessAnimation
struct UBP_ActionGrassTornado_C_OnStartProcessAnimation_Params
{
public:
	struct FVector                               CallFunc_GetTargetLocation_ReturnValue;            // 0x0(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSkillEffectSpawnParameter            CallFunc_Array_Get_Item;                           // 0x18(0x38)(NoDestructor)
	class APalSkillEffectBase*                   CallFunc_FindEffectByClass_Effect;                 // 0x50(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TScriptInterface<class IBPI_SkillEffect_C>   K2Node_DynamicCast_AsBPI_Skill_Effect;             // 0x58(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x68(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


