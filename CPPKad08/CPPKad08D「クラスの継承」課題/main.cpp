//******************************************************************************
//
//
//		CPPKad08D「クラスの継承」
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

#include "Monster.h"

//******************************************************************************
//
//		main関数
//
//******************************************************************************

int main()
{
	srand((unsigned int)time(NULL));

	Monster	m;
	cout << endl;

	m.setName("ムックル");
	cout << m.getName() << "が現れた！" << endl;

	while (1) {
		m.showData();
		cout << "何をしますか？（0：自己紹介、1：散歩、2：眠る、-1：終了）";
		int	cmd;
		cin >> cmd;
		if (cmd < 0) break;
		switch (cmd) {
		case 0:	m.intro();	break;
		case 1:	m.walk();	break;
		case 2:	m.sleep();	break;
		}
		cout << endl;
	}
	cout << endl;

	return 0;
}

//******************************************************************************
