#include <iostream>
using namespace std;

#include "SceneTitle.h"
#include "SceneGame.h"

SceneTitle::SceneTitle() : count(0)
{
	cout << "�^�C�g����ʂ̃R���X�g���N�^���Ăяo����܂����I" << endl;
}

SceneTitle::~SceneTitle()
{
	cout << "�^�C�g����ʂ̃f�X�g���N�^���Ăяo����܂����I" << endl;
}

IScene* SceneTitle::update()
{
	cout << "�^�C�g����ʂ̍X�V�����ł��I" << endl;
	cout << "�ǂ����܂����H�i0�F������A1�F�Q�[����ʂցA-1�F�I���j";
	int cmd;
	cin >> cmd;

	IScene* pNext = nullptr;
	switch (cmd) {
	case 0:	pNext = this;			break;
	case 1:	pNext = new SceneGame;	break;
	}
	if (pNext != this) delete this;

	cout << "�^�C�g����ʂ�" << ++count << "��X�V���܂����I" << endl;
	return pNext;
}

void SceneTitle::draw()
{
	cout << "�^�C�g����ʂ�`�悵�܂��I" << endl;
}
