#pragma once
#include <vector>
#include "Actor.h"

using namespace std;

class Engine
{
public:
	Engine();
	virtual ~Engine();

	void Run();

// private: // 이렇게 하면 상속이 안됨
protected:
	void Input();
	void Process();
	void Render();

	vector<AActor> Actors;
};

