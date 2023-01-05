#pragma once
#include"State.h"
#include"ForestState.h"

class FieldState : public State
{
public:

	FieldState(Player* p);
	~FieldState();

	// Inherited via State
	virtual void Update() override;
	virtual State* ChangeState() override;
	
private:
};

