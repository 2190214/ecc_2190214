//******************************************************************************
//
//
//		CPPKad16B�uECC�t�[�Y�i�t�@�~���X�ҁjshared_ptr�v
//
//		�N���X�F
//		���@���F
//		�쐬���F
//
//
//******************************************************************************

#include <iostream>
#include <memory>
using namespace std;

#include "Menu.h"

//******************************************************************************
//
//		main�֐�
//
//******************************************************************************

int main()
{
	cout << "�t�@�~���XECC�ւ悤�����I�I" << endl;
	cout << endl;

	while (1) {
		cout << "���̃��j���[��\�����܂����H" << endl;
		cout << "�i0�F���[�j���O�A1�F�����`�A2�F�f�B�i�[�A3�F���ׂāA-1�F�I���j";
		int	cmd;
		cin >> cmd;
		if (cmd < 0) break;

		// ���j���[�̕\��
		unique_ptr<Menu> pMenu;
		switch (cmd) {
		default:
		case 0:	pMenu.reset(new MorningMenu);	break;
		case 1:	pMenu.reset(new LunchMenu);		break;
		case 2:	pMenu.reset(new DinerMenu);		break;
		case 3:	pMenu.reset(new AllMenu);		break;
		}
		pMenu->show();
		cout << endl;
	}

	return 0;
}

//******************************************************************************
