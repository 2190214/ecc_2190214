//******************************************************************************
//
//
//		CPPKad16D�uECC�R�[�q�[�iunique_ptr�j�v
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
	cout << "��O�s�o�̃��V�s�ō�邩��A����������I�I" << endl;

	while (1) {
		cout << endl;
		cout << "�������́H�i0�F�R�[�q�[�A1�G�g���A2�F�䂸���A-1�F�X���o��j��";
		int	n;
		cin >> n;
		if (n < 0) break;
		cout << endl;

		HotDrink*	p;
		switch (n) {
		case 0:		p = new Coffee;		break;
		case 1:		p = new Tea;		break;
		case 2:		p = new Yuzu;		break;
		default:	p = new HotWater;	break;
		}
		p->makeHotDrink();
		delete p;

		cout << endl;
		cout << "���҂������܂����I���������ǂ����I" << endl;
	}

	cout << "���肪�Ƃ��������܂����I" << endl;

	return 0;
}

//******************************************************************************
