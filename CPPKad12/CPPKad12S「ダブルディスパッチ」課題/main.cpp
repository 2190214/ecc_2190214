//******************************************************************************
//
//
//		CPPKad12S�u�_�u���f�B�X�p�b�`�v
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

#include "Player.h"
#include "Hand.h"

//******************************************************************************
//
//		main�֐�
//
//******************************************************************************

int main()
{
	srand( (unsigned int)time(NULL) );

	// �����̕\��
	cout << "ECC����񂯂�I�I" << endl;

	// �v���C���[�̐ݒ�i�I�u�W�F�N�g�̍쐬�j
	BasePlayer* p0 = new UserPlayer;
	BasePlayer* p1 = new CompPlayer;

	// ���C�����[�v
	while (1) {
		// �u��v�̐���
		Hand* h0 = p0->createHand();
		if (!h0) break;

		Hand* h1 = p1->createHand();
		if (!h1) break;

		cout << p0->getName() << "��" << h0->getName() << "���o�����I" << endl;
		cout << p1->getName() << "��" << h1->getName() << "���o�����I" << endl;

		// ����
		switch (h0->vsHand(h1)) {
		case WIN:
			cout << p0->getName() << "�̏����I" << endl;
			break;
		case LOSE:
			cout << p1->getName() << "�̏����I" << endl;
			break;
		case DRAW:
			cout << "�������I" << endl;
			break;
		}
		cout << endl;

		delete h0;
		delete h1;
	}

	// �I�������i�I�u�W�F�N�g�̉���j
	delete p0;
	delete p1;

	return 0;
}

//******************************************************************************
