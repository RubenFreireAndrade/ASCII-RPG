#pragma once
#include"State.h"

class StateManager
{
public:

	StateManager(State* initialState);

	void Update();

private:

	State* currentState;
};

