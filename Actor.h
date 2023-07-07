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
	virtual void Tick() = 0; // �ڽ��� Tick �� ������ �װ� ���� ���� virtual
};

