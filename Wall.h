#pragma once
#include "Actor.h"

class FWall : public AActor
{
public:
	FWall();
	virtual ~FWall();

	virtual void Tick(); 
};

