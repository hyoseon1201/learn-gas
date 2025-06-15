// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Aura/Character/AuraEnemy.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeAuraEnemy() {}

// ********** Begin Cross Module References ********************************************************
AURA_API UClass* Z_Construct_UClass_AAuraCharacterBase();
AURA_API UClass* Z_Construct_UClass_AAuraEnemy();
AURA_API UClass* Z_Construct_UClass_AAuraEnemy_NoRegister();
AURA_API UClass* Z_Construct_UClass_UEnemyInterface_NoRegister();
UPackage* Z_Construct_UPackage__Script_Aura();
// ********** End Cross Module References **********************************************************

// ********** Begin Class AAuraEnemy ***************************************************************
void AAuraEnemy::StaticRegisterNativesAAuraEnemy()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_AAuraEnemy;
UClass* AAuraEnemy::GetPrivateStaticClass()
{
	using TClass = AAuraEnemy;
	if (!Z_Registration_Info_UClass_AAuraEnemy.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("AuraEnemy"),
			Z_Registration_Info_UClass_AAuraEnemy.InnerSingleton,
			StaticRegisterNativesAAuraEnemy,
			sizeof(TClass),
			alignof(TClass),
			TClass::StaticClassFlags,
			TClass::StaticClassCastFlags(),
			TClass::StaticConfigName(),
			(UClass::ClassConstructorType)InternalConstructor<TClass>,
			(UClass::ClassVTableHelperCtorCallerType)InternalVTableHelperCtorCaller<TClass>,
			UOBJECT_CPPCLASS_STATICFUNCTIONS_FORCLASS(TClass),
			&TClass::Super::StaticClass,
			&TClass::WithinClass::StaticClass
		);
	}
	return Z_Registration_Info_UClass_AAuraEnemy.InnerSingleton;
}
UClass* Z_Construct_UClass_AAuraEnemy_NoRegister()
{
	return AAuraEnemy::GetPrivateStaticClass();
}
struct Z_Construct_UClass_AAuraEnemy_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Character/AuraEnemy.h" },
		{ "ModuleRelativePath", "Character/AuraEnemy.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AAuraEnemy>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AAuraEnemy_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AAuraCharacterBase,
	(UObject* (*)())Z_Construct_UPackage__Script_Aura,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AAuraEnemy_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_AAuraEnemy_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UEnemyInterface_NoRegister, (int32)VTABLE_OFFSET(AAuraEnemy, IEnemyInterface), false },  // 2954994839
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_AAuraEnemy_Statics::ClassParams = {
	&AAuraEnemy::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	UE_ARRAY_COUNT(InterfaceParams),
	0x009001A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AAuraEnemy_Statics::Class_MetaDataParams), Z_Construct_UClass_AAuraEnemy_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AAuraEnemy()
{
	if (!Z_Registration_Info_UClass_AAuraEnemy.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AAuraEnemy.OuterSingleton, Z_Construct_UClass_AAuraEnemy_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AAuraEnemy.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AAuraEnemy);
AAuraEnemy::~AAuraEnemy() {}
// ********** End Class AAuraEnemy *****************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_learn_gas_Aura_Source_Aura_Character_AuraEnemy_h__Script_Aura_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AAuraEnemy, AAuraEnemy::StaticClass, TEXT("AAuraEnemy"), &Z_Registration_Info_UClass_AAuraEnemy, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AAuraEnemy), 694581716U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_learn_gas_Aura_Source_Aura_Character_AuraEnemy_h__Script_Aura_1990940594(TEXT("/Script/Aura"),
	Z_CompiledInDeferFile_FID_learn_gas_Aura_Source_Aura_Character_AuraEnemy_h__Script_Aura_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_learn_gas_Aura_Source_Aura_Character_AuraEnemy_h__Script_Aura_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
