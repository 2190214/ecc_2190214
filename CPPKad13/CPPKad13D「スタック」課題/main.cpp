//******************************************************************************
//
//
//		CPPKad13D�u�X�^�b�N�v
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




// int�^�̗����i0�`99�j����
void myRand(int& data)
{
	data = rand() % 100;
}

// string�^�̗����i3�����̉p�啶���j����
void myRand(string& data)
{
	data = "";
	for (int i = 0; i < 3; i++) {
		data += 'A' + rand() % 26;
	}
}

//******************************************************************************
//
//		main�֐�
//
//******************************************************************************

int main()
{
	srand((unsigned int)time(NULL));

	// �R���e�i�N���X�̐錾
	Stack		s(5);
	int			data;

	// �f�[�^�̊i�[
	cout << "�f�[�^���i�[���܂��I" << endl;
	while (s.full() == false) {
		myRand(data);

		// �f�[�^���i�[����


		cout << "push�F" << data << endl;
	}
	cout << endl;

	// �f�[�^�̎��o��
	cout << "�f�[�^�����o���܂��I" << endl;
	while (s.empty() == false) {
		
		// �f�[�^�����o��


		cout << "pop�F" << data << endl;
	}
	cout << endl;

	return 0;
}

//******************************************************************************
