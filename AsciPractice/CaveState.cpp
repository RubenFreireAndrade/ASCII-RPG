#include "CaveState.h"

CaveState::CaveState(Player* p)
{
	player = p;
	map = new Maps("mapCave");
}

void CaveState::Update()
{
	ClearScreen();
	map->Draw();
	std::cout << "You are in a Cave." << std::endl;
	std::cout << "===========================================" << std::endl;
	Enemy* enemy = CreateEnemy();
	enemy->ShowEnemy();
	FightChoices();

	if (playerChoice == "1")
	{
		battleSystem->Battle(enemy, player);
		PauseGameplay();

		ClearScreen();
		std::cout << enemy->GetEnemyName() << "dropped a HP Potion and Player receives Potion" << std::endl;
		player->Pickup("Potion");
		std::cout <<"Player has: "<< player->currentHP << "HP left" << std::endl;

		std::cout << "Would you like to use HP Potion?" << std::endl;
		std::cout << " Yes" << std::endl;
		std::cout << " No" << std::endl;
		std::cin >> playerChoice;
		if (playerChoice == "Yes" || playerChoice == "yes")
		{
			player->MaxHeal();
			std::cout << "Player has: " << player->currentHP << " left" << std::endl;
		}
		else if (playerChoice == "No" || playerChoice == "no")
		{
			std::cout << "Player has: " << player->currentHP << " left" << std::endl;
		}
		PauseGameplay();

		SpottingHoodedMan();
		if (playerChoice == "Yes" || playerChoice == "yes")
		{
			ApproachingHoodedMan();
		}
		else if (playerChoice == "No" || playerChoice == "no")
		{

		}
	}
	else if (playerChoice == "2")
	{
		srand(time(0));
		int runChance = rand() % 6;
		if (runChance < 3)
		{
			std::cout << "You ran away!" << std::endl;
			std::cout << "Try not get caught again!" << std::endl;
			PauseGameplay();
			// Create story to continue after successfully running away.
		}
		else
		{
			std::cout << "Unable to run away!" << std::endl;
			PauseGameplay();
			battleSystem->Battle(enemy, player);
			PauseGameplay();
		}
	}
}

State* CaveState::ChangeState()
{
	if (playerChoice == "Yes" || playerChoice == "yes")
	{
		return new DungeonState(player);
	}
	else
	{
		return nullptr;
	}
}

void CaveState::SpottingHoodedMan()
{
	ClearScreen();
	std::cout << "Player proceed with the journey and see another road " << std::endl;
	std::cout << "Player sees a Hooded man standing next to a dark corridor. He looks worried." << std::endl;
	std::cout << "===========================================" << std::endl;
	std::cout << "Do you approach him?" << std::endl;
	std::cout << "Yes?" << std::endl;
	std::cout << "No?" << std::endl;
	std::cin >> playerChoice;
}

void CaveState::ApproachingHoodedMan()
{
	ClearScreen();
	std::cout << "Player approaches the Hooded man and asks for a favour of you. " << std::endl;
	std::cout << "Hooded man mentions his village will be in danger if he does not retrieve a Medallion. " << std::endl;
	std::cout << "He mentions how this Medallion creates a force field covering the Dungeon, keeping any monster inside " << std::endl;
	std::cout << "===========================================" << std::endl;
	std::cout << "Do you assist him? " << std::endl;
	std::cout << "Yes?" << std::endl;
	std::cout << "No?" << std::endl;
	std::cin >> playerChoice;
}
