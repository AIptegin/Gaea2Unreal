// Fill out your copyright notice in the Description page of Project Settings.
#pragma once

#include "Framework/Commands/Commands.h"
#include "EditorStyleSet.h"


#include "Styling/AppStyle.h"

/**
 * 
 */
class GAEAUETOOLSEDITOR_API FGaeaCommands : public TCommands<FGaeaCommands>
{
public:
	
#if ENGINE_MAJOR_VERSION == 5 && ENGINE_MINOR_VERSION >= 8
	FGaeaCommands() : TCommands(TEXT("Gaea"), NSLOCTEXT("Contexts", "Gaea", "Gaea Commands"), NAME_None, FAppStyle::GetAppStyleSetName())
#else
	FGaeaCommands() : TCommands(TEXT("Gaea"), NSLOCTEXT("Contexts", "Gaea", "Gaea Commands"), NAME_None, FEditorStyle::GetStyleSetName())
#endif
	{
	}

	virtual void RegisterCommands() override;

	TSharedPtr<FUICommandInfo> OpenImporter;
};
