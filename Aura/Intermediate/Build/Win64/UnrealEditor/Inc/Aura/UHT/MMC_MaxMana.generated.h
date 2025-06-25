// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AbilitySystem/MMC/MMC_MaxMana.h"

#ifdef AURA_MMC_MaxMana_generated_h
#error "MMC_MaxMana.generated.h already included, missing '#pragma once' in MMC_MaxMana.h"
#endif
#define AURA_MMC_MaxMana_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UMMC_MaxMana *************************************************************
AURA_API UClass* Z_Construct_UClass_UMMC_MaxMana_NoRegister();

#define FID_learn_gas_Aura_Source_Aura_AbilitySystem_MMC_MMC_MaxMana_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMMC_MaxMana(); \
	friend struct Z_Construct_UClass_UMMC_MaxMana_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend AURA_API UClass* Z_Construct_UClass_UMMC_MaxMana_NoRegister(); \
public: \
	DECLARE_CLASS2(UMMC_MaxMana, UGameplayModMagnitudeCalculation, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Aura"), Z_Construct_UClass_UMMC_MaxMana_NoRegister) \
	DECLARE_SERIALIZER(UMMC_MaxMana)


#define FID_learn_gas_Aura_Source_Aura_AbilitySystem_MMC_MMC_MaxMana_h_13_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMMC_MaxMana(UMMC_MaxMana&&) = delete; \
	UMMC_MaxMana(const UMMC_MaxMana&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMMC_MaxMana); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMMC_MaxMana); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UMMC_MaxMana) \
	NO_API virtual ~UMMC_MaxMana();


#define FID_learn_gas_Aura_Source_Aura_AbilitySystem_MMC_MMC_MaxMana_h_10_PROLOG
#define FID_learn_gas_Aura_Source_Aura_AbilitySystem_MMC_MMC_MaxMana_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_learn_gas_Aura_Source_Aura_AbilitySystem_MMC_MMC_MaxMana_h_13_INCLASS_NO_PURE_DECLS \
	FID_learn_gas_Aura_Source_Aura_AbilitySystem_MMC_MMC_MaxMana_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMMC_MaxMana;

// ********** End Class UMMC_MaxMana ***************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_learn_gas_Aura_Source_Aura_AbilitySystem_MMC_MMC_MaxMana_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
