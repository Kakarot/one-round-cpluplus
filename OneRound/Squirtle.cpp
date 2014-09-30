#include "stdafx.h"
#include "Squirtle.h"


Squirtle::Squirtle(CString name, int health, int level, aspect_t pokemonsAspect)
	:Pokemon(name, health, level, pokemonsAspect)
{
}


Squirtle::~Squirtle()
{
}
AttackMove Squirtle::highestLevelMove() {

	if (level <= -1){ //edge case
		AttackMove *wtf = new AttackMove("WTF", 0);
		return *wtf;
	}

	if (level <= 10){
		AttackMove *waterGun = new AttackMove("Watergun", 10);
		return *waterGun;
	}
	else if (level <= 20){
		AttackMove *bubble = new AttackMove("Bubble", 20);
		return *bubble;
	}
	else if (level <= 30){
		AttackMove *waterPulse = new AttackMove("Water Pulse", 30);
		return *waterPulse;
	}

	else if (level <= 40){
		AttackMove *aquaTail = new AttackMove("Aqua Tail", 40);
		return *aquaTail;
	}

	else if (level <= 50){
		AttackMove *rainDance = new AttackMove("Rain Dance", 50);
		return *rainDance;
	}

	return *(new AttackMove("Hydro Pump", 100));
}


int Squirtle::damageThrown() {
	int damage = Squirtle::highestLevelMove().getDamage();
	return (int)(damage*(.5 *level));
}