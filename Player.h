#pragma once
#include "Actor.h"

class FPlayer : public AActor
{
public:
	FPlayer();
	virtual ~FPlayer();

	virtual void Tick() override;

};

