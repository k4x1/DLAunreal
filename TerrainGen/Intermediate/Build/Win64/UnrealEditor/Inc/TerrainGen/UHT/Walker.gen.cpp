// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TerrainGen/Walker.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWalker() {}

// Begin Cross Module References
TERRAINGEN_API UScriptStruct* Z_Construct_UScriptStruct_FWalker();
UPackage* Z_Construct_UPackage__Script_TerrainGen();
// End Cross Module References

// Begin ScriptStruct FWalker
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_Walker;
class UScriptStruct* FWalker::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_Walker.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_Walker.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FWalker, (UObject*)Z_Construct_UPackage__Script_TerrainGen(), TEXT("Walker"));
	}
	return Z_Registration_Info_UScriptStruct_Walker.OuterSingleton;
}
template<> TERRAINGEN_API UScriptStruct* StaticStruct<FWalker>()
{
	return FWalker::StaticStruct();
}
struct Z_Construct_UScriptStruct_FWalker_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Walker.h" },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FWalker>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FWalker_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_TerrainGen,
	nullptr,
	&NewStructOps,
	"Walker",
	nullptr,
	0,
	sizeof(FWalker),
	alignof(FWalker),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWalker_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FWalker_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FWalker()
{
	if (!Z_Registration_Info_UScriptStruct_Walker.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_Walker.InnerSingleton, Z_Construct_UScriptStruct_FWalker_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_Walker.InnerSingleton;
}
// End ScriptStruct FWalker

// Begin Registration
struct Z_CompiledInDeferFile_FID_forkRepos_TerrainGen_Source_TerrainGen_Walker_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FWalker::StaticStruct, Z_Construct_UScriptStruct_FWalker_Statics::NewStructOps, TEXT("Walker"), &Z_Registration_Info_UScriptStruct_Walker, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FWalker), 259640780U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_forkRepos_TerrainGen_Source_TerrainGen_Walker_h_1182489235(TEXT("/Script/TerrainGen"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_forkRepos_TerrainGen_Source_TerrainGen_Walker_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_forkRepos_TerrainGen_Source_TerrainGen_Walker_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
