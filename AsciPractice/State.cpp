#include"State.h"
#include"InventoryState.h"

State* State::GlobalChangeState()
{
	// Any state will change to inventory state if playerChoice is inventory. 
	if (playerChoice == "inv")
	{
		return new InventoryState(player);
	}
	return nullptr;
}

Enemy* State::CreateEnemy()
{
	srand(time(0));
	int generateEnemy = rand() % 4 + 1;

	switch (generateEnemy)
	{
	case 1:

		return new Enemy("Pikachu", 30, 20);

	case 2:

		return new Enemy("Wolf", 50, 10);

	case 3:

		return new Enemy("Goblin", 30, 20);

	case 4:

		return new Enemy("Slime", 30, 20);

	default:

		return new Enemy("Broken Enemy", 1, 1);
	}
}

void State::PauseGameplay()
{
	system("pause");
}

void State::ClearScreen()
{
	system("CLS");
}

void State::FightChoices()
{
	std::cout << "Fight?" << std::endl;
	std::cout << "===========================================" << std::endl;
	std::cout << "1. Fight" << std::endl;
	std::cout << "2. Run" << std::endl;
	std::cin >> playerChoice;
}

void State::SetPreviousState(State* state)
{
	previousState = state;
}
