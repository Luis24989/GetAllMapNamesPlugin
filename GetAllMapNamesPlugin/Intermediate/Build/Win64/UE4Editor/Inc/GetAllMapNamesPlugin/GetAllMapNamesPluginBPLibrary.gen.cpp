// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GetAllMapNamesPlugin/Public/GetAllMapNamesPluginBPLibrary.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGetAllMapNamesPluginBPLibrary() {}
// Cross Module References
	GETALLMAPNAMESPLUGIN_API UClass* Z_Construct_UClass_UGetAllMapNamesPluginBPLibrary_NoRegister();
	GETALLMAPNAMESPLUGIN_API UClass* Z_Construct_UClass_UGetAllMapNamesPluginBPLibrary();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_GetAllMapNamesPlugin();
	GETALLMAPNAMESPLUGIN_API UFunction* Z_Construct_UFunction_UGetAllMapNamesPluginBPLibrary_GetAllMapNames();
	GETALLMAPNAMESPLUGIN_API UFunction* Z_Construct_UFunction_UGetAllMapNamesPluginBPLibrary_GetAllMapNames_p();
// End Cross Module References
	void UGetAllMapNamesPluginBPLibrary::StaticRegisterNativesUGetAllMapNamesPluginBPLibrary()
	{
		UClass* Class = UGetAllMapNamesPluginBPLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetAllMapNames", &UGetAllMapNamesPluginBPLibrary::execGetAllMapNames },
			{ "GetAllMapNames_p", &UGetAllMapNamesPluginBPLibrary::execGetAllMapNames_p },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UGetAllMapNamesPluginBPLibrary_GetAllMapNames_Statics
	{
		struct GetAllMapNamesPluginBPLibrary_eventGetAllMapNames_Parms
		{
			TArray<FString> ReturnValue;
		};
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UGetAllMapNamesPluginBPLibrary_GetAllMapNames_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Array, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(GetAllMapNamesPluginBPLibrary_eventGetAllMapNames_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UGetAllMapNamesPluginBPLibrary_GetAllMapNames_Statics::NewProp_ReturnValue_Inner = { UE4CodeGen_Private::EPropertyClass::Str, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGetAllMapNamesPluginBPLibrary_GetAllMapNames_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGetAllMapNamesPluginBPLibrary_GetAllMapNames_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGetAllMapNamesPluginBPLibrary_GetAllMapNames_Statics::NewProp_ReturnValue_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGetAllMapNamesPluginBPLibrary_GetAllMapNames_Statics::Function_MetaDataParams[] = {
		{ "Category", "MapNames" },
		{ "DisplayName", "GetAllMapNames" },
		{ "Keywords", "GAMNMaps" },
		{ "ModuleRelativePath", "Public/GetAllMapNamesPluginBPLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGetAllMapNamesPluginBPLibrary_GetAllMapNames_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGetAllMapNamesPluginBPLibrary, "GetAllMapNames", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04022401, sizeof(GetAllMapNamesPluginBPLibrary_eventGetAllMapNames_Parms), Z_Construct_UFunction_UGetAllMapNamesPluginBPLibrary_GetAllMapNames_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UGetAllMapNamesPluginBPLibrary_GetAllMapNames_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGetAllMapNamesPluginBPLibrary_GetAllMapNames_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UGetAllMapNamesPluginBPLibrary_GetAllMapNames_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGetAllMapNamesPluginBPLibrary_GetAllMapNames()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGetAllMapNamesPluginBPLibrary_GetAllMapNames_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGetAllMapNamesPluginBPLibrary_GetAllMapNames_p_Statics
	{
		struct GetAllMapNamesPluginBPLibrary_eventGetAllMapNames_p_Parms
		{
			TArray<FString> ReturnValue;
		};
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UGetAllMapNamesPluginBPLibrary_GetAllMapNames_p_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Array, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(GetAllMapNamesPluginBPLibrary_eventGetAllMapNames_p_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UGetAllMapNamesPluginBPLibrary_GetAllMapNames_p_Statics::NewProp_ReturnValue_Inner = { UE4CodeGen_Private::EPropertyClass::Str, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGetAllMapNamesPluginBPLibrary_GetAllMapNames_p_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGetAllMapNamesPluginBPLibrary_GetAllMapNames_p_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGetAllMapNamesPluginBPLibrary_GetAllMapNames_p_Statics::NewProp_ReturnValue_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGetAllMapNamesPluginBPLibrary_GetAllMapNames_p_Statics::Function_MetaDataParams[] = {
		{ "Category", "MapNames" },
		{ "DisplayName", "GetAllMapNames" },
		{ "Keywords", "GAMNMaps" },
		{ "ModuleRelativePath", "Public/GetAllMapNamesPluginBPLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGetAllMapNamesPluginBPLibrary_GetAllMapNames_p_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGetAllMapNamesPluginBPLibrary, "GetAllMapNames_p", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14022401, sizeof(GetAllMapNamesPluginBPLibrary_eventGetAllMapNames_p_Parms), Z_Construct_UFunction_UGetAllMapNamesPluginBPLibrary_GetAllMapNames_p_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UGetAllMapNamesPluginBPLibrary_GetAllMapNames_p_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGetAllMapNamesPluginBPLibrary_GetAllMapNames_p_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UGetAllMapNamesPluginBPLibrary_GetAllMapNames_p_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGetAllMapNamesPluginBPLibrary_GetAllMapNames_p()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGetAllMapNamesPluginBPLibrary_GetAllMapNames_p_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UGetAllMapNamesPluginBPLibrary_NoRegister()
	{
		return UGetAllMapNamesPluginBPLibrary::StaticClass();
	}
	struct Z_Construct_UClass_UGetAllMapNamesPluginBPLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGetAllMapNamesPluginBPLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_GetAllMapNamesPlugin,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UGetAllMapNamesPluginBPLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UGetAllMapNamesPluginBPLibrary_GetAllMapNames, "GetAllMapNames" }, // 2567786636
		{ &Z_Construct_UFunction_UGetAllMapNamesPluginBPLibrary_GetAllMapNames_p, "GetAllMapNames_p" }, // 3216310110
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGetAllMapNamesPluginBPLibrary_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "GetAllMapNamesPluginBPLibrary.h" },
		{ "ModuleRelativePath", "Public/GetAllMapNamesPluginBPLibrary.h" },
		{ "ToolTip", "*      Function library class.\n*      Each function in it is expected to be static and represents blueprint node that can be called in any blueprint.\n*\n*      When declaring function you can define metadata for the node. Key function specifiers will be BlueprintPure and BlueprintCallable.\n*      BlueprintPure - means the function does not affect the owning object in any way and thus creates a node without Exec pins.\n*      BlueprintCallable - makes a function which can be executed in Blueprints - Thus it has Exec pins.\n*      DisplayName - full name of the node, shown when you mouse over the node and in the blueprint drop down menu.\n*                              Its lets you name the node using characters not allowed in C++ function names.\n*      CompactNodeTitle - the word(s) that appear on the node.\n*      Keywords -      the list of keywords that helps you to find node when you search for it using Blueprint drop-down menu.\n*                              Good example is \"Print String\" node which you can find also by using keyword \"log\".\n*      Category -      the category your node will be under in the Blueprint drop-down menu.\n*\n*      For more info on custom blueprint nodes visit documentation:\n*      https://wiki.unrealengine.com/Custom_Blueprint_Node_Creation" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGetAllMapNamesPluginBPLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGetAllMapNamesPluginBPLibrary>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UGetAllMapNamesPluginBPLibrary_Statics::ClassParams = {
		&UGetAllMapNamesPluginBPLibrary::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x000000A0u,
		FuncInfo, ARRAY_COUNT(FuncInfo),
		nullptr, 0,
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_UGetAllMapNamesPluginBPLibrary_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UGetAllMapNamesPluginBPLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGetAllMapNamesPluginBPLibrary()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UGetAllMapNamesPluginBPLibrary_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UGetAllMapNamesPluginBPLibrary, 648011983);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UGetAllMapNamesPluginBPLibrary(Z_Construct_UClass_UGetAllMapNamesPluginBPLibrary, &UGetAllMapNamesPluginBPLibrary::StaticClass, TEXT("/Script/GetAllMapNamesPlugin"), TEXT("UGetAllMapNamesPluginBPLibrary"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGetAllMapNamesPluginBPLibrary);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
