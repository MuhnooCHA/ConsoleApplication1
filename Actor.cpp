#include "Actor.h"
#include <Windows.h>
#include <iostream>

using namespace std;

AActor::AActor()
{
}

AActor::~AActor()
{
}

void AActor::Input()
{
}

void AActor::Process()
{
}

void AActor::Render()
{
    COORD Cur;    // ������ ������Ϸ� ���ϴ� ��ġ�� ���
    Cur.X = X;
    Cur.Y = Y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), Cur);

    cout << Shape;
}

void AActor::Tick()
{
}
