//******************************************************************************
//
//
//		CPPKad15D�u�r���Ȃ��悤�I�iSTL�Łj�v
//
//		�N���X�F
//		���@���F
//		�쐬���F
//
//
//******************************************************************************

// �w�b�_�t�@�C���̃C���N���[�h
#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>



using namespace std;

#include "Sheep.h"
#include "List.h"

//******************************************************************************
//
//		main�֐�
//
//******************************************************************************

int main()
{
	cout << "�����͐��E�ɉH�΂���ECC�q��ł��I" << endl;
	cout << "���X�Ƃ���Ă���r�������Ȃ��ł��������I" << endl;
	cout << "ECC�q��̖��^�͂��Ȃ��̘r�ɂ������Ă��܂��I�I" << endl;
	cout << endl;

	srand((unsigned int)time(NULL));

	List<Sheep> sheepList;		// �r���X�g

	while( 1 ) {
		// �ꗗ�\��
		if (sheepList.empty()) {
			cout << "�r�����܂���I" << endl;
		}
		else {
			cout << "���݂Ȃ����Ă���r�����ł��B" << endl;
			for (int i = 0; i < sheepList.size(); i++) {
				sheepList[i].intro();
			}
		}
		cout << endl;

		// �s���I��
		Sheep	sheep;
		cout << "�ǂ����܂����H�i0�F�O�ɂȂ��A1�F���ɂȂ��A2:�݂�ȓ������A3:��������A-1�F�I���j��";
		int	cmd;
		cin >> cmd;
		if ( cmd < 0 ) break;

		// ���s
		switch (cmd) {
			case 0:	sheepList.push_front(sheep);	break;
			case 1:	sheepList.push_back(sheep);		break;
			case 2:	sheepList.clear();				break;
		}
		cout << endl;
	}

	return 0;
}

//******************************************************************************
