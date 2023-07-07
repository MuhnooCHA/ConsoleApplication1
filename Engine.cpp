#include "Engine.h"

Engine::Engine()
{
}

Engine::~Engine()
{
	for (auto Current : Actors)
	{
		delete Current; // 가리키고 있는 포인터의 주소 값을 지움
	}

	Actors.clear(); // 가리킴 당한 실제 값을 지움
}

void Engine::Run()
{
	//BeginPlay();
	while (IsRunning)
	{
		Input();
		Tick();
		Render();
	}
	//EndPlay();

}

void Engine::SpawnActor(AActor* NewActor)
{
	Actors.push_back(NewActor);
}

void Engine::Input()
{
}

void Engine::Process()
{
}

void Engine::Render()
{
	/*for (int i = 0; i < Actors.size(); i++)
	{
		Actors[i].Render();
	}*/

	for (auto Current : Actors) // Actors 를 하나씩 꺼내서 Current 안에 넣는다
	{
		Current->Render();
	}
}

void Engine::Tick()
{
	/*for (int i = 0; i < Actors.size(); i++)
	{
		Actors[i].Tick();
	}*/

	for (auto Current : Actors) // Actors 를 하나씩 꺼내서 Current 안에 넣는다
	{
		Current->Tick();
	}
}
