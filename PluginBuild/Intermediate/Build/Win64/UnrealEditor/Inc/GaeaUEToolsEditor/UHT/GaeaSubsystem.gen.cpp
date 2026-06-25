// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GaeaSubsystem.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_UOBJECT");
void EmptyLinkFunctionForGeneratedCodeGaeaSubsystem() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FIntPoint(ETypeConstructPhase);
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector(ETypeConstructPhase);
EDITORSUBSYSTEM_API UClass* Z_Construct_UClass_UEditorSubsystem(ETypeConstructPhase);
ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface(ETypeConstructPhase);
LANDSCAPE_API UClass* Z_Construct_UClass_ALandscape(ETypeConstructPhase);
LANDSCAPE_API UClass* Z_Construct_UClass_ULandscapeInfo(ETypeConstructPhase);
LANDSCAPE_API UClass* Z_Construct_UClass_ALandscapeProxy(ETypeConstructPhase);
LANDSCAPE_API UClass* Z_Construct_UClass_ULandscapeSubsystem(ETypeConstructPhase);
LANDSCAPE_API UClass* Z_Construct_UClass_UMaterialExpressionLandscapeLayerBlend(ETypeConstructPhase);
// ********** End Cross Module References **********************************************************

// ********** Begin Same Module References *********************************************************
UPackage* Z_Construct_UPackage__Script_GaeaUEToolsEditor(ETypeConstructPhase);
GAEAUETOOLSEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FGaeaJson(ETypeConstructPhase);
GAEAUETOOLSEDITOR_API UClass* Z_Construct_UClass_UGaeaSubsystem(ETypeConstructPhase);
GAEAUETOOLSEDITOR_API UClass* Z_Construct_UClass_UGaeaSubsystem(ETypeConstructPhase);
GAEAUETOOLSEDITOR_API UClass* Z_Construct_UClass_UImporterPanelSettings(ETypeConstructPhase);
// ********** End Same Module References ***********************************************************
#define UHT_STRUCT_BASE(INIT) UE::CodeGen::ConstInit::TCompiledInObjectPtr<const FStructBaseChain>(UE::Private::AsStructBaseChain(INIT))

// ********** Begin ScriptStruct FGaeaJson *********************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UScriptStruct_FGaeaJson_Statics
struct UHT_STATICS
{
	static inline consteval int32 GetStructSize() { return DataSizeOf<FGaeaJson>(); }
	static inline consteval int16 GetStructAlignment() { return alignof(FGaeaJson); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "ModuleRelativePath", "Public/GaeaSubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ID_MetaData[] = {
		{ "ModuleRelativePath", "Public/GaeaSubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Resolution_MetaData[] = {
		{ "ModuleRelativePath", "Public/GaeaSubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ScaleX_MetaData[] = {
		{ "ModuleRelativePath", "Public/GaeaSubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ScaleY_MetaData[] = {
		{ "ModuleRelativePath", "Public/GaeaSubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ScaleZ_MetaData[] = {
		{ "ModuleRelativePath", "Public/GaeaSubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Height_MetaData[] = {
		{ "ModuleRelativePath", "Public/GaeaSubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Unit_MetaData[] = {
		{ "ModuleRelativePath", "Public/GaeaSubsystem.h" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FGaeaJson constinit property declarations *************************
	static const UECodeGen_Private::FStrPropertyParams NewProp_ID;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Resolution;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ScaleX;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ScaleY;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ScaleZ;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Height;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Unit;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FGaeaJson constinit property declarations ***************************
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGaeaJson>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct UHT_STATICS

// ********** Begin ScriptStruct FGaeaJson Property Definitions ************************************
const UECodeGen_Private::FStrPropertyParams UHT_STATICS::NewProp_ID = { "ID", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, nullptr, nullptr, 1, STRUCT_OFFSET(FGaeaJson, ID), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ID_MetaData), NewProp_ID_MetaData) };
const UECodeGen_Private::FIntPropertyParams UHT_STATICS::NewProp_Resolution = { "Resolution", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, nullptr, nullptr, 1, STRUCT_OFFSET(FGaeaJson, Resolution), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Resolution_MetaData), NewProp_Resolution_MetaData) };
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_ScaleX = { "ScaleX", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(FGaeaJson, ScaleX), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ScaleX_MetaData), NewProp_ScaleX_MetaData) };
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_ScaleY = { "ScaleY", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(FGaeaJson, ScaleY), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ScaleY_MetaData), NewProp_ScaleY_MetaData) };
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_ScaleZ = { "ScaleZ", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(FGaeaJson, ScaleZ), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ScaleZ_MetaData), NewProp_ScaleZ_MetaData) };
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_Height = { "Height", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(FGaeaJson, Height), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Height_MetaData), NewProp_Height_MetaData) };
const UECodeGen_Private::FStrPropertyParams UHT_STATICS::NewProp_Unit = { "Unit", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, nullptr, nullptr, 1, STRUCT_OFFSET(FGaeaJson, Unit), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Unit_MetaData), NewProp_Unit_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ID,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Resolution,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ScaleX,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ScaleY,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ScaleZ,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Height,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Unit,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End ScriptStruct FGaeaJson Property Definitions **************************************
const UECodeGen_Private::FStructParams UHT_STATICS::StructParams = {
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_GaeaUEToolsEditor,
	nullptr,
	&NewStructOps,
	"GaeaJson",
	UHT_STATICS::PropPointers,
	UE_ARRAY_COUNT(UHT_STATICS::PropPointers),
	DataSizeOf<FGaeaJson>(),
	alignof(FGaeaJson),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FGaeaJson;
UScriptStruct* Z_Construct_UScriptStruct_FGaeaJson(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Outer)
	{
		if (!Z_Registration_Info_UScriptStruct_FGaeaJson.OuterSingleton)
		{
			Z_Registration_Info_UScriptStruct_FGaeaJson.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGaeaJson, (UObject*)Z_Construct_UPackage__Script_GaeaUEToolsEditor(ETypeConstructPhase::Outer), TEXT("GaeaJson"));
		}
		return Z_Registration_Info_UScriptStruct_FGaeaJson.OuterSingleton;
	}
	if (!Z_Registration_Info_UScriptStruct_FGaeaJson.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FGaeaJson.InnerSingleton, UHT_STATICS::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FGaeaJson.InnerSingleton);
}
#undef UHT_STATICS
// ********** End ScriptStruct FGaeaJson ***********************************************************

