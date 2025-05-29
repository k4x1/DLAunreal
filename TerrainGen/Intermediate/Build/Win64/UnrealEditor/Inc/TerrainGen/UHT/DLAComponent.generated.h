// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "DLAComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef TERRAINGEN_DLAComponent_generated_h
#error "DLAComponent.generated.h already included, missing '#pragma once' in DLAComponent.h"
#endif
#define TERRAINGEN_DLAComponent_generated_h

#define FID_forkRepos_TerrainGen_Source_TerrainGen_Public_DLAComponent_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDLAComponent(); \
	friend struct Z_Construct_UClass_UDLAComponent_Statics; \
public: \
	DECLARE_CLASS(UDLAComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TerrainGen"), NO_API) \
	DECLARE_SERIALIZER(UDLAComponent)


#define FID_forkRepos_TerrainGen_Source_TerrainGen_Public_DLAComponent_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UDLAComponent(UDLAComponent&&); \
	UDLAComponent(const UDLAComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDLAComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDLAComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UDLAComponent) \
	NO_API virtual ~UDLAComponent();


#define FID_forkRepos_TerrainGen_Source_TerrainGen_Public_DLAComponent_h_10_PROLOG
#define FID_forkRepos_TerrainGen_Source_TerrainGen_Public_DLAComponent_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_forkRepos_TerrainGen_Source_TerrainGen_Public_DLAComponent_h_13_INCLASS_NO_PURE_DECLS \
	FID_forkRepos_TerrainGen_Source_TerrainGen_Public_DLAComponent_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TERRAINGEN_API UClass* StaticClass<class UDLAComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_forkRepos_TerrainGen_Source_TerrainGen_Public_DLAComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
