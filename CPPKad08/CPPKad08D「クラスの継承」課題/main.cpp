//******************************************************************************
//
//
//		CPPKad08D�u�N���X�̌p���v
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

#include "Monster.h"

//******************************************************************************
//
//		main�֐�
//
//******************************************************************************

int main()
{
	srand((unsigned int)time(NULL));

	Monster	m;
	cout << endl;

	m.setName("���b�N��");
	cout << m.getName() << "�����ꂽ�I" << endl;

	while (1) {
		m.showData();
		cout << "�������܂����H�i0�F���ȏЉ�A1�F�U���A2�F����A-1�F�I���j";
		int	cmd;
		cin >> cmd;
		if (cmd < 0) break;
		switch (cmd) {
		case 0:	m.intro();	break;
		case 1:	m.walk();	break;
		case 2:	m.sleep();	break;
		}
		cout << endl;
	}
	cout << endl;

	return 0;
}

//******************************************************************************
