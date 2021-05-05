// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TopDownShooter/Public/TDSGPlayerCharacter.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTDSGPlayerCharacter() {}
// Cross Module References
	TOPDOWNSHOOTER_API UClass* Z_Construct_UClass_ATDSGPlayerCharacter_NoRegister();
	TOPDOWNSHOOTER_API UClass* Z_Construct_UClass_ATDSGPlayerCharacter();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	UPackage* Z_Construct_UPackage__Script_TopDownShooter();
// End Cross Module References
	void ATDSGPlayerCharacter::StaticRegisterNativesATDSGPlayerCharacter()
	{
	}
	UClass* Z_Construct_UClass_ATDSGPlayerCharacter_NoRegister()
	{
		return ATDSGPlayerCharacter::StaticClass();
	}
	struct Z_Construct_UClass_ATDSGPlayerCharacter_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ATDSGPlayerCharacter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_TopDownShooter,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATDSGPlayerCharacter_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "TDSGPlayerCharacter.h" },
		{ "ModuleRelativePath", "Public/TDSGPlayerCharacter.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ATDSGPlayerCharacter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATDSGPlayerCharacter>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ATDSGPlayerCharacter_Statics::ClassParams = {
		&ATDSGPlayerCharacter::StaticClass,
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
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ATDSGPlayerCharacter_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ATDSGPlayerCharacter_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ATDSGPlayerCharacter()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ATDSGPlayerCharacter_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ATDSGPlayerCharacter, 3528737011);
	template<> TOPDOWNSHOOTER_API UClass* StaticClass<ATDSGPlayerCharacter>()
	{
		return ATDSGPlayerCharacter::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ATDSGPlayerCharacter(Z_Construct_UClass_ATDSGPlayerCharacter, &ATDSGPlayerCharacter::StaticClass, TEXT("/Script/TopDownShooter"), TEXT("ATDSGPlayerCharacter"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ATDSGPlayerCharacter);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
