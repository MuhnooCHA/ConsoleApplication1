#include "Engine.h"
#include "Player.h"
#include "Monster.h"
#include <conio.h>

Engine* Engine::Instance = nullptr;

Engine::Engine()
{
	Instance = this;
}

Engine::~Engine()
{
	for (auto Current : Actors)
	{
		delete Current; // ����Ű�� �ִ� �������� �ּ� ���� ����
	}

	Actors.clear(); // ����Ŵ ���� ���� �迭 ���� ����
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

void Engine::SpawnActor(AActor* NewActor) // 
{
	Actors.push_back(NewActor);
}

void Engine::Input()
{
	KeyCode = _getch();
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
	system("cls");
	for (auto Current : Actors) // Actors �� �ϳ��� ������ Current �ȿ� �ִ´�
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

	for (auto Current : Actors) // Actors �� �ϳ��� ������ Current �ȿ� �ִ´�
	{
		FPlayer* Player = dynamic_cast<FPlayer*>(Current); // BP �� Cast to ���
		//if (Player != nullptr)
		//{
		//	Player->X++;
		//}
		//FMonster* Monster = dynamic_cast<FMonster*>(Current); // BP �� Cast to ���
		//if (Monster != nullptr)
		//{
		//	Monster->Y++;
		//}

		Current->Tick();
	}
}
