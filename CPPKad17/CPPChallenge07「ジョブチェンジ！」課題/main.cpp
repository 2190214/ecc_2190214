//******************************************************************************
//
//
//		CPPChallenge07�u�N���X�`�F���W�I�v
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

#include "RPGCharacter.h"

//******************************************************************************
//
//		main�֐�
//
//******************************************************************************

int main()
{
	srand((unsigned int)time(NULL));

	cout << "���Ȃ���RPG�̃L�����N�^�[�ł��I" << endl;
	cout << "�����琢�E���~���`���ɏo�����܂��I" << endl;
	cout << "�ł����̑O�ɐE�Ƃ�I��ł��������I�I" << endl;
	cout << endl;

	RPGCharacter*	p = new Fighter;

	while (1) {
		cout << "���ɂȂ�܂����H�i0�F��m�A1�F���@�g���A2�F�m���A3�F�����A-1�F�`���֏o������j";
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

		cout << p->getJobName() << "�ɂȂ����I" << endl;
		p->showData();
		cout << endl;

		p->fight();
		cout << endl;
	}

	cout << p->getJobName() << "����A��낵���I" << endl;
	cout << "����΂��Đ��E���~���̂�I" << endl;
	cout << endl;

	delete p;
	return 0;
}

//******************************************************************************
