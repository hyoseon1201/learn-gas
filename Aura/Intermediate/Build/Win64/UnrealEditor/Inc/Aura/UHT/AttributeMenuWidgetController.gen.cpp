// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Aura/UI/WidgetController/AttributeMenuWidgetController.h"
#include "Aura/AbilitySystem/Data/AuraAttributeInfo.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeAttributeMenuWidgetController() {}

// ********** Begin Cross Module References ********************************************************
AURA_API UClass* Z_Construct_UClass_UAttributeMenuWidgetController();
AURA_API UClass* Z_Construct_UClass_UAttributeMenuWidgetController_NoRegister();
AURA_API UClass* Z_Construct_UClass_UAuraAttributeInfo_NoRegister();
AURA_API UClass* Z_Construct_UClass_UAuraWidgetController();
AURA_API UFunction* Z_Construct_UDelegateFunction_Aura_AttributeInfoSignature__DelegateSignature();
AURA_API UScriptStruct* Z_Construct_UScriptStruct_FAuraAttributeDetails();
UPackage* Z_Construct_UPackage__Script_Aura();
// ********** End Cross Module References **********************************************************

// ********** Begin Delegate FAttributeInfoSignature ***********************************************
struct Z_Construct_UDelegateFunction_Aura_AttributeInfoSignature__DelegateSignature_Statics
{
	struct _Script_Aura_eventAttributeInfoSignature_Parms
	{
		FAuraAttributeDetails Info;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "UI/WidgetController/AttributeMenuWidgetController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Info_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Info;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_Aura_AttributeInfoSignature__DelegateSignature_Statics::NewProp_Info = { "Info", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_Aura_eventAttributeInfoSignature_Parms, Info), Z_Construct_UScriptStruct_FAuraAttributeDetails, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Info_MetaData), NewProp_Info_MetaData) }; // 2144666266
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_Aura_AttributeInfoSignature__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Aura_AttributeInfoSignature__DelegateSignature_Statics::NewProp_Info,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Aura_AttributeInfoSignature__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_Aura_AttributeInfoSignature__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_Aura, nullptr, "AttributeInfoSignature__DelegateSignature", Z_Construct_UDelegateFunction_Aura_AttributeInfoSignature__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Aura_AttributeInfoSignature__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_Aura_AttributeInfoSignature__DelegateSignature_Statics::_Script_Aura_eventAttributeInfoSignature_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00530000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Aura_AttributeInfoSignature__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_Aura_AttributeInfoSignature__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_Aura_AttributeInfoSignature__DelegateSignature_Statics::_Script_Aura_eventAttributeInfoSignature_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_Aura_AttributeInfoSignature__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_Aura_AttributeInfoSignature__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FAttributeInfoSignature_DelegateWrapper(const FMulticastScriptDelegate& AttributeInfoSignature, FAuraAttributeDetails const& Info)
{
	struct _Script_Aura_eventAttributeInfoSignature_Parms
	{
		FAuraAttributeDetails Info;
	};
	_Script_Aura_eventAttributeInfoSignature_Parms Parms;
	Parms.Info=Info;
	AttributeInfoSignature.ProcessMulticastDelegate<UObject>(&Parms);
}
// ********** End Delegate FAttributeInfoSignature *************************************************

// ********** Begin Class UAttributeMenuWidgetController *******************************************
void UAttributeMenuWidgetController::StaticRegisterNativesUAttributeMenuWidgetController()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UAttributeMenuWidgetController;
UClass* UAttributeMenuWidgetController::GetPrivateStaticClass()
{
	using TClass = UAttributeMenuWidgetController;
	if (!Z_Registration_Info_UClass_UAttributeMenuWidgetController.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("AttributeMenuWidgetController"),
			Z_Registration_Info_UClass_UAttributeMenuWidgetController.InnerSingleton,
			StaticRegisterNativesUAttributeMenuWidgetController,
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
	return Z_Registration_Info_UClass_UAttributeMenuWidgetController.InnerSingleton;
}
UClass* Z_Construct_UClass_UAttributeMenuWidgetController_NoRegister()
{
	return UAttributeMenuWidgetController::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UAttributeMenuWidgetController_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "UI/WidgetController/AttributeMenuWidgetController.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "UI/WidgetController/AttributeMenuWidgetController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AttributeInfoDelegate_MetaData[] = {
		{ "Category", "GAS|Attributes" },
		{ "ModuleRelativePath", "UI/WidgetController/AttributeMenuWidgetController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AttributeInfo_MetaData[] = {
		{ "Category", "AttributeMenuWidgetController" },
		{ "ModuleRelativePath", "UI/WidgetController/AttributeMenuWidgetController.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_AttributeInfoDelegate;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AttributeInfo;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAttributeMenuWidgetController>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UAttributeMenuWidgetController_Statics::NewProp_AttributeInfoDelegate = { "AttributeInfoDelegate", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAttributeMenuWidgetController, AttributeInfoDelegate), Z_Construct_UDelegateFunction_Aura_AttributeInfoSignature__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AttributeInfoDelegate_MetaData), NewProp_AttributeInfoDelegate_MetaData) }; // 3135958660
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAttributeMenuWidgetController_Statics::NewProp_AttributeInfo = { "AttributeInfo", nullptr, (EPropertyFlags)0x0124080000010001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAttributeMenuWidgetController, AttributeInfo), Z_Construct_UClass_UAuraAttributeInfo_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AttributeInfo_MetaData), NewProp_AttributeInfo_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAttributeMenuWidgetController_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAttributeMenuWidgetController_Statics::NewProp_AttributeInfoDelegate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAttributeMenuWidgetController_Statics::NewProp_AttributeInfo,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAttributeMenuWidgetController_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UAttributeMenuWidgetController_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UAuraWidgetController,
	(UObject* (*)())Z_Construct_UPackage__Script_Aura,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAttributeMenuWidgetController_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAttributeMenuWidgetController_Statics::ClassParams = {
	&UAttributeMenuWidgetController::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UAttributeMenuWidgetController_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UAttributeMenuWidgetController_Statics::PropPointers),
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAttributeMenuWidgetController_Statics::Class_MetaDataParams), Z_Construct_UClass_UAttributeMenuWidgetController_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UAttributeMenuWidgetController()
{
	if (!Z_Registration_Info_UClass_UAttributeMenuWidgetController.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAttributeMenuWidgetController.OuterSingleton, Z_Construct_UClass_UAttributeMenuWidgetController_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAttributeMenuWidgetController.OuterSingleton;
}
UAttributeMenuWidgetController::UAttributeMenuWidgetController(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UAttributeMenuWidgetController);
UAttributeMenuWidgetController::~UAttributeMenuWidgetController() {}
// ********** End Class UAttributeMenuWidgetController *********************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_learn_gas_Aura_Source_Aura_UI_WidgetController_AttributeMenuWidgetController_h__Script_Aura_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UAttributeMenuWidgetController, UAttributeMenuWidgetController::StaticClass, TEXT("UAttributeMenuWidgetController"), &Z_Registration_Info_UClass_UAttributeMenuWidgetController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAttributeMenuWidgetController), 4278164469U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_learn_gas_Aura_Source_Aura_UI_WidgetController_AttributeMenuWidgetController_h__Script_Aura_1681707292(TEXT("/Script/Aura"),
	Z_CompiledInDeferFile_FID_learn_gas_Aura_Source_Aura_UI_WidgetController_AttributeMenuWidgetController_h__Script_Aura_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_learn_gas_Aura_Source_Aura_UI_WidgetController_AttributeMenuWidgetController_h__Script_Aura_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
