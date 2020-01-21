//******************************************************************************
//
//
//		CPPKad15S�uECC�t�[�Y�i�t�@�~���X�ҁj�v
//
//		�N���X�F
//		���@���F
//		�쐬���F
//
//
//******************************************************************************

#include <iostream>
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
		Menu*	pMenu;
		switch (cmd) {
		default:
		case 0:		// ���[�j���O
			pMenu = new MorningMenu;
			pMenu->showMenu();			// ���[�j���O���j���[�\��
			delete pMenu;
			break;
		case 1:		// �����`
			pMenu = new LunchMenu;
			pMenu->showMenu();			// �����`���j���[�\��
			delete pMenu;
			pMenu = new DrinkMenu;
			pMenu->showMenu();			// �h�����N���j���[�\��
			delete pMenu;
			break;
		case 2:		// �f�B�i�[
			pMenu = new DinerMenu;
			pMenu->showMenu();			// �f�B�i�[���j���[�\��
			delete pMenu;
			pMenu = new DrinkMenu;
			pMenu->showMenu();			// �h�����N���j���[�\��
			delete pMenu;
			pMenu = new DessertMenu;
			pMenu->showMenu();			// �f�U�[�g���j���[�\��
			delete pMenu;
			break;
		case 3:		// �S���j���[
			pMenu = new AllMenu;
			pMenu->showMenu();			// �S���j���[�\���i�^�C�g���̂݁j
			delete pMenu;
			// ���[�j���O
			pMenu = new MorningMenu;
			pMenu->showMenu();			// ���[�j���O���j���[�\��
			delete pMenu;
			// �����`
			pMenu = new LunchMenu;
			pMenu->showMenu();			// �����`���j���[�\��
			delete pMenu;
			pMenu = new DrinkMenu;
			pMenu->showMenu();			// �h�����N���j���[�\��
			delete pMenu;
			// �f�B�i�[
			pMenu = new DinerMenu;
			pMenu->showMenu();			// �f�B�i�[���j���[�\��
			delete pMenu;
			pMenu = new DrinkMenu;
			pMenu->showMenu();			// �h�����N���j���[�\��
			delete pMenu;
			pMenu = new DessertMenu;
			pMenu->showMenu();			// �f�U�[�g���j���[�\��
			delete pMenu;
			break;
		}
		cout << endl;
	}

	return 0;
}

//******************************************************************************
