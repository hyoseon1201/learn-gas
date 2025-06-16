// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Aura/UI/WidgetController/OverlayWidgetController.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeOverlayWidgetController() {}

// ********** Begin Cross Module References ********************************************************
AURA_API UClass* Z_Construct_UClass_UAuraWidgetController();
AURA_API UClass* Z_Construct_UClass_UOverlayWidgetController();
AURA_API UClass* Z_Construct_UClass_UOverlayWidgetController_NoRegister();
AURA_API UFunction* Z_Construct_UDelegateFunction_Aura_OnHealthChangeSignature__DelegateSignature();
AURA_API UFunction* Z_Construct_UDelegateFunction_Aura_OnManaChangeSignature__DelegateSignature();
AURA_API UFunction* Z_Construct_UDelegateFunction_Aura_OnMaxHealthChangeSignature__DelegateSignature();
AURA_API UFunction* Z_Construct_UDelegateFunction_Aura_OnMaxManaChangeSignature__DelegateSignature();
UPackage* Z_Construct_UPackage__Script_Aura();
// ********** End Cross Module References **********************************************************

// ********** Begin Delegate FOnHealthChangeSignature **********************************************
struct Z_Construct_UDelegateFunction_Aura_OnHealthChangeSignature__DelegateSignature_Statics
{
	struct _Script_Aura_eventOnHealthChangeSignature_Parms
	{
		float NewHealth;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "UI/WidgetController/OverlayWidgetController.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_NewHealth;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UDelegateFunction_Aura_OnHealthChangeSignature__DelegateSignature_Statics::NewProp_NewHealth = { "NewHealth", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_Aura_eventOnHealthChangeSignature_Parms, NewHealth), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_Aura_OnHealthChangeSignature__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Aura_OnHealthChangeSignature__DelegateSignature_Statics::NewProp_NewHealth,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Aura_OnHealthChangeSignature__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_Aura_OnHealthChangeSignature__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_Aura, nullptr, "OnHealthChangeSignature__DelegateSignature", Z_Construct_UDelegateFunction_Aura_OnHealthChangeSignature__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Aura_OnHealthChangeSignature__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_Aura_OnHealthChangeSignature__DelegateSignature_Statics::_Script_Aura_eventOnHealthChangeSignature_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Aura_OnHealthChangeSignature__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_Aura_OnHealthChangeSignature__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_Aura_OnHealthChangeSignature__DelegateSignature_Statics::_Script_Aura_eventOnHealthChangeSignature_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_Aura_OnHealthChangeSignature__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_Aura_OnHealthChangeSignature__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnHealthChangeSignature_DelegateWrapper(const FMulticastScriptDelegate& OnHealthChangeSignature, float NewHealth)
{
	struct _Script_Aura_eventOnHealthChangeSignature_Parms
	{
		float NewHealth;
	};
	_Script_Aura_eventOnHealthChangeSignature_Parms Parms;
	Parms.NewHealth=NewHealth;
	OnHealthChangeSignature.ProcessMulticastDelegate<UObject>(&Parms);
}
// ********** End Delegate FOnHealthChangeSignature ************************************************

// ********** Begin Delegate FOnMaxHealthChangeSignature *******************************************
struct Z_Construct_UDelegateFunction_Aura_OnMaxHealthChangeSignature__DelegateSignature_Statics
{
	struct _Script_Aura_eventOnMaxHealthChangeSignature_Parms
	{
		float NewMaxHealth;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "UI/WidgetController/OverlayWidgetController.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_NewMaxHealth;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UDelegateFunction_Aura_OnMaxHealthChangeSignature__DelegateSignature_Statics::NewProp_NewMaxHealth = { "NewMaxHealth", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_Aura_eventOnMaxHealthChangeSignature_Parms, NewMaxHealth), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_Aura_OnMaxHealthChangeSignature__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Aura_OnMaxHealthChangeSignature__DelegateSignature_Statics::NewProp_NewMaxHealth,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Aura_OnMaxHealthChangeSignature__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_Aura_OnMaxHealthChangeSignature__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_Aura, nullptr, "OnMaxHealthChangeSignature__DelegateSignature", Z_Construct_UDelegateFunction_Aura_OnMaxHealthChangeSignature__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Aura_OnMaxHealthChangeSignature__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_Aura_OnMaxHealthChangeSignature__DelegateSignature_Statics::_Script_Aura_eventOnMaxHealthChangeSignature_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Aura_OnMaxHealthChangeSignature__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_Aura_OnMaxHealthChangeSignature__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_Aura_OnMaxHealthChangeSignature__DelegateSignature_Statics::_Script_Aura_eventOnMaxHealthChangeSignature_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_Aura_OnMaxHealthChangeSignature__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_Aura_OnMaxHealthChangeSignature__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnMaxHealthChangeSignature_DelegateWrapper(const FMulticastScriptDelegate& OnMaxHealthChangeSignature, float NewMaxHealth)
{
	struct _Script_Aura_eventOnMaxHealthChangeSignature_Parms
	{
		float NewMaxHealth;
	};
	_Script_Aura_eventOnMaxHealthChangeSignature_Parms Parms;
	Parms.NewMaxHealth=NewMaxHealth;
	OnMaxHealthChangeSignature.ProcessMulticastDelegate<UObject>(&Parms);
}
// ********** End Delegate FOnMaxHealthChangeSignature *********************************************

// ********** Begin Delegate FOnManaChangeSignature ************************************************
struct Z_Construct_UDelegateFunction_Aura_OnManaChangeSignature__DelegateSignature_Statics
{
	struct _Script_Aura_eventOnManaChangeSignature_Parms
	{
		float NewMana;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "UI/WidgetController/OverlayWidgetController.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_NewMana;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UDelegateFunction_Aura_OnManaChangeSignature__DelegateSignature_Statics::NewProp_NewMana = { "NewMana", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_Aura_eventOnManaChangeSignature_Parms, NewMana), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_Aura_OnManaChangeSignature__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Aura_OnManaChangeSignature__DelegateSignature_Statics::NewProp_NewMana,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Aura_OnManaChangeSignature__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_Aura_OnManaChangeSignature__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_Aura, nullptr, "OnManaChangeSignature__DelegateSignature", Z_Construct_UDelegateFunction_Aura_OnManaChangeSignature__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Aura_OnManaChangeSignature__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_Aura_OnManaChangeSignature__DelegateSignature_Statics::_Script_Aura_eventOnManaChangeSignature_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Aura_OnManaChangeSignature__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_Aura_OnManaChangeSignature__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_Aura_OnManaChangeSignature__DelegateSignature_Statics::_Script_Aura_eventOnManaChangeSignature_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_Aura_OnManaChangeSignature__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_Aura_OnManaChangeSignature__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnManaChangeSignature_DelegateWrapper(const FMulticastScriptDelegate& OnManaChangeSignature, float NewMana)
{
	struct _Script_Aura_eventOnManaChangeSignature_Parms
	{
		float NewMana;
	};
	_Script_Aura_eventOnManaChangeSignature_Parms Parms;
	Parms.NewMana=NewMana;
	OnManaChangeSignature.ProcessMulticastDelegate<UObject>(&Parms);
}
// ********** End Delegate FOnManaChangeSignature **************************************************

// ********** Begin Delegate FOnMaxManaChangeSignature *********************************************
struct Z_Construct_UDelegateFunction_Aura_OnMaxManaChangeSignature__DelegateSignature_Statics
{
	struct _Script_Aura_eventOnMaxManaChangeSignature_Parms
	{
		float NewMaxMana;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "UI/WidgetController/OverlayWidgetController.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_NewMaxMana;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UDelegateFunction_Aura_OnMaxManaChangeSignature__DelegateSignature_Statics::NewProp_NewMaxMana = { "NewMaxMana", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_Aura_eventOnMaxManaChangeSignature_Parms, NewMaxMana), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_Aura_OnMaxManaChangeSignature__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Aura_OnMaxManaChangeSignature__DelegateSignature_Statics::NewProp_NewMaxMana,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Aura_OnMaxManaChangeSignature__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_Aura_OnMaxManaChangeSignature__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_Aura, nullptr, "OnMaxManaChangeSignature__DelegateSignature", Z_Construct_UDelegateFunction_Aura_OnMaxManaChangeSignature__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Aura_OnMaxManaChangeSignature__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_Aura_OnMaxManaChangeSignature__DelegateSignature_Statics::_Script_Aura_eventOnMaxManaChangeSignature_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Aura_OnMaxManaChangeSignature__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_Aura_OnMaxManaChangeSignature__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_Aura_OnMaxManaChangeSignature__DelegateSignature_Statics::_Script_Aura_eventOnMaxManaChangeSignature_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_Aura_OnMaxManaChangeSignature__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_Aura_OnMaxManaChangeSignature__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnMaxManaChangeSignature_DelegateWrapper(const FMulticastScriptDelegate& OnMaxManaChangeSignature, float NewMaxMana)
{
	struct _Script_Aura_eventOnMaxManaChangeSignature_Parms
	{
		float NewMaxMana;
	};
	_Script_Aura_eventOnMaxManaChangeSignature_Parms Parms;
	Parms.NewMaxMana=NewMaxMana;
	OnMaxManaChangeSignature.ProcessMulticastDelegate<UObject>(&Parms);
}
// ********** End Delegate FOnMaxManaChangeSignature ***********************************************

// ********** Begin Class UOverlayWidgetController *************************************************
void UOverlayWidgetController::StaticRegisterNativesUOverlayWidgetController()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UOverlayWidgetController;
UClass* UOverlayWidgetController::GetPrivateStaticClass()
{
	using TClass = UOverlayWidgetController;
	if (!Z_Registration_Info_UClass_UOverlayWidgetController.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("OverlayWidgetController"),
			Z_Registration_Info_UClass_UOverlayWidgetController.InnerSingleton,
			StaticRegisterNativesUOverlayWidgetController,
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
	return Z_Registration_Info_UClass_UOverlayWidgetController.InnerSingleton;
}
UClass* Z_Construct_UClass_UOverlayWidgetController_NoRegister()
{
	return UOverlayWidgetController::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UOverlayWidgetController_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "UI/WidgetController/OverlayWidgetController.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "UI/WidgetController/OverlayWidgetController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnHealthChanged_MetaData[] = {
		{ "Category", "GAS|Attributes" },
		{ "ModuleRelativePath", "UI/WidgetController/OverlayWidgetController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnMaxHealthChanged_MetaData[] = {
		{ "Category", "GAS|Attributes" },
		{ "ModuleRelativePath", "UI/WidgetController/OverlayWidgetController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnManaChanged_MetaData[] = {
		{ "Category", "GAS|Attributes" },
		{ "ModuleRelativePath", "UI/WidgetController/OverlayWidgetController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnMaxManaChanged_MetaData[] = {
		{ "Category", "GAS|Attributes" },
		{ "ModuleRelativePath", "UI/WidgetController/OverlayWidgetController.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnHealthChanged;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnMaxHealthChanged;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnManaChanged;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnMaxManaChanged;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOverlayWidgetController>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UOverlayWidgetController_Statics::NewProp_OnHealthChanged = { "OnHealthChanged", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOverlayWidgetController, OnHealthChanged), Z_Construct_UDelegateFunction_Aura_OnHealthChangeSignature__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnHealthChanged_MetaData), NewProp_OnHealthChanged_MetaData) }; // 2350692495
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UOverlayWidgetController_Statics::NewProp_OnMaxHealthChanged = { "OnMaxHealthChanged", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOverlayWidgetController, OnMaxHealthChanged), Z_Construct_UDelegateFunction_Aura_OnMaxHealthChangeSignature__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnMaxHealthChanged_MetaData), NewProp_OnMaxHealthChanged_MetaData) }; // 2545870410
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UOverlayWidgetController_Statics::NewProp_OnManaChanged = { "OnManaChanged", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOverlayWidgetController, OnManaChanged), Z_Construct_UDelegateFunction_Aura_OnManaChangeSignature__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnManaChanged_MetaData), NewProp_OnManaChanged_MetaData) }; // 126895184
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UOverlayWidgetController_Statics::NewProp_OnMaxManaChanged = { "OnMaxManaChanged", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOverlayWidgetController, OnMaxManaChanged), Z_Construct_UDelegateFunction_Aura_OnMaxManaChangeSignature__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnMaxManaChanged_MetaData), NewProp_OnMaxManaChanged_MetaData) }; // 2580255332
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UOverlayWidgetController_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOverlayWidgetController_Statics::NewProp_OnHealthChanged,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOverlayWidgetController_Statics::NewProp_OnMaxHealthChanged,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOverlayWidgetController_Statics::NewProp_OnManaChanged,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOverlayWidgetController_Statics::NewProp_OnMaxManaChanged,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOverlayWidgetController_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UOverlayWidgetController_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UAuraWidgetController,
	(UObject* (*)())Z_Construct_UPackage__Script_Aura,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOverlayWidgetController_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UOverlayWidgetController_Statics::ClassParams = {
	&UOverlayWidgetController::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UOverlayWidgetController_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UOverlayWidgetController_Statics::PropPointers),
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOverlayWidgetController_Statics::Class_MetaDataParams), Z_Construct_UClass_UOverlayWidgetController_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UOverlayWidgetController()
{
	if (!Z_Registration_Info_UClass_UOverlayWidgetController.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOverlayWidgetController.OuterSingleton, Z_Construct_UClass_UOverlayWidgetController_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UOverlayWidgetController.OuterSingleton;
}
UOverlayWidgetController::UOverlayWidgetController(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UOverlayWidgetController);
UOverlayWidgetController::~UOverlayWidgetController() {}
// ********** End Class UOverlayWidgetController ***************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_learn_gas_Aura_Source_Aura_UI_WidgetController_OverlayWidgetController_h__Script_Aura_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UOverlayWidgetController, UOverlayWidgetController::StaticClass, TEXT("UOverlayWidgetController"), &Z_Registration_Info_UClass_UOverlayWidgetController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOverlayWidgetController), 546453496U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_learn_gas_Aura_Source_Aura_UI_WidgetController_OverlayWidgetController_h__Script_Aura_929685983(TEXT("/Script/Aura"),
	Z_CompiledInDeferFile_FID_learn_gas_Aura_Source_Aura_UI_WidgetController_OverlayWidgetController_h__Script_Aura_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_learn_gas_Aura_Source_Aura_UI_WidgetController_OverlayWidgetController_h__Script_Aura_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
