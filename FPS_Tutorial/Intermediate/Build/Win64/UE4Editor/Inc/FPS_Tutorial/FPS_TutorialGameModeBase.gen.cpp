// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FPS_Tutorial/FPS_TutorialGameModeBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFPS_TutorialGameModeBase() {}
// Cross Module References
	FPS_TUTORIAL_API UClass* Z_Construct_UClass_AFPS_TutorialGameModeBase_NoRegister();
	FPS_TUTORIAL_API UClass* Z_Construct_UClass_AFPS_TutorialGameModeBase();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_FPS_Tutorial();
// End Cross Module References
	void AFPS_TutorialGameModeBase::StaticRegisterNativesAFPS_TutorialGameModeBase()
	{
	}
	UClass* Z_Construct_UClass_AFPS_TutorialGameModeBase_NoRegister()
	{
		return AFPS_TutorialGameModeBase::StaticClass();
	}
	struct Z_Construct_UClass_AFPS_TutorialGameModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AFPS_TutorialGameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_FPS_Tutorial,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFPS_TutorialGameModeBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "FPS_TutorialGameModeBase.h" },
		{ "ModuleRelativePath", "FPS_TutorialGameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AFPS_TutorialGameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFPS_TutorialGameModeBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AFPS_TutorialGameModeBase_Statics::ClassParams = {
		&AFPS_TutorialGameModeBase::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AFPS_TutorialGameModeBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AFPS_TutorialGameModeBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AFPS_TutorialGameModeBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AFPS_TutorialGameModeBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AFPS_TutorialGameModeBase, 452501024);
	template<> FPS_TUTORIAL_API UClass* StaticClass<AFPS_TutorialGameModeBase>()
	{
		return AFPS_TutorialGameModeBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AFPS_TutorialGameModeBase(Z_Construct_UClass_AFPS_TutorialGameModeBase, &AFPS_TutorialGameModeBase::StaticClass, TEXT("/Script/FPS_Tutorial"), TEXT("AFPS_TutorialGameModeBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AFPS_TutorialGameModeBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
