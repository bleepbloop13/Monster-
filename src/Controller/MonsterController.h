/*
 * MonsterController.h
 *
 *  Created on: Jan 21, 2016
 *      Author: rbak9218
 */

#ifndef CONTROLLER_MONSTERCONTROLLER_H_
#define CONTROLLER_MONSTERCONTROLLER_H_

class MonsterController
{
private:
	Monster roryMonster;
	Monster userMonster;
	void askQuestions;
	void createUserMonster;
public:
	MonsterController();
	void start();

};

#endif /* CONTROLLER_MONSTERCONTROLLER_H_ */



