// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "Mover.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class CRYPTRAIDER_API UMover : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UMover();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

	void SetShouldMove(bool ShouldMove);

private:
	// 이동 거리
	UPROPERTY(EditAnywhere)
	FVector MoverOffset;

	UPROPERTY(EditAnywhere)
	float MoveTime = 4;

	bool ShouldMove = false; // 트리거 작동 시

	FVector OriginalLocation; // 처음 위치

};
