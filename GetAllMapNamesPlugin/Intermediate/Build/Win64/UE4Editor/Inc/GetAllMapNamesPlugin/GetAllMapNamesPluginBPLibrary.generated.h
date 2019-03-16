// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef GETALLMAPNAMESPLUGIN_GetAllMapNamesPluginBPLibrary_generated_h
#error "GetAllMapNamesPluginBPLibrary.generated.h already included, missing '#pragma once' in GetAllMapNamesPluginBPLibrary.h"
#endif
#define GETALLMAPNAMESPLUGIN_GetAllMapNamesPluginBPLibrary_generated_h

#define GetAllMapNames_Plugins_GetAllMapNamesPlugin_Source_GetAllMapNamesPlugin_Public_GetAllMapNamesPluginBPLibrary_h_33_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetAllMapNames) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TArray<FString>*)Z_Param__Result=UGetAllMapNamesPluginBPLibrary::GetAllMapNames(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetAllMapNames_p) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TArray<FString>*)Z_Param__Result=UGetAllMapNamesPluginBPLibrary::GetAllMapNames_p(); \
		P_NATIVE_END; \
	}


#define GetAllMapNames_Plugins_GetAllMapNamesPlugin_Source_GetAllMapNamesPlugin_Public_GetAllMapNamesPluginBPLibrary_h_33_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetAllMapNames) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TArray<FString>*)Z_Param__Result=UGetAllMapNamesPluginBPLibrary::GetAllMapNames(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetAllMapNames_p) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TArray<FString>*)Z_Param__Result=UGetAllMapNamesPluginBPLibrary::GetAllMapNames_p(); \
		P_NATIVE_END; \
	}


#define GetAllMapNames_Plugins_GetAllMapNamesPlugin_Source_GetAllMapNamesPlugin_Public_GetAllMapNamesPluginBPLibrary_h_33_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGetAllMapNamesPluginBPLibrary(); \
	friend struct Z_Construct_UClass_UGetAllMapNamesPluginBPLibrary_Statics; \
public: \
	DECLARE_CLASS(UGetAllMapNamesPluginBPLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GetAllMapNamesPlugin"), NO_API) \
	DECLARE_SERIALIZER(UGetAllMapNamesPluginBPLibrary)


#define GetAllMapNames_Plugins_GetAllMapNamesPlugin_Source_GetAllMapNamesPlugin_Public_GetAllMapNamesPluginBPLibrary_h_33_INCLASS \
private: \
	static void StaticRegisterNativesUGetAllMapNamesPluginBPLibrary(); \
	friend struct Z_Construct_UClass_UGetAllMapNamesPluginBPLibrary_Statics; \
public: \
	DECLARE_CLASS(UGetAllMapNamesPluginBPLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GetAllMapNamesPlugin"), NO_API) \
	DECLARE_SERIALIZER(UGetAllMapNamesPluginBPLibrary)


#define GetAllMapNames_Plugins_GetAllMapNamesPlugin_Source_GetAllMapNamesPlugin_Public_GetAllMapNamesPluginBPLibrary_h_33_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGetAllMapNamesPluginBPLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGetAllMapNamesPluginBPLibrary) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGetAllMapNamesPluginBPLibrary); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGetAllMapNamesPluginBPLibrary); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGetAllMapNamesPluginBPLibrary(UGetAllMapNamesPluginBPLibrary&&); \
	NO_API UGetAllMapNamesPluginBPLibrary(const UGetAllMapNamesPluginBPLibrary&); \
public:


#define GetAllMapNames_Plugins_GetAllMapNamesPlugin_Source_GetAllMapNamesPlugin_Public_GetAllMapNamesPluginBPLibrary_h_33_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGetAllMapNamesPluginBPLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGetAllMapNamesPluginBPLibrary(UGetAllMapNamesPluginBPLibrary&&); \
	NO_API UGetAllMapNamesPluginBPLibrary(const UGetAllMapNamesPluginBPLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGetAllMapNamesPluginBPLibrary); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGetAllMapNamesPluginBPLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGetAllMapNamesPluginBPLibrary)


#define GetAllMapNames_Plugins_GetAllMapNamesPlugin_Source_GetAllMapNamesPlugin_Public_GetAllMapNamesPluginBPLibrary_h_33_PRIVATE_PROPERTY_OFFSET
#define GetAllMapNames_Plugins_GetAllMapNamesPlugin_Source_GetAllMapNamesPlugin_Public_GetAllMapNamesPluginBPLibrary_h_30_PROLOG
#define GetAllMapNames_Plugins_GetAllMapNamesPlugin_Source_GetAllMapNamesPlugin_Public_GetAllMapNamesPluginBPLibrary_h_33_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	GetAllMapNames_Plugins_GetAllMapNamesPlugin_Source_GetAllMapNamesPlugin_Public_GetAllMapNamesPluginBPLibrary_h_33_PRIVATE_PROPERTY_OFFSET \
	GetAllMapNames_Plugins_GetAllMapNamesPlugin_Source_GetAllMapNamesPlugin_Public_GetAllMapNamesPluginBPLibrary_h_33_RPC_WRAPPERS \
	GetAllMapNames_Plugins_GetAllMapNamesPlugin_Source_GetAllMapNamesPlugin_Public_GetAllMapNamesPluginBPLibrary_h_33_INCLASS \
	GetAllMapNames_Plugins_GetAllMapNamesPlugin_Source_GetAllMapNamesPlugin_Public_GetAllMapNamesPluginBPLibrary_h_33_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define GetAllMapNames_Plugins_GetAllMapNamesPlugin_Source_GetAllMapNamesPlugin_Public_GetAllMapNamesPluginBPLibrary_h_33_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	GetAllMapNames_Plugins_GetAllMapNamesPlugin_Source_GetAllMapNamesPlugin_Public_GetAllMapNamesPluginBPLibrary_h_33_PRIVATE_PROPERTY_OFFSET \
	GetAllMapNames_Plugins_GetAllMapNamesPlugin_Source_GetAllMapNamesPlugin_Public_GetAllMapNamesPluginBPLibrary_h_33_RPC_WRAPPERS_NO_PURE_DECLS \
	GetAllMapNames_Plugins_GetAllMapNamesPlugin_Source_GetAllMapNamesPlugin_Public_GetAllMapNamesPluginBPLibrary_h_33_INCLASS_NO_PURE_DECLS \
	GetAllMapNames_Plugins_GetAllMapNamesPlugin_Source_GetAllMapNamesPlugin_Public_GetAllMapNamesPluginBPLibrary_h_33_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class GetAllMapNamesPluginBPLibrary."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID GetAllMapNames_Plugins_GetAllMapNamesPlugin_Source_GetAllMapNamesPlugin_Public_GetAllMapNamesPluginBPLibrary_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
