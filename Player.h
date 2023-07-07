#pragma once
class FPlayer
{
public:
	FPlayer();
	virtual ~FPlayer();

	int X;
	int Y;

	char Shape;
	void Move();
	void Render();
};

