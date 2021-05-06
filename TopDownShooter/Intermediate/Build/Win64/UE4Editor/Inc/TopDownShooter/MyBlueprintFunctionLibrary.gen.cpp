// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TopDownShooter/MyBlueprintFunctionLibrary.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMyBlueprintFunctionLibrary() {}
// Cross Module References
	TOPDOWNSHOOTER_API UClass* Z_Construct_UClass_UMyBlueprintFunctionLibrary_NoRegister();
	TOPDOWNSHOOTER_API UClass* Z_Construct_UClass_UMyBlueprintFunctionLibrary();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_TopDownShooter();
	TOPDOWNSHOOTER_API UClass* Z_Construct_UClass_UMySaveGame_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UMyBlueprintFunctionLibrary::execLoadMyGame)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UMySaveGame**)Z_Param__Result=UMyBlueprintFunctionLibrary::LoadMyGame();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMyBlueprintFunctionLibrary::execSaveMyGame)
	{
		P_GET_OBJECT(UMySaveGame,Z_Param_MySaveGame);
		P_FINISH;
		P_NATIVE_BEGIN;
		UMyBlueprintFunctionLibrary::SaveMyGame(Z_Param_MySaveGame);
		P_NATIVE_END;
	}
	void UMyBlueprintFunctionLibrary::StaticRegisterNativesUMyBlueprintFunctionLibrary()
	{
		UClass* Class = UMyBlueprintFunctionLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "LoadMyGame", &UMyBlueprintFunctionLibrary::execLoadMyGame },
			{ "SaveMyGame", &UMyBlueprintFunctionLibrary::execSaveMyGame },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UMyBlueprintFunctionLibrary_LoadMyGame_Statics
	{
		struct MyBlueprintFunctionLibrary_eventLoadMyGame_Parms
		{
			UMySaveGame* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMyBlueprintFunctionLibrary_LoadMyGame_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MyBlueprintFunctionLibrary_eventLoadMyGame_Parms, ReturnValue), Z_Construct_UClass_UMySaveGame_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMyBlueprintFunctionLibrary_LoadMyGame_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMyBlueprintFunctionLibrary_LoadMyGame_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMyBlueprintFunctionLibrary_LoadMyGame_Statics::Function_MetaDataParams[] = {
		{ "Category", "Game Manager" },
		{ "ModuleRelativePath", "MyBlueprintFunctionLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMyBlueprintFunctionLibrary_LoadMyGame_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMyBlueprintFunctionLibrary, nullptr, "LoadMyGame", nullptr, nullptr, sizeof(MyBlueprintFunctionLibrary_eventLoadMyGame_Parms), Z_Construct_UFunction_UMyBlueprintFunctionLibrary_LoadMyGame_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMyBlueprintFunctionLibrary_LoadMyGame_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMyBlueprintFunctionLibrary_LoadMyGame_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMyBlueprintFunctionLibrary_LoadMyGame_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMyBlueprintFunctionLibrary_LoadMyGame()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMyBlueprintFunctionLibrary_LoadMyGame_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMyBlueprintFunctionLibrary_SaveMyGame_Statics
	{
		struct MyBlueprintFunctionLibrary_eventSaveMyGame_Parms
		{
			UMySaveGame* MySaveGame;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MySaveGame;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMyBlueprintFunctionLibrary_SaveMyGame_Statics::NewProp_MySaveGame = { "MySaveGame", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MyBlueprintFunctionLibrary_eventSaveMyGame_Parms, MySaveGame), Z_Construct_UClass_UMySaveGame_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMyBlueprintFunctionLibrary_SaveMyGame_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMyBlueprintFunctionLibrary_SaveMyGame_Statics::NewProp_MySaveGame,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMyBlueprintFunctionLibrary_SaveMyGame_Statics::Function_MetaDataParams[] = {
		{ "Category", "Game Manager" },
		{ "ModuleRelativePath", "MyBlueprintFunctionLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMyBlueprintFunctionLibrary_SaveMyGame_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMyBlueprintFunctionLibrary, nullptr, "SaveMyGame", nullptr, nullptr, sizeof(MyBlueprintFunctionLibrary_eventSaveMyGame_Parms), Z_Construct_UFunction_UMyBlueprintFunctionLibrary_SaveMyGame_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMyBlueprintFunctionLibrary_SaveMyGame_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMyBlueprintFunctionLibrary_SaveMyGame_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMyBlueprintFunctionLibrary_SaveMyGame_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMyBlueprintFunctionLibrary_SaveMyGame()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMyBlueprintFunctionLibrary_SaveMyGame_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UMyBlueprintFunctionLibrary_NoRegister()
	{
		return UMyBlueprintFunctionLibrary::StaticClass();
	}
	struct Z_Construct_UClass_UMyBlueprintFunctionLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMyBlueprintFunctionLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_TopDownShooter,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UMyBlueprintFunctionLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UMyBlueprintFunctionLibrary_LoadMyGame, "LoadMyGame" }, // 1704776543
		{ &Z_Construct_UFunction_UMyBlueprintFunctionLibrary_SaveMyGame, "SaveMyGame" }, // 2673066257
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMyBlueprintFunctionLibrary_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "MyBlueprintFunctionLibrary.h" },
		{ "ModuleRelativePath", "MyBlueprintFunctionLibrary.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMyBlueprintFunctionLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMyBlueprintFunctionLibrary>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UMyBlueprintFunctionLibrary_Statics::ClassParams = {
		&UMyBlueprintFunctionLibrary::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UMyBlueprintFunctionLibrary_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMyBlueprintFunctionLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMyBlueprintFunctionLibrary()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UMyBlueprintFunctionLibrary_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UMyBlueprintFunctionLibrary, 804533495);
	template<> TOPDOWNSHOOTER_API UClass* StaticClass<UMyBlueprintFunctionLibrary>()
	{
		return UMyBlueprintFunctionLibrary::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMyBlueprintFunctionLibrary(Z_Construct_UClass_UMyBlueprintFunctionLibrary, &UMyBlueprintFunctionLibrary::StaticClass, TEXT("/Script/TopDownShooter"), TEXT("UMyBlueprintFunctionLibrary"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMyBlueprintFunctionLibrary);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
