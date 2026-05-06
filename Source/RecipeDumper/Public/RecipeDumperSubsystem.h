

#pragma once

#include "CoreMinimal.h"
#include "Subsystem/ModSubsystem.h"
#include "RecipeDumperSubsystem.generated.h"

/**
 * 
 */
UCLASS(Abstract, Blueprintable)
class RECIPEDUMPER_API ARecipeDumperSubsystem : public AModSubsystem
{
	GENERATED_BODY()

    UFUNCTION(BlueprintCallable, Category = "Save")
    static bool FileSaveStringSub(FString String, FString FileNameWithPath)
    {
        return FFileHelper::SaveStringToFile(String, *(FileNameWithPath));
    }
};
