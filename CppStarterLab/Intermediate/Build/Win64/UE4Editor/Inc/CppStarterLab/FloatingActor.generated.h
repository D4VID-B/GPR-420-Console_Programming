// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef CPPSTARTERLAB_FloatingActor_generated_h
#error "FloatingActor.generated.h already included, missing '#pragma once' in FloatingActor.h"
#endif
#define CPPSTARTERLAB_FloatingActor_generated_h

#define CppStarterLab_Source_CppStarterLab_FloatingActor_h_24_SPARSE_DATA
#define CppStarterLab_Source_CppStarterLab_FloatingActor_h_24_RPC_WRAPPERS
#define CppStarterLab_Source_CppStarterLab_FloatingActor_h_24_RPC_WRAPPERS_NO_PURE_DECLS
#define CppStarterLab_Source_CppStarterLab_FloatingActor_h_24_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAFloatingActor(); \
	friend struct Z_Construct_UClass_AFloatingActor_Statics; \
public: \
	DECLARE_CLASS(AFloatingActor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/CppStarterLab"), NO_API) \
	DECLARE_SERIALIZER(AFloatingActor)


#define CppStarterLab_Source_CppStarterLab_FloatingActor_h_24_INCLASS \
private: \
	static void StaticRegisterNativesAFloatingActor(); \
	friend struct Z_Construct_UClass_AFloatingActor_Statics; \
public: \
	DECLARE_CLASS(AFloatingActor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/CppStarterLab"), NO_API) \
	DECLARE_SERIALIZER(AFloatingActor)


#define CppStarterLab_Source_CppStarterLab_FloatingActor_h_24_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AFloatingActor(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AFloatingActor) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFloatingActor); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFloatingActor); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFloatingActor(AFloatingActor&&); \
	NO_API AFloatingActor(const AFloatingActor&); \
public:


#define CppStarterLab_Source_CppStarterLab_FloatingActor_h_24_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFloatingActor(AFloatingActor&&); \
	NO_API AFloatingActor(const AFloatingActor&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFloatingActor); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFloatingActor); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AFloatingActor)


#define CppStarterLab_Source_CppStarterLab_FloatingActor_h_24_PRIVATE_PROPERTY_OFFSET
#define CppStarterLab_Source_CppStarterLab_FloatingActor_h_21_PROLOG
#define CppStarterLab_Source_CppStarterLab_FloatingActor_h_24_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	CppStarterLab_Source_CppStarterLab_FloatingActor_h_24_PRIVATE_PROPERTY_OFFSET \
	CppStarterLab_Source_CppStarterLab_FloatingActor_h_24_SPARSE_DATA \
	CppStarterLab_Source_CppStarterLab_FloatingActor_h_24_RPC_WRAPPERS \
	CppStarterLab_Source_CppStarterLab_FloatingActor_h_24_INCLASS \
	CppStarterLab_Source_CppStarterLab_FloatingActor_h_24_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define CppStarterLab_Source_CppStarterLab_FloatingActor_h_24_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	CppStarterLab_Source_CppStarterLab_FloatingActor_h_24_PRIVATE_PROPERTY_OFFSET \
	CppStarterLab_Source_CppStarterLab_FloatingActor_h_24_SPARSE_DATA \
	CppStarterLab_Source_CppStarterLab_FloatingActor_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
	CppStarterLab_Source_CppStarterLab_FloatingActor_h_24_INCLASS_NO_PURE_DECLS \
	CppStarterLab_Source_CppStarterLab_FloatingActor_h_24_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CPPSTARTERLAB_API UClass* StaticClass<class AFloatingActor>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID CppStarterLab_Source_CppStarterLab_FloatingActor_h


#define FOREACH_ENUM_SHAPES(op) \
	op(cube) \
	op(pipe) \
	op(capsule) 
PRAGMA_ENABLE_DEPRECATION_WARNINGS
