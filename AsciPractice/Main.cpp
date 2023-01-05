#include <iostream>
#include <string>

#include"GameLoopManager.h"


int main()
{
	GameLoopManager gameLoopManager;
	while (gameLoopManager.isGameRunning)
	{
		gameLoopManager.GameLoop();
	}
	return 0;
}