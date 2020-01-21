#pragma once

// ���N���X
class Pikmin
{
private:
	char*	name;			// ���O
	int		hp;				// �̗�
	int		attack;			// �U����
	int		speed;			// �f����
	int		exp;			// �o���l
	int		num;			// �s�N�~���ԍ�

	static int count;
public:
	Pikmin(char* n, int h, int a, int s);
	~Pikmin();
	void show();
	void fight();
	bool isAlive() { return (hp > 0); }
};

// �ԃs�N�~��
class RedPikmin : public Pikmin
{
public:
	RedPikmin() : Pikmin("�ԃs�N�~��", 3 + rand() % 5, 5 + rand() % 5, 3 + rand() % 5) {}
};

// ���s�N�~��
class YellowPikmin : public Pikmin
{
public:
	YellowPikmin() : Pikmin("���s�N�~��", 1 + rand() % 3, 1 + rand() % 3, 5 + rand() % 5) {}
};

// �s�N�~��
class BluePikmin : public Pikmin
{
public:
	BluePikmin() : Pikmin("�s�N�~��", 5 + rand() % 5, 3 + rand() % 5, 1 + rand() % 3) {}
};

// �s�N�~���Ǘ��N���X




