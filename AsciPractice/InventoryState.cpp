#include "InventoryState.h"

InventoryState::InventoryState(Player* p)
{
	player = p;
}

void InventoryState::Update()
{
	ClearScreen();
	std::cout << "Player inventory contains:" << std::endl;
	std::cout << "===========================================" << std::endl;
	player->ShowPlayerInventory();
	std::cout << "Would you like to close inventory?" << std::endl;
	std::cout << "===========================================" << std::endl;
	std::cout << "1. Yes" << std::endl;
	std::cout << "2. No" << std::endl;
	std::cin >> playerChoice;
}

State* InventoryState::ChangeState()
{
	if (playerChoice == "1")
	{
		return previousState;
	}
	else
	{
		return nullptr;
	}
}
