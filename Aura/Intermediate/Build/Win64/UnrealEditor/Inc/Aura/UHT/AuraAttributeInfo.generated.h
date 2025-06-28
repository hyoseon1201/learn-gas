// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AbilitySystem/Data/AuraAttributeInfo.h"

#ifdef AURA_AuraAttributeInfo_generated_h
#error "AuraAttributeInfo.generated.h already included, missing '#pragma once' in AuraAttributeInfo.h"
#endif
#define AURA_AuraAttributeInfo_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FAuraAttributeDetails *********************************************
#define FID_learn_gas_Aura_Source_Aura_AbilitySystem_Data_AuraAttributeInfo_h_11_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FAuraAttributeDetails_Statics; \
	AURA_API static class UScriptStruct* StaticStruct();


struct FAuraAttributeDetails;
// ********** End ScriptStruct FAuraAttributeDetails ***********************************************

// ********** Begin Class UAuraAttributeInfo *******************************************************
AURA_API UClass* Z_Construct_UClass_UAuraAttributeInfo_NoRegister();

#define FID_learn_gas_Aura_Source_Aura_AbilitySystem_Data_AuraAttributeInfo_h_32_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAuraAttributeInfo(); \
	friend struct Z_Construct_UClass_UAuraAttributeInfo_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend AURA_API UClass* Z_Construct_UClass_UAuraAttributeInfo_NoRegister(); \
public: \
	DECLARE_CLASS2(UAuraAttributeInfo, UDataAsset, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Aura"), Z_Construct_UClass_UAuraAttributeInfo_NoRegister) \
	DECLARE_SERIALIZER(UAuraAttributeInfo)


#define FID_learn_gas_Aura_Source_Aura_AbilitySystem_Data_AuraAttributeInfo_h_32_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAuraAttributeInfo(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UAuraAttributeInfo(UAuraAttributeInfo&&) = delete; \
	UAuraAttributeInfo(const UAuraAttributeInfo&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAuraAttributeInfo); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAuraAttributeInfo); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAuraAttributeInfo) \
	NO_API virtual ~UAuraAttributeInfo();


#define FID_learn_gas_Aura_Source_Aura_AbilitySystem_Data_AuraAttributeInfo_h_29_PROLOG
#define FID_learn_gas_Aura_Source_Aura_AbilitySystem_Data_AuraAttributeInfo_h_32_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_learn_gas_Aura_Source_Aura_AbilitySystem_Data_AuraAttributeInfo_h_32_INCLASS_NO_PURE_DECLS \
	FID_learn_gas_Aura_Source_Aura_AbilitySystem_Data_AuraAttributeInfo_h_32_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UAuraAttributeInfo;

// ********** End Class UAuraAttributeInfo *********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_learn_gas_Aura_Source_Aura_AbilitySystem_Data_AuraAttributeInfo_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
