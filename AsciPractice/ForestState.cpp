#include "ForestState.h"

ForestState::ForestState(Player* p)
{
	player = p;
	map = new Maps("mapForest");
}

void ForestState::Update()
{
	system("CLS");
	map->Draw();
	std::cout << "You are in a Dark Forest." << std::endl;
	std::cout << "===========================================" << std::endl;

	std::cout << "Looks ahead and sees a weapon. Do you take it?" << std::endl;
	std::cout << "===========================================" << std::endl;
	std::cout << "1. Yes" << std::endl;
	std::cout << "2. No" << std::endl;
	std::cin >> playerChoice;

	if (playerChoice == "1")
	{
		player->Pickup("Sword");
	}
	else
	{
		return;
	}
	std::cout << "You spot an entrance. Do you take it?" << std::endl;
	std::cout << "===========================================" << std::endl;
	std::cout << "1. Yes" << std::endl;
	std::cout << "2. No" << std::endl;
	std::cin >> playerChoice;
}

State* ForestState::ChangeState()
{
	if (playerChoice == "1")
	{
		return new CaveState(player);
	}
	else
	{
		return nullptr;
	}
}
