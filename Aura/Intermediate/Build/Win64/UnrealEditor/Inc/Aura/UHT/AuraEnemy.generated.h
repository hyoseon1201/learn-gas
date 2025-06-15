// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Character/AuraEnemy.h"

#ifdef AURA_AuraEnemy_generated_h
#error "AuraEnemy.generated.h already included, missing '#pragma once' in AuraEnemy.h"
#endif
#define AURA_AuraEnemy_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class AAuraEnemy ***************************************************************
AURA_API UClass* Z_Construct_UClass_AAuraEnemy_NoRegister();

#define FID_learn_gas_Aura_Source_Aura_Character_AuraEnemy_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAAuraEnemy(); \
	friend struct Z_Construct_UClass_AAuraEnemy_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend AURA_API UClass* Z_Construct_UClass_AAuraEnemy_NoRegister(); \
public: \
	DECLARE_CLASS2(AAuraEnemy, AAuraCharacterBase, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Aura"), Z_Construct_UClass_AAuraEnemy_NoRegister) \
	DECLARE_SERIALIZER(AAuraEnemy) \
	virtual UObject* _getUObject() const override { return const_cast<AAuraEnemy*>(this); }


#define FID_learn_gas_Aura_Source_Aura_Character_AuraEnemy_h_14_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	AAuraEnemy(AAuraEnemy&&) = delete; \
	AAuraEnemy(const AAuraEnemy&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AAuraEnemy); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AAuraEnemy); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AAuraEnemy) \
	NO_API virtual ~AAuraEnemy();


#define FID_learn_gas_Aura_Source_Aura_Character_AuraEnemy_h_11_PROLOG
#define FID_learn_gas_Aura_Source_Aura_Character_AuraEnemy_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_learn_gas_Aura_Source_Aura_Character_AuraEnemy_h_14_INCLASS_NO_PURE_DECLS \
	FID_learn_gas_Aura_Source_Aura_Character_AuraEnemy_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class AAuraEnemy;

// ********** End Class AAuraEnemy *****************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_learn_gas_Aura_Source_Aura_Character_AuraEnemy_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
