#include "PlayerSelector.h"

std::string PlayerSelector::Menu()
{
	std::cout << "Greetings New Player!" << std::endl;
	std::cout << "What Is Your Name?" << std::endl;
	std::cout << "==========================================" << std::endl;
	std::cin >> playerName;

	return std::string(playerName);
}

std::string PlayerSelector::GetPlayerName()
{
	return std::string(playerName);
}


