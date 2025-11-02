// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MetaverseXRSystem/Public/BoneVisualizer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBoneVisualizer() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UStaticMesh_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
METAVERSEXRSYSTEM_API UClass* Z_Construct_UClass_ABoneVisualizer();
METAVERSEXRSYSTEM_API UClass* Z_Construct_UClass_ABoneVisualizer_NoRegister();
UPackage* Z_Construct_UPackage__Script_MetaverseXRSystem();
// End Cross Module References

// Begin Class ABoneVisualizer
void ABoneVisualizer::StaticRegisterNativesABoneVisualizer()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ABoneVisualizer);
UClass* Z_Construct_UClass_ABoneVisualizer_NoRegister()
{
	return ABoneVisualizer::StaticClass();
}
struct Z_Construct_UClass_ABoneVisualizer_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "BoneVisualizer.h" },
		{ "ModuleRelativePath", "Public/BoneVisualizer.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BoneMeshes_MetaData[] = {
		{ "Category", "BoneMesh" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Runtime array; not editor-exposed\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/BoneVisualizer.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Runtime array; not editor-exposed" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BoneCyilnderMesh_MetaData[] = {
		{ "Category", "HandTracking" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Editor-exposed \xef\xbf\xbd needs Category\n" },
#endif
		{ "ModuleRelativePath", "Public/BoneVisualizer.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Editor-exposed \xef\xbf\xbd needs Category" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BoneMaterial_MetaData[] = {
		{ "Category", "HandTracking" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Editor-exposed \xef\xbf\xbd needs Category\n" },
#endif
		{ "ModuleRelativePath", "Public/BoneVisualizer.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Editor-exposed \xef\xbf\xbd needs Category" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_BoneMeshes_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_BoneMeshes;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_BoneCyilnderMesh;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_BoneMaterial;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABoneVisualizer>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABoneVisualizer_Statics::NewProp_BoneMeshes_Inner = { "BoneMeshes", nullptr, (EPropertyFlags)0x0000000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ABoneVisualizer_Statics::NewProp_BoneMeshes = { "BoneMeshes", nullptr, (EPropertyFlags)0x0010008000000009, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABoneVisualizer, BoneMeshes), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BoneMeshes_MetaData), NewProp_BoneMeshes_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABoneVisualizer_Statics::NewProp_BoneCyilnderMesh = { "BoneCyilnderMesh", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABoneVisualizer, BoneCyilnderMesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BoneCyilnderMesh_MetaData), NewProp_BoneCyilnderMesh_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABoneVisualizer_Statics::NewProp_BoneMaterial = { "BoneMaterial", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABoneVisualizer, BoneMaterial), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BoneMaterial_MetaData), NewProp_BoneMaterial_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ABoneVisualizer_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABoneVisualizer_Statics::NewProp_BoneMeshes_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABoneVisualizer_Statics::NewProp_BoneMeshes,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABoneVisualizer_Statics::NewProp_BoneCyilnderMesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABoneVisualizer_Statics::NewProp_BoneMaterial,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABoneVisualizer_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ABoneVisualizer_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_MetaverseXRSystem,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABoneVisualizer_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ABoneVisualizer_Statics::ClassParams = {
	&ABoneVisualizer::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_ABoneVisualizer_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_ABoneVisualizer_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABoneVisualizer_Statics::Class_MetaDataParams), Z_Construct_UClass_ABoneVisualizer_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ABoneVisualizer()
{
	if (!Z_Registration_Info_UClass_ABoneVisualizer.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ABoneVisualizer.OuterSingleton, Z_Construct_UClass_ABoneVisualizer_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ABoneVisualizer.OuterSingleton;
}
template<> METAVERSEXRSYSTEM_API UClass* StaticClass<ABoneVisualizer>()
{
	return ABoneVisualizer::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ABoneVisualizer);
ABoneVisualizer::~ABoneVisualizer() {}
// End Class ABoneVisualizer

// Begin Registration
struct Z_CompiledInDeferFile_FID_PAFMetaVerse_Plugins_MetaverseXRSystem_Source_MetaverseXRSystem_Public_BoneVisualizer_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ABoneVisualizer, ABoneVisualizer::StaticClass, TEXT("ABoneVisualizer"), &Z_Registration_Info_UClass_ABoneVisualizer, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ABoneVisualizer), 3070522916U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PAFMetaVerse_Plugins_MetaverseXRSystem_Source_MetaverseXRSystem_Public_BoneVisualizer_h_4193890877(TEXT("/Script/MetaverseXRSystem"),
	Z_CompiledInDeferFile_FID_PAFMetaVerse_Plugins_MetaverseXRSystem_Source_MetaverseXRSystem_Public_BoneVisualizer_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_PAFMetaVerse_Plugins_MetaverseXRSystem_Source_MetaverseXRSystem_Public_BoneVisualizer_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
