//******************************************************************************
//
//
//		CPPKad10D「純粋仮想関数と抽象クラス」
//
//		クラス：
//		氏　名：
//		作成日：
//
//
//******************************************************************************

#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
using namespace std;

#include "Fairy.h"

//******************************************************************************
//
//		main関数
//
//******************************************************************************

int main()
{
	srand((unsigned int)time(NULL));

	cout << "妖精を召喚します！" << endl;
	while (1) {
		cout << "どうしますか？（0：召喚する、-1：やめる）";
		int		cmd;
		cin >> cmd;
		if (cmd < 0) break;
		cout << endl;

		Fairy*		p = nullptr;;
		switch (rand() % 3) {
		case 0:	p = new Light;		break;		// 光の妖精
		case 1:	p = new Darkness;	break;		// 闇の妖精
		case 2:	p = new Fire;		break;		// 炎の妖精
		}
		p->intro();
		delete p;
		cout << endl;
	}
	return 0;
}

//******************************************************************************
