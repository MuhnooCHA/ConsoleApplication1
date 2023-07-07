#pragma once
class FFloor
{
public:
	FFloor();
	virtual ~FFloor();

	int X;
	int Y;
	char Shape;

	void Render();
};

