#pragma once
#include"State.h"
#include"DungeonState.h"

class CaveState : public State
{
public:

	CaveState(Player* p);

	// Inherited via State
	virtual void Update() override;
	virtual State* ChangeState() override;

	// Temporary Dialogue fix - TODO improve dialogue system.
	void SpottingHoodedMan();
	void ApproachingHoodedMan();

private:

};

