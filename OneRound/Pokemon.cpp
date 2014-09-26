#include "stdafx.h"
#include "Pokemon.h"


Pokemon::Pokemon(CString name, int health, int level, aspect_t pokemonsAspect)
{
	Pokemon::name = name;
	Pokemon::health = health;
	Pokemon::level = level;
	Pokemon::pokemonsAspect = pokemonsAspect;
}


Pokemon::~Pokemon()
{
}
CString Pokemon::getName(){
	return Pokemon::name;
}

int Pokemon::getHealth(){
	return Pokemon::health;
}

int Pokemon::getLevel(){
	return Pokemon::level;
}

Pokemon::aspect_t Pokemon::getAspect(){
	return Pokemon::pokemonsAspect;
}