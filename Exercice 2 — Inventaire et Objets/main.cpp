#include <iostream>

#include "Item.h"

#include "Inventory.h"



int main()
{
	Inventory inv;
	Init(&inv);

	Item pomme;
	SetItem(&pomme, "Pomme", 1, 0);

	AddItem(&pomme, &inv);

	DisplayInventory(&inv);

	bool find = FindItemByName(&inv, "Pomme");
	std::cout << find << std::endl;

	return 0; 
}