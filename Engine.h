#pragma once
class Engine
{
public:
	Engine();
	virtual ~Engine();

	void Input();
	void Process();
	void Render();

};

