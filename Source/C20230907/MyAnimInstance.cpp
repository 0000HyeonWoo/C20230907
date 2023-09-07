// Fill out your copyright notice in the Description page of Project Settings.


#include "MyAnimInstance.h"
#include "GameFramework/Character.h"
#include "GameFramework/CharacterMovementComponent.h"

void UMyAnimInstance::NativeUpdateAnimation(float DeltaSeconds)
{
	Super::NativeUpdateAnimation(DeltaSeconds);

	APawn* MyPawn = TryGetPawnOwner();
	ACharacter* MyCharacter = Cast<ACharacter>(MyPawn);

	if (MyCharacter)
	{
		Speed = MyCharacter->GetCharacterMovement()->Velocity.SizeSquared2D();
	}
}
