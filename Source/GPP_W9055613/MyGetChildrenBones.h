// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "Components/SkeletalMeshComponent.h"
#include "MyGetChildrenBones.generated.h"

/**
 * 
 */
UCLASS()
class GPP_W9055613_API UMyGetChildrenBones : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()


	public:
		TArray<FName> GetChildBonesRecursive(FReferenceSkeleton& RefSkeleton, FName ParentBoneName);
		UFUNCTION(BlueprintCallable, Category = "MyCategory")
			static TArray<FName> GetChildBones(USkeletalMeshComponent* SkeletalMesh, FName ParentBoneName);
	
};
