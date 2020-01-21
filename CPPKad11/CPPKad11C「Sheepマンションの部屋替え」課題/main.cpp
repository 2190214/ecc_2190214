//******************************************************************************
//
//
//		CPPKad11C「Sheepマンションの部屋換え」
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

#include "Sheep.h"

// 羊の入れ換え
void swapSheep(Sheep s1, Sheep s2)
{
	Sheep tmp = s1;
	s1 = s2;
	s2 = tmp;
}

//******************************************************************************
//
//		main関数
//
//******************************************************************************

int main()
{
	srand((unsigned int)time(nullptr));

	Sheep	s[3];
	cout << endl;

	cout << "Sheepマンションへようこそ！" << endl;
	cout << "今から部屋の入れ換えをします！！" << endl;
	cout << endl;

	while (1) {
		for (int i = 0; i < 3; i++) {
			cout << i << "号室：";
			s[i].showData();
		}
		cout << "どこを入れ換えますか？（0：0と1、1：1と2、2：2と0、-1：終了）＞";
		int n1;
		cin >> n1;
		if (n1 < 0) break;

		int n2 = (n1 + 1) % 3;

		cout << endl;
		cout << n1 << "号室と" << n2 << "号室を入れ換えます！" << endl;
		swapSheep(s[n1], s[n2]);
		cout << endl;
	}
	cout << endl;
	return 0;
}

//******************************************************************************
