#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// ENUMS
//---------------------------------------------------------------------------------------------------------------------


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0x6B (0x6B - 0x0)
// UserDefinedStruct RiverSplineElement.RiverSplineElement
struct FRiverSplineElement
{
public:
	class UStaticMesh*                           RiverSplineMesh_60_55DB51C74ADB81AE8B3C67B1E701AC70; // 0x0(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UMaterial*                             SplineMaterial_38_D0D297DF41688E686403848C672F8D41; // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	float                                        Spacing_16_A1850B9941C9F1CE594A6D8E4D2B6C72;       // 0x10(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_26CC[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               Scale_17_0FF21A994C9965DF5D70EB8E0B857472;         // 0x18(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               Offset_18_04ECFFEB41DE1C636D2E66B03104C5E7;        // 0x30(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                              Rotation_19_8934B08D49E62A953A970696627EBA95;      // 0x48(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                        TangetScale_25_3E26B9A843F1DD460A8E648EA4512EF1;   // 0x60(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        SplineStartOffset_50_DCE654714E7A2AF455D6C1A501032968; // 0x64(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ECollisionEnabled                 CollisionType_56_7635CF7B41E05135A2703891F4BDC530; // 0x68(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CastShadow_59_F9E195C64ADC55FE40F00BA4A3EA0111;    // 0x69(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Enabled_44_0E2207EB4FCC91374AFAF6A98B71185D;       // 0x6A(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}


