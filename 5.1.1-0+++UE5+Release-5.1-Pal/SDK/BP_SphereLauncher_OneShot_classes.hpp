#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x628 - 0x628)
// BlueprintGeneratedClass BP_SphereLauncher_OneShot.BP_SphereLauncher_OneShot_C
class ABP_SphereLauncher_OneShot_C : public ABP_SphereLauncher_C
{
public:

	static class UClass* StaticClass();
	static class ABP_SphereLauncher_OneShot_C* GetDefaultObj();

	void GetShootTransformList(double BaseAnglePitch, double BaseAngleYaw, double BlurAngle, TArray<struct FTransform>* ShootTransformList, const struct FTransform& CallFunc_GetMuzzleTransform_Transform, TArray<struct FTransform>& K2Node_MakeArray_Array);
};

}


