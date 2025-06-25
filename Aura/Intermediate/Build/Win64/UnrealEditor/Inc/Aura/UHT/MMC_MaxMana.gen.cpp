// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Aura/AbilitySystem/MMC/MMC_MaxMana.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeMMC_MaxMana() {}

// ********** Begin Cross Module References ********************************************************
AURA_API UClass* Z_Construct_UClass_UMMC_MaxMana();
AURA_API UClass* Z_Construct_UClass_UMMC_MaxMana_NoRegister();
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayModMagnitudeCalculation();
UPackage* Z_Construct_UPackage__Script_Aura();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UMMC_MaxMana *************************************************************
void UMMC_MaxMana::StaticRegisterNativesUMMC_MaxMana()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UMMC_MaxMana;
UClass* UMMC_MaxMana::GetPrivateStaticClass()
{
	using TClass = UMMC_MaxMana;
	if (!Z_Registration_Info_UClass_UMMC_MaxMana.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("MMC_MaxMana"),
			Z_Registration_Info_UClass_UMMC_MaxMana.InnerSingleton,
			StaticRegisterNativesUMMC_MaxMana,
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
	return Z_Registration_Info_UClass_UMMC_MaxMana.InnerSingleton;
}
UClass* Z_Construct_UClass_UMMC_MaxMana_NoRegister()
{
	return UMMC_MaxMana::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UMMC_MaxMana_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "AbilitySystem/MMC/MMC_MaxMana.h" },
		{ "ModuleRelativePath", "AbilitySystem/MMC/MMC_MaxMana.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMMC_MaxMana>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UMMC_MaxMana_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UGameplayModMagnitudeCalculation,
	(UObject* (*)())Z_Construct_UPackage__Script_Aura,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMMC_MaxMana_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMMC_MaxMana_Statics::ClassParams = {
	&UMMC_MaxMana::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMMC_MaxMana_Statics::Class_MetaDataParams), Z_Construct_UClass_UMMC_MaxMana_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMMC_MaxMana()
{
	if (!Z_Registration_Info_UClass_UMMC_MaxMana.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMMC_MaxMana.OuterSingleton, Z_Construct_UClass_UMMC_MaxMana_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMMC_MaxMana.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMMC_MaxMana);
UMMC_MaxMana::~UMMC_MaxMana() {}
// ********** End Class UMMC_MaxMana ***************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_learn_gas_Aura_Source_Aura_AbilitySystem_MMC_MMC_MaxMana_h__Script_Aura_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMMC_MaxMana, UMMC_MaxMana::StaticClass, TEXT("UMMC_MaxMana"), &Z_Registration_Info_UClass_UMMC_MaxMana, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMMC_MaxMana), 2621067401U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_learn_gas_Aura_Source_Aura_AbilitySystem_MMC_MMC_MaxMana_h__Script_Aura_2551124539(TEXT("/Script/Aura"),
	Z_CompiledInDeferFile_FID_learn_gas_Aura_Source_Aura_AbilitySystem_MMC_MMC_MaxMana_h__Script_Aura_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_learn_gas_Aura_Source_Aura_AbilitySystem_MMC_MMC_MaxMana_h__Script_Aura_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