// ********** Begin Class UGaeaSubsystem Function AddComponents ************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UGaeaSubsystem_AddComponents_Statics
struct UHT_STATICS
{
	struct GaeaSubsystem_eventAddComponents_Parms
	{
		ULandscapeInfo* InLandscapeInfo;
		ULandscapeSubsystem* InLandscapeSubsystem;
		TArray<FIntPoint> InComponentCoordinates;
		TArray<ALandscapeProxy*> OutCreatedStreamingProxies;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "ModuleRelativePath", "Public/GaeaSubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InComponentCoordinates_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function AddComponents constinit property declarations *************************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InLandscapeInfo;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InLandscapeSubsystem;
	static const UECodeGen_Private::FStructPropertyParams NewProp_InComponentCoordinates_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_InComponentCoordinates;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OutCreatedStreamingProxies_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_OutCreatedStreamingProxies;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function AddComponents constinit property declarations ***************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function AddComponents Property Definitions ************************************
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_InLandscapeInfo = { "InLandscapeInfo", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(GaeaSubsystem_eventAddComponents_Parms, InLandscapeInfo), Z_Construct_UClass_ULandscapeInfo, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_InLandscapeSubsystem = { "InLandscapeSubsystem", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(GaeaSubsystem_eventAddComponents_Parms, InLandscapeSubsystem), Z_Construct_UClass_ULandscapeSubsystem, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_InComponentCoordinates_Inner = { "InComponentCoordinates", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FIntPoint, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams UHT_STATICS::NewProp_InComponentCoordinates = { "InComponentCoordinates", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, nullptr, nullptr, 1, STRUCT_OFFSET(GaeaSubsystem_eventAddComponents_Parms, InComponentCoordinates), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InComponentCoordinates_MetaData), NewProp_InComponentCoordinates_MetaData) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_OutCreatedStreamingProxies_Inner = { "OutCreatedStreamingProxies", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, 0, Z_Construct_UClass_ALandscapeProxy, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams UHT_STATICS::NewProp_OutCreatedStreamingProxies = { "OutCreatedStreamingProxies", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, nullptr, nullptr, 1, STRUCT_OFFSET(GaeaSubsystem_eventAddComponents_Parms, OutCreatedStreamingProxies), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_InLandscapeInfo,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_InLandscapeSubsystem,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_InComponentCoordinates_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_InComponentCoordinates,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_OutCreatedStreamingProxies_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_OutCreatedStreamingProxies,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function AddComponents Property Definitions **************************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UGaeaSubsystem, nullptr, "AddComponents", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::GaeaSubsystem_eventAddComponents_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::GaeaSubsystem_eventAddComponents_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGaeaSubsystem_AddComponents(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UGaeaSubsystem::execAddComponents)
{
	P_GET_OBJECT(ULandscapeInfo,Z_Param_InLandscapeInfo);
	P_GET_OBJECT(ULandscapeSubsystem,Z_Param_InLandscapeSubsystem);
	P_GET_TARRAY_REF(FIntPoint,Z_Param_Out_InComponentCoordinates);
	P_GET_TARRAY_REF(ALandscapeProxy*,Z_Param_Out_OutCreatedStreamingProxies);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->AddComponents(Z_Param_InLandscapeInfo,Z_Param_InLandscapeSubsystem,Z_Param_Out_InComponentCoordinates,Z_Param_Out_OutCreatedStreamingProxies);
	P_NATIVE_END;
}
// ********** End Class UGaeaSubsystem Function AddComponents **************************************

// ********** Begin Class UGaeaSubsystem Function CreateLandscapeActor *****************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UGaeaSubsystem_CreateLandscapeActor_Statics
struct UHT_STATICS
{
	struct GaeaSubsystem_eventCreateLandscapeActor_Parms
	{
		UImporterPanelSettings* Settings;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Comment", "//Creates a landscape actor from our panel settings.\n" },
		{ "ModuleRelativePath", "Public/GaeaSubsystem.h" },
		{ "ToolTip", "Creates a landscape actor from our panel settings." },
	};
#endif // WITH_METADATA

// ********** Begin Function CreateLandscapeActor constinit property declarations ******************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Settings;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function CreateLandscapeActor constinit property declarations ********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function CreateLandscapeActor Property Definitions *****************************
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_Settings = { "Settings", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(GaeaSubsystem_eventCreateLandscapeActor_Parms, Settings), Z_Construct_UClass_UImporterPanelSettings, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Settings,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function CreateLandscapeActor Property Definitions *******************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UGaeaSubsystem, nullptr, "CreateLandscapeActor", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::GaeaSubsystem_eventCreateLandscapeActor_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::GaeaSubsystem_eventCreateLandscapeActor_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGaeaSubsystem_CreateLandscapeActor(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UGaeaSubsystem::execCreateLandscapeActor)
{
	P_GET_OBJECT(UImporterPanelSettings,Z_Param_Settings);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->CreateLandscapeActor(Z_Param_Settings);
	P_NATIVE_END;
}
// ********** End Class UGaeaSubsystem Function CreateLandscapeActor *******************************

// ********** Begin Class UGaeaSubsystem Function CreateStructFromJson *****************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UGaeaSubsystem_CreateStructFromJson_Statics
struct UHT_STATICS
{
	struct GaeaSubsystem_eventCreateStructFromJson_Parms
	{
		FString Path;
		bool bOutSuccess;
		FString OutMessage;
		FGaeaJson ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "ModuleRelativePath", "Public/GaeaSubsystem.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function CreateStructFromJson constinit property declarations ******************
	static const UECodeGen_Private::FStrPropertyParams NewProp_Path;
	static void NewProp_bOutSuccess_SetBit(void* Obj)
	{
		((GaeaSubsystem_eventCreateStructFromJson_Parms*)Obj)->bOutSuccess = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bOutSuccess;
	static const UECodeGen_Private::FStrPropertyParams NewProp_OutMessage;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function CreateStructFromJson constinit property declarations ********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function CreateStructFromJson Property Definitions *****************************
const UECodeGen_Private::FStrPropertyParams UHT_STATICS::NewProp_Path = { "Path", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, nullptr, nullptr, 1, STRUCT_OFFSET(GaeaSubsystem_eventCreateStructFromJson_Parms, Path), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bOutSuccess = { "bOutSuccess", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(GaeaSubsystem_eventCreateStructFromJson_Parms), &UHT_STATICS::NewProp_bOutSuccess_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams UHT_STATICS::NewProp_OutMessage = { "OutMessage", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, nullptr, nullptr, 1, STRUCT_OFFSET(GaeaSubsystem_eventCreateStructFromJson_Parms, OutMessage), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(GaeaSubsystem_eventCreateStructFromJson_Parms, ReturnValue), Z_Construct_UScriptStruct_FGaeaJson, METADATA_PARAMS(0, nullptr) }; // 179e24a3106a4e6a4531eb4c6f9ef58885d8a0b9
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Path,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bOutSuccess,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_OutMessage,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function CreateStructFromJson Property Definitions *******************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UGaeaSubsystem, nullptr, "CreateStructFromJson", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::GaeaSubsystem_eventCreateStructFromJson_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::GaeaSubsystem_eventCreateStructFromJson_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGaeaSubsystem_CreateStructFromJson(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UGaeaSubsystem::execCreateStructFromJson)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_Path);
	P_GET_UBOOL_REF(Z_Param_Out_bOutSuccess);
	P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_OutMessage);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FGaeaJson*)Z_Param__Result=P_THIS->CreateStructFromJson(Z_Param_Path,Z_Param_Out_bOutSuccess,Z_Param_Out_OutMessage);
	P_NATIVE_END;
}
// ********** End Class UGaeaSubsystem Function CreateStructFromJson *******************************

// ********** Begin Class UGaeaSubsystem Function DeleteLandscapeComponents ************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UGaeaSubsystem_DeleteLandscapeComponents_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "ModuleRelativePath", "Public/GaeaSubsystem.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function DeleteLandscapeComponents constinit property declarations *************
// ********** End Function DeleteLandscapeComponents constinit property declarations ***************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UGaeaSubsystem, nullptr, "DeleteLandscapeComponents", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
UFunction* Z_Construct_UFunction_UGaeaSubsystem_DeleteLandscapeComponents(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UGaeaSubsystem::execDeleteLandscapeComponents)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->DeleteLandscapeComponents();
	P_NATIVE_END;
}
// ********** End Class UGaeaSubsystem Function DeleteLandscapeComponents **************************

// ********** Begin Class UGaeaSubsystem Function GetGaeaSubsystem *********************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UGaeaSubsystem_GetGaeaSubsystem_Statics
struct UHT_STATICS
{
	struct GaeaSubsystem_eventGetGaeaSubsystem_Parms
	{
		UGaeaSubsystem* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Comment", "// Get instance of the Gaea Subsystem\n" },
		{ "ModuleRelativePath", "Public/GaeaSubsystem.h" },
		{ "ToolTip", "Get instance of the Gaea Subsystem" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetGaeaSubsystem constinit property declarations **********************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetGaeaSubsystem constinit property declarations ************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetGaeaSubsystem Property Definitions *********************************
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(GaeaSubsystem_eventGetGaeaSubsystem_Parms, ReturnValue), Z_Construct_UClass_UGaeaSubsystem, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function GetGaeaSubsystem Property Definitions ***********************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UGaeaSubsystem, nullptr, "GetGaeaSubsystem", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::GaeaSubsystem_eventGetGaeaSubsystem_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::GaeaSubsystem_eventGetGaeaSubsystem_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGaeaSubsystem_GetGaeaSubsystem(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UGaeaSubsystem::execGetGaeaSubsystem)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UGaeaSubsystem**)Z_Param__Result=UGaeaSubsystem::GetGaeaSubsystem();
	P_NATIVE_END;
}
// ********** End Class UGaeaSubsystem Function GetGaeaSubsystem ***********************************

// ********** Begin Class UGaeaSubsystem Function GetLandscape *************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UGaeaSubsystem_GetLandscape_Statics
struct UHT_STATICS
{
	struct GaeaSubsystem_eventGetLandscape_Parms
	{
		ULandscapeInfo* LandscapeInfo;
		ALandscape* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "ModuleRelativePath", "Public/GaeaSubsystem.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetLandscape constinit property declarations **************************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_LandscapeInfo;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetLandscape constinit property declarations ****************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetLandscape Property Definitions *************************************
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_LandscapeInfo = { "LandscapeInfo", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(GaeaSubsystem_eventGetLandscape_Parms, LandscapeInfo), Z_Construct_UClass_ULandscapeInfo, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(GaeaSubsystem_eventGetLandscape_Parms, ReturnValue), Z_Construct_UClass_ALandscape, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_LandscapeInfo,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function GetLandscape Property Definitions ***************************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UGaeaSubsystem, nullptr, "GetLandscape", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::GaeaSubsystem_eventGetLandscape_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x40020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::GaeaSubsystem_eventGetLandscape_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGaeaSubsystem_GetLandscape(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UGaeaSubsystem::execGetLandscape)
{
	P_GET_OBJECT(ULandscapeInfo,Z_Param_LandscapeInfo);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(ALandscape**)Z_Param__Result=P_THIS->GetLandscape(Z_Param_LandscapeInfo);
	P_NATIVE_END;
}
// ********** End Class UGaeaSubsystem Function GetLandscape ***************************************

// ********** Begin Class UGaeaSubsystem Function GetLandscapeLayerBlendNames **********************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UGaeaSubsystem_GetLandscapeLayerBlendNames_Statics
struct UHT_STATICS
{
	struct GaeaSubsystem_eventGetLandscapeLayerBlendNames_Parms
	{
		TArray<UMaterialExpressionLandscapeLayerBlend*> LayerBlends;
		TArray<FName> Names;
		TArray<FName> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "ModuleRelativePath", "Public/GaeaSubsystem.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetLandscapeLayerBlendNames constinit property declarations ***********
	static const UECodeGen_Private::FObjectPropertyParams NewProp_LayerBlends_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_LayerBlends;
	static const UECodeGen_Private::FNamePropertyParams NewProp_Names_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Names;
	static const UECodeGen_Private::FNamePropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetLandscapeLayerBlendNames constinit property declarations *************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetLandscapeLayerBlendNames Property Definitions **********************
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_LayerBlends_Inner = { "LayerBlends", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, 0, Z_Construct_UClass_UMaterialExpressionLandscapeLayerBlend, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams UHT_STATICS::NewProp_LayerBlends = { "LayerBlends", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, nullptr, nullptr, 1, STRUCT_OFFSET(GaeaSubsystem_eventGetLandscapeLayerBlendNames_Parms, LayerBlends), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FNamePropertyParams UHT_STATICS::NewProp_Names_Inner = { "Names", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams UHT_STATICS::NewProp_Names = { "Names", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, nullptr, nullptr, 1, STRUCT_OFFSET(GaeaSubsystem_eventGetLandscapeLayerBlendNames_Parms, Names), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FNamePropertyParams UHT_STATICS::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, nullptr, nullptr, 1, STRUCT_OFFSET(GaeaSubsystem_eventGetLandscapeLayerBlendNames_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_LayerBlends_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_LayerBlends,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Names_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Names,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function GetLandscapeLayerBlendNames Property Definitions ************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UGaeaSubsystem, nullptr, "GetLandscapeLayerBlendNames", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::GaeaSubsystem_eventGetLandscapeLayerBlendNames_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::GaeaSubsystem_eventGetLandscapeLayerBlendNames_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGaeaSubsystem_GetLandscapeLayerBlendNames(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UGaeaSubsystem::execGetLandscapeLayerBlendNames)
{
	P_GET_TARRAY(UMaterialExpressionLandscapeLayerBlend*,Z_Param_LayerBlends);
	P_GET_TARRAY_REF(FName,Z_Param_Out_Names);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<FName>*)Z_Param__Result=P_THIS->GetLandscapeLayerBlendNames(Z_Param_LayerBlends,Z_Param_Out_Names);
	P_NATIVE_END;
}
// ********** End Class UGaeaSubsystem Function GetLandscapeLayerBlendNames ************************

// ********** Begin Class UGaeaSubsystem Function GetLandscapeLayerBlendNodes **********************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UGaeaSubsystem_GetLandscapeLayerBlendNodes_Statics
struct UHT_STATICS
{
	struct GaeaSubsystem_eventGetLandscapeLayerBlendNodes_Parms
	{
		UMaterialInterface* MaterialInterface;
		TArray<UMaterialExpressionLandscapeLayerBlend*> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "ModuleRelativePath", "Public/GaeaSubsystem.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetLandscapeLayerBlendNodes constinit property declarations ***********
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MaterialInterface;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetLandscapeLayerBlendNodes constinit property declarations *************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetLandscapeLayerBlendNodes Property Definitions **********************
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_MaterialInterface = { "MaterialInterface", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(GaeaSubsystem_eventGetLandscapeLayerBlendNodes_Parms, MaterialInterface), Z_Construct_UClass_UMaterialInterface, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, 0, Z_Construct_UClass_UMaterialExpressionLandscapeLayerBlend, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, nullptr, nullptr, 1, STRUCT_OFFSET(GaeaSubsystem_eventGetLandscapeLayerBlendNodes_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_MaterialInterface,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function GetLandscapeLayerBlendNodes Property Definitions ************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UGaeaSubsystem, nullptr, "GetLandscapeLayerBlendNodes", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::GaeaSubsystem_eventGetLandscapeLayerBlendNodes_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::GaeaSubsystem_eventGetLandscapeLayerBlendNodes_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGaeaSubsystem_GetLandscapeLayerBlendNodes(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UGaeaSubsystem::execGetLandscapeLayerBlendNodes)
{
	P_GET_OBJECT(UMaterialInterface,Z_Param_MaterialInterface);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<UMaterialExpressionLandscapeLayerBlend*>*)Z_Param__Result=P_THIS->GetLandscapeLayerBlendNodes(Z_Param_MaterialInterface);
	P_NATIVE_END;
}
// ********** End Class UGaeaSubsystem Function GetLandscapeLayerBlendNodes ************************

// ********** Begin Class UGaeaSubsystem Function ImportHeightmap **********************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UGaeaSubsystem_ImportHeightmap_Statics
struct UHT_STATICS
{
	struct GaeaSubsystem_eventImportHeightmap_Parms
	{
		FString Heightmap;
		FString JSON;
		FVector Scale;
		FVector Location;
		TArray<FString> Weightmaps;
		FString CachedPath;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Comment", "// Open import dialog for heightmap file types. Will set a path for heightmap and json files.\n" },
		{ "ModuleRelativePath", "Public/GaeaSubsystem.h" },
		{ "ToolTip", "Open import dialog for heightmap file types. Will set a path for heightmap and json files." },
	};
#endif // WITH_METADATA

// ********** Begin Function ImportHeightmap constinit property declarations ***********************
	static const UECodeGen_Private::FStrPropertyParams NewProp_Heightmap;
	static const UECodeGen_Private::FStrPropertyParams NewProp_JSON;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Scale;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Location;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Weightmaps_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Weightmaps;
	static const UECodeGen_Private::FStrPropertyParams NewProp_CachedPath;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function ImportHeightmap constinit property declarations *************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function ImportHeightmap Property Definitions **********************************
const UECodeGen_Private::FStrPropertyParams UHT_STATICS::NewProp_Heightmap = { "Heightmap", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, nullptr, nullptr, 1, STRUCT_OFFSET(GaeaSubsystem_eventImportHeightmap_Parms, Heightmap), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams UHT_STATICS::NewProp_JSON = { "JSON", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, nullptr, nullptr, 1, STRUCT_OFFSET(GaeaSubsystem_eventImportHeightmap_Parms, JSON), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_Scale = { "Scale", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(GaeaSubsystem_eventImportHeightmap_Parms, Scale), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_Location = { "Location", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(GaeaSubsystem_eventImportHeightmap_Parms, Location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams UHT_STATICS::NewProp_Weightmaps_Inner = { "Weightmaps", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams UHT_STATICS::NewProp_Weightmaps = { "Weightmaps", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, nullptr, nullptr, 1, STRUCT_OFFSET(GaeaSubsystem_eventImportHeightmap_Parms, Weightmaps), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams UHT_STATICS::NewProp_CachedPath = { "CachedPath", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, nullptr, nullptr, 1, STRUCT_OFFSET(GaeaSubsystem_eventImportHeightmap_Parms, CachedPath), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Heightmap,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_JSON,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Scale,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Location,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Weightmaps_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Weightmaps,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_CachedPath,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function ImportHeightmap Property Definitions ************************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UGaeaSubsystem, nullptr, "ImportHeightmap", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::GaeaSubsystem_eventImportHeightmap_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00C20401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::GaeaSubsystem_eventImportHeightmap_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGaeaSubsystem_ImportHeightmap(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UGaeaSubsystem::execImportHeightmap)
{
	P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_Heightmap);
	P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_JSON);
	P_GET_STRUCT_REF(FVector,Z_Param_Out_Scale);
	P_GET_STRUCT_REF(FVector,Z_Param_Out_Location);
	P_GET_TARRAY_REF(FString,Z_Param_Out_Weightmaps);
	P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_CachedPath);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ImportHeightmap(Z_Param_Out_Heightmap,Z_Param_Out_JSON,Z_Param_Out_Scale,Z_Param_Out_Location,Z_Param_Out_Weightmaps,Z_Param_Out_CachedPath);
	P_NATIVE_END;
}
// ********** End Class UGaeaSubsystem Function ImportHeightmap ************************************

// ********** Begin Class UGaeaSubsystem Function ReadStringFromFile *******************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UGaeaSubsystem_ReadStringFromFile_Statics
struct UHT_STATICS
{
	struct GaeaSubsystem_eventReadStringFromFile_Parms
	{
		FString Path;
		bool bOutSuccess;
		FString OutMessage;
		FString ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "ModuleRelativePath", "Public/GaeaSubsystem.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function ReadStringFromFile constinit property declarations ********************
	static const UECodeGen_Private::FStrPropertyParams NewProp_Path;
	static void NewProp_bOutSuccess_SetBit(void* Obj)
	{
		((GaeaSubsystem_eventReadStringFromFile_Parms*)Obj)->bOutSuccess = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bOutSuccess;
	static const UECodeGen_Private::FStrPropertyParams NewProp_OutMessage;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function ReadStringFromFile constinit property declarations **********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function ReadStringFromFile Property Definitions *******************************
const UECodeGen_Private::FStrPropertyParams UHT_STATICS::NewProp_Path = { "Path", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, nullptr, nullptr, 1, STRUCT_OFFSET(GaeaSubsystem_eventReadStringFromFile_Parms, Path), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bOutSuccess = { "bOutSuccess", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(GaeaSubsystem_eventReadStringFromFile_Parms), &UHT_STATICS::NewProp_bOutSuccess_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams UHT_STATICS::NewProp_OutMessage = { "OutMessage", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, nullptr, nullptr, 1, STRUCT_OFFSET(GaeaSubsystem_eventReadStringFromFile_Parms, OutMessage), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, nullptr, nullptr, 1, STRUCT_OFFSET(GaeaSubsystem_eventReadStringFromFile_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Path,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bOutSuccess,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_OutMessage,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function ReadStringFromFile Property Definitions *********************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UGaeaSubsystem, nullptr, "ReadStringFromFile", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::GaeaSubsystem_eventReadStringFromFile_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::GaeaSubsystem_eventReadStringFromFile_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGaeaSubsystem_ReadStringFromFile(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UGaeaSubsystem::execReadStringFromFile)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_Path);
	P_GET_UBOOL_REF(Z_Param_Out_bOutSuccess);
	P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_OutMessage);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FString*)Z_Param__Result=P_THIS->ReadStringFromFile(Z_Param_Path,Z_Param_Out_bOutSuccess,Z_Param_Out_OutMessage);
	P_NATIVE_END;
}
// ********** End Class UGaeaSubsystem Function ReadStringFromFile *********************************

// ********** Begin Class UGaeaSubsystem Function ReimportGaeaTerrain ******************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UGaeaSubsystem_ReimportGaeaTerrain_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "ModuleRelativePath", "Public/GaeaSubsystem.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function ReimportGaeaTerrain constinit property declarations *******************
// ********** End Function ReimportGaeaTerrain constinit property declarations *********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UGaeaSubsystem, nullptr, "ReimportGaeaTerrain", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
UFunction* Z_Construct_UFunction_UGaeaSubsystem_ReimportGaeaTerrain(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UGaeaSubsystem::execReimportGaeaTerrain)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ReimportGaeaTerrain();
	P_NATIVE_END;
}
// ********** End Class UGaeaSubsystem Function ReimportGaeaTerrain ********************************

// ********** Begin Class UGaeaSubsystem Function ReimportGaeaWPTerrain ****************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UGaeaSubsystem_ReimportGaeaWPTerrain_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "ModuleRelativePath", "Public/GaeaSubsystem.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function ReimportGaeaWPTerrain constinit property declarations *****************
// ********** End Function ReimportGaeaWPTerrain constinit property declarations *******************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UGaeaSubsystem, nullptr, "ReimportGaeaWPTerrain", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
UFunction* Z_Construct_UFunction_UGaeaSubsystem_ReimportGaeaWPTerrain(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UGaeaSubsystem::execReimportGaeaWPTerrain)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ReimportGaeaWPTerrain();
	P_NATIVE_END;
}
// ********** End Class UGaeaSubsystem Function ReimportGaeaWPTerrain ******************************

// ********** Begin Class UGaeaSubsystem Function SpawnGImporterWindow *****************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UGaeaSubsystem_SpawnGImporterWindow_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Comment", "// Spawn the Gaea Landscape Creator Window\n" },
		{ "ModuleRelativePath", "Public/GaeaSubsystem.h" },
		{ "ToolTip", "Spawn the Gaea Landscape Creator Window" },
	};
#endif // WITH_METADATA

// ********** Begin Function SpawnGImporterWindow constinit property declarations ******************
// ********** End Function SpawnGImporterWindow constinit property declarations ********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UGaeaSubsystem, nullptr, "SpawnGImporterWindow", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
UFunction* Z_Construct_UFunction_UGaeaSubsystem_SpawnGImporterWindow(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UGaeaSubsystem::execSpawnGImporterWindow)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SpawnGImporterWindow();
	P_NATIVE_END;
}
// ********** End Class UGaeaSubsystem Function SpawnGImporterWindow *******************************

// ********** Begin Class UGaeaSubsystem ***********************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UClass_UGaeaSubsystem_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "IncludePath", "GaeaSubsystem.h" },
		{ "IsBlueprintBase", "false" },
		{ "ModuleRelativePath", "Public/GaeaSubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ImporterSettings_MetaData[] = {
		{ "ModuleRelativePath", "Public/GaeaSubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultDialogPath_MetaData[] = {
		{ "Comment", "/*UPROPERTY()\n\x09UGMCSettings* PanelSettings = nullptr;*/" },
		{ "ModuleRelativePath", "Public/GaeaSubsystem.h" },
		{ "ToolTip", "UPROPERTY()\n       UGMCSettings* PanelSettings = nullptr;" },
	};
#endif // WITH_METADATA

// ********** Begin Class UGaeaSubsystem constinit property declarations ***************************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ImporterSettings;
	static const UECodeGen_Private::FStrPropertyParams NewProp_DefaultDialogPath;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UGaeaSubsystem constinit property declarations *****************************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("AddComponents"), .Pointer = &UGaeaSubsystem::execAddComponents },
		{ .NameUTF8 = UTF8TEXT("CreateLandscapeActor"), .Pointer = &UGaeaSubsystem::execCreateLandscapeActor },
		{ .NameUTF8 = UTF8TEXT("CreateStructFromJson"), .Pointer = &UGaeaSubsystem::execCreateStructFromJson },
		{ .NameUTF8 = UTF8TEXT("DeleteLandscapeComponents"), .Pointer = &UGaeaSubsystem::execDeleteLandscapeComponents },
		{ .NameUTF8 = UTF8TEXT("GetGaeaSubsystem"), .Pointer = &UGaeaSubsystem::execGetGaeaSubsystem },
		{ .NameUTF8 = UTF8TEXT("GetLandscape"), .Pointer = &UGaeaSubsystem::execGetLandscape },
		{ .NameUTF8 = UTF8TEXT("GetLandscapeLayerBlendNames"), .Pointer = &UGaeaSubsystem::execGetLandscapeLayerBlendNames },
		{ .NameUTF8 = UTF8TEXT("GetLandscapeLayerBlendNodes"), .Pointer = &UGaeaSubsystem::execGetLandscapeLayerBlendNodes },
		{ .NameUTF8 = UTF8TEXT("ImportHeightmap"), .Pointer = &UGaeaSubsystem::execImportHeightmap },
		{ .NameUTF8 = UTF8TEXT("ReadStringFromFile"), .Pointer = &UGaeaSubsystem::execReadStringFromFile },
		{ .NameUTF8 = UTF8TEXT("ReimportGaeaTerrain"), .Pointer = &UGaeaSubsystem::execReimportGaeaTerrain },
		{ .NameUTF8 = UTF8TEXT("ReimportGaeaWPTerrain"), .Pointer = &UGaeaSubsystem::execReimportGaeaWPTerrain },
		{ .NameUTF8 = UTF8TEXT("SpawnGImporterWindow"), .Pointer = &UGaeaSubsystem::execSpawnGImporterWindow },
	};
	static FTypeConstructFunc* DependentSingletons[];
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UGaeaSubsystem_AddComponents, "AddComponents" }, // aa8516b930805538ca8f2206580df3a330f37f6a
		{ &Z_Construct_UFunction_UGaeaSubsystem_CreateLandscapeActor, "CreateLandscapeActor" }, // 9a2e9b3be4d5cb5a3ec099a5ff705aa6e3a95876
		{ &Z_Construct_UFunction_UGaeaSubsystem_CreateStructFromJson, "CreateStructFromJson" }, // 8a7f11fd40b81b9870ca191c963108f6e39607ad
		{ &Z_Construct_UFunction_UGaeaSubsystem_DeleteLandscapeComponents, "DeleteLandscapeComponents" }, // f514c870ff6cdd6fa2f49208a0ccbb0fcc167815
		{ &Z_Construct_UFunction_UGaeaSubsystem_GetGaeaSubsystem, "GetGaeaSubsystem" }, // 31b75872a430403426969bac56ae25922aab59ab
		{ &Z_Construct_UFunction_UGaeaSubsystem_GetLandscape, "GetLandscape" }, // 03cddb4c7ea794548cf3dc3414c495a4764f0a6a
		{ &Z_Construct_UFunction_UGaeaSubsystem_GetLandscapeLayerBlendNames, "GetLandscapeLayerBlendNames" }, // 648f5139e1cf3d38ae3fecdbee9763aea0855f08
		{ &Z_Construct_UFunction_UGaeaSubsystem_GetLandscapeLayerBlendNodes, "GetLandscapeLayerBlendNodes" }, // bf0076debff55b911119fcfbb36adf23cea2f2aa
		{ &Z_Construct_UFunction_UGaeaSubsystem_ImportHeightmap, "ImportHeightmap" }, // f609d1361cbe8c69526bae0a18c6888c100c836e
		{ &Z_Construct_UFunction_UGaeaSubsystem_ReadStringFromFile, "ReadStringFromFile" }, // 493b00295d5639d81f2ae69ca6f80c4c5ae5946a
		{ &Z_Construct_UFunction_UGaeaSubsystem_ReimportGaeaTerrain, "ReimportGaeaTerrain" }, // 6f5813e93db3c5864eff0329b50949e7d14df8f6
		{ &Z_Construct_UFunction_UGaeaSubsystem_ReimportGaeaWPTerrain, "ReimportGaeaWPTerrain" }, // 5d3c58cb2cb423017eb2058774a5dcd1039fcc55
		{ &Z_Construct_UFunction_UGaeaSubsystem_SpawnGImporterWindow, "SpawnGImporterWindow" }, // 2f42ffa97785d1dab95805e9a68b2bc7d508353a
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGaeaSubsystem>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct UHT_STATICS

// ********** Begin Class UGaeaSubsystem Property Definitions **************************************
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_ImporterSettings = { "ImporterSettings", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(UGaeaSubsystem, ImporterSettings), Z_Construct_UClass_UImporterPanelSettings, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ImporterSettings_MetaData), NewProp_ImporterSettings_MetaData) };
const UECodeGen_Private::FStrPropertyParams UHT_STATICS::NewProp_DefaultDialogPath = { "DefaultDialogPath", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Str, nullptr, nullptr, 1, STRUCT_OFFSET(UGaeaSubsystem, DefaultDialogPath), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultDialogPath_MetaData), NewProp_DefaultDialogPath_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ImporterSettings,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_DefaultDialogPath,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Class UGaeaSubsystem Property Definitions ****************************************
FTypeConstructFunc* UHT_STATICS::DependentSingletons[] = {
	(FTypeConstructFunc*)Z_Construct_UClass_UEditorSubsystem,
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_GaeaUEToolsEditor,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams UHT_STATICS::ClassParams = {
	&Z_Construct_UClass_UGaeaSubsystem,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	UHT_STATICS::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(UHT_STATICS::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
static void UGaeaSubsystem_StaticRegisterNativesUGaeaSubsystem()
{
	UClass* Class = UGaeaSubsystem::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, 		MakeConstArrayView(UHT_STATICS::Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UGaeaSubsystem;
UClass* Z_Construct_UClass_UGaeaSubsystem(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Inner)
	{
		using TClass = UGaeaSubsystem;
		if (!Z_Registration_Info_UClass_UGaeaSubsystem.InnerSingleton)
		{
			GetPrivateStaticClassBody(
				TClass::StaticPackage(),
				TEXT("GaeaSubsystem"),
				Z_Registration_Info_UClass_UGaeaSubsystem.InnerSingleton,
				UGaeaSubsystem_StaticRegisterNativesUGaeaSubsystem,
				DataSizeOf<TClass>(),
				alignof(TClass),
				TClass::StaticClassFlags,
				TClass::StaticClassCastFlags(),
				TClass::StaticConfigName(),
				(UClass::ClassConstructorType)InternalConstructor<TClass>,
				(UClass::ClassVTableHelperCtorCallerType)InternalVTableHelperCtorCaller<TClass>,
				UOBJECT_CPPCLASS_STATICFUNCTIONS_FORCLASS(TClass),
				&TClass::Super::StaticClass,
				&TClass::WithinClass::StaticClass
			);
		}
		return Z_Registration_Info_UClass_UGaeaSubsystem.InnerSingleton;
	}
	if (!Z_Registration_Info_UClass_UGaeaSubsystem.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGaeaSubsystem.OuterSingleton, UHT_STATICS::ClassParams);
	}
	return Z_Registration_Info_UClass_UGaeaSubsystem.OuterSingleton;
}
#undef UHT_STATICS
UGaeaSubsystem::UGaeaSubsystem(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UGaeaSubsystem);
UGaeaSubsystem::~UGaeaSubsystem() {}
// ********** End Class UGaeaSubsystem *************************************************************

// ********** Begin Registration *******************************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_CompiledInDeferFile_FID_Users_Alp_Documents_llmft_Gaea2Unreal_Release_PluginBuild_HostProject_Plugins_GaeaUnrealTools_Source_GaeaUEToolsEditor_Public_GaeaSubsystem_h__Script_GaeaUEToolsEditor_Statics
struct UHT_STATICS
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ Z_Construct_UScriptStruct_FGaeaJson, Z_Construct_UScriptStruct_FGaeaJson_Statics::NewStructOps, TEXT("GaeaJson"),&Z_Registration_Info_UScriptStruct_FGaeaJson, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGaeaJson), 396240035U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UGaeaSubsystem, TEXT("UGaeaSubsystem"), &Z_Registration_Info_UClass_UGaeaSubsystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGaeaSubsystem), 1619311414U) },
	};
}; // UHT_STATICS 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Alp_Documents_llmft_Gaea2Unreal_Release_PluginBuild_HostProject_Plugins_GaeaUnrealTools_Source_GaeaUEToolsEditor_Public_GaeaSubsystem_h__Script_GaeaUEToolsEditor_c696b38f14fc893e188840bc119dbd3b0c516b29{
	TEXT("/Script/GaeaUEToolsEditor"),
	UHT_STATICS::ClassInfo, UE_ARRAY_COUNT(UHT_STATICS::ClassInfo),
	UHT_STATICS::ScriptStructInfo, UE_ARRAY_COUNT(UHT_STATICS::ScriptStructInfo),
	nullptr, 0,
	nullptr, 0,
};
#undef UHT_STATICS
// ********** End Registration *********************************************************************
#undef UHT_STRUCT_BASE

PRAGMA_ENABLE_DEPRECATION_WARNINGS
