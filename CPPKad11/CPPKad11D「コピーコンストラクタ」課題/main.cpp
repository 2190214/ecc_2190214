//******************************************************************************
//
//
//		CPPKad11D�u�R�s�[�R���X�g���N�^�v
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

#include "Monster.h"


// ������Monster
void MonsterCopy1(Monster copy)
{
	cout << "MonsterCopy1���Ăяo����܂����I" << endl;
	copy.showData();
	cout << "MonsterCopy1���I�����܂��I" << endl;
}

// �������߂�l��Monster
Monster MonsterCopy2(Monster copy)
{
	cout << "MonsterCopy2���Ăяo����܂����I" << endl;
	copy.showData();
	cout << "MonsterCopy2���I�����܂��I" << endl;
	return copy;
}

//******************************************************************************
//
//		main�֐�
//
//******************************************************************************

int main()
{
	Monster		pika("�s�J�`���E");
	pika.showData();
	cout << endl;

	while (1) {
		Monster::countMonster();
		cout << "�ǂ����܂����H�i0�F�R�s�[����A1�F�����ɂ���A2�F�߂�l�ɂ���A-1�F�I���j��";
		int cmd;
		cin >> cmd;
		cout << endl;
		if (cmd < 0) break;

		switch (cmd) {
		case 0:		// �R�s�[
			{
				Monster copy = pika;
				copy.showData();
				cout << "}�̒��O�ł��I" << endl;
			}
			cout << "}�̒���ł��I" << endl;
			break;
		case 1:		// ������Monster
			MonsterCopy1(pika);
			cout << "MonsterCopy1����߂��Ă��܂����I" << endl;
			break;
		case 2:		// �������߂�l��Monster
			MonsterCopy2(pika).showData();
			cout << "MonsterCopy2����߂��Ă��܂����I" << endl;
			break;
		}
		cout << endl;
	}
	return 0;
}

//******************************************************************************
