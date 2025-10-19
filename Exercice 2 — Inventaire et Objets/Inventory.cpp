#include "Inventory.h"
#include "Item.h"

#include <iostream>

void AddItem(Item* item, Inventory* inv)
{
	SetItem(&inv->inventory[inv->count], item->name, item->goldCoins, item->requireLevel);
	inv->count++;
}

void Init(Inventory* inv)
{
	inv->inventory = (Item*)malloc(sizeof(Item) * 5);
	inv->count = 0;
}

void DisplayInventory(Inventory* inv)
{
	for (int i = 0; i < inv->count; i++)
	{
		std::cout << "- " << inv->inventory[i].name << std::endl;
	}
}

bool FindItemByName(Inventory* inv, const char* name)
{
	if (inv->count == 0)
	{
		return false;
	}
	for (int i = 0; i < inv->count; i++)
	{
		
		if (inv->inventory[i].name == name)
		{
			return true;
		}
	}
	return false;
}