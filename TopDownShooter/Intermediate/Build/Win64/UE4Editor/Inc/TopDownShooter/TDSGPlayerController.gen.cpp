// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TopDownShooter/Public/TDSGPlayerController.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTDSGPlayerController() {}
// Cross Module References
	TOPDOWNSHOOTER_API UClass* Z_Construct_UClass_ATDSGPlayerController_NoRegister();
	TOPDOWNSHOOTER_API UClass* Z_Construct_UClass_ATDSGPlayerController();
	ENGINE_API UClass* Z_Construct_UClass_APlayerController();
	UPackage* Z_Construct_UPackage__Script_TopDownShooter();
	ENGINE_API UClass* Z_Construct_UClass_UCharacterMovementComponent_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(ATDSGPlayerController::execsetDefaultSpeed)
	{
		P_GET_OBJECT(UCharacterMovementComponent,Z_Param_playerChar);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->setDefaultSpeed(Z_Param_playerChar);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATDSGPlayerController::execdoSprint)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_currentSpeed);
		P_GET_OBJECT(UCharacterMovementComponent,Z_Param_playerChar);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->doSprint(Z_Param_currentSpeed,Z_Param_playerChar);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATDSGPlayerController::execgetIsSprinting)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->getIsSprinting();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATDSGPlayerController::execsetIsSprinting)
	{
		P_GET_UBOOL(Z_Param_status);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->setIsSprinting(Z_Param_status);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATDSGPlayerController::execgetSprintSpeed)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->getSprintSpeed();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATDSGPlayerController::execsetSprintSpeed)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_newSpeed);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->setSprintSpeed(Z_Param_newSpeed);
		P_NATIVE_END;
	}
	void ATDSGPlayerController::StaticRegisterNativesATDSGPlayerController()
	{
		UClass* Class = ATDSGPlayerController::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "doSprint", &ATDSGPlayerController::execdoSprint },
			{ "getIsSprinting", &ATDSGPlayerController::execgetIsSprinting },
			{ "getSprintSpeed", &ATDSGPlayerController::execgetSprintSpeed },
			{ "setDefaultSpeed", &ATDSGPlayerController::execsetDefaultSpeed },
			{ "setIsSprinting", &ATDSGPlayerController::execsetIsSprinting },
			{ "setSprintSpeed", &ATDSGPlayerController::execsetSprintSpeed },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ATDSGPlayerController_doSprint_Statics
	{
		struct TDSGPlayerController_eventdoSprint_Parms
		{
			float currentSpeed;
			UCharacterMovementComponent* playerChar;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_currentSpeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_playerChar_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_playerChar;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ATDSGPlayerController_doSprint_Statics::NewProp_currentSpeed = { "currentSpeed", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TDSGPlayerController_eventdoSprint_Parms, currentSpeed), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATDSGPlayerController_doSprint_Statics::NewProp_playerChar_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ATDSGPlayerController_doSprint_Statics::NewProp_playerChar = { "playerChar", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TDSGPlayerController_eventdoSprint_Parms, playerChar), Z_Construct_UClass_UCharacterMovementComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ATDSGPlayerController_doSprint_Statics::NewProp_playerChar_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ATDSGPlayerController_doSprint_Statics::NewProp_playerChar_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATDSGPlayerController_doSprint_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATDSGPlayerController_doSprint_Statics::NewProp_currentSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATDSGPlayerController_doSprint_Statics::NewProp_playerChar,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATDSGPlayerController_doSprint_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TDSGPlayerController.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATDSGPlayerController_doSprint_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATDSGPlayerController, nullptr, "doSprint", nullptr, nullptr, sizeof(TDSGPlayerController_eventdoSprint_Parms), Z_Construct_UFunction_ATDSGPlayerController_doSprint_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATDSGPlayerController_doSprint_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATDSGPlayerController_doSprint_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATDSGPlayerController_doSprint_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATDSGPlayerController_doSprint()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATDSGPlayerController_doSprint_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATDSGPlayerController_getIsSprinting_Statics
	{
		struct TDSGPlayerController_eventgetIsSprinting_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_ATDSGPlayerController_getIsSprinting_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((TDSGPlayerController_eventgetIsSprinting_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ATDSGPlayerController_getIsSprinting_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(TDSGPlayerController_eventgetIsSprinting_Parms), &Z_Construct_UFunction_ATDSGPlayerController_getIsSprinting_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATDSGPlayerController_getIsSprinting_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATDSGPlayerController_getIsSprinting_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATDSGPlayerController_getIsSprinting_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TDSGPlayerController.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATDSGPlayerController_getIsSprinting_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATDSGPlayerController, nullptr, "getIsSprinting", nullptr, nullptr, sizeof(TDSGPlayerController_eventgetIsSprinting_Parms), Z_Construct_UFunction_ATDSGPlayerController_getIsSprinting_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATDSGPlayerController_getIsSprinting_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATDSGPlayerController_getIsSprinting_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATDSGPlayerController_getIsSprinting_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATDSGPlayerController_getIsSprinting()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATDSGPlayerController_getIsSprinting_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATDSGPlayerController_getSprintSpeed_Statics
	{
		struct TDSGPlayerController_eventgetSprintSpeed_Parms
		{
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ATDSGPlayerController_getSprintSpeed_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TDSGPlayerController_eventgetSprintSpeed_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATDSGPlayerController_getSprintSpeed_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATDSGPlayerController_getSprintSpeed_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATDSGPlayerController_getSprintSpeed_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TDSGPlayerController.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATDSGPlayerController_getSprintSpeed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATDSGPlayerController, nullptr, "getSprintSpeed", nullptr, nullptr, sizeof(TDSGPlayerController_eventgetSprintSpeed_Parms), Z_Construct_UFunction_ATDSGPlayerController_getSprintSpeed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATDSGPlayerController_getSprintSpeed_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATDSGPlayerController_getSprintSpeed_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATDSGPlayerController_getSprintSpeed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATDSGPlayerController_getSprintSpeed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATDSGPlayerController_getSprintSpeed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATDSGPlayerController_setDefaultSpeed_Statics
	{
		struct TDSGPlayerController_eventsetDefaultSpeed_Parms
		{
			UCharacterMovementComponent* playerChar;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_playerChar_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_playerChar;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATDSGPlayerController_setDefaultSpeed_Statics::NewProp_playerChar_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ATDSGPlayerController_setDefaultSpeed_Statics::NewProp_playerChar = { "playerChar", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TDSGPlayerController_eventsetDefaultSpeed_Parms, playerChar), Z_Construct_UClass_UCharacterMovementComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ATDSGPlayerController_setDefaultSpeed_Statics::NewProp_playerChar_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ATDSGPlayerController_setDefaultSpeed_Statics::NewProp_playerChar_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATDSGPlayerController_setDefaultSpeed_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATDSGPlayerController_setDefaultSpeed_Statics::NewProp_playerChar,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATDSGPlayerController_setDefaultSpeed_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TDSGPlayerController.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATDSGPlayerController_setDefaultSpeed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATDSGPlayerController, nullptr, "setDefaultSpeed", nullptr, nullptr, sizeof(TDSGPlayerController_eventsetDefaultSpeed_Parms), Z_Construct_UFunction_ATDSGPlayerController_setDefaultSpeed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATDSGPlayerController_setDefaultSpeed_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATDSGPlayerController_setDefaultSpeed_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATDSGPlayerController_setDefaultSpeed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATDSGPlayerController_setDefaultSpeed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATDSGPlayerController_setDefaultSpeed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATDSGPlayerController_setIsSprinting_Statics
	{
		struct TDSGPlayerController_eventsetIsSprinting_Parms
		{
			bool status;
		};
		static void NewProp_status_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_status;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_ATDSGPlayerController_setIsSprinting_Statics::NewProp_status_SetBit(void* Obj)
	{
		((TDSGPlayerController_eventsetIsSprinting_Parms*)Obj)->status = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ATDSGPlayerController_setIsSprinting_Statics::NewProp_status = { "status", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(TDSGPlayerController_eventsetIsSprinting_Parms), &Z_Construct_UFunction_ATDSGPlayerController_setIsSprinting_Statics::NewProp_status_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATDSGPlayerController_setIsSprinting_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATDSGPlayerController_setIsSprinting_Statics::NewProp_status,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATDSGPlayerController_setIsSprinting_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TDSGPlayerController.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATDSGPlayerController_setIsSprinting_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATDSGPlayerController, nullptr, "setIsSprinting", nullptr, nullptr, sizeof(TDSGPlayerController_eventsetIsSprinting_Parms), Z_Construct_UFunction_ATDSGPlayerController_setIsSprinting_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATDSGPlayerController_setIsSprinting_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATDSGPlayerController_setIsSprinting_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATDSGPlayerController_setIsSprinting_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATDSGPlayerController_setIsSprinting()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATDSGPlayerController_setIsSprinting_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATDSGPlayerController_setSprintSpeed_Statics
	{
		struct TDSGPlayerController_eventsetSprintSpeed_Parms
		{
			float newSpeed;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_newSpeed;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ATDSGPlayerController_setSprintSpeed_Statics::NewProp_newSpeed = { "newSpeed", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TDSGPlayerController_eventsetSprintSpeed_Parms, newSpeed), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATDSGPlayerController_setSprintSpeed_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATDSGPlayerController_setSprintSpeed_Statics::NewProp_newSpeed,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATDSGPlayerController_setSprintSpeed_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TDSGPlayerController.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATDSGPlayerController_setSprintSpeed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATDSGPlayerController, nullptr, "setSprintSpeed", nullptr, nullptr, sizeof(TDSGPlayerController_eventsetSprintSpeed_Parms), Z_Construct_UFunction_ATDSGPlayerController_setSprintSpeed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATDSGPlayerController_setSprintSpeed_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATDSGPlayerController_setSprintSpeed_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATDSGPlayerController_setSprintSpeed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATDSGPlayerController_setSprintSpeed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATDSGPlayerController_setSprintSpeed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ATDSGPlayerController_NoRegister()
	{
		return ATDSGPlayerController::StaticClass();
	}
	struct Z_Construct_UClass_ATDSGPlayerController_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ATDSGPlayerController_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APlayerController,
		(UObject* (*)())Z_Construct_UPackage__Script_TopDownShooter,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ATDSGPlayerController_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ATDSGPlayerController_doSprint, "doSprint" }, // 3821481695
		{ &Z_Construct_UFunction_ATDSGPlayerController_getIsSprinting, "getIsSprinting" }, // 377287019
		{ &Z_Construct_UFunction_ATDSGPlayerController_getSprintSpeed, "getSprintSpeed" }, // 3695860728
		{ &Z_Construct_UFunction_ATDSGPlayerController_setDefaultSpeed, "setDefaultSpeed" }, // 1244211926
		{ &Z_Construct_UFunction_ATDSGPlayerController_setIsSprinting, "setIsSprinting" }, // 3383127305
		{ &Z_Construct_UFunction_ATDSGPlayerController_setSprintSpeed, "setSprintSpeed" }, // 1883729584
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATDSGPlayerController_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "TDSGPlayerController.h" },
		{ "ModuleRelativePath", "Public/TDSGPlayerController.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ATDSGPlayerController_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATDSGPlayerController>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ATDSGPlayerController_Statics::ClassParams = {
		&ATDSGPlayerController::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x009002A4u,
		METADATA_PARAMS(Z_Construct_UClass_ATDSGPlayerController_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ATDSGPlayerController_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ATDSGPlayerController()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ATDSGPlayerController_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ATDSGPlayerController, 2975944232);
	template<> TOPDOWNSHOOTER_API UClass* StaticClass<ATDSGPlayerController>()
	{
		return ATDSGPlayerController::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ATDSGPlayerController(Z_Construct_UClass_ATDSGPlayerController, &ATDSGPlayerController::StaticClass, TEXT("/Script/TopDownShooter"), TEXT("ATDSGPlayerController"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ATDSGPlayerController);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
