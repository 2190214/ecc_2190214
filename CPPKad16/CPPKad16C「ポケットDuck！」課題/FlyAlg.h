#pragma once

#include <iostream>
using namespace std;

// ���N���X
class FlyAlg
{
private:
	char*	name;
public:
	FlyAlg(char* n) : name(n) { cout << "�u" << name << "�v�𑕔����܂����I" << endl; }
	~FlyAlg() { cout << "�u" << name << "�v���������܂����I" << endl; }
	virtual void fly() = 0;
};

// ��ׂȂ�
class FlyAlg_NG : public FlyAlg
{
public:
	FlyAlg_NG() : FlyAlg("��ׂȂ�") {}
	void fly() { cout << "���`��A���܂��ׂȂ��I�I" << endl; }
};

// ���Ŕ��
class FlyAlg_Wing : public FlyAlg
{
public:
	FlyAlg_Wing() : FlyAlg("���Ŕ��") {}
	void fly() { cout << "�o�^�o�^�I���Ŕ��ł��܂��I�I" << endl; }
};

// �W�F�b�g���˂Ŕ��
class FlyAlg_Jet : public FlyAlg
{
public:
	FlyAlg_Jet() : FlyAlg("�W�F�b�g���˂Ŕ��") {}
	void fly() { cout << "�r���[���I�W�F�b�g���˂Ŕ��ł����܂����I�I" << endl; }
};

// ���[�v����
class FlyAlg_Warp : public FlyAlg
{
public:
	FlyAlg_Warp() : FlyAlg("���[�v����") {}
	void fly() { cout << "���󂪘c�񂾁I�ǂ����փ��[�v���܂����I�I" << endl; }
};
