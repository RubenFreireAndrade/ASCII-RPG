#pragma once
#include<string>
#include<iostream>

#include"Maps.h"
#include"Enemy.h"
#include"PlayerSelector.h"
#include"Inventory.h"
#include"Player.h"
#include"StateManager.h"
#include"FieldState.h"

class GameLoopManager
{

public:

	GameLoopManager();
	~GameLoopManager();

	void GameLoop();

	bool isGameRunning = true;

private:

	PlayerSelector playerSelector;
	Enemy* enemy;
	Maps* maps;
	Player* player;
	StateManager* stateManager;
};

