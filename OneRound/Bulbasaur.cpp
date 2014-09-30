#include "stdafx.h"
#include "Bulbasaur.h"


Bulbasaur::Bulbasaur(CString name, int health, int level, aspect_t pokemonsAspect)
	:Pokemon(name,health,level,pokemonsAspect)
{
	
}


Bulbasaur::~Bulbasaur()
{
}


/**
* This method will determine the highest level attack that a pokemon can do based
* on his/her level.
*/

AttackMove Bulbasaur::highestLevelMove() {

	if (level <= -1){ //edge case
		AttackMove *wtf = new AttackMove("WTF", 0);
		return *wtf;
	}

	if (level <= 10){
		AttackMove *ember = new AttackMove("Leech Seed", 10);
		return *ember;
	}
	else if (level <= 20){
		AttackMove *fireFang = new AttackMove("Vine Whip", 20);
		return *fireFang;
	}
	else if (level <= 30){
		AttackMove *flameBurst = new AttackMove("Razor Leaf", 30);
		return *flameBurst;
	}

	else if (level <= 40){
		AttackMove *flameThrower = new AttackMove("Seed Bomb", 40);
		return *flameThrower;
	}

	else if (level <= 50){
		AttackMove *fireSpin = new AttackMove("Leaf Storm", 50);
		return *fireSpin;
	}

	return *(new AttackMove("Solar Beam", 100)); //yes this is special, dereference pointer before returning
}

/**
*Determines damage based on move and pokemon's level.
*@return returns damage dealt.
*/

int Bulbasaur::damageThrown() {
	int damage = Bulbasaur::highestLevelMove().getDamage();
	return (int)(damage*(.5 *level));
}

