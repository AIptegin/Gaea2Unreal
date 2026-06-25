// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ImporterPanelSettings.h"
#include "UObject/SoftObjectPath.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_UOBJECT");
void EmptyLinkFunctionForGeneratedCodeImporterPanelSettings() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FDirectoryPath(ETypeConstructPhase);
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FIntPoint(ETypeConstructPhase);
COREUOBJECT_API UClass* Z_Construct_UClass_UObject(ETypeConstructPhase);
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator(ETypeConstructPhase);
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector(ETypeConstructPhase);
ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface(ETypeConstructPhase);
// ********** End Cross Module References **********************************************************

// ********** Begin Same Module References *********************************************************
UPackage* Z_Construct_UPackage__Script_GaeaUEToolsEditor(ETypeConstructPhase);
GAEAUETOOLSEDITOR_API UClass* Z_Construct_UClass_UImporterPanelSettings(ETypeConstructPhase);
GAEAUETOOLSEDITOR_API UClass* Z_Construct_UClass_UImporterPanelSettings(ETypeConstructPhase);
// ********** End Same Module References ***********************************************************
#define UHT_STRUCT_BASE(INIT) UE::CodeGen::ConstInit::TCompiledInObjectPtr<const FStructBaseChain>(UE::Private::AsStructBaseChain(INIT))

// ********** Begin Class UImporterPanelSettings Function IsLandscapeMaterialLayerNamesNotEmpty ****
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UImporterPanelSettings_IsLandscapeMaterialLayerNamesNotEmpty_Statics
struct UHT_STATICS
{
	struct ImporterPanelSettings_eventIsLandscapeMaterialLayerNamesNotEmpty_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "ModuleRelativePath", "Public/ImporterPanelSettings.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function IsLandscapeMaterialLayerNamesNotEmpty constinit property declarations *
	static void NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ImporterPanelSettings_eventIsLandscapeMaterialLayerNamesNotEmpty_Parms*)Obj)->ReturnValue = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function IsLandscapeMaterialLayerNamesNotEmpty constinit property declarations ***
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function IsLandscapeMaterialLayerNamesNotEmpty Property Definitions ************
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(ImporterPanelSettings_eventIsLandscapeMaterialLayerNamesNotEmpty_Parms), &UHT_STATICS::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function IsLandscapeMaterialLayerNamesNotEmpty Property Definitions **************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UImporterPanelSettings, nullptr, "IsLandscapeMaterialLayerNamesNotEmpty", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::ImporterPanelSettings_eventIsLandscapeMaterialLayerNamesNotEmpty_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x40020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::ImporterPanelSettings_eventIsLandscapeMaterialLayerNamesNotEmpty_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UImporterPanelSettings_IsLandscapeMaterialLayerNamesNotEmpty(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UImporterPanelSettings::execIsLandscapeMaterialLayerNamesNotEmpty)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsLandscapeMaterialLayerNamesNotEmpty();
	P_NATIVE_END;
}
// ********** End Class UImporterPanelSettings Function IsLandscapeMaterialLayerNamesNotEmpty ******

