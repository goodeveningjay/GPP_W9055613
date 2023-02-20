// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "MyPlayerCharacter.generated.h"

UCLASS()
class GPP_W9055613_API AMyPlayerCharacter : public ACharacter
{
	GENERATED_BODY()

protected:
	AMyPlayerCharacter();
	
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	//Spring Arm Component to follow the camera behind the player
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
		class USpringArmComponent* SpringArmComp;

	//Player follow camera
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
		class UCameraComponent* CameraComp;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

};
