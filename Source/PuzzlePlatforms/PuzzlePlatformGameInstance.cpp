// Fill out your copyright notice in the Description page of Project Settings.


#include "PuzzlePlatformGameInstance.h"

UPuzzlePlatformGameInstance::UPuzzlePlatformGameInstance(const FObjectInitializer& ObjectInitializer)
{
	UE_LOG(LogTemp, Warning, TEXT("Called Constructor"));
}

void UPuzzlePlatformGameInstance::Init()
{
	UE_LOG(LogTemp, Warning, TEXT("Called Init()"));
}

void UPuzzlePlatformGameInstance::Host()
{
	UEngine* Eng = GetEngine();
	if (!ensure(Eng != nullptr)) return;

	Eng->AddOnScreenDebugMessage(0, 4.0f, FColor::Green, TEXT("Hosting..."));
}

void UPuzzlePlatformGameInstance::Join(const FString& Address)
{
	UEngine* Eng = GetEngine();
	if (!ensure(Eng != nullptr)) return;

	Eng->AddOnScreenDebugMessage(0, 4.0f, FColor::Green, FString::Printf(TEXT("Joining: %s"), *Address));
}
