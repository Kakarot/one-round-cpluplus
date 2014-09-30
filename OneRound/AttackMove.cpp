#include "stdafx.h"
#include "AttackMove.h"


AttackMove::AttackMove(CString name, int damage)
{
	AttackMove::name = name;
	AttackMove::damage = damage;

}


AttackMove::~AttackMove()
{
	//consider the case of freeing the CString name.
}
CString AttackMove::getName(){
	return AttackMove::name;
}

int AttackMove::getDamage(){
	return AttackMove::damage;
}