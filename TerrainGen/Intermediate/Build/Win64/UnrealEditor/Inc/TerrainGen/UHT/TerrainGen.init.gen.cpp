// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTerrainGen_init() {}
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_TerrainGen;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_TerrainGen()
	{
		if (!Z_Registration_Info_UPackage__Script_TerrainGen.OuterSingleton)
		{
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/TerrainGen",
				nullptr,
				0,
				PKG_CompiledIn | 0x00000000,
				0xCF07633F,
				0xDE72780F,
				METADATA_PARAMS(0, nullptr)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_TerrainGen.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_TerrainGen.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_TerrainGen(Z_Construct_UPackage__Script_TerrainGen, TEXT("/Script/TerrainGen"), Z_Registration_Info_UPackage__Script_TerrainGen, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0xCF07633F, 0xDE72780F));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
