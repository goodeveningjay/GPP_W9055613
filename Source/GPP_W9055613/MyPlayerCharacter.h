// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "MyPlayerCharacter.generated.h"

UCLASS()
class GPP_W9055613_API AMyPlayerCharacter : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character
	AMyPlayerCharacter();

	// TODO: Implement roll variables and functions using Character.h "jump" as a framework
	UPROPERTY(BlueprintReadOnly, Category = Character)
		uint32 bPressedDodgeRoll : 1;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	//Spring Arm Component to follow the camera behind the player
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
		class USpringArmComponent* SpringArmComp;

	//Player follow camera
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
		class UCameraComponent* CameraComp;

	//Called for forwards/backward input
	void MoveForward(float InputAxis);

	//Called for left/right strafe input
	void MoveRight(float InputAxis);

	//Sets Character Movement Speed to Sprint values.
	void BeginSprint();

	//Sets Character Movement Speed back to default values.
	void EndSprint();

	//Request for Character to Crouch
	void BeginCrouch();

	//Request for Character to EndCrouch
	void EndCrouch();


	// REMEMBER: Jump is bound to 'F' and Roll is bound to 'SpaceBar'
	// 
	//TO DO: Request for Character to Roll
	//void BeginRoll();
	//
	//TO DO: Request for Character to reset after completing Roll
	//void EndRoll();

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

};
