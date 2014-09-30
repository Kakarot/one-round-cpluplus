#include "stdafx.h"
#include "Referee.h"


Referee::Referee(Pokemon* a, Pokemon* b)
{
	Referee::a = a;
	Referee::b = b;
}


Referee::~Referee()
{
}

int Referee::determineWinner(Pokemon a, Pokemon b){
	determineResistance();
	int remainingHealthA = a.getHealth(), remainingHealthB = b.getHealth();

	if (aDefense == normalDamage){
		remainingHealthA -= bRealDamage = b.damageThrown();
	}
	else if (aDefense == weakness){
		remainingHealthA -= bRealDamage = b.damageThrown() * 2;

	}
	else if (aDefense == strongAgainst){
		remainingHealthA -= bRealDamage = (int)(b.damageThrown()*.5); //health can't be a fraction

	}

	//Now evaluate Pokemon B
	if (bDefense == normalDamage){
		remainingHealthB -= aRealDamage = a.damageThrown();

	}
	else if (bDefense == weakness){
		remainingHealthB -= aRealDamage = a.damageThrown() * 2;

	}
	else if (bDefense == strongAgainst){
		remainingHealthB -= aRealDamage = (int)(a.damageThrown()*.5);

	}


	//now evaluate winner
	if (remainingHealthA < remainingHealthB){
		return 2;
	}
	else if (remainingHealthA > remainingHealthB){
		return 1;
	}
	else{
		return 3;
	}

}


void Referee::determineResistance(){

	/*
	* Omg, this was such a bad idea, but I'll manually code it.
	*/

	//First check Pokemon a is weak to Pokemon b
	if ((a->getAspect() == fire && b->getAspect() == water)
		|| (a->getAspect() == grass && b->getAspect() == fire ||
		(a->getAspect() == water && b->getAspect() == grass)))
	{
		aDefense = weakness;
		bDefense = strongAgainst;
	}// end first case

	//Second check if Pokemon b is weak to Pokemon A
	else if ((a->getAspect() == fire && b->getAspect() == grass)
		|| (a->getAspect() == grass && b->getAspect() == water ||
		(a->getAspect() == water && b->getAspect() == fire)))
	{
		aDefense = strongAgainst;
		bDefense = weakness;
	}// end second case

	//The only other alternative with three types, meaning they are the same type.
	else{
		aDefense = normalDamage;
		bDefense = normalDamage;
	}
}

int Referee::getAdamage(){
	return Referee::aRealDamage;
}
int Referee::getBdamage(){
	return Referee::bRealDamage;
}