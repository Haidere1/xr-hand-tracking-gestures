// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MetaverseXRSystem/Public/HanTracking.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHanTracking() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_APlayerCameraManager_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_APostProcessVolume_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
METAVERSEXRSYSTEM_API UClass* Z_Construct_UClass_AHanTracking();
METAVERSEXRSYSTEM_API UClass* Z_Construct_UClass_AHanTracking_NoRegister();
UMG_API UClass* Z_Construct_UClass_UWidgetInteractionComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_MetaverseXRSystem();
// End Cross Module References

// Begin Class AHanTracking
void AHanTracking::StaticRegisterNativesAHanTracking()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AHanTracking);
UClass* Z_Construct_UClass_AHanTracking_NoRegister()
{
	return AHanTracking::StaticClass();
}
struct Z_Construct_UClass_AHanTracking_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "HanTracking.h" },
		{ "ModuleRelativePath", "Public/HanTracking.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PostProcessVolume_MetaData[] = {
		{ "Category", "MR|Feed" },
		{ "ModuleRelativePath", "Public/HanTracking.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PP_MR_MetaData[] = {
		{ "Category", "MR material" },
		{ "ModuleRelativePath", "Public/HanTracking.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SphereMesh_MetaData[] = {
		{ "Category", "Orbit|Input" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/HanTracking.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PinchDeadzoneUU_MetaData[] = {
		{ "Category", "Orbit|Input" },
		{ "ModuleRelativePath", "Public/HanTracking.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CamManager_MetaData[] = {
		{ "Category", "Cached EarthCenter" },
		{ "ModuleRelativePath", "Public/HanTracking.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PositionDeadZone_MetaData[] = {
		{ "Category", "Pinch Deadzone" },
		{ "ModuleRelativePath", "Public/HanTracking.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RotationDeadZone_MetaData[] = {
		{ "Category", "Rotation Deadzone" },
		{ "ModuleRelativePath", "Public/HanTracking.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WidgetInteractor_MetaData[] = {
		{ "Category", "Widget Interactor" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/HanTracking.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PosSmoothHz_MetaData[] = {
		{ "Category", "XR|Ray" },
		{ "ModuleRelativePath", "Public/HanTracking.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InteractioinDistance_MetaData[] = {
		{ "Category", "XR|Interaction Distance" },
		{ "ModuleRelativePath", "Public/HanTracking.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PostProcessVolume;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PP_MR;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SphereMesh;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_PinchDeadzoneUU;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CamManager;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_PositionDeadZone;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_RotationDeadZone;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WidgetInteractor;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_PosSmoothHz;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_InteractioinDistance;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AHanTracking>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AHanTracking_Statics::NewProp_PostProcessVolume = { "PostProcessVolume", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AHanTracking, PostProcessVolume), Z_Construct_UClass_APostProcessVolume_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PostProcessVolume_MetaData), NewProp_PostProcessVolume_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AHanTracking_Statics::NewProp_PP_MR = { "PP_MR", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AHanTracking, PP_MR), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PP_MR_MetaData), NewProp_PP_MR_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AHanTracking_Statics::NewProp_SphereMesh = { "SphereMesh", nullptr, (EPropertyFlags)0x0010000000080009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AHanTracking, SphereMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SphereMesh_MetaData), NewProp_SphereMesh_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AHanTracking_Statics::NewProp_PinchDeadzoneUU = { "PinchDeadzoneUU", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AHanTracking, PinchDeadzoneUU), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PinchDeadzoneUU_MetaData), NewProp_PinchDeadzoneUU_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AHanTracking_Statics::NewProp_CamManager = { "CamManager", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AHanTracking, CamManager), Z_Construct_UClass_APlayerCameraManager_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CamManager_MetaData), NewProp_CamManager_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AHanTracking_Statics::NewProp_PositionDeadZone = { "PositionDeadZone", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AHanTracking, PositionDeadZone), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PositionDeadZone_MetaData), NewProp_PositionDeadZone_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AHanTracking_Statics::NewProp_RotationDeadZone = { "RotationDeadZone", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AHanTracking, RotationDeadZone), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RotationDeadZone_MetaData), NewProp_RotationDeadZone_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AHanTracking_Statics::NewProp_WidgetInteractor = { "WidgetInteractor", nullptr, (EPropertyFlags)0x0010000000080009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AHanTracking, WidgetInteractor), Z_Construct_UClass_UWidgetInteractionComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WidgetInteractor_MetaData), NewProp_WidgetInteractor_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AHanTracking_Statics::NewProp_PosSmoothHz = { "PosSmoothHz", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AHanTracking, PosSmoothHz), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PosSmoothHz_MetaData), NewProp_PosSmoothHz_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AHanTracking_Statics::NewProp_InteractioinDistance = { "InteractioinDistance", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AHanTracking, InteractioinDistance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InteractioinDistance_MetaData), NewProp_InteractioinDistance_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AHanTracking_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHanTracking_Statics::NewProp_PostProcessVolume,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHanTracking_Statics::NewProp_PP_MR,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHanTracking_Statics::NewProp_SphereMesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHanTracking_Statics::NewProp_PinchDeadzoneUU,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHanTracking_Statics::NewProp_CamManager,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHanTracking_Statics::NewProp_PositionDeadZone,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHanTracking_Statics::NewProp_RotationDeadZone,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHanTracking_Statics::NewProp_WidgetInteractor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHanTracking_Statics::NewProp_PosSmoothHz,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHanTracking_Statics::NewProp_InteractioinDistance,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AHanTracking_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AHanTracking_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_MetaverseXRSystem,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AHanTracking_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AHanTracking_Statics::ClassParams = {
	&AHanTracking::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_AHanTracking_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_AHanTracking_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AHanTracking_Statics::Class_MetaDataParams), Z_Construct_UClass_AHanTracking_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AHanTracking()
{
	if (!Z_Registration_Info_UClass_AHanTracking.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AHanTracking.OuterSingleton, Z_Construct_UClass_AHanTracking_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AHanTracking.OuterSingleton;
}
template<> METAVERSEXRSYSTEM_API UClass* StaticClass<AHanTracking>()
{
	return AHanTracking::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AHanTracking);
AHanTracking::~AHanTracking() {}
// End Class AHanTracking

// Begin Registration
struct Z_CompiledInDeferFile_FID_PAFMetaVerse_Plugins_MetaverseXRSystem_Source_MetaverseXRSystem_Public_HanTracking_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AHanTracking, AHanTracking::StaticClass, TEXT("AHanTracking"), &Z_Registration_Info_UClass_AHanTracking, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AHanTracking), 538181893U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PAFMetaVerse_Plugins_MetaverseXRSystem_Source_MetaverseXRSystem_Public_HanTracking_h_1394967468(TEXT("/Script/MetaverseXRSystem"),
	Z_CompiledInDeferFile_FID_PAFMetaVerse_Plugins_MetaverseXRSystem_Source_MetaverseXRSystem_Public_HanTracking_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_PAFMetaVerse_Plugins_MetaverseXRSystem_Source_MetaverseXRSystem_Public_HanTracking_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
