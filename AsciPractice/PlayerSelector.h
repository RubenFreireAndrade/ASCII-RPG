#pragma once
#include<iostream>

class PlayerSelector
{

public:

	std::string Menu();

	std::string GetPlayerName();

private:

	int currentLocation;
	int playerChoice;

	std::string playerName;
};

