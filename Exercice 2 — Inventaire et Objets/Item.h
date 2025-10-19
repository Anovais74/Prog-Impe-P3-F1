#pragma once

struct Item
{
	const char* name;
	int goldCoins;
	int requireLevel;
};

void SetItem(Item* item, const char* name, int goldCoins, int requireLevel);
