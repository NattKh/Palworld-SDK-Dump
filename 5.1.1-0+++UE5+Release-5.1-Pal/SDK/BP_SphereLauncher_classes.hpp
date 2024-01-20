#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x88 (0x628 - 0x5A0)
// BlueprintGeneratedClass BP_SphereLauncher.BP_SphereLauncher_C
class ABP_SphereLauncher_C : public ABP_RocketLauncher_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x5A0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	double                                       ScatteredAngle;                                    // 0x5A8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class FName>                          ItemNameList;                                      // 0x5B0(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<class UClass*>                        bulletClass;                                       // 0x5C0(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	int32                                        CurrentBallIndex;                                  // 0x5D0(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3B6A[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TMap<class FName, enum class EPalCaptureSphereLevelType> ItemName_LevelTypeMap;                             // 0x5D8(0x50)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance)

	static class UClass* StaticClass();
	static class ABP_SphereLauncher_C* GetDefaultObj();

	void GetMuzzleTransform(struct FTransform* Transform, const struct FTransform& CallFunc_GetSocketTransform_ReturnValue);
	void GetShootTransformList(double BaseAnglePitch, double BaseAngleYaw, double BlurAngle, TArray<struct FTransform>* ShootTransformList, const struct FTransform& BaseTransform, const TArray<struct FTransform>& TransformList, int32 Temp_int_Variable, bool CallFunc_LessEqual_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, double CallFunc_Multiply_IntFloat_ReturnValue, const struct FTransform& CallFunc_GetMuzzleTransform_Transform, const struct FVector& CallFunc_BreakTransform_Location, const struct FRotator& CallFunc_BreakTransform_Rotation, const struct FVector& CallFunc_BreakTransform_Scale, const struct FVector& CallFunc_GetTargetPosition_TargetPosition, const struct FTransform& CallFunc_GetMuzzleTransform_Transform_1, const struct FVector& CallFunc_BreakTransform_Location_1, const struct FRotator& CallFunc_BreakTransform_Rotation_1, const struct FVector& CallFunc_BreakTransform_Scale_1, double CallFunc_Multiply_DoubleDouble_ReturnValue, const struct FVector& CallFunc_Subtract_VectorVector_ReturnValue, const struct FRotator& CallFunc_MakeRotFromX_ReturnValue, double CallFunc_RandomFloatInRange_ReturnValue, const struct FTransform& CallFunc_MakeTransform_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue_1, double CallFunc_RandomFloatInRange_ReturnValue_1, double CallFunc_Add_DoubleDouble_ReturnValue, int32 Temp_int_Variable_1, double CallFunc_Multiply_IntFloat_ReturnValue_1, double CallFunc_Add_DoubleDouble_ReturnValue_1, const struct FRotator& CallFunc_MakeRotator_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue_1, const struct FRotator& CallFunc_ComposeRotators_ReturnValue, const struct FTransform& CallFunc_MakeTransform_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 CallFunc_Array_Add_ReturnValue, float CallFunc_MakeRotator_Yaw_ImplicitCast, float CallFunc_MakeRotator_Pitch_ImplicitCast);
	void GetAimingBlurAngle(double* Angle);
	void GetBlurAngle(double* Angle);
	void OnShoot();
	void GetShootInterval(double* Time);
	void GetMuzzleRotator(struct FRotator* Rotator, const struct FRotator& CallFunc_GetMuzzleRotator_Rotator);
	void GetMuzzleLocation(struct FVector* MuzzleLocation, const struct FVector& CallFunc_GetMuzzleLocation_MuzzleLocation);
	void GetBulletClass(class UClass** NewParam, class UClass* CallFunc_Array_Get_Item);
	void ShootBullet(int32 ShootAbleNum, const TArray<struct FTransform>& ShootTransform, class FName UseItemName, class UPalGameSetting* CallFunc_GetGameSetting_ReturnValue, enum class EPalCaptureSphereLevelType CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, int32 CallFunc_GetCaptureLevelBySphereType_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, int32 Temp_int_Variable, bool CallFunc_LessEqual_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, class FName CallFunc_DecrementCurrentSelectPalSphere_UsedItemID, int32 CallFunc_DecrementCurrentSelectPalSphere_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, int32 CallFunc_Array_Find_ReturnValue, class UClass* CallFunc_GetBulletClass_NewParam, class UPalBulletCreator* CallFunc_GetBulletCreator_ReturnValue, int32 CallFunc_GetWeaponDamage_ReturnValue, class APalBullet* CallFunc_CreateBullet_ReturnValue, TArray<struct FTransform>& CallFunc_GetShootTransformList_ShootTransformList, class ABP_PalSphere_ThrowObject_C* K2Node_DynamicCast_AsBP_Pal_Sphere_Throw_Object, bool K2Node_DynamicCast_bSuccess, bool CallFunc_CanShoot_can, bool CallFunc_IsEmptyMagazine_ReturnValue);
	void ChangeTransformForRocketWhenReloadIsDone(const struct FVector& Location, const struct FRotator& Lotation);
	void ChangeTransformForRocketReload(const struct FVector& Location, const struct FRotator& Rotation);
	void ReceiveBeginPlay();
	void CustomEvent(int32 bulletsNum);
	void ExecuteUbergraph_BP_SphereLauncher(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, int32 K2Node_CustomEvent_bulletsNum, bool CallFunc_K2_AttachToComponent_ReturnValue);
};

}


