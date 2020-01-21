#include <iostream>
using namespace std;

#include "Lesson.h"
#include "Listener.h"

class Listener;

Lesson::Lesson(char* n, int i) : name(n), id(i)
{
	cout << name << "�̐搶������Ă����I" << endl;
}

Lesson::~Lesson()
{
	cout << name << "�̐搶�͂ǂ����֍s�����I" << endl;
}

void Lesson::addListener(Listener* listener)
{
	for (auto& item : listeners) {
		if (listener->getName() == item->getName()) {	// �A�h���X��r
			cout << "���łɓo�^�ς݂ł��I" << endl;
			return;
		}
	}
	listeners.push_back(listener);
	cout << name << "�ɓo�^���܂����I" << endl;
}

void Lesson::notifyListener()
{
	cout << "<<<" << name << "���n�߂܂��I>>>" << endl;
	for (auto& item : listeners) {
		item->notify(this);
	}
}

GameDesign::GameDesign() : Lesson("�Q�[�����", LID_GD)
{
	cout << "�u����ɂ��́I�I�v" << endl;
}

CGDesign::CGDesign() : Lesson("�Q�[��CG", LID_CG)
{
	cout << "�uBonjour�I�I�v" << endl;
}

GamePG::GamePG() : Lesson("�Q�[���v���O����", LID_PG)
{
	cout << "�u���������������I�I�v" << endl;
}
