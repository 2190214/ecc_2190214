#pragma once

#include <string>
using namespace std;

// Monster�N���X
class Monster
{
private:
	string	name;						// ���O
	int		hp;							// �̗�
public:
	Monster();							// �R���X�g���N�^
	~Monster();							// �f�X�g���N�^
	void showData();					// �f�[�^�\��
	void intro();						// ���ȏЉ�
	void walk();						// �U������
	void sleep();						// ����

	void setName(string n) { name = n; }
	string getName() { return name; }
};

// FlyMonster�N���X



