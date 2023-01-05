#pragma once
#include"State.h"
class InventoryState : public State
{
public:

	InventoryState(Player* p);
	// Inherited via State
	virtual void Update() override;
	virtual State* ChangeState() override;

private:

};

