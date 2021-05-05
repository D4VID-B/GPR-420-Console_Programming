// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TopDownShooter/MySaveGame.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMySaveGame() {}
// Cross Module References
	TOPDOWNSHOOTER_API UScriptStruct* Z_Construct_UScriptStruct_FMyStruct();
	UPackage* Z_Construct_UPackage__Script_TopDownShooter();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FDateTime();
	TOPDOWNSHOOTER_API UClass* Z_Construct_UClass_UMySaveGame_NoRegister();
	TOPDOWNSHOOTER_API UClass* Z_Construct_UClass_UMySaveGame();
	ENGINE_API UClass* Z_Construct_UClass_USaveGame();
// End Cross Module References
class UScriptStruct* FMyStruct::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern TOPDOWNSHOOTER_API uint32 Get_Z_Construct_UScriptStruct_FMyStruct_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FMyStruct, Z_Construct_UPackage__Script_TopDownShooter(), TEXT("MyStruct"), sizeof(FMyStruct), Get_Z_Construct_UScriptStruct_FMyStruct_Hash());
	}
	return Singleton;
}
template<> TOPDOWNSHOOTER_API UScriptStruct* StaticStruct<FMyStruct>()
{
	return FMyStruct::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FMyStruct(FMyStruct::StaticStruct, TEXT("/Script/TopDownShooter"), TEXT("MyStruct"), false, nullptr, nullptr);
static struct FScriptStruct_TopDownShooter_StaticRegisterNativesFMyStruct
{
	FScriptStruct_TopDownShooter_StaticRegisterNativesFMyStruct()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("MyStruct")),new UScriptStruct::TCppStructOps<FMyStruct>);
	}
} ScriptStruct_TopDownShooter_StaticRegisterNativesFMyStruct;
	struct Z_Construct_UScriptStruct_FMyStruct_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SomeNumber_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_SomeNumber;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_Name;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_date_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_date;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMyStruct_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * \n */" },
		{ "ModuleRelativePath", "MySaveGame.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMyStruct_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMyStruct>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMyStruct_Statics::NewProp_SomeNumber_MetaData[] = {
		{ "Category", "MyStruct" },
		{ "ModuleRelativePath", "MySaveGame.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FMyStruct_Statics::NewProp_SomeNumber = { "SomeNumber", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMyStruct, SomeNumber), METADATA_PARAMS(Z_Construct_UScriptStruct_FMyStruct_Statics::NewProp_SomeNumber_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMyStruct_Statics::NewProp_SomeNumber_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMyStruct_Statics::NewProp_Name_MetaData[] = {
		{ "Category", "MyStruct" },
		{ "ModuleRelativePath", "MySaveGame.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FMyStruct_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMyStruct, Name), METADATA_PARAMS(Z_Construct_UScriptStruct_FMyStruct_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMyStruct_Statics::NewProp_Name_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMyStruct_Statics::NewProp_date_MetaData[] = {
		{ "Category", "MyStruct" },
		{ "ModuleRelativePath", "MySaveGame.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMyStruct_Statics::NewProp_date = { "date", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMyStruct, date), Z_Construct_UScriptStruct_FDateTime, METADATA_PARAMS(Z_Construct_UScriptStruct_FMyStruct_Statics::NewProp_date_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMyStruct_Statics::NewProp_date_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMyStruct_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMyStruct_Statics::NewProp_SomeNumber,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMyStruct_Statics::NewProp_Name,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMyStruct_Statics::NewProp_date,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMyStruct_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_TopDownShooter,
		nullptr,
		&NewStructOps,
		"MyStruct",
		sizeof(FMyStruct),
		alignof(FMyStruct),
		Z_Construct_UScriptStruct_FMyStruct_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMyStruct_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMyStruct_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMyStruct_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMyStruct()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FMyStruct_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_TopDownShooter();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("MyStruct"), sizeof(FMyStruct), Get_Z_Construct_UScriptStruct_FMyStruct_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FMyStruct_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FMyStruct_Hash() { return 2267066594U; }
	void UMySaveGame::StaticRegisterNativesUMySaveGame()
	{
	}
	UClass* Z_Construct_UClass_UMySaveGame_NoRegister()
	{
		return UMySaveGame::StaticClass();
	}
	struct Z_Construct_UClass_UMySaveGame_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_data_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_data_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_data;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMySaveGame_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USaveGame,
		(UObject* (*)())Z_Construct_UPackage__Script_TopDownShooter,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMySaveGame_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "MySaveGame.h" },
		{ "ModuleRelativePath", "MySaveGame.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMySaveGame_Statics::NewProp_data_Inner = { "data", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FMyStruct, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMySaveGame_Statics::NewProp_data_MetaData[] = {
		{ "Category", "Score" },
		{ "ModuleRelativePath", "MySaveGame.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UMySaveGame_Statics::NewProp_data = { "data", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMySaveGame, data), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UMySaveGame_Statics::NewProp_data_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMySaveGame_Statics::NewProp_data_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMySaveGame_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMySaveGame_Statics::NewProp_data_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMySaveGame_Statics::NewProp_data,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMySaveGame_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMySaveGame>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UMySaveGame_Statics::ClassParams = {
		&UMySaveGame::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMySaveGame_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UMySaveGame_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UMySaveGame_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMySaveGame_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMySaveGame()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UMySaveGame_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UMySaveGame, 1440359390);
	template<> TOPDOWNSHOOTER_API UClass* StaticClass<UMySaveGame>()
	{
		return UMySaveGame::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMySaveGame(Z_Construct_UClass_UMySaveGame, &UMySaveGame::StaticClass, TEXT("/Script/TopDownShooter"), TEXT("UMySaveGame"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMySaveGame);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
