#include "Item.h"

#include <iostream>

void SetItem(Item* item, const char* name, int goldCoins, int requireLevel)
{
	item->name = name;
	item->goldCoins = goldCoins;
	item->requireLevel = requireLevel;
}