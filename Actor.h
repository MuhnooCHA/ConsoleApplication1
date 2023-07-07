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
	virtual void Tick() = 0; // 자식의 Tick 이 있으면 그걸 써라는 뜻의 virtual
};

