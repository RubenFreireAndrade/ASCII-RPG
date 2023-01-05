#pragma once
#include"Maps.h"
#include"Player.h"
#include"BattleSystem.h"
#include"Enemy.h"

#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<iostream>

class State
{

public:

	virtual void Update() = 0;
	virtual State* ChangeState() = 0;

	State* GlobalChangeState();
	Enemy* CreateEnemy();

	void SetPreviousState(State* state);
	void PauseGameplay();
	void ClearScreen();

	void FightChoices();

protected:

	std::string playerChoice;

	BattleSystem* battleSystem;
	State* previousState;
	Player* player;
	Enemy* enemy;
	Maps* map;
};

