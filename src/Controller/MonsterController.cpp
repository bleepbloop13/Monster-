/*
 * MonsterController.cpp
 *
 *  Created on: Jan 21, 2016
 *      Author: rbak9218
 */
#include "MonsterController.h"
#include "Monster.cpp"
#include <iostream>
using namespace std;

Monster roryMonster;
Monster userMonster;

MonsterController :: MonsterController()
{
	char name = "Gilligan";
	int eyes = 2;
	int nose = 4;
	double legs = 2.8;
	double hair = 1.9;
	bool hasBellyButton = true;

	roryMonster = new Monster(name, eyes, nose, legs, hair, hasBellyButton);
}

void MonsterController :: askQuestions()
{

}

void MonsterController :: start()
{
	askQuestions();
	createUserMonster();
}

void MonsterController :: createUserMonster()
{

}
