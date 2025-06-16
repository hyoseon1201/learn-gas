// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Aura/AbilitySystem/AuraAttributeSet.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeAuraAttributeSet() {}

// ********** Begin Cross Module References ********************************************************
AURA_API UClass* Z_Construct_UClass_UAuraAttributeSet();
AURA_API UClass* Z_Construct_UClass_UAuraAttributeSet_NoRegister();
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAttributeSet();
UPackage* Z_Construct_UPackage__Script_Aura();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UAuraAttributeSet ********************************************************
void UAuraAttributeSet::StaticRegisterNativesUAuraAttributeSet()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UAuraAttributeSet;
UClass* UAuraAttributeSet::GetPrivateStaticClass()
{
	using TClass = UAuraAttributeSet;
	if (!Z_Registration_Info_UClass_UAuraAttributeSet.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("AuraAttributeSet"),
			Z_Registration_Info_UClass_UAuraAttributeSet.InnerSingleton,
			StaticRegisterNativesUAuraAttributeSet,
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
	return Z_Registration_Info_UClass_UAuraAttributeSet.InnerSingleton;
}
UClass* Z_Construct_UClass_UAuraAttributeSet_NoRegister()
{
	return UAuraAttributeSet::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UAuraAttributeSet_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "AbilitySystem/AuraAttributeSet.h" },
		{ "ModuleRelativePath", "AbilitySystem/AuraAttributeSet.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAuraAttributeSet>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UAuraAttributeSet_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UAttributeSet,
	(UObject* (*)())Z_Construct_UPackage__Script_Aura,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAuraAttributeSet_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAuraAttributeSet_Statics::ClassParams = {
	&UAuraAttributeSet::StaticClass,
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
	0x003000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAuraAttributeSet_Statics::Class_MetaDataParams), Z_Construct_UClass_UAuraAttributeSet_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UAuraAttributeSet()
{
	if (!Z_Registration_Info_UClass_UAuraAttributeSet.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAuraAttributeSet.OuterSingleton, Z_Construct_UClass_UAuraAttributeSet_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAuraAttributeSet.OuterSingleton;
}
UAuraAttributeSet::UAuraAttributeSet(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UAuraAttributeSet);
UAuraAttributeSet::~UAuraAttributeSet() {}
// ********** End Class UAuraAttributeSet **********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_learn_gas_Aura_Source_Aura_AbilitySystem_AuraAttributeSet_h__Script_Aura_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UAuraAttributeSet, UAuraAttributeSet::StaticClass, TEXT("UAuraAttributeSet"), &Z_Registration_Info_UClass_UAuraAttributeSet, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAuraAttributeSet), 512564163U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_learn_gas_Aura_Source_Aura_AbilitySystem_AuraAttributeSet_h__Script_Aura_2280726118(TEXT("/Script/Aura"),
	Z_CompiledInDeferFile_FID_learn_gas_Aura_Source_Aura_AbilitySystem_AuraAttributeSet_h__Script_Aura_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_learn_gas_Aura_Source_Aura_AbilitySystem_AuraAttributeSet_h__Script_Aura_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
