#include <iostream>
#include <string>
using namespace std;

#include "Monster.h"

int Monster::count = 0;

// �����t���R���X�g���N�^
Monster::Monster(string n) : name(n), num(++count)
{
	cout << "No." << num << "�F" << name << "���o�������I" << endl;
}

// �f�X�g���N�^
Monster::~Monster()
{
	cout << "No." << num << "�F" << name << "�͂ǂ����֍s�����I�I" << endl;
	count--;
}

// �f�[�^�\��
void Monster::showData()
{
	cout << "No." << num << "�F" << name << "����I" << endl;
}

// �R�s�[�R���X�g���N�^





void Monster::countMonster()
{
	cout << "���݂̃����X�^�[����" << count << "�C�ł��I" << endl;
}
