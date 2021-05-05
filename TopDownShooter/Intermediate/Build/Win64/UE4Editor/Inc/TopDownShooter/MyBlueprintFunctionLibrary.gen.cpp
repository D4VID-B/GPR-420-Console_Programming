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
	DEFINE_FUNCTION(UMyBlueprintFunctionLibrary::execLoadGame)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->LoadGame();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMyBlueprintFunctionLibrary::execSaveGame)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SaveGame();
		P_NATIVE_END;
	}
	void UMyBlueprintFunctionLibrary::StaticRegisterNativesUMyBlueprintFunctionLibrary()
	{
		UClass* Class = UMyBlueprintFunctionLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "LoadGame", &UMyBlueprintFunctionLibrary::execLoadGame },
			{ "SaveGame", &UMyBlueprintFunctionLibrary::execSaveGame },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UMyBlueprintFunctionLibrary_LoadGame_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMyBlueprintFunctionLibrary_LoadGame_Statics::Function_MetaDataParams[] = {
		{ "Category", "Game Manager" },
		{ "ModuleRelativePath", "MyBlueprintFunctionLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMyBlueprintFunctionLibrary_LoadGame_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMyBlueprintFunctionLibrary, nullptr, "LoadGame", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMyBlueprintFunctionLibrary_LoadGame_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMyBlueprintFunctionLibrary_LoadGame_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMyBlueprintFunctionLibrary_LoadGame()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMyBlueprintFunctionLibrary_LoadGame_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMyBlueprintFunctionLibrary_SaveGame_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMyBlueprintFunctionLibrary_SaveGame_Statics::Function_MetaDataParams[] = {
		{ "Category", "Game Manager" },
		{ "ModuleRelativePath", "MyBlueprintFunctionLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMyBlueprintFunctionLibrary_SaveGame_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMyBlueprintFunctionLibrary, nullptr, "SaveGame", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMyBlueprintFunctionLibrary_SaveGame_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMyBlueprintFunctionLibrary_SaveGame_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMyBlueprintFunctionLibrary_SaveGame()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMyBlueprintFunctionLibrary_SaveGame_Statics::FuncParams);
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
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SaveGameObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SaveGameObject;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMyBlueprintFunctionLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_TopDownShooter,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UMyBlueprintFunctionLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UMyBlueprintFunctionLibrary_LoadGame, "LoadGame" }, // 192399160
		{ &Z_Construct_UFunction_UMyBlueprintFunctionLibrary_SaveGame, "SaveGame" }, // 732960762
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMyBlueprintFunctionLibrary_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "MyBlueprintFunctionLibrary.h" },
		{ "ModuleRelativePath", "MyBlueprintFunctionLibrary.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMyBlueprintFunctionLibrary_Statics::NewProp_SaveGameObject_MetaData[] = {
		{ "Category", "Save" },
		{ "ModuleRelativePath", "MyBlueprintFunctionLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMyBlueprintFunctionLibrary_Statics::NewProp_SaveGameObject = { "SaveGameObject", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMyBlueprintFunctionLibrary, SaveGameObject), Z_Construct_UClass_UMySaveGame_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMyBlueprintFunctionLibrary_Statics::NewProp_SaveGameObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMyBlueprintFunctionLibrary_Statics::NewProp_SaveGameObject_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMyBlueprintFunctionLibrary_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMyBlueprintFunctionLibrary_Statics::NewProp_SaveGameObject,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMyBlueprintFunctionLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMyBlueprintFunctionLibrary>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UMyBlueprintFunctionLibrary_Statics::ClassParams = {
		&UMyBlueprintFunctionLibrary::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UMyBlueprintFunctionLibrary_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UMyBlueprintFunctionLibrary_Statics::PropPointers),
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
	IMPLEMENT_CLASS(UMyBlueprintFunctionLibrary, 3357745841);
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
