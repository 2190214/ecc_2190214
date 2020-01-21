#pragma once

#include <string>
using namespace std;

// Monster�N���X
class Monster
{
protected:
	string	name;						// ���O
	int		hp;							// �̗�
public:
	Monster(string n);					// �����t���R���X�g���N�^
	~Monster();							// �f�X�g���N�^
	void showData();					// �f�[�^�\��
	void intro();						// ���ȏЉ�
	void walk();						// �U������
	void sleep();						// ����

	void setName(string n) { name = n; }
	string getName() { return name; }
};

// SwimMonster�N���X
class SwimMonster : public Monster
{
public:
	SwimMonster(string n);				// �����t���R���X�g���N�^
	~SwimMonster();						// �f�X�g���N�^
	void swim();						// �j��
	void walk();						// �U������i�I�[�o�[���C�h�j
	void intro();						// ���ȏЉ�i�I�[�o�[���C�h�j
};
