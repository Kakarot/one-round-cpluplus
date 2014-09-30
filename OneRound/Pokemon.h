#pragma once
#include <atlstr.h>
#include "AttackMove.h"
class Pokemon
{
public:
	enum aspect_t { fire, grass, water };
	Pokemon(CString /*name*/, int /*health*/, int /*level*/, aspect_t /*pokemonsAspect*/);
	virtual ~Pokemon();
	CString getName();
	int getHealth();
	int getLevel();
	aspect_t getAspect();
	virtual AttackMove highestLevelMove(); //should be pure virtual =0, but Referee class can't accept base class cause interface
	virtual int damageThrown();

protected:
	CString name;
	int health;
	int level;
	aspect_t pokemonsAspect;
};

