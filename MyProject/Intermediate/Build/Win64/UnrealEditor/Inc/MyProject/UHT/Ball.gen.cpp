// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MyProject/Public/Ball.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBall() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	MYPROJECT_API UClass* Z_Construct_UClass_ABall();
	MYPROJECT_API UClass* Z_Construct_UClass_ABall_NoRegister();
	MYPROJECT_API UClass* Z_Construct_UClass_APlaneObject_NoRegister();
	UPackage* Z_Construct_UPackage__Script_MyProject();
// End Cross Module References
	DEFINE_FUNCTION(ABall::execSphereToPlane)
	{
		P_GET_OBJECT(APlaneObject,Z_Param_Plane);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SphereToPlane(Z_Param_Plane);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ABall::execCollision)
	{
		P_GET_OBJECT(ABall,Z_Param_ball2);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Collision(Z_Param_ball2);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ABall::execGetSpeed)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector*)Z_Param__Result=P_THIS->GetSpeed();
		P_NATIVE_END;
	}
	void ABall::StaticRegisterNativesABall()
	{
		UClass* Class = ABall::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Collision", &ABall::execCollision },
			{ "GetSpeed", &ABall::execGetSpeed },
			{ "SphereToPlane", &ABall::execSphereToPlane },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ABall_Collision_Statics
	{
		struct Ball_eventCollision_Parms
		{
			ABall* ball2;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ball2;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ABall_Collision_Statics::NewProp_ball2 = { "ball2", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Ball_eventCollision_Parms, ball2), Z_Construct_UClass_ABall_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABall_Collision_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABall_Collision_Statics::NewProp_ball2,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABall_Collision_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Ball.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ABall_Collision_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABall, nullptr, "Collision", nullptr, nullptr, sizeof(Z_Construct_UFunction_ABall_Collision_Statics::Ball_eventCollision_Parms), Z_Construct_UFunction_ABall_Collision_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABall_Collision_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABall_Collision_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ABall_Collision_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABall_Collision()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ABall_Collision_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ABall_GetSpeed_Statics
	{
		struct Ball_eventGetSpeed_Parms
		{
			FVector ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ABall_GetSpeed_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Ball_eventGetSpeed_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABall_GetSpeed_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABall_GetSpeed_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABall_GetSpeed_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Ball.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ABall_GetSpeed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABall, nullptr, "GetSpeed", nullptr, nullptr, sizeof(Z_Construct_UFunction_ABall_GetSpeed_Statics::Ball_eventGetSpeed_Parms), Z_Construct_UFunction_ABall_GetSpeed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABall_GetSpeed_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABall_GetSpeed_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ABall_GetSpeed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABall_GetSpeed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ABall_GetSpeed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ABall_SphereToPlane_Statics
	{
		struct Ball_eventSphereToPlane_Parms
		{
			APlaneObject* Plane;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Plane;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ABall_SphereToPlane_Statics::NewProp_Plane = { "Plane", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Ball_eventSphereToPlane_Parms, Plane), Z_Construct_UClass_APlaneObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABall_SphereToPlane_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABall_SphereToPlane_Statics::NewProp_Plane,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABall_SphereToPlane_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Ball.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ABall_SphereToPlane_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABall, nullptr, "SphereToPlane", nullptr, nullptr, sizeof(Z_Construct_UFunction_ABall_SphereToPlane_Statics::Ball_eventSphereToPlane_Parms), Z_Construct_UFunction_ABall_SphereToPlane_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABall_SphereToPlane_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABall_SphereToPlane_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ABall_SphereToPlane_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABall_SphereToPlane()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ABall_SphereToPlane_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ABall);
	UClass* Z_Construct_UClass_ABall_NoRegister()
	{
		return ABall::StaticClass();
	}
	struct Z_Construct_UClass_ABall_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_m_SphereMesh_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_m_SphereMesh;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_m_radius_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_m_radius;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_m_speed_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_m_speed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_m_mass_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_m_mass;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ABall_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_MyProject,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ABall_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ABall_Collision, "Collision" }, // 516602028
		{ &Z_Construct_UFunction_ABall_GetSpeed, "GetSpeed" }, // 795368493
		{ &Z_Construct_UFunction_ABall_SphereToPlane, "SphereToPlane" }, // 631808675
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABall_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Ball.h" },
		{ "ModuleRelativePath", "Public/Ball.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABall_Statics::NewProp_m_SphereMesh_MetaData[] = {
		{ "Category", "Ball" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Ball.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABall_Statics::NewProp_m_SphereMesh = { "m_SphereMesh", nullptr, (EPropertyFlags)0x00400000000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ABall, m_SphereMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABall_Statics::NewProp_m_SphereMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABall_Statics::NewProp_m_SphereMesh_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABall_Statics::NewProp_m_radius_MetaData[] = {
		{ "Category", "Ball" },
		{ "ModuleRelativePath", "Public/Ball.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABall_Statics::NewProp_m_radius = { "m_radius", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ABall, m_radius), METADATA_PARAMS(Z_Construct_UClass_ABall_Statics::NewProp_m_radius_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABall_Statics::NewProp_m_radius_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABall_Statics::NewProp_m_speed_MetaData[] = {
		{ "Category", "Ball" },
		{ "ModuleRelativePath", "Public/Ball.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ABall_Statics::NewProp_m_speed = { "m_speed", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ABall, m_speed), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_ABall_Statics::NewProp_m_speed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABall_Statics::NewProp_m_speed_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABall_Statics::NewProp_m_mass_MetaData[] = {
		{ "Category", "Ball" },
		{ "ModuleRelativePath", "Public/Ball.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABall_Statics::NewProp_m_mass = { "m_mass", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ABall, m_mass), METADATA_PARAMS(Z_Construct_UClass_ABall_Statics::NewProp_m_mass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABall_Statics::NewProp_m_mass_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ABall_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABall_Statics::NewProp_m_SphereMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABall_Statics::NewProp_m_radius,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABall_Statics::NewProp_m_speed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABall_Statics::NewProp_m_mass,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ABall_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABall>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ABall_Statics::ClassParams = {
		&ABall::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ABall_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ABall_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ABall_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ABall_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ABall()
	{
		if (!Z_Registration_Info_UClass_ABall.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ABall.OuterSingleton, Z_Construct_UClass_ABall_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ABall.OuterSingleton;
	}
	template<> MYPROJECT_API UClass* StaticClass<ABall>()
	{
		return ABall::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABall);
	ABall::~ABall() {}
	struct Z_CompiledInDeferFile_FID_Users_Tribs_OneDrive_Documents_Unreal_Projects_MyProject_Source_MyProject_Public_Ball_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Tribs_OneDrive_Documents_Unreal_Projects_MyProject_Source_MyProject_Public_Ball_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ABall, ABall::StaticClass, TEXT("ABall"), &Z_Registration_Info_UClass_ABall, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ABall), 3351403029U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Tribs_OneDrive_Documents_Unreal_Projects_MyProject_Source_MyProject_Public_Ball_h_1192955546(TEXT("/Script/MyProject"),
		Z_CompiledInDeferFile_FID_Users_Tribs_OneDrive_Documents_Unreal_Projects_MyProject_Source_MyProject_Public_Ball_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Tribs_OneDrive_Documents_Unreal_Projects_MyProject_Source_MyProject_Public_Ball_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
