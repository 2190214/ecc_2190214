#include <iostream>
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

void PikminManager::show()
{
	cout << "�s�N�~���̃f�[�^��\�����܂��I" << endl;
	for (auto p : pikmins) p->show();
}

void PikminManager::search()
{
	cout << "�s�N�~����T���܂��I" << endl;
	int n = rand() % 4;
	if (n == 0) {
		cout << "�E�E�E����Ȃ������I�I" << endl;
		return;
	}
	for (int i = 0; i < n; i++) {
		Pikmin* p = nullptr;
		switch (rand() % 3) {
		case 0:	p = new RedPikmin;		break;
		case 1:	p = new YellowPikmin;	break;
		case 2:	p = new BluePikmin;		break;
		}
		pikmins.push_back(p);
	}
}

void PikminManager::fight()
{
	cout << "�s�N�~���������Ɛ�����I�I" << endl;
	auto it = pikmins.begin();
	while (it != pikmins.end()) {
		(*it)->fight();
		if ((*it)->isAlive()) {
			it++;
		}
		else {
			delete (*it);				// Pikmin�̃N���A
			it = pikmins.erase(it);		// �m�[�h�̃N���A
		}
	}
}

PikminManager::~PikminManager()
{
	for (auto p : pikmins) delete p;	// �SPikmin�̃N���A
	pikmins.clear();					// �S�m�[�h�̃N���A
}

//******************************************************************************
