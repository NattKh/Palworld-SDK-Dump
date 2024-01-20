#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x30 (0x450 - 0x420)
// BlueprintGeneratedClass BP_PalFirePointLightComponent.BP_PalFirePointLightComponent_C
class UBP_PalFirePointLightComponent_C : public UPalFirePointLightComponent
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x420(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	struct FFloatInterval                        BlinkDurationInterval;                             // 0x428(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CurrentBlinkDuration;                              // 0x430(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       ProgressTimeInPeriod;                              // 0x438(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCurveFloat*                           Curve;                                             // 0x440(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	double                                       MaxIntensityCache;                                 // 0x448(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UBP_PalFirePointLightComponent_C* GetDefaultObj();

	void CacheAndClearIntensity(double K2Node_VariableSet_MaxIntensityCache_ImplicitCast);
	double GetCurrentProgressCurveValue(double CallFunc_Divide_DoubleDouble_ReturnValue, double CallFunc_FClamp_ReturnValue, float CallFunc_GetFloatValue_ReturnValue, double K2Node_FunctionResult_ReturnValue_ImplicitCast, float CallFunc_GetFloatValue_InTime_ImplicitCast);
	void ResetBlinkDuration(double CallFunc_RandomFloatInRange_ReturnValue, double CallFunc_RandomFloatInRange_Min_ImplicitCast, double CallFunc_RandomFloatInRange_Max_ImplicitCast);
	void ReceiveTick(float DeltaSeconds);
	void ReceiveBeginPlay();
	void ExecuteUbergraph_BP_PalFirePointLightComponent(int32 EntryPoint, double CallFunc_GetCurrentProgressCurveValue_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue, float K2Node_Event_DeltaSeconds, double CallFunc_Add_DoubleDouble_ReturnValue, bool CallFunc_GreaterEqual_DoubleDouble_ReturnValue, float CallFunc_SetIntensity_NewIntensity_ImplicitCast, double CallFunc_Add_DoubleDouble_A_ImplicitCast);
};

}


