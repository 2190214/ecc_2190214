//******************************************************************************
//
//
//		CPPKad09C�u���z�֐��̃I�[�o�[���C�h�v
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
#include "Fairy.h"

//******************************************************************************
//
//		main�֐�
//
//******************************************************************************

int main()
{
	Light*		pLight;
	Darkness*	pDarkness;
	Fire*		pFire;

	cout << "�d�����������Ď��ȏЉ���܂��I" << endl;

	while (1) {
		cout << "�N���������܂����H�i0�F���̗d���A1�F�ł̗d���A2�F���̗d���A-1�F��߂�j";
		int		fairy;
		cin >> fairy;
		if (fairy < 0) break;
		cout << endl;

		switch (fairy) {
		case 0:		// ���̗d��
			pLight = new Light;
			pLight->intro();
			delete pLight;
			break;
		case 1:		// �ł̗d��
			pDarkness = new Darkness;
			pDarkness->intro();
			delete pDarkness;
			break;
		case 2:		// ���̗d��
			pFire = new Fire;
			pFire->intro();
			delete pFire;
			break;
		}
		cout << endl;
	}
	return 0;
}

//******************************************************************************
