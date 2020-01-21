//******************************************************************************
//
//
//		CPPChallenge07「クラスチェンジ！」
//
//		クラス：
//		氏　名：
//		作成日：
//
//
//******************************************************************************

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

#include "RPGCharacter.h"

//******************************************************************************
//
//		main関数
//
//******************************************************************************

int main()
{
	srand((unsigned int)time(NULL));

	cout << "あなたはRPGのキャラクターです！" << endl;
	cout << "今から世界を救う冒険に出かけます！" << endl;
	cout << "でもその前に職業を選んでください！！" << endl;
	cout << endl;

	RPGCharacter*	p = new Fighter;

	while (1) {
		cout << "何になりますか？（0：戦士、1：魔法使い、2：僧侶、3：盗賊、-1：冒険へ出かける）";
		int cmd;
		cin >> cmd;
		if (cmd < 0) break;

		RPGCharacter*	tmp = p;
		switch (cmd) {
		case 0:	p = new Fighter;	break;
		case 1:	p = new Wizard;		break;
		case 2:	p = new Cleric;		break;
		case 3:	p = new Thief;		break;
		}
		*p = *tmp;
		delete tmp;

		cout << p->getJobName() << "になった！" << endl;
		p->showData();
		cout << endl;

		p->fight();
		cout << endl;
	}

	cout << p->getJobName() << "さん、よろしく！" << endl;
	cout << "がんばって世界を救うのよ！" << endl;
	cout << endl;

	delete p;
	return 0;
}

//******************************************************************************
