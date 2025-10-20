#include "Character.h"

#include <iostream>

int AskInt(const char* msg, int min, int max)
{
	int value;

	do {
		std::cout << msg << std::endl;
		std::cin >> value;
	} while (value <min || value > max);

	return value;
}

int main()
{
	int heal;

	bool alive;

	Character* p = (Character*)malloc(sizeof(Character));

	if (p == nullptr)
		exit(1);

	p->name = "Hamilton";
	p->maxHp = 100;
	p->currHp = 0;
	p->level = 5;

	DisplayCharacter(p);

	heal = AskInt("Voulez vous vous soigner ?\n1) Oui\n2) Non", 1, 2);
	
	if (heal == 1)
	{
		HealCharacter(p, p->currHp, p->maxHp);
	}
	else
	{
		std::cout << "Vous ne vous etes pas soigner." << std::endl;
	}

	alive = IsAlive(p->currHp, p->maxHp);

	if (alive == false)
	{
		std::cout << "Vous etes mort !" << std::endl;
	}

	return 0;
}