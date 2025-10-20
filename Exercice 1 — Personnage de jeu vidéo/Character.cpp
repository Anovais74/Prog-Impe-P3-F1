#include "Character.h"

#include <iostream>

void DisplayCharacter(const Character* p)
{
	std::cout << "Vous etes " << p->name << ". Vous avez " << p->currHp << " PV sur " << p->maxHp << " Max et etes niveau " << p->level << "." << std::endl;
}

void HealCharacter(Character* p, int currHp, int maxHp)
{
	if (currHp < (maxHp - 10))
		p->currHp += 10;

	if (currHp > (maxHp - 10))
		p->currHp = currHp + (maxHp - currHp);

	if (currHp == maxHp)
		std::cout << "Vous avez toute votre vie, vous ne pouvez pas vous soigner." << std::endl;

	std::cout << "Vous avez desormais " << p->currHp << " PV sur " << p->maxHp << " Max." << std::endl;
}

bool IsAlive(int currHp, int Max)
{
	bool alive;

	if (currHp == 0)
		alive = false;
	else
		alive = true;

	return alive;
}