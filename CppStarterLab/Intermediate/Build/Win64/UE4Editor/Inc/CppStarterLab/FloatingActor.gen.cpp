// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CppStarterLab/FloatingActor.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFloatingActor() {}
// Cross Module References
	CPPSTARTERLAB_API UEnum* Z_Construct_UEnum_CppStarterLab_Shapes();
	UPackage* Z_Construct_UPackage__Script_CppStarterLab();
	CPPSTARTERLAB_API UClass* Z_Construct_UClass_AFloatingActor_NoRegister();
	CPPSTARTERLAB_API UClass* Z_Construct_UClass_AFloatingActor();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
// End Cross Module References
	static UEnum* Shapes_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_CppStarterLab_Shapes, Z_Construct_UPackage__Script_CppStarterLab(), TEXT("Shapes"));
		}
		return Singleton;
	}
	template<> CPPSTARTERLAB_API UEnum* StaticEnum<Shapes>()
	{
		return Shapes_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_Shapes(Shapes_StaticEnum, TEXT("/Script/CppStarterLab"), TEXT("Shapes"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_CppStarterLab_Shapes_Hash() { return 1828996091U; }
	UEnum* Z_Construct_UEnum_CppStarterLab_Shapes()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_CppStarterLab();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("Shapes"), 0, Get_Z_Construct_UEnum_CppStarterLab_Shapes_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "cube", (int64)cube },
				{ "pipe", (int64)pipe },
				{ "capsule", (int64)capsule },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "capsule.DisplayName", "Capsule" },
				{ "capsule.Name", "capsule" },
				{ "cube.DisplayName", "Cube" },
				{ "cube.Name", "cube" },
				{ "ModuleRelativePath", "FloatingActor.h" },
				{ "pipe.DisplayName", "Pipe" },
				{ "pipe.Name", "pipe" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_CppStarterLab,
				nullptr,
				"Shapes",
				"Shapes",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				EEnumFlags::None,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::Regular,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	void AFloatingActor::StaticRegisterNativesAFloatingActor()
	{
	}
	UClass* Z_Construct_UClass_AFloatingActor_NoRegister()
	{
		return AFloatingActor::StaticClass();
	}
	struct Z_Construct_UClass_AFloatingActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VisualMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_VisualMesh;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FloatSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_FloatSpeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RotationSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_RotationSpeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_meshShapes_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_meshShapes;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AFloatingActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_CppStarterLab,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFloatingActor_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "FloatingActor.h" },
		{ "ModuleRelativePath", "FloatingActor.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFloatingActor_Statics::NewProp_VisualMesh_MetaData[] = {
		{ "Category", "FloatingActor" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "FloatingActor.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFloatingActor_Statics::NewProp_VisualMesh = { "VisualMesh", nullptr, (EPropertyFlags)0x001000000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFloatingActor, VisualMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFloatingActor_Statics::NewProp_VisualMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFloatingActor_Statics::NewProp_VisualMesh_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFloatingActor_Statics::NewProp_FloatSpeed_MetaData[] = {
		{ "Category", "FloatingActor" },
		{ "ModuleRelativePath", "FloatingActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AFloatingActor_Statics::NewProp_FloatSpeed = { "FloatSpeed", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFloatingActor, FloatSpeed), METADATA_PARAMS(Z_Construct_UClass_AFloatingActor_Statics::NewProp_FloatSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFloatingActor_Statics::NewProp_FloatSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFloatingActor_Statics::NewProp_RotationSpeed_MetaData[] = {
		{ "Category", "FloatingActor" },
		{ "ModuleRelativePath", "FloatingActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AFloatingActor_Statics::NewProp_RotationSpeed = { "RotationSpeed", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFloatingActor, RotationSpeed), METADATA_PARAMS(Z_Construct_UClass_AFloatingActor_Statics::NewProp_RotationSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFloatingActor_Statics::NewProp_RotationSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFloatingActor_Statics::NewProp_meshShapes_MetaData[] = {
		{ "Category", "FloatingActor" },
		{ "ModuleRelativePath", "FloatingActor.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_AFloatingActor_Statics::NewProp_meshShapes = { "meshShapes", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFloatingActor, meshShapes), Z_Construct_UEnum_CppStarterLab_Shapes, METADATA_PARAMS(Z_Construct_UClass_AFloatingActor_Statics::NewProp_meshShapes_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFloatingActor_Statics::NewProp_meshShapes_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AFloatingActor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFloatingActor_Statics::NewProp_VisualMesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFloatingActor_Statics::NewProp_FloatSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFloatingActor_Statics::NewProp_RotationSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFloatingActor_Statics::NewProp_meshShapes,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AFloatingActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFloatingActor>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AFloatingActor_Statics::ClassParams = {
		&AFloatingActor::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AFloatingActor_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AFloatingActor_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AFloatingActor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AFloatingActor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AFloatingActor()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AFloatingActor_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AFloatingActor, 3232987913);
	template<> CPPSTARTERLAB_API UClass* StaticClass<AFloatingActor>()
	{
		return AFloatingActor::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AFloatingActor(Z_Construct_UClass_AFloatingActor, &AFloatingActor::StaticClass, TEXT("/Script/CppStarterLab"), TEXT("AFloatingActor"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AFloatingActor);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
