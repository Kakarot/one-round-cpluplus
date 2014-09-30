#pragma once
#include "Pokemon.h"
class Referee
{
public:
	Referee(Pokemon* /*a*/,Pokemon* /*b*/);
	~Referee();
	Pokemon *a, *b;
	enum effectiveness{ normalDamage, weakness, strongAgainst };
	effectiveness aDefense, bDefense;
	int determineWinner(Pokemon, Pokemon);
	int getAdamage();
	int getBdamage();
	enum aspect{ fire, grass, water }; 
private:
	int aRealDamage, bRealDamage;
	void determineResistance();
};

