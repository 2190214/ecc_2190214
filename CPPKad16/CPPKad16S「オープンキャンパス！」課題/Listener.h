#pragma once

#include <iostream>
using namespace std;

#include "Lesson.h"

class Listener
{
protected:
	char*	name;
public:
	Listener(char* n) : name(n) { cout << name << "������Ă����I" << endl; }
	virtual ~Listener() { cout << name << "�͂ǂ����֍s�����I" << endl; }
	virtual void notify(Lesson* lesson) = 0;
	char* getName() { return name; }
};

class nobita : public Listener
{
public:
	nobita() : Listener("�̂ё�") {}
	void notify(Lesson* lesson)
	{
		cout << "�ڂ��A" << name << "�B��낵���I";
		switch (lesson->getID()) {
		case Lesson::LID_GD:
			break;
		case Lesson::LID_CG:
			break;
		case Lesson::LID_PG:
			cout << "���̓v���O���������ӂȂ񂾁I�I";
			break;
		}
		cout << endl;
	}
};

class sizuka : public Listener
{
public:
	sizuka() : Listener("������") {}
	void notify(Lesson* lesson)
	{
		cout << "�킽���A" << name << "�B��낵���ˁI";
		switch (lesson->getID()) {
		case Lesson::LID_GD:
			break;
		case Lesson::LID_CG:
			cout << "CG���Ċy�����I�I";
			break;
		case Lesson::LID_PG:
			break;
		}
		cout << endl;
	}
};

class suneo : public Listener
{
public:
	suneo() : Listener("�X�l�v") {}
	void notify(Lesson* lesson)
	{
		cout << "�I���A" << name << "�B��낵���ȁI";
		switch (lesson->getID()) {
		case Lesson::LID_GD:
			cout << "�Q�[�����Ȃ�܂����āI�I";
			break;
		case Lesson::LID_CG:
			break;
		case Lesson::LID_PG:
			break;
		}
		cout << endl;
	}
};

class giant : public Listener
{
public:
	giant() : Listener("�W���C�A��") {}
	void notify(Lesson* lesson)
	{
		cout << "�I���l�A" << name << "�B��낵���ȁI";
		cout << "���`��A�ނ��������`���I�I";
		cout << endl;
	}
};

class dekisugi : public Listener
{
public:
	dekisugi() : Listener("�o�ؐ�") {}
	void notify(Lesson* lesson)
	{
		cout << "�ڂ��A" << name << "�B��낵���I";
		cout << "����Ȃ̊ȒP����I";
		cout << endl;
	}
};
