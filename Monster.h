#pragma once
#include "Actor.h"

class FMonster : public AActor
{
public:
	FMonster();
	virtual ~FMonster();

	virtual void Tick();
};

