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

	void SpawnActor(AActor NewActor);

// private:	// 이렇게 하면 상속이 안됨 웬만해선 쓰지 않음
protected:	// 기계에서 작동하는 방식이라고 생각하면 됨, public 은 기계를 작동시키는 버튼 즉, 만든 사람은 버튼에만 접근할 수 있게 만들지
				// 방식으로까지 접근할 수 있게 만들지는 않음
	void Input();
	void Process();
	void Render();
	void Tick();

	bool IsRunning = true;
	vector<AActor> Actors;
	
};

