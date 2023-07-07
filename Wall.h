#pragma once
class FWall
{
public:
	FWall();
	virtual ~FWall();

	int X;
	int Y;
	char Shape;

	void Render();
};

