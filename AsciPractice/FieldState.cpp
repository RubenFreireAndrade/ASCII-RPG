#include "FieldState.h"


FieldState::FieldState(Player* p)
{
	map = new Maps("mapField");
	player = p;
}

FieldState::~FieldState()
{

}

void FieldState::Update()
{
	ClearScreen();
	map->Draw();
	std::cout << "You can access your inventory by typing inv " << std::endl;
	std::cout << "You are on a Field." << std::endl;
	std::cout << "===========================================" << std::endl;

	std::cout << "Looks around and spots a Path. Do you take it?" << std::endl;
	std::cout << "===========================================" << std::endl;
	std::cout << "1. Yes" << std::endl;
	std::cout << "2. No" << std::endl;
	std::cin >> playerChoice;

	ClearScreen();
	std::cout << "Seems like nothing is here!" << std::endl;
	std::cout << "========================================" << std::endl;
}

State* FieldState::ChangeState()
{
	if (playerChoice == "1")
	{
		return new ForestState(player);
	}
	else if (playerChoice == "2")
	{	
		return nullptr;
	}
	else
	{
		return nullptr;
	}
}