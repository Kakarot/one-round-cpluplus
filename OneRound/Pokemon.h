#pragma once
#include <atlstr.h>
#include "AttackMove.h"
class Pokemon
{
public:
	enum aspect_t { fire, grass, water };
	Pokemon(CString /*name*/, int /*health*/, int /*level*/, aspect_t /*pokemonsAspect*/);
	~Pokemon();
	CString getName();
	int getHealth();
	int getLevel();
	aspect_t getAspect();
	virtual AttackMove highestLevelMove()=0;
	virtual int damageThrown()=0;

protected:
	CString name;
	int health;
	int level;
	aspect_t pokemonsAspect;
};

