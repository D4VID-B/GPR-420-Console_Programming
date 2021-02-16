// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CppStarterLab/CppStarterLabGameModeBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCppStarterLabGameModeBase() {}
// Cross Module References
	CPPSTARTERLAB_API UClass* Z_Construct_UClass_ACppStarterLabGameModeBase_NoRegister();
	CPPSTARTERLAB_API UClass* Z_Construct_UClass_ACppStarterLabGameModeBase();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_CppStarterLab();
// End Cross Module References
	void ACppStarterLabGameModeBase::StaticRegisterNativesACppStarterLabGameModeBase()
	{
	}
	UClass* Z_Construct_UClass_ACppStarterLabGameModeBase_NoRegister()
	{
		return ACppStarterLabGameModeBase::StaticClass();
	}
	struct Z_Construct_UClass_ACppStarterLabGameModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ACppStarterLabGameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_CppStarterLab,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACppStarterLabGameModeBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "CppStarterLabGameModeBase.h" },
		{ "ModuleRelativePath", "CppStarterLabGameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ACppStarterLabGameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACppStarterLabGameModeBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ACppStarterLabGameModeBase_Statics::ClassParams = {
		&ACppStarterLabGameModeBase::StaticClass,
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
		0x009002ACu,
		METADATA_PARAMS(Z_Construct_UClass_ACppStarterLabGameModeBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ACppStarterLabGameModeBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ACppStarterLabGameModeBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ACppStarterLabGameModeBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ACppStarterLabGameModeBase, 81108415);
	template<> CPPSTARTERLAB_API UClass* StaticClass<ACppStarterLabGameModeBase>()
	{
		return ACppStarterLabGameModeBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ACppStarterLabGameModeBase(Z_Construct_UClass_ACppStarterLabGameModeBase, &ACppStarterLabGameModeBase::StaticClass, TEXT("/Script/CppStarterLab"), TEXT("ACppStarterLabGameModeBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ACppStarterLabGameModeBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
