#include "Player.h"
#include "Engine.h"

FPlayer::FPlayer()
{
	X = 1;
	Y = 1;
	Shape = 'P';
}

FPlayer::~FPlayer()
{
}

void FPlayer::Tick()
{
	switch (GEngine->GetKeyCode())
	{
	case 'w':
		Y--;
		break;
	case 's':
		Y++;
		break;
	case 'a':
		X--;
		break;
	case 'd':
		X++;
		break;
	}
}

