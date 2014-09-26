#pragma once
#include<string.h>
#include<atlstr.h>
class AttackMove
{
public:
	AttackMove(CString /*name*/, int /*damage*/);
	~AttackMove();
	CString getName();
	int getDamage();
private:
	int damage;
	CString name;
};

