#include "Student.h"

// static�����o�ϐ��̐錾




// �R���X�g���N�^



// �f�X�g���N�^



// �f�[�^�ݒ�
void Student::setData(string n, int i)
{
	myName = n;
	id = i;
	cout << myName << "�̃f�[�^��ݒ肵�܂����I" << endl;
}

// �f�[�^�\��
void Student::showData()
{
	// �N���X����\������


	cout << "���@�O�@�F" << myName << endl;
	cout << "�w�Дԍ��F" << id << endl;
}

// className�̃Z�b�^�[



