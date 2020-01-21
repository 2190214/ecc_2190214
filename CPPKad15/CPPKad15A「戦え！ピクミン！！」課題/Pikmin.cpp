#include <iostream>
#include <string>
using namespace std;

#include "Pikmin.h"

//******************************************************************************
//
//		Pikmin�N���X
//
//******************************************************************************

int Pikmin::count = 0;

Pikmin::Pikmin(char* n, int h, int a, int s) : name(n), hp(h), attack(a), speed(s), exp(0), num(++count)
{
	cout << "No." << num << "�F" << name << "���������I" << endl;
}

Pikmin::~Pikmin()
{
	cout << "No." << num << "�F" << name << "�͂ǂ����֍s�����I" << endl;
}

void Pikmin::show()
{
	cout << "No." << num << "�F" << name << "�i�̗́F" << hp << "�A�U���́F" << attack << "�A�f�����F" << speed << "�A�o���l�F" << exp << "�j" << endl;
}

void Pikmin::fight()
{
	cout << "No." << num << "�F" << name << "�͉������U�������I�I";
	if (speed > rand() % 10) {
		int damage = 1 + rand() % attack;
		cout << "���������I������" << damage << "�_���[�W�^�����I�I" << endl;
		exp++;
	}
	else {
		int damage = 1 + rand() % 3;
		cout << "�͂��ꂽ�I��������" << damage << "�_���[�W�󂯂��I" << endl;
		hp -= damage;
		if (hp <= 0) {
			cout << "No." << num << "�F" << name << "�͗͐s�����E�E�E" << endl;
		}
	}
}

//******************************************************************************
//
//		PikminManager
//
//******************************************************************************