// ********** Begin Class UImporterPanelSettings ***************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UClass_UImporterPanelSettings_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "ImporterPanelSettings.h" },
		{ "IsBlueprintBase", "false" },
		{ "ModuleRelativePath", "Public/ImporterPanelSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HeightMapFileName_MetaData[] = {
		{ "Category", "Filepaths" },
		{ "DisplayName", "Heightmap Filename" },
		{ "ModuleRelativePath", "Public/ImporterPanelSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_jsonFileName_MetaData[] = {
		{ "Category", "Filepaths" },
		{ "DisplayName", "JSON Filename" },
		{ "ModuleRelativePath", "Public/ImporterPanelSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WeightmapFileNames_MetaData[] = {
		{ "Category", "Filepaths" },
		{ "Comment", "//Reorder these to match the desired landscape layer.\n" },
		{ "DisplayName", "Weightmap Filenames" },
		{ "ModuleRelativePath", "Public/ImporterPanelSettings.h" },
		{ "ToolTip", "Reorder these to match the desired landscape layer." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WeightmapFilePaths_MetaData[] = {
		{ "ModuleRelativePath", "Public/ImporterPanelSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StoredPath_MetaData[] = {
		{ "ModuleRelativePath", "Public/ImporterPanelSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EnableEditLayers_MetaData[] = {
		{ "Category", "Landscape Actor Settings" },
		{ "ModuleRelativePath", "Public/ImporterPanelSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FlipYAxis_MetaData[] = {
		{ "Category", "Landscape Actor Settings" },
		{ "DisplayName", "Flip Y Axis" },
		{ "ModuleRelativePath", "Public/ImporterPanelSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsWorldPartition_MetaData[] = {
		{ "Category", "Landscape Actor Settings|World Partition" },
		{ "DisplayName", "Enable World Partition" },
		{ "ModuleRelativePath", "Public/ImporterPanelSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WorldPartitionGridSize_MetaData[] = {
		{ "Category", "Landscape Actor Settings|World Partition" },
		{ "ClampMax", "16" },
		{ "ClampMin", "1" },
		{ "Comment", "// Used only if the level has world partition support.\n" },
		{ "EditCondition", "bIsWorldPartition" },
		{ "ModuleRelativePath", "Public/ImporterPanelSettings.h" },
		{ "ToolTip", "Used only if the level has world partition support." },
		{ "UIMax", "16" },
		{ "UIMin", "1" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LandscapeMaterial_MetaData[] = {
		{ "Category", "Rendering" },
		{ "Comment", "/*UPROPERTY(EditAnywhere, Category=\"Landscape Actor Settings|World Partition\", meta = (EditCondition = \"bIsWorldPartition\", UIMin=\"4\", UIMax=\"64\", ClampMin=\"4\", ClampMax=\"64\"))\n\x09int32 WorldPartitionRegionSize = 16;*///Must be set to automatically setup layer weightmaps.\n" },
		{ "DisplayName", "Landscape Material" },
		{ "ModuleRelativePath", "Public/ImporterPanelSettings.h" },
		{ "ToolTip", "UPROPERTY(EditAnywhere, Category=\"Landscape Actor Settings|World Partition\", meta = (EditCondition = \"bIsWorldPartition\", UIMin=\"4\", UIMax=\"64\", ClampMin=\"4\", ClampMax=\"64\"))\n       int32 WorldPartitionRegionSize = 16;//Must be set to automatically setup layer weightmaps." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LandscapeMaterialLayerNames_MetaData[] = {
		{ "Category", "Rendering" },
		{ "DisplayName", "Landscape Layer Names" },
		{ "EditCondition", "IsLandscapeMaterialLayerNamesNotEmpty()" },
		{ "ModuleRelativePath", "Public/ImporterPanelSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LayerInfoFolder_MetaData[] = {
		{ "Category", "Rendering" },
		{ "Comment", "//Where to create layer info objects.\n" },
		{ "ContentDir", "" },
		{ "DisplayName", "Layer Info Folder" },
		{ "ModuleRelativePath", "Public/ImporterPanelSettings.h" },
		{ "ToolTip", "Where to create layer info objects." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Location_MetaData[] = {
		{ "Category", "Transform" },
		{ "ModuleRelativePath", "Public/ImporterPanelSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Rotation_MetaData[] = {
		{ "Category", "Transform" },
		{ "ModuleRelativePath", "Public/ImporterPanelSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Scale_MetaData[] = {
		{ "Category", "Transform" },
		{ "ModuleRelativePath", "Public/ImporterPanelSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Components_MetaData[] = {
		{ "ModuleRelativePath", "Public/ImporterPanelSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Resolution_MetaData[] = {
		{ "ModuleRelativePath", "Public/ImporterPanelSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TotalComponents_MetaData[] = {
		{ "ModuleRelativePath", "Public/ImporterPanelSettings.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UImporterPanelSettings constinit property declarations *******************
	static const UECodeGen_Private::FStrPropertyParams NewProp_HeightMapFileName;
	static const UECodeGen_Private::FStrPropertyParams NewProp_jsonFileName;
	static const UECodeGen_Private::FStrPropertyParams NewProp_WeightmapFileNames_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_WeightmapFileNames;
	static const UECodeGen_Private::FStrPropertyParams NewProp_WeightmapFilePaths_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_WeightmapFilePaths;
	static const UECodeGen_Private::FStrPropertyParams NewProp_StoredPath;
	static void NewProp_EnableEditLayers_SetBit(void* Obj)
	{
		((UImporterPanelSettings*)Obj)->EnableEditLayers = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_EnableEditLayers;
	static void NewProp_FlipYAxis_SetBit(void* Obj)
	{
		((UImporterPanelSettings*)Obj)->FlipYAxis = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_FlipYAxis;
	static void NewProp_bIsWorldPartition_SetBit(void* Obj)
	{
		((UImporterPanelSettings*)Obj)->bIsWorldPartition = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsWorldPartition;
	static const UECodeGen_Private::FIntPropertyParams NewProp_WorldPartitionGridSize;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_LandscapeMaterial;
	static const UECodeGen_Private::FNamePropertyParams NewProp_LandscapeMaterialLayerNames_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_LandscapeMaterialLayerNames;
	static const UECodeGen_Private::FStructPropertyParams NewProp_LayerInfoFolder;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Location;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Rotation;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Scale;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Components;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Resolution;
	static const UECodeGen_Private::FIntPropertyParams NewProp_TotalComponents;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UImporterPanelSettings constinit property declarations *********************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("IsLandscapeMaterialLayerNamesNotEmpty"), .Pointer = &UImporterPanelSettings::execIsLandscapeMaterialLayerNamesNotEmpty },
	};
	static FTypeConstructFunc* DependentSingletons[];
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UImporterPanelSettings_IsLandscapeMaterialLayerNamesNotEmpty, "IsLandscapeMaterialLayerNamesNotEmpty" }, // e8b7577ca5fdbf7f19703b8b6d04e29a4908edab
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UImporterPanelSettings>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct UHT_STATICS

// ********** Begin Class UImporterPanelSettings Property Definitions ******************************
const UECodeGen_Private::FStrPropertyParams UHT_STATICS::NewProp_HeightMapFileName = { "HeightMapFileName", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Str, nullptr, nullptr, 1, STRUCT_OFFSET(UImporterPanelSettings, HeightMapFileName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HeightMapFileName_MetaData), NewProp_HeightMapFileName_MetaData) };
const UECodeGen_Private::FStrPropertyParams UHT_STATICS::NewProp_jsonFileName = { "jsonFileName", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Str, nullptr, nullptr, 1, STRUCT_OFFSET(UImporterPanelSettings, jsonFileName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_jsonFileName_MetaData), NewProp_jsonFileName_MetaData) };
const UECodeGen_Private::FStrPropertyParams UHT_STATICS::NewProp_WeightmapFileNames_Inner = { "WeightmapFileNames", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams UHT_STATICS::NewProp_WeightmapFileNames = { "WeightmapFileNames", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, nullptr, nullptr, 1, STRUCT_OFFSET(UImporterPanelSettings, WeightmapFileNames), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WeightmapFileNames_MetaData), NewProp_WeightmapFileNames_MetaData) };
const UECodeGen_Private::FStrPropertyParams UHT_STATICS::NewProp_WeightmapFilePaths_Inner = { "WeightmapFilePaths", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams UHT_STATICS::NewProp_WeightmapFilePaths = { "WeightmapFilePaths", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, nullptr, nullptr, 1, STRUCT_OFFSET(UImporterPanelSettings, WeightmapFilePaths), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WeightmapFilePaths_MetaData), NewProp_WeightmapFilePaths_MetaData) };
const UECodeGen_Private::FStrPropertyParams UHT_STATICS::NewProp_StoredPath = { "StoredPath", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, nullptr, nullptr, 1, STRUCT_OFFSET(UImporterPanelSettings, StoredPath), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StoredPath_MetaData), NewProp_StoredPath_MetaData) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_EnableEditLayers = { "EnableEditLayers", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(UImporterPanelSettings), &UHT_STATICS::NewProp_EnableEditLayers_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EnableEditLayers_MetaData), NewProp_EnableEditLayers_MetaData) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_FlipYAxis = { "FlipYAxis", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(UImporterPanelSettings), &UHT_STATICS::NewProp_FlipYAxis_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FlipYAxis_MetaData), NewProp_FlipYAxis_MetaData) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bIsWorldPartition = { "bIsWorldPartition", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(UImporterPanelSettings), &UHT_STATICS::NewProp_bIsWorldPartition_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsWorldPartition_MetaData), NewProp_bIsWorldPartition_MetaData) };
const UECodeGen_Private::FIntPropertyParams UHT_STATICS::NewProp_WorldPartitionGridSize = { "WorldPartitionGridSize", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, nullptr, nullptr, 1, STRUCT_OFFSET(UImporterPanelSettings, WorldPartitionGridSize), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WorldPartitionGridSize_MetaData), NewProp_WorldPartitionGridSize_MetaData) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_LandscapeMaterial = { "LandscapeMaterial", nullptr, (EPropertyFlags)0x0114000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, nullptr, nullptr, 1, STRUCT_OFFSET(UImporterPanelSettings, LandscapeMaterial), Z_Construct_UClass_UMaterialInterface, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LandscapeMaterial_MetaData), NewProp_LandscapeMaterial_MetaData) };
const UECodeGen_Private::FNamePropertyParams UHT_STATICS::NewProp_LandscapeMaterialLayerNames_Inner = { "LandscapeMaterialLayerNames", nullptr, (EPropertyFlags)0x0000000000020000, UECodeGen_Private::EPropertyGenFlags::Name, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams UHT_STATICS::NewProp_LandscapeMaterialLayerNames = { "LandscapeMaterialLayerNames", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Array, nullptr, nullptr, 1, STRUCT_OFFSET(UImporterPanelSettings, LandscapeMaterialLayerNames), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LandscapeMaterialLayerNames_MetaData), NewProp_LandscapeMaterialLayerNames_MetaData) };
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_LayerInfoFolder = { "LayerInfoFolder", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(UImporterPanelSettings, LayerInfoFolder), Z_Construct_UScriptStruct_FDirectoryPath, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LayerInfoFolder_MetaData), NewProp_LayerInfoFolder_MetaData) }; // a9ea974572ee54d1b93cb49a6434fdbad40b6bf5
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_Location = { "Location", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(UImporterPanelSettings, Location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Location_MetaData), NewProp_Location_MetaData) };
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_Rotation = { "Rotation", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(UImporterPanelSettings, Rotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Rotation_MetaData), NewProp_Rotation_MetaData) };
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_Scale = { "Scale", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(UImporterPanelSettings, Scale), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Scale_MetaData), NewProp_Scale_MetaData) };
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_Components = { "Components", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(UImporterPanelSettings, Components), Z_Construct_UScriptStruct_FIntPoint, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Components_MetaData), NewProp_Components_MetaData) };
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_Resolution = { "Resolution", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(UImporterPanelSettings, Resolution), Z_Construct_UScriptStruct_FIntPoint, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Resolution_MetaData), NewProp_Resolution_MetaData) };
const UECodeGen_Private::FIntPropertyParams UHT_STATICS::NewProp_TotalComponents = { "TotalComponents", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, nullptr, nullptr, 1, STRUCT_OFFSET(UImporterPanelSettings, TotalComponents), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TotalComponents_MetaData), NewProp_TotalComponents_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_HeightMapFileName,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_jsonFileName,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_WeightmapFileNames_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_WeightmapFileNames,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_WeightmapFilePaths_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_WeightmapFilePaths,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_StoredPath,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_EnableEditLayers,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_FlipYAxis,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bIsWorldPartition,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_WorldPartitionGridSize,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_LandscapeMaterial,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_LandscapeMaterialLayerNames_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_LandscapeMaterialLayerNames,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_LayerInfoFolder,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Location,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Rotation,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Scale,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Components,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Resolution,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_TotalComponents,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Class UImporterPanelSettings Property Definitions ********************************
FTypeConstructFunc* UHT_STATICS::DependentSingletons[] = {
	(FTypeConstructFunc*)Z_Construct_UClass_UObject,
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_GaeaUEToolsEditor,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams UHT_STATICS::ClassParams = {
	&Z_Construct_UClass_UImporterPanelSettings,
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
static void UImporterPanelSettings_StaticRegisterNativesUImporterPanelSettings()
{
	UClass* Class = UImporterPanelSettings::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, 		MakeConstArrayView(UHT_STATICS::Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UImporterPanelSettings;
UClass* Z_Construct_UClass_UImporterPanelSettings(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Inner)
	{
		using TClass = UImporterPanelSettings;
		if (!Z_Registration_Info_UClass_UImporterPanelSettings.InnerSingleton)
		{
			GetPrivateStaticClassBody(
				TClass::StaticPackage(),
				TEXT("ImporterPanelSettings"),
				Z_Registration_Info_UClass_UImporterPanelSettings.InnerSingleton,
				UImporterPanelSettings_StaticRegisterNativesUImporterPanelSettings,
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
		return Z_Registration_Info_UClass_UImporterPanelSettings.InnerSingleton;
	}
	if (!Z_Registration_Info_UClass_UImporterPanelSettings.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UImporterPanelSettings.OuterSingleton, UHT_STATICS::ClassParams);
	}
	return Z_Registration_Info_UClass_UImporterPanelSettings.OuterSingleton;
}
#undef UHT_STATICS
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UImporterPanelSettings);
// ********** End Class UImporterPanelSettings *****************************************************

// ********** Begin Registration *******************************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_CompiledInDeferFile_FID_Users_Alp_Documents_llmft_Gaea2Unreal_Release_PluginBuild_HostProject_Plugins_GaeaUnrealTools_Source_GaeaUEToolsEditor_Public_ImporterPanelSettings_h__Script_GaeaUEToolsEditor_Statics
struct UHT_STATICS
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UImporterPanelSettings, TEXT("UImporterPanelSettings"), &Z_Registration_Info_UClass_UImporterPanelSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UImporterPanelSettings), 2937893824U) },
	};
}; // UHT_STATICS 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Alp_Documents_llmft_Gaea2Unreal_Release_PluginBuild_HostProject_Plugins_GaeaUnrealTools_Source_GaeaUEToolsEditor_Public_ImporterPanelSettings_h__Script_GaeaUEToolsEditor_81d2db27886fe35bbe69fbd22e9401321d2ebf2e{
	TEXT("/Script/GaeaUEToolsEditor"),
	UHT_STATICS::ClassInfo, UE_ARRAY_COUNT(UHT_STATICS::ClassInfo),
	nullptr, 0,
	nullptr, 0,
	nullptr, 0,
};
#undef UHT_STATICS
// ********** End Registration *********************************************************************
#undef UHT_STRUCT_BASE

PRAGMA_ENABLE_DEPRECATION_WARNINGS
