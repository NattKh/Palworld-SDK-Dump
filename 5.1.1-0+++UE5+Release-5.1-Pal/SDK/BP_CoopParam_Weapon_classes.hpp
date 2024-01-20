#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x50 (0xF0 - 0xA0)
// BlueprintGeneratedClass BP_CoopParam_Weapon.BP_CoopParam_Weapon_C
class UBP_CoopParam_Weapon_C : public UActorComponent
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xA0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UClass*                                WeaponClass;                                       // 0xA8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class APalWeaponBase*                        WeaponObject;                                      // 0xB0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_            OnCreatedBulletDelegate;                           // 0xB8(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_            OnDestroyBulletDelegate;                           // 0xC8(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	class UPalAutoDestroyActorHolder*            AutoDestory;                                       // 0xD8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	int32                                        CreateBulletCount;                                 // 0xE0(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4177[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UClass*                                WeaponAttachAction;                                // 0xE8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UBP_CoopParam_Weapon_C* GetDefaultObj();

	void Create_Weapon(class AActor* TrainerPlayer, class AActor* Trainer, class AActor* CallFunc_GetOwner_ReturnValue, bool CallFunc_IsValid_ReturnValue, TScriptInterface<class IBPI_CoopWeapon_C> K2Node_DynamicCast_AsBPI_Coop_Weapon, bool K2Node_DynamicCast_bSuccess, class AActor* CallFunc_GetOwner_ReturnValue_1, class UPalPartnerSkillParameterComponent* CallFunc_GetComponentByClass_ReturnValue, float CallFunc_GetActiveSkillMainValueByRank_ReturnValue, TScriptInterface<class IBPI_CoopWeapon_C> K2Node_DynamicCast_AsBPI_Coop_Weapon_1, bool K2Node_DynamicCast_bSuccess_1, int32 CallFunc_FTrunc_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, const struct FTransform& CallFunc_MakeTransform_ReturnValue, class UPalAutoDestroyActorHolder* CallFunc_SpawnObject_ReturnValue, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, class APalWeaponBase* CallFunc_FinishSpawningActor_ReturnValue, double CallFunc_FTrunc_A_ImplicitCast);
	void AttachWeapon_ToAll(class AActor* TrainerPlayer, class AActor* Trainer, class UPalShooterComponent* CallFunc_GetComponentByClass_ReturnValue);
	void GetWeaponDamage(int32* Dmg);
	void GetShooter(class UPalShooterComponent** Shooter, class AActor* CallFunc_GetOwner_ReturnValue, class UPalCharacterParameterComponent* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, class UPalShooterComponent* CallFunc_GetComponentByClass_ReturnValue_1);
	void IsWeaponAttached(bool* Result, class UPalShooterComponent* CallFunc_GetShooter_Shooter, bool CallFunc_IsValid_ReturnValue, class APalWeaponBase* CallFunc_GetHasWeapon_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue);
	void Attach_Weapon(bool* Result, bool* IsWeaponChanged, class UPalShooterComponent* Shooter, class AActor* CallFunc_GetOwner_ReturnValue, bool CallFunc_IsWeaponAttached_Result, class UPalCharacterParameterComponent* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, class UPalShooterComponent* CallFunc_GetShooter_Shooter, bool CallFunc_IsValid_ReturnValue);
	void ReceiveBeginPlay();
	void OnCompleteInitializeParameterDelegate______0(class APalCharacter* InCharacter);
	void OnAttachWeapon();
	void OnShootBullet(class APalBullet* Bullet);
	void OnDestroyBullet(class UPrimitiveComponent* HitComp, class AActor* OtherCharacter, class UPrimitiveComponent* OtherComp, struct FHitResult& Hi);
	void OnDetachWeapon();
	void AttachCoopWeaponToAll_Event(class AActor* AttachPlayerTrainer);
	void CreateWeaponToAll(class AActor* Player);
	void ExecuteUbergraph_BP_CoopParam_Weapon(int32 EntryPoint, class AActor* K2Node_CustomEvent_Player, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class AActor* CallFunc_GetOwner_ReturnValue, class APalCharacter* K2Node_CustomEvent_InCharacter, class APalCharacter* K2Node_DynamicCast_AsPal_Character, bool K2Node_DynamicCast_bSuccess, class UPalCharacterOnCompleteInitializeParameterWrapper* CallFunc_GetOnCompleteInitializeParameterDelegate_ReturnValue, bool CallFunc_IsValid_ReturnValue, class APalBullet* K2Node_CustomEvent_Bullet, class UPrimitiveComponent* K2Node_CustomEvent_HitComp, class AActor* K2Node_CustomEvent_OtherCharacter, class UPrimitiveComponent* K2Node_CustomEvent_OtherComp, const struct FHitResult& K2Node_CustomEvent_Hi, bool CallFunc_IsValid_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, bool CallFunc_IsServer_ReturnValue, class AActor* K2Node_CustomEvent_AttachPlayerTrainer, class AActor* CallFunc_GetOwner_ReturnValue_1, class UPalCharacterParameterComponent* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_IsValid_ReturnValue_2);
	void OnCreatedBulletDelegate__DelegateSignature(class APalBullet* Bullet);
	void OnDestroyBulletDelegate__DelegateSignature(class UPrimitiveComponent* HitComp, class AActor* OtherCharacter, class UPrimitiveComponent* OtherComp, const struct FHitResult& HiTResult);
};

}


