/*
 * Monster.cpp
 *
 *  Created on: Jan 21, 2016
 *      Author: rbak9218
 */

#include "Monster.h"

char monsterName;
int monsterEyes;
int monsterNose;
double monsterLegs;
double monsterHair;
bool monsterBellyButton;

Monster :: Monster(char monsterName, int monsterEyes, int monsterNose, double monsterLegs, double monsterHair, bool monsterBellyButton)
{
	this->monsterName = monsterName;
	this->monsterEyes = monsterEyes;
	this->monsterNose = monsterNose;
	this->monsterLegs = monsterLegs;
	this->monsterHair = monsterHair;
	this->monsterBellyButton = monsterBellyButton;
}

char Monster :: getMonsterName()
{
	return monsterName;
}

void Monster :: setMonsterName(char monsterName)
{
	this->monsterName = monsterName;
}

int Monster :: getMonsterEyes()
{
	return monsterEyes;
}

void Monster :: setMonsterEyes(int monsterEyes)
{
	this->monsterEyes;
}

int Monster :: getMonsterNose()
{
	return monsterNose;
}

void Monster :: setMonsterNose(int monsterNose)
{
	this->monsterNose = monsterNose;
}

double Monster :: getMonsterLegs()
{
	return monsterLegs;
}

void Monster :: setMonsterLegs(double monsterLegs)
{
	this->monsterLegs = monsterLegs;
}

double Monster :: getMonsterHair()
{
	return monsterHair;
}

void Monster :: setMonsterHair(double monsterHair)
{
	this->monsterHair = monsterHair;
}

bool Monster :: getMonsterBellyButton()
{
	return monsterBellyButton;
}

void Monster :: setMonsterBellyButton(bool monsterBellyButton)
{
	this->monsterBellyButton = monsterBellyButton;
}
