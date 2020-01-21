//******************************************************************************
//
//
//		CPPKad15C�u���W�҂��s��A�ĂсI�v
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

#include "Monster.h"
#include "Container.h"

//******************************************************************************
//
//		main�֐�
//
//******************************************************************************

int main()
{
	srand((unsigned int)time(NULL));

	cout << "��������Ⴂ�I�����X�[�p�[ECC�ł��I�I" << endl;

	// �R���e�i�N���X�̐錾
	Queue<Monster>	line(10);

	while( 1 ) {
		// �f�[�^�̕\��
		cout << "���݂̃��W�҂��s��ł��I" << endl;
		for (int i = 0; i < line.count(); i++) {
			cout << line[i].getName() << endl;
		}
		cout << endl;

		// �R�}���h�I��
		cout << "�������܂����H�i0�F�q���Ăэ��ށA1�F���W��łA-1�F�X�������ށj��";
		int cmd;
		cin >> cmd;
		if (cmd < 0) break;

		switch (cmd) {
		case 0:			// �q���Ăэ���
			for (int i = 1 + rand() % 3; i > 0; i--) {
				Monster	m;
				cout << m.getName() << "������Ă����I";
				if (line.full()) {
					cout << "�����X�ɓ���Ȃ��I�c�O�I�I";
				}
				else {
					line.push(m);
				}
				cout << endl;
			}
			break;
		case 1:			// ���W��ł�
			if (line.empty()) {
				cout << "���q���񂪂��Ȃ��I�I" << endl;
			}
			else {
				Monster m = line.pop();
				cout << m.getName() << "�͋A���Ă������I�I" << endl;
			}
			break;
		}
		cout << endl;
	}
	cout << endl;

	return 0;
}

//******************************************************************************
