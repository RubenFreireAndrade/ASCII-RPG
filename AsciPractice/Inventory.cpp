#include "Inventory.h"

Inventory::Inventory()
{
	inventory.begin();
}

Inventory::~Inventory()
{

}

void Inventory::ShowItems()
{
	for (auto it = inventory.begin(); it != inventory.end(); it++)
	{
		std::cout << *it << std::endl;
	}
}

void Inventory::Additem(std::string newItem)
{
	auto name = std::find(inventory.begin(), inventory.end(), newItem);
	if (name != inventory.end())
	{
		std::cout << "You already have that item in Inventory" << std::endl;
	}
	else
	{
		inventory.push_back(newItem);
	}
}
