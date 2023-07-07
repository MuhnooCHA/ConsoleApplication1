#pragma once
class FMonster
{
public:
	FMonster();
	virtual ~FMonster();

	int X;
	int Y;

	char Shape;
	void Move();
	void Render();
};

