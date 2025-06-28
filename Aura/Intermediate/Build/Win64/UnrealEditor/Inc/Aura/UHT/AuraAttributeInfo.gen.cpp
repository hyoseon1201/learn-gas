// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Aura/AbilitySystem/Data/AuraAttributeInfo.h"
#include "GameplayTagContainer.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeAuraAttributeInfo() {}

// ********** Begin Cross Module References ********************************************************
AURA_API UClass* Z_Construct_UClass_UAuraAttributeInfo();
AURA_API UClass* Z_Construct_UClass_UAuraAttributeInfo_NoRegister();
AURA_API UScriptStruct* Z_Construct_UScriptStruct_FAuraAttributeDetails();
ENGINE_API UClass* Z_Construct_UClass_UDataAsset();
GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
UPackage* Z_Construct_UPackage__Script_Aura();
// ********** End Cross Module References **********************************************************

// ********** Begin ScriptStruct FAuraAttributeDetails *********************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FAuraAttributeDetails;
class UScriptStruct* FAuraAttributeDetails::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FAuraAttributeDetails.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FAuraAttributeDetails.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAuraAttributeDetails, (UObject*)Z_Construct_UPackage__Script_Aura(), TEXT("AuraAttributeDetails"));
	}
	return Z_Registration_Info_UScriptStruct_FAuraAttributeDetails.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FAuraAttributeDetails_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "AbilitySystem/Data/AuraAttributeInfo.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AttributeTag_MetaData[] = {
		{ "Category", "AuraAttributeDetails" },
		{ "ModuleRelativePath", "AbilitySystem/Data/AuraAttributeInfo.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AttributeName_MetaData[] = {
		{ "Category", "AuraAttributeDetails" },
		{ "ModuleRelativePath", "AbilitySystem/Data/AuraAttributeInfo.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AttributeDescription_MetaData[] = {
		{ "Category", "AuraAttributeDetails" },
		{ "ModuleRelativePath", "AbilitySystem/Data/AuraAttributeInfo.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AttributeValue_MetaData[] = {
		{ "Category", "AuraAttributeDetails" },
		{ "ModuleRelativePath", "AbilitySystem/Data/AuraAttributeInfo.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_AttributeTag;
	static const UECodeGen_Private::FTextPropertyParams NewProp_AttributeName;
	static const UECodeGen_Private::FTextPropertyParams NewProp_AttributeDescription;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_AttributeValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAuraAttributeDetails>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAuraAttributeDetails_Statics::NewProp_AttributeTag = { "AttributeTag", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAuraAttributeDetails, AttributeTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AttributeTag_MetaData), NewProp_AttributeTag_MetaData) }; // 133831994
const UECodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FAuraAttributeDetails_Statics::NewProp_AttributeName = { "AttributeName", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAuraAttributeDetails, AttributeName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AttributeName_MetaData), NewProp_AttributeName_MetaData) };
const UECodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FAuraAttributeDetails_Statics::NewProp_AttributeDescription = { "AttributeDescription", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAuraAttributeDetails, AttributeDescription), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AttributeDescription_MetaData), NewProp_AttributeDescription_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAuraAttributeDetails_Statics::NewProp_AttributeValue = { "AttributeValue", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAuraAttributeDetails, AttributeValue), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AttributeValue_MetaData), NewProp_AttributeValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAuraAttributeDetails_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAuraAttributeDetails_Statics::NewProp_AttributeTag,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAuraAttributeDetails_Statics::NewProp_AttributeName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAuraAttributeDetails_Statics::NewProp_AttributeDescription,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAuraAttributeDetails_Statics::NewProp_AttributeValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAuraAttributeDetails_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAuraAttributeDetails_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Aura,
	nullptr,
	&NewStructOps,
	"AuraAttributeDetails",
	Z_Construct_UScriptStruct_FAuraAttributeDetails_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAuraAttributeDetails_Statics::PropPointers),
	sizeof(FAuraAttributeDetails),
	alignof(FAuraAttributeDetails),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAuraAttributeDetails_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FAuraAttributeDetails_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FAuraAttributeDetails()
{
	if (!Z_Registration_Info_UScriptStruct_FAuraAttributeDetails.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FAuraAttributeDetails.InnerSingleton, Z_Construct_UScriptStruct_FAuraAttributeDetails_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FAuraAttributeDetails.InnerSingleton;
}
// ********** End ScriptStruct FAuraAttributeDetails ***********************************************

// ********** Begin Class UAuraAttributeInfo *******************************************************
void UAuraAttributeInfo::StaticRegisterNativesUAuraAttributeInfo()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UAuraAttributeInfo;
UClass* UAuraAttributeInfo::GetPrivateStaticClass()
{
	using TClass = UAuraAttributeInfo;
	if (!Z_Registration_Info_UClass_UAuraAttributeInfo.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("AuraAttributeInfo"),
			Z_Registration_Info_UClass_UAuraAttributeInfo.InnerSingleton,
			StaticRegisterNativesUAuraAttributeInfo,
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
	return Z_Registration_Info_UClass_UAuraAttributeInfo.InnerSingleton;
}
UClass* Z_Construct_UClass_UAuraAttributeInfo_NoRegister()
{
	return UAuraAttributeInfo::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UAuraAttributeInfo_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "AbilitySystem/Data/AuraAttributeInfo.h" },
		{ "ModuleRelativePath", "AbilitySystem/Data/AuraAttributeInfo.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AttributeInformation_MetaData[] = {
		{ "Category", "AuraAttributeInfo" },
		{ "ModuleRelativePath", "AbilitySystem/Data/AuraAttributeInfo.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_AttributeInformation_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_AttributeInformation;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAuraAttributeInfo>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAuraAttributeInfo_Statics::NewProp_AttributeInformation_Inner = { "AttributeInformation", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FAuraAttributeDetails, METADATA_PARAMS(0, nullptr) }; // 2144666266
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UAuraAttributeInfo_Statics::NewProp_AttributeInformation = { "AttributeInformation", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAuraAttributeInfo, AttributeInformation), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AttributeInformation_MetaData), NewProp_AttributeInformation_MetaData) }; // 2144666266
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAuraAttributeInfo_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAuraAttributeInfo_Statics::NewProp_AttributeInformation_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAuraAttributeInfo_Statics::NewProp_AttributeInformation,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAuraAttributeInfo_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UAuraAttributeInfo_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UDataAsset,
	(UObject* (*)())Z_Construct_UPackage__Script_Aura,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAuraAttributeInfo_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAuraAttributeInfo_Statics::ClassParams = {
	&UAuraAttributeInfo::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UAuraAttributeInfo_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UAuraAttributeInfo_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAuraAttributeInfo_Statics::Class_MetaDataParams), Z_Construct_UClass_UAuraAttributeInfo_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UAuraAttributeInfo()
{
	if (!Z_Registration_Info_UClass_UAuraAttributeInfo.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAuraAttributeInfo.OuterSingleton, Z_Construct_UClass_UAuraAttributeInfo_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAuraAttributeInfo.OuterSingleton;
}
UAuraAttributeInfo::UAuraAttributeInfo(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UAuraAttributeInfo);
UAuraAttributeInfo::~UAuraAttributeInfo() {}
// ********** End Class UAuraAttributeInfo *********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_learn_gas_Aura_Source_Aura_AbilitySystem_Data_AuraAttributeInfo_h__Script_Aura_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FAuraAttributeDetails::StaticStruct, Z_Construct_UScriptStruct_FAuraAttributeDetails_Statics::NewStructOps, TEXT("AuraAttributeDetails"), &Z_Registration_Info_UScriptStruct_FAuraAttributeDetails, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAuraAttributeDetails), 2144666266U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UAuraAttributeInfo, UAuraAttributeInfo::StaticClass, TEXT("UAuraAttributeInfo"), &Z_Registration_Info_UClass_UAuraAttributeInfo, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAuraAttributeInfo), 983547675U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_learn_gas_Aura_Source_Aura_AbilitySystem_Data_AuraAttributeInfo_h__Script_Aura_2677408500(TEXT("/Script/Aura"),
	Z_CompiledInDeferFile_FID_learn_gas_Aura_Source_Aura_AbilitySystem_Data_AuraAttributeInfo_h__Script_Aura_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_learn_gas_Aura_Source_Aura_AbilitySystem_Data_AuraAttributeInfo_h__Script_Aura_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_learn_gas_Aura_Source_Aura_AbilitySystem_Data_AuraAttributeInfo_h__Script_Aura_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_learn_gas_Aura_Source_Aura_AbilitySystem_Data_AuraAttributeInfo_h__Script_Aura_Statics::ScriptStructInfo),
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
