// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Aura/AbilitySystem/AuraAbilitySystemLibrary.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeAuraAbilitySystemLibrary() {}

// ********** Begin Cross Module References ********************************************************
AURA_API UClass* Z_Construct_UClass_UAuraAbilitySystemLibrary();
AURA_API UClass* Z_Construct_UClass_UAuraAbilitySystemLibrary_NoRegister();
AURA_API UClass* Z_Construct_UClass_UOverlayWidgetController_NoRegister();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
UPackage* Z_Construct_UPackage__Script_Aura();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UAuraAbilitySystemLibrary Function GetOverlayWidgetController ************
struct Z_Construct_UFunction_UAuraAbilitySystemLibrary_GetOverlayWidgetController_Statics
{
	struct AuraAbilitySystemLibrary_eventGetOverlayWidgetController_Parms
	{
		const UObject* WorldContextObject;
		UOverlayWidgetController* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "AuraAbilitySystemLibrary|WidgetController" },
		{ "ModuleRelativePath", "AbilitySystem/AuraAbilitySystemLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAuraAbilitySystemLibrary_GetOverlayWidgetController_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AuraAbilitySystemLibrary_eventGetOverlayWidgetController_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WorldContextObject_MetaData), NewProp_WorldContextObject_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAuraAbilitySystemLibrary_GetOverlayWidgetController_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AuraAbilitySystemLibrary_eventGetOverlayWidgetController_Parms, ReturnValue), Z_Construct_UClass_UOverlayWidgetController_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAuraAbilitySystemLibrary_GetOverlayWidgetController_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAuraAbilitySystemLibrary_GetOverlayWidgetController_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAuraAbilitySystemLibrary_GetOverlayWidgetController_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAuraAbilitySystemLibrary_GetOverlayWidgetController_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAuraAbilitySystemLibrary_GetOverlayWidgetController_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UAuraAbilitySystemLibrary, nullptr, "GetOverlayWidgetController", Z_Construct_UFunction_UAuraAbilitySystemLibrary_GetOverlayWidgetController_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAuraAbilitySystemLibrary_GetOverlayWidgetController_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAuraAbilitySystemLibrary_GetOverlayWidgetController_Statics::AuraAbilitySystemLibrary_eventGetOverlayWidgetController_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAuraAbilitySystemLibrary_GetOverlayWidgetController_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAuraAbilitySystemLibrary_GetOverlayWidgetController_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UAuraAbilitySystemLibrary_GetOverlayWidgetController_Statics::AuraAbilitySystemLibrary_eventGetOverlayWidgetController_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAuraAbilitySystemLibrary_GetOverlayWidgetController()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAuraAbilitySystemLibrary_GetOverlayWidgetController_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAuraAbilitySystemLibrary::execGetOverlayWidgetController)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UOverlayWidgetController**)Z_Param__Result=UAuraAbilitySystemLibrary::GetOverlayWidgetController(Z_Param_WorldContextObject);
	P_NATIVE_END;
}
// ********** End Class UAuraAbilitySystemLibrary Function GetOverlayWidgetController **************

// ********** Begin Class UAuraAbilitySystemLibrary ************************************************
void UAuraAbilitySystemLibrary::StaticRegisterNativesUAuraAbilitySystemLibrary()
{
	UClass* Class = UAuraAbilitySystemLibrary::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetOverlayWidgetController", &UAuraAbilitySystemLibrary::execGetOverlayWidgetController },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UAuraAbilitySystemLibrary;
UClass* UAuraAbilitySystemLibrary::GetPrivateStaticClass()
{
	using TClass = UAuraAbilitySystemLibrary;
	if (!Z_Registration_Info_UClass_UAuraAbilitySystemLibrary.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("AuraAbilitySystemLibrary"),
			Z_Registration_Info_UClass_UAuraAbilitySystemLibrary.InnerSingleton,
			StaticRegisterNativesUAuraAbilitySystemLibrary,
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
	return Z_Registration_Info_UClass_UAuraAbilitySystemLibrary.InnerSingleton;
}
UClass* Z_Construct_UClass_UAuraAbilitySystemLibrary_NoRegister()
{
	return UAuraAbilitySystemLibrary::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UAuraAbilitySystemLibrary_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "AbilitySystem/AuraAbilitySystemLibrary.h" },
		{ "ModuleRelativePath", "AbilitySystem/AuraAbilitySystemLibrary.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UAuraAbilitySystemLibrary_GetOverlayWidgetController, "GetOverlayWidgetController" }, // 2752722979
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAuraAbilitySystemLibrary>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UAuraAbilitySystemLibrary_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
	(UObject* (*)())Z_Construct_UPackage__Script_Aura,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAuraAbilitySystemLibrary_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAuraAbilitySystemLibrary_Statics::ClassParams = {
	&UAuraAbilitySystemLibrary::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAuraAbilitySystemLibrary_Statics::Class_MetaDataParams), Z_Construct_UClass_UAuraAbilitySystemLibrary_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UAuraAbilitySystemLibrary()
{
	if (!Z_Registration_Info_UClass_UAuraAbilitySystemLibrary.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAuraAbilitySystemLibrary.OuterSingleton, Z_Construct_UClass_UAuraAbilitySystemLibrary_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAuraAbilitySystemLibrary.OuterSingleton;
}
UAuraAbilitySystemLibrary::UAuraAbilitySystemLibrary(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UAuraAbilitySystemLibrary);
UAuraAbilitySystemLibrary::~UAuraAbilitySystemLibrary() {}
// ********** End Class UAuraAbilitySystemLibrary **************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_learn_gas_Aura_Source_Aura_AbilitySystem_AuraAbilitySystemLibrary_h__Script_Aura_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UAuraAbilitySystemLibrary, UAuraAbilitySystemLibrary::StaticClass, TEXT("UAuraAbilitySystemLibrary"), &Z_Registration_Info_UClass_UAuraAbilitySystemLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAuraAbilitySystemLibrary), 132275242U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_learn_gas_Aura_Source_Aura_AbilitySystem_AuraAbilitySystemLibrary_h__Script_Aura_1995598447(TEXT("/Script/Aura"),
	Z_CompiledInDeferFile_FID_learn_gas_Aura_Source_Aura_AbilitySystem_AuraAbilitySystemLibrary_h__Script_Aura_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_learn_gas_Aura_Source_Aura_AbilitySystem_AuraAbilitySystemLibrary_h__Script_Aura_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
