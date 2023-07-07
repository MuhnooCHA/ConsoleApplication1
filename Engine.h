#pragma once
#include <vector>
#include "Actor.h"

using namespace std;

class Engine
{
public:
	Engine();
	virtual ~Engine();

	void Input();
	void Process();
	void Render();

	vector<AActor> Actors;
};

