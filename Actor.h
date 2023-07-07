#pragma once

class AActor
{
public:
	AActor();
	virtual ~AActor();

	int X;
	int Y;
	char Shape;

	void Input();
	void Process();
	void Render();
	void Tick();
};

