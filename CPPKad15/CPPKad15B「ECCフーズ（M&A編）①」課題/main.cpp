//******************************************************************************
//
//
//		CPPKad15B�uECC�t�[�Y�iM&A�ҁj�@�v
//
//		�N���X�F
//		���@���F
//		�쐬���F
//
//
//******************************************************************************

#include <iostream>
#include <list>
using namespace std;

#include "CoffeeShop.h"
#include "DonutShop.h"
#include "Burger.h"

//******************************************************************************
//
//		main�֐�
//
//******************************************************************************

int main()
{
	cout << "���E�ɂ͂΂���ECC�t�[�Y�I" << endl;
	cout << "��������M&A�Ŋg�咆�I�I" << endl;
	cout << endl;

	CoffeeShop*		pShop = new CoffeeShop;

	while (1) {
		cout << "�ǂ̓X�̃��j���[��\�����܂����H" << endl;
		cout << "�i0�FECC�R�[�q�[�A1�FECC�h�[�i�c�A2�FECC�o�[�K�[�A-1�F�I���j";
		int	n;
		cin >> n;
		cout << endl;
		if (n < 0) break;

		// ���j���[�̕\��
		pShop->showMenu();
		cout << endl;
	}

	delete pShop;
	return 0;
}

//******************************************************************************
