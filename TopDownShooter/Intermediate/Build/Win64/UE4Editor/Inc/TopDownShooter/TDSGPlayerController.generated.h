// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UCharacterMovementComponent;
#ifdef TOPDOWNSHOOTER_TDSGPlayerController_generated_h
#error "TDSGPlayerController.generated.h already included, missing '#pragma once' in TDSGPlayerController.h"
#endif
#define TOPDOWNSHOOTER_TDSGPlayerController_generated_h

#define TopDownShooter_Source_TopDownShooter_Public_TDSGPlayerController_h_19_SPARSE_DATA
#define TopDownShooter_Source_TopDownShooter_Public_TDSGPlayerController_h_19_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execsetDefaultSpeed); \
	DECLARE_FUNCTION(execdoSprint); \
	DECLARE_FUNCTION(execgetIsSprinting); \
	DECLARE_FUNCTION(execsetIsSprinting); \
	DECLARE_FUNCTION(execgetSprintSpeed); \
	DECLARE_FUNCTION(execsetSprintSpeed);


#define TopDownShooter_Source_TopDownShooter_Public_TDSGPlayerController_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execsetDefaultSpeed); \
	DECLARE_FUNCTION(execdoSprint); \
	DECLARE_FUNCTION(execgetIsSprinting); \
	DECLARE_FUNCTION(execsetIsSprinting); \
	DECLARE_FUNCTION(execgetSprintSpeed); \
	DECLARE_FUNCTION(execsetSprintSpeed);


#define TopDownShooter_Source_TopDownShooter_Public_TDSGPlayerController_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesATDSGPlayerController(); \
	friend struct Z_Construct_UClass_ATDSGPlayerController_Statics; \
public: \
	DECLARE_CLASS(ATDSGPlayerController, APlayerController, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TopDownShooter"), NO_API) \
	DECLARE_SERIALIZER(ATDSGPlayerController)


#define TopDownShooter_Source_TopDownShooter_Public_TDSGPlayerController_h_19_INCLASS \
private: \
	static void StaticRegisterNativesATDSGPlayerController(); \
	friend struct Z_Construct_UClass_ATDSGPlayerController_Statics; \
public: \
	DECLARE_CLASS(ATDSGPlayerController, APlayerController, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TopDownShooter"), NO_API) \
	DECLARE_SERIALIZER(ATDSGPlayerController)


#define TopDownShooter_Source_TopDownShooter_Public_TDSGPlayerController_h_19_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ATDSGPlayerController(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ATDSGPlayerController) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATDSGPlayerController); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATDSGPlayerController); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ATDSGPlayerController(ATDSGPlayerController&&); \
	NO_API ATDSGPlayerController(const ATDSGPlayerController&); \
public:


#define TopDownShooter_Source_TopDownShooter_Public_TDSGPlayerController_h_19_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ATDSGPlayerController(ATDSGPlayerController&&); \
	NO_API ATDSGPlayerController(const ATDSGPlayerController&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATDSGPlayerController); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATDSGPlayerController); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ATDSGPlayerController)


#define TopDownShooter_Source_TopDownShooter_Public_TDSGPlayerController_h_19_PRIVATE_PROPERTY_OFFSET
#define TopDownShooter_Source_TopDownShooter_Public_TDSGPlayerController_h_16_PROLOG
#define TopDownShooter_Source_TopDownShooter_Public_TDSGPlayerController_h_19_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TopDownShooter_Source_TopDownShooter_Public_TDSGPlayerController_h_19_PRIVATE_PROPERTY_OFFSET \
	TopDownShooter_Source_TopDownShooter_Public_TDSGPlayerController_h_19_SPARSE_DATA \
	TopDownShooter_Source_TopDownShooter_Public_TDSGPlayerController_h_19_RPC_WRAPPERS \
	TopDownShooter_Source_TopDownShooter_Public_TDSGPlayerController_h_19_INCLASS \
	TopDownShooter_Source_TopDownShooter_Public_TDSGPlayerController_h_19_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define TopDownShooter_Source_TopDownShooter_Public_TDSGPlayerController_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TopDownShooter_Source_TopDownShooter_Public_TDSGPlayerController_h_19_PRIVATE_PROPERTY_OFFSET \
	TopDownShooter_Source_TopDownShooter_Public_TDSGPlayerController_h_19_SPARSE_DATA \
	TopDownShooter_Source_TopDownShooter_Public_TDSGPlayerController_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	TopDownShooter_Source_TopDownShooter_Public_TDSGPlayerController_h_19_INCLASS_NO_PURE_DECLS \
	TopDownShooter_Source_TopDownShooter_Public_TDSGPlayerController_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TOPDOWNSHOOTER_API UClass* StaticClass<class ATDSGPlayerController>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID TopDownShooter_Source_TopDownShooter_Public_TDSGPlayerController_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
