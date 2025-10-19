#pragma once

#include <iostream>

struct Character
{
	const char* name;
	int currHp;
	int maxHp;
	int level;
};

void DisplayCharacter(const char* name, int currHp,int level, int maxHp);

void HealCharacter(Character* p, int currHp, int maxHp);

bool IsAlive(int currHp, int maxHp);