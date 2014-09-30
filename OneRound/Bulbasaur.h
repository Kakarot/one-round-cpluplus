#pragma once
#include "Pokemon.h"
class Bulbasaur :
	public Pokemon
{
public:
	Bulbasaur(CString /*name*/, int /*health*/, int /*level*/, aspect_t /*pokemonsAspect*/);
	~Bulbasaur();
	AttackMove highestLevelMove();
	int damageThrown();
};

