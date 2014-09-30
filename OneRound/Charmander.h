#pragma once
#include "Pokemon.h"
class Charmander :
	public Pokemon
{
public:
	Charmander(CString /*name*/, int /*health*/, int /*level*/, aspect_t /*pokemonsAspect*/);
	~Charmander();
	AttackMove highestLevelMove();
	int damageThrown();
};

