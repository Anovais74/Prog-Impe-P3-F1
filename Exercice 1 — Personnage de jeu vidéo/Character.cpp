#include "Character.h"

#include <iostream>

void DisplayCharacter(const char* name, int currHp, int level, int maxHp)
{
	std::cout << "Vous etes " << name << ". Vous avez " << currHp << " PV sur " << maxHp << " Max et etes niveau " << level << "." << std::endl;
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