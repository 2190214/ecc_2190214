//******************************************************************************
//
//
//		CPPKad09A�u�Ύ��Q�[���A�v
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

#include "Player.h"

//******************************************************************************
//
//		main�֐�
//
//******************************************************************************

int main()
{
	// �����n��̐ݒ�
	srand( (unsigned int)time(NULL) );

	// �����̕\��
	cout << "20����΂����݂Ɏ���Ă����܂��B��x�Ɏ���΂̐���1�`3�ł��B" << endl;
	cout << "�Ō��1����������������ł��B" << endl;
	cout << endl;

	// ���
	UserPlayer		user("���Ȃ�");

	// ���i3��ނ̃v���C���[����I���ł���悤�ɂ���j
	//BasePlayer		comp("��{�v���C���[");
	//UserPlayer		comp("�����ЂƂ�̂��Ȃ�");
	CompPlayer		comp("HAL");
	cout << endl;

	// ���ȏЉ�
	user.intro();
	comp.intro();
	cout << endl;

	int	stone = 20;			// �΂̐�

	// ���C�����[�v
	while (1) {
		// ���Ȃ��̎��
		cout << "�c��" << stone << "�F";
		for (int i = 0; i < stone; i++) {
			cout << "��";
		}
		cout << endl;

		cout << user.getName() << "�̔Ԃł��B";
		int	take1 = user.takeStone(stone);
		cout << take1 << "���܂����I" << endl;
		stone -= take1;
		if (stone <= 0) {
			cout << user.getName() << "�̕����ł��I" << endl;
			cout << endl;
			break;								// while���𔲂���
		}
		cout << endl;

		// ����̎��
		cout << "�c��" << stone << "�F";
		for (int i = 0; i < stone; i++) {
			cout << "��";
		}
		cout << endl;

		cout << comp.getName() << "�̔Ԃł��B";
		int	take2 = comp.takeStone(stone);
		cout << take2 << "���܂����I" << endl;
		stone -= take2;
		if (stone <= 0) {
			cout << comp.getName() << "�̕����ł��I" << endl;
			cout << endl;
			break;								// while���𔲂���
		}
		cout << endl;
	}

	return 0;
}

//******************************************************************************
