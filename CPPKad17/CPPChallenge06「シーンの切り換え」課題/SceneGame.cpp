#include <iostream>
using namespace std;

#include "SceneTitle.h"
#include "SceneGame.h"

SceneGame::SceneGame() : count(0)
{
	cout << "�Q�[����ʂ̃R���X�g���N�^���Ăяo����܂����I" << endl;
}

SceneGame::~SceneGame()
{
	cout << "�Q�[����ʂ̃f�X�g���N�^���Ăяo����܂����I" << endl;
}

IScene* SceneGame::update()
{
	cout << "�Q�[����ʂ̍X�V�����ł��I" << endl;
	cout << "�ǂ����܂����H�i0�F������A1�F�^�C�g����ʂցA - 1�F�I���j";
	int cmd;
	cin >> cmd;

	IScene* pNext = nullptr;
	switch (cmd) {
	case 0:	pNext = this;			break;
	case 1:	pNext = new SceneTitle;	break;
	}
	if (pNext != this) delete this;

	cout << "�Q�[����ʂ�" << ++count << "��X�V���܂����I" << endl;
	return pNext;
}

void SceneGame::draw()
{
	cout << "�Q�[����ʂ�`�悵�܂��I" << endl;
}
