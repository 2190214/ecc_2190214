#pragma once

#include <iostream>
using namespace std;

#include "FlyAlg.h"

// �A�q��
class Duck
{
private:
	int			level;
	FlyAlg*		flyAlg;
public:
	Duck() : level(0), flyAlg(new FlyAlg_NG)
	{
		cout << "�ڂ��A�q���I�܂����܂���ׂȂ��񂾁E�E�E" << endl;
	}
	~Duck()
	{
		cout << "�܂��ˁ`" << endl;
		if (flyAlg) delete flyAlg;
	}
	void fly()
	{
		if (flyAlg) flyAlg->fly();
	}
	void levelUp()
	{
		if (level >= 3) {
			cout << "��X�̉Ȋw�Z�p�ł́A����ȏヌ�x���A�b�v�ł��܂���I�c�O�I�I" << endl;
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
