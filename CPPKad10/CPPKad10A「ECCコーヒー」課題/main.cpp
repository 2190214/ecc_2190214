//******************************************************************************
//
//
//		CPPKad10A�uECC�R�[�q�[�v
//
//		�N���X�F
//		���@���F
//		�쐬���F
//
//
//******************************************************************************

#include <iostream>
using namespace std;

#include "HotDrink.h"

//******************************************************************************
//
//		main�֐�
//
//******************************************************************************

int main()
{
	cout << "ECC�R�[�q�[�ւ悤�����I" << endl;

	while ( 1 ) {
		cout << "�������́H�i0�F�R�[�q�[�A1�G�g���A2�F�䂸���A-1�F�X���o��j��";
		int	n;
		cin >> n;
		if ( n < 0 ) break;
		cout << endl;

		switch ( n ) {
		case 0:	// �R�[�q�[
			Coffee* c;
			c = new Coffee;
			c->boilWater();			// �����𕦂���
			c->dripCoffee();		// �R�[�q�[���h���b�v����
			c->pourInCup();			// �J�b�v�ɒ���
			delete c;
			break;
		case 1:	// �g��
			Tea* t;
			t = new Tea;
			t->boilWater();			// �����𕦂���
			t->steepTeabag();		// �e�B�[�o�b�O��Z��
			t->pourInCup();			// �J�b�v�ɒ���
			delete t;
			break;
		case 2:	// �䂸��
			// �i�������j
			break;
		}

		cout << endl;
		cout << "���҂������܂����I���������ǂ����I" << endl;
		cout << endl;
	}

	cout << "���肪�Ƃ��������܂����I" << endl;

	return 0;
}

//******************************************************************************