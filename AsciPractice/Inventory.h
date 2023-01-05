#pragma once
#include<iostream>
#include<string>
#include<list>
#include<forward_list>
#include<algorithm>

class Inventory
{

public:

	Inventory();
	~Inventory();

	void ShowItems();
	void Additem(std::string newItem);

	bool doesExist;
	// Create so Player can select an item in inventory and is able to use it.
	
private:

	std::list<std::string> inventory;
	std::list<std::string>::iterator it;
};

