#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// BlueprintGeneratedClass BPI_CoopWeapon.BPI_CoopWeapon_C
class IBPI_CoopWeapon_C : public IInterface
{
public:

	static class UClass* StaticClass();
	static class IBPI_CoopWeapon_C* GetDefaultObj();

	void SetAttacker(class AActor* AttackerPal);
	void SetWeaponDamage(int32 Damageam);
};

}


