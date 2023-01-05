#pragma once
#include<iostream>
#include"State.h"
#include"CaveState.h"

class ForestState : public State
{
public:

	ForestState(Player* p);

	// Inherited via State
	virtual void Update() override;
	virtual State* ChangeState() override;

private:
	
};

