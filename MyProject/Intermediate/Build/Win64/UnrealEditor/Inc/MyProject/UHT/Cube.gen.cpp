// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MyProject/Public/Cube.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCube() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	MYPROJECT_API UClass* Z_Construct_UClass_ACube();
	MYPROJECT_API UClass* Z_Construct_UClass_ACube_NoRegister();
	UPackage* Z_Construct_UPackage__Script_MyProject();
// End Cross Module References
	void ACube::StaticRegisterNativesACube()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ACube);
	UClass* Z_Construct_UClass_ACube_NoRegister()
	{
		return ACube::StaticClass();
	}
	struct Z_Construct_UClass_ACube_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ACube_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_MyProject,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACube_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Cube.h" },
		{ "ModuleRelativePath", "Public/Cube.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ACube_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACube>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ACube_Statics::ClassParams = {
		&ACube::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ACube_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ACube_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ACube()
	{
		if (!Z_Registration_Info_UClass_ACube.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ACube.OuterSingleton, Z_Construct_UClass_ACube_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ACube.OuterSingleton;
	}
	template<> MYPROJECT_API UClass* StaticClass<ACube>()
	{
		return ACube::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ACube);
	ACube::~ACube() {}
	struct Z_CompiledInDeferFile_FID_Users_Tribs_OneDrive_Documents_Unreal_Projects_MyProject_Source_MyProject_Public_Cube_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Tribs_OneDrive_Documents_Unreal_Projects_MyProject_Source_MyProject_Public_Cube_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ACube, ACube::StaticClass, TEXT("ACube"), &Z_Registration_Info_UClass_ACube, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ACube), 2439428399U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Tribs_OneDrive_Documents_Unreal_Projects_MyProject_Source_MyProject_Public_Cube_h_3235777456(TEXT("/Script/MyProject"),
		Z_CompiledInDeferFile_FID_Users_Tribs_OneDrive_Documents_Unreal_Projects_MyProject_Source_MyProject_Public_Cube_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Tribs_OneDrive_Documents_Unreal_Projects_MyProject_Source_MyProject_Public_Cube_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
