// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TerrainGen/Public/DLAComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDLAComponent() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
TERRAINGEN_API UClass* Z_Construct_UClass_UDLAComponent();
TERRAINGEN_API UClass* Z_Construct_UClass_UDLAComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_TerrainGen();
// End Cross Module References

// Begin Class UDLAComponent
void UDLAComponent::StaticRegisterNativesUDLAComponent()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDLAComponent);
UClass* Z_Construct_UClass_UDLAComponent_NoRegister()
{
	return UDLAComponent::StaticClass();
}
struct Z_Construct_UClass_UDLAComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "DLAComponent.h" },
		{ "ModuleRelativePath", "Public/DLAComponent.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDLAComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UDLAComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UActorComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_TerrainGen,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDLAComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UDLAComponent_Statics::ClassParams = {
	&UDLAComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDLAComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UDLAComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UDLAComponent()
{
	if (!Z_Registration_Info_UClass_UDLAComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDLAComponent.OuterSingleton, Z_Construct_UClass_UDLAComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UDLAComponent.OuterSingleton;
}
template<> TERRAINGEN_API UClass* StaticClass<UDLAComponent>()
{
	return UDLAComponent::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UDLAComponent);
UDLAComponent::~UDLAComponent() {}
// End Class UDLAComponent

// Begin Registration
struct Z_CompiledInDeferFile_FID_forkRepos_TerrainGen_Source_TerrainGen_Public_DLAComponent_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UDLAComponent, UDLAComponent::StaticClass, TEXT("UDLAComponent"), &Z_Registration_Info_UClass_UDLAComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDLAComponent), 1024201109U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_forkRepos_TerrainGen_Source_TerrainGen_Public_DLAComponent_h_2728181142(TEXT("/Script/TerrainGen"),
	Z_CompiledInDeferFile_FID_forkRepos_TerrainGen_Source_TerrainGen_Public_DLAComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_forkRepos_TerrainGen_Source_TerrainGen_Public_DLAComponent_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
