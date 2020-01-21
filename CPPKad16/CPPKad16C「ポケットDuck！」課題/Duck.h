#pragma once

#include <iostream>
using namespace std;

#include "FlyAlg.h"

// アヒル
class Duck
{
private:
	int			level;
	FlyAlg*		flyAlg;
public:
	Duck() : level(0), flyAlg(new FlyAlg_NG)
	{
		cout << "ぼくアヒル！まだうまく飛べないんだ・・・" << endl;
	}
	~Duck()
	{
		cout << "またね～" << endl;
		if (flyAlg) delete flyAlg;
	}
	void fly()
	{
		if (flyAlg) flyAlg->fly();
	}
	void levelUp()
	{
		if (level >= 3) {
			cout << "我々の科学技術では、これ以上レベルアップできません！残念！！" << endl;
			return;
		}

		level++;
		switch (level) {
		case 1:
			delete flyAlg;
			flyAlg = new FlyAlg_Wing;
			break;
		case 2:
			delete flyAlg;
			flyAlg = new FlyAlg_Jet;
			break;
		case 3:
			delete flyAlg;
			flyAlg = new FlyAlg_Warp;
			break;
		}
	}
};
