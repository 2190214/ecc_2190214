//******************************************************************************
//
//
//		CPPKad16A�u�킦�I�s�N�~���I�I�A�v
//
//		�N���X�F
//		���@���F
//		�쐬���F
//
//
//******************************************************************************

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

#include "Pikmin.h"

//******************************************************************************
//
//		main�֐�
//
//******************************************************************************

int main()
{
	srand((unsigned int)time(NULL));

	cout << "���Ȃ��͉F���D�̃p�C���b�g�ł��B" << endl;
	cout << "������Ƃ����A�N�V�f���g�łƂ���f���ɕs�������܂����I" << endl;
	cout << "�s�N�~����T���ĉ����Ɛ���Ă��������I�I" << endl;
	cout << endl;

	PikminManager	manager;

	while (1) {
		manager.show();
		cout << "�ǂ����܂����H�i0�F�T���A1�F�����Ɛ키�A-1�F������߂�j";
		int cmd;
		cin >> cmd;
		cout << endl;
		if (cmd < 0) break;

		switch (cmd) {
		case 0:	manager.search();	break;
		case 1:	manager.fight();	break;
		}
		cout << endl;
	}

	return 0;
}

//******************************************************************************
