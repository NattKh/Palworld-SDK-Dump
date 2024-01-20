#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// BlueprintGeneratedClass BPI_SkillEffect.BPI_SkillEffect_C
class IBPI_SkillEffect_C : public IInterface
{
public:

	static class UClass* StaticClass();
	static class IBPI_SkillEffect_C* GetDefaultObj();

	void CancelShoot();
	void ShootBullet(const struct FVector& TargetLocation);
};

}


