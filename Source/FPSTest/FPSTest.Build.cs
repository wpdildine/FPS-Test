// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class FPSTest : ModuleRules
{
	public FPSTest(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "HeadMountedDisplay", "AIModule", "GameplayTasks" });
	}
}
