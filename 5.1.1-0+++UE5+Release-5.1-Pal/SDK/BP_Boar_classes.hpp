#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x20 (0x920 - 0x900)
// BlueprintGeneratedClass BP_Boar.BP_Boar_C
class ABP_Boar_C : public ABP_MonsterBase_C
{
public:
	class UBP_PalRideMarkerBiggerHorse_C*        BP_PalRideMarkerBiggerHorse;                       // 0x900(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UPalSpeedCollisionComponent*           PalSpeedCollision;                                 // 0x908(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UPalBodyPartsCapsuleComponent*         PalBodyPartsCapsule;                               // 0x910(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UPalBodyPartsSphereComponent*          PalBodyPartsSphere;                                // 0x918(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ABP_Boar_C* GetDefaultObj();

};

}


