#pragma once
#include "Pokemon.h"
class Squirtle :
	public Pokemon
{
public:
	Squirtle(CString /*name*/, int /*health*/, int /*level*/, aspect_t /*pokemonsAspect*/);
	~Squirtle();
	AttackMove highestLevelMove();
	int damageThrown();
};

