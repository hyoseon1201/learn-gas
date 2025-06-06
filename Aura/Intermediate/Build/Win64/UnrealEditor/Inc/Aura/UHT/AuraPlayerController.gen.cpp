// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Aura/Player/AuraPlayerController.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAuraPlayerController() {}

// Begin Cross Module References
AURA_API UClass* Z_Construct_UClass_AAuraPlayerController();
AURA_API UClass* Z_Construct_UClass_AAuraPlayerController_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_APlayerController();
UPackage* Z_Construct_UPackage__Script_Aura();
// End Cross Module References

// Begin Class AAuraPlayerController
void AAuraPlayerController::StaticRegisterNativesAAuraPlayerController()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AAuraPlayerController);
UClass* Z_Construct_UClass_AAuraPlayerController_NoRegister()
{
	return AAuraPlayerController::StaticClass();
}
struct Z_Construct_UClass_AAuraPlayerController_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Collision Rendering Transformation" },
		{ "IncludePath", "Player/AuraPlayerController.h" },
		{ "ModuleRelativePath", "Player/AuraPlayerController.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AAuraPlayerController>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AAuraPlayerController_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_APlayerController,
	(UObject* (*)())Z_Construct_UPackage__Script_Aura,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AAuraPlayerController_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AAuraPlayerController_Statics::ClassParams = {
	&AAuraPlayerController::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x009002A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AAuraPlayerController_Statics::Class_MetaDataParams), Z_Construct_UClass_AAuraPlayerController_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AAuraPlayerController()
{
	if (!Z_Registration_Info_UClass_AAuraPlayerController.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AAuraPlayerController.OuterSingleton, Z_Construct_UClass_AAuraPlayerController_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AAuraPlayerController.OuterSingleton;
}
template<> AURA_API UClass* StaticClass<AAuraPlayerController>()
{
	return AAuraPlayerController::StaticClass();
}
AAuraPlayerController::AAuraPlayerController(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(AAuraPlayerController);
AAuraPlayerController::~AAuraPlayerController() {}
// End Class AAuraPlayerController

// Begin Registration
struct Z_CompiledInDeferFile_FID_learn_gas_Aura_Source_Aura_Player_AuraPlayerController_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AAuraPlayerController, AAuraPlayerController::StaticClass, TEXT("AAuraPlayerController"), &Z_Registration_Info_UClass_AAuraPlayerController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AAuraPlayerController), 3137214715U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_learn_gas_Aura_Source_Aura_Player_AuraPlayerController_h_4070556756(TEXT("/Script/Aura"),
	Z_CompiledInDeferFile_FID_learn_gas_Aura_Source_Aura_Player_AuraPlayerController_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_learn_gas_Aura_Source_Aura_Player_AuraPlayerController_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
