#include <iostream>
using namespace std;

#include "Trainer.h"

// �����t���R���X�g���N�^
Trainer::Trainer( string n ) : name(n), pm(0)
{
	cout << name << "�����ꂽ�I" << endl;

	// �����X�^�[�Q�b�g



}

// �f�X�g���N�^
Trainer::~Trainer()
{
	cout << name << "�������Ă������I" << endl;

	// �����X�^�[���



}
// ���ȏЉ�֐�
void Trainer::intro()
{
	cout << "�ڂ���" << name << "�B";
	if ( pm ) {
		cout << "�ڂ��̃|�P�������Љ���B" << endl;
		pm->intro();
	}
	else {
		cout << "�܂��A�|�P�����������ĂȂ��񂾁B" << endl;
	}
}

// �R�s�[�R���X�g���N�^





