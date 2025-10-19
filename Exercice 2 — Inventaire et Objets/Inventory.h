#pragma once

#include "Item.h"

struct Inventory
{
	Item* inventory;
	int count;
};

void AddItem(Item* item, Inventory* inv);

void Init(Inventory* inv);

void DisplayInventory(Inventory* inv);

bool FindItemByName(Inventory* inv, const char* name);