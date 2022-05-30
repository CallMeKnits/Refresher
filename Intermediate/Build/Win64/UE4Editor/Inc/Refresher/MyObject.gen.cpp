// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Refresher/MyObject.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMyObject() {}
// Cross Module References
	REFRESHER_API UClass* Z_Construct_UClass_UMyObject_NoRegister();
	REFRESHER_API UClass* Z_Construct_UClass_UMyObject();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_Refresher();
// End Cross Module References
	void UMyObject::StaticRegisterNativesUMyObject()
	{
	}
	UClass* Z_Construct_UClass_UMyObject_NoRegister()
	{
		return UMyObject::StaticClass();
	}
	struct Z_Construct_UClass_UMyObject_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMyObject_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Refresher,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMyObject_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "MyObject.h" },
		{ "ModuleRelativePath", "MyObject.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMyObject_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMyObject>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UMyObject_Statics::ClassParams = {
		&UMyObject::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UMyObject_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMyObject_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMyObject()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UMyObject_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UMyObject, 3155024617);
	template<> REFRESHER_API UClass* StaticClass<UMyObject>()
	{
		return UMyObject::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMyObject(Z_Construct_UClass_UMyObject, &UMyObject::StaticClass, TEXT("/Script/Refresher"), TEXT("UMyObject"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMyObject);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
