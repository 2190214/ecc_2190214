//******************************************************************************
//
//
//		CPPKad09D�u���N���X�̃|�C���^�v
//
//		�N���X�F
//		���@���F
//		�쐬���F
//
//
//******************************************************************************

#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
using namespace std;

// �N���X��`�̃w�b�_�t�@�C��
#include "Monster.h"

void HouseOfSwimMonster(SwimMonster* p);	// SwimMonster�̊�
void HouseOfMonster(Monster* p);			// Monster�̊�

//******************************************************************************
//
//		main�֐�
//
//******************************************************************************

int main()
{
	// �����n��̐ݒ�
	srand((unsigned int)time(NULL));

	SwimMonster		m("�R�C�L���O");

	while (1) {
		cout << "�ǂ����܂����H�i0�FSwimMonster�̊ق֍s���A1�FMonster�̊ق֍s���A-1�F�I���j��";
		int cmd;
		cin >> cmd;
		if (cmd < 0) break;
		cout << endl;

		switch (cmd) {
		case 0:	HouseOfSwimMonster(&m);	break;		// SwimMonster�̊�

		// Monster�̊�

		}
	}
	return 0;
}

// SwimMonster�̊�
void HouseOfSwimMonster(SwimMonster* p)
{
	cout << "�悤�����ISwimMonster�̊قցI�I" << endl;
	cout << "�����ł͂��Ȃ��̊O�����݂Ă������I" << endl;
	while (1) {
		p->showData();
		cout << "�������܂����H�i0�F���ȏЉ�A1�F�U���A2�F����A3�F�j���A-1�F�o�Ă����j";
		int	cmd;
		cin >> cmd;
		if (cmd < 0) break;

		switch (cmd) {
		case 0:	p->intro();		break;
		case 1:	p->walk();		break;
		case 2:	p->sleep();		break;
		case 3:	p->swim();		break;
		}
		cout << endl;
	}
	cout << endl;
}

// Monster�̊�
void HouseOfMonster(Monster* p)
{




}

//******************************************************************************
