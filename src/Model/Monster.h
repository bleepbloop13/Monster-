/*
 * Monster.h
 *
 *  Created on: Jan 21, 2016
 *      Author: rbak9218
 */

#ifndef MODEL_MONSTER_H_
#define MODEL_MONSTER_H_

class Monster
{
private:
	char monsterName;
	int monsterEyes;
	int monsterNose;
	double monsterLegs;
	double monsterHair;
	bool monsterBellyButton;
public:
	Monster(char monsterName, int monsterEyes, int monsterNose, double monsterLegs, double monsterHair, bool monsterBellyButton);
	char toString();
	char getMonsterName();
	int getMonsterEyes();
	int getMonsterNose();
	double getMonsterLegs();
	double getMonsterHair();
	bool getMonsterBellyButton();
	void setMonsterName(char monsterName);
	void setMonsterEyes(int monsterEyes);
	void setMonsterNose(int monsterNose);
	void setMonsterLegs(double monsterLegs);
	void setMonsterHair(double monsterHair);
	void setMonsterBellyButton(bool monsterBellyButton);
};

#endif MODEL_MONSTER_H_
