#include "GameLoopManager.h"


GameLoopManager::GameLoopManager()
{
	player = new Player(player, 50, 20);

	// Initialising first location state. 
	State* firstState = new FieldState(player);
	// Passing to StateManager.
	stateManager = new StateManager(firstState);
}

GameLoopManager::~GameLoopManager()
{

}

void GameLoopManager::GameLoop()
{
	stateManager->Update();
	if (!player->IsAlive())
	{
		isGameRunning = false;
	}
	
}