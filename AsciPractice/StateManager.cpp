#include "StateManager.h"

StateManager::StateManager(State* initialState)
{
	currentState = initialState;
}

void StateManager::Update()
{
	// Updating current active state.
	currentState->Update();

	// Checking if any global command like 'inventory' is called.
	State* nextState = currentState->GlobalChangeState();
	// if global command is not called. Then checking if condition to change state.
	if (nextState == nullptr)
	{
		// We check if nextState condition is met. Then change function returns State*
		nextState = currentState->ChangeState();
	}
	// if nextState is not nullptr, then we are making currentState = nextState(Goes to next state).
	if (nextState != nullptr)
	{
		// Before changing to next state. saving currentState data to return back to previous.
		nextState->SetPreviousState(currentState);
		currentState = nextState;
	}
}
