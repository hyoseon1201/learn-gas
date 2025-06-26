// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AuraAssetManager.h"

#ifdef AURA_AuraAssetManager_generated_h
#error "AuraAssetManager.generated.h already included, missing '#pragma once' in AuraAssetManager.h"
#endif
#define AURA_AuraAssetManager_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UAuraAssetManager ********************************************************
AURA_API UClass* Z_Construct_UClass_UAuraAssetManager_NoRegister();

#define FID_learn_gas_Aura_Source_Aura_AuraAssetManager_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAuraAssetManager(); \
	friend struct Z_Construct_UClass_UAuraAssetManager_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend AURA_API UClass* Z_Construct_UClass_UAuraAssetManager_NoRegister(); \
public: \
	DECLARE_CLASS2(UAuraAssetManager, UAssetManager, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Aura"), Z_Construct_UClass_UAuraAssetManager_NoRegister) \
	DECLARE_SERIALIZER(UAuraAssetManager)


#define FID_learn_gas_Aura_Source_Aura_AuraAssetManager_h_13_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAuraAssetManager(); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UAuraAssetManager(UAuraAssetManager&&) = delete; \
	UAuraAssetManager(const UAuraAssetManager&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAuraAssetManager); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAuraAssetManager); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UAuraAssetManager) \
	NO_API virtual ~UAuraAssetManager();


#define FID_learn_gas_Aura_Source_Aura_AuraAssetManager_h_10_PROLOG
#define FID_learn_gas_Aura_Source_Aura_AuraAssetManager_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_learn_gas_Aura_Source_Aura_AuraAssetManager_h_13_INCLASS_NO_PURE_DECLS \
	FID_learn_gas_Aura_Source_Aura_AuraAssetManager_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UAuraAssetManager;

// ********** End Class UAuraAssetManager **********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_learn_gas_Aura_Source_Aura_AuraAssetManager_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
