#pragma once
#include"State.h"

class DungeonState : public State
{
public:

	DungeonState(Player* p);

	// Inherited via State
	virtual void Update() override;
	virtual State* ChangeState() override;

private:



};

