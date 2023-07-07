#include "Engine.h"

Engine::Engine()
{
}

Engine::~Engine()
{
	for (auto Current : Actors)
	{
		delete Current;
	}

	Actors.clear();
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
