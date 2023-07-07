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

// private:	// �̷��� �ϸ� ����� �ȵ� �����ؼ� ���� ����
protected:	// ��迡�� �۵��ϴ� ����̶�� �����ϸ� ��, public �� ��踦 �۵���Ű�� ��ư ��, ���� ����� ��ư���� ������ �� �ְ� ������
				// ������α��� ������ �� �ְ� �������� ����
	void Input();
	void Process();
	void Render();

	vector<AActor> Actors;
};

