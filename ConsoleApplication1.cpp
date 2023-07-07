#include <iostream>
#include "Engine.h"
#include "Player.h"
#include "Monster.h"

using namespace std;

int main()
{
    // 언제 지워질지 정할 수 있게 포인터 지정
    Engine* MyEngine = new Engine;

    MyEngine->SpawnActor(new FPlayer); // 바로 포인터로 쏴버림
    MyEngine->SpawnActor(new FMonster);

    MyEngine->Run();

    delete MyEngine;
    return 0;
}