//******************************************************************************
//
//
//		CPPKad10D�u�������z�֐��ƒ��ۃN���X�v
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

#include "Fairy.h"

//******************************************************************************
//
//		main�֐�
//
//******************************************************************************

int main()
{
	srand((unsigned int)time(NULL));

	cout << "�d�����������܂��I" << endl;
	while (1) {
		cout << "�ǂ����܂����H�i0�F��������A-1�F��߂�j";
		int		cmd;
		cin >> cmd;
		if (cmd < 0) break;
		cout << endl;

		Fairy*		p = nullptr;;
		switch (rand() % 3) {
		case 0:	p = new Light;		break;		// ���̗d��
		case 1:	p = new Darkness;	break;		// �ł̗d��
		case 2:	p = new Fire;		break;		// ���̗d��
		}
		p->intro();
		delete p;
		cout << endl;
	}
	return 0;
}

//******************************************************************************
