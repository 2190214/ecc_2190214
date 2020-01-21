//******************************************************************************
//
//
//		�v���C���[�N���X
//
//		�N���X�F
//		���@���F
//		�쐬���F
//
//
//******************************************************************************

#include <iostream>
#include <string>
#include <cstdlib>
using namespace std;

// �N���X��`�̃w�b�_�t�@�C��
#include "Player.h"

//******************************************************************************
//
//		BasePlayer�N���X
//
//******************************************************************************

// �f�X�g���N�^
BasePlayer::~BasePlayer()
{
	cout << "BasePlayer�i" << name << "�j�̃f�X�g���N�^���Ăяo����܂����I" << endl;
}

// ���ȏЉ�
void BasePlayer::intro()
{
	cout << "���O�F" << name << endl;
	cout << "�����F���΂̐��𗐐��Ō��߂܂��B" << endl;
}

// ���΂̐���Ԃ�
int BasePlayer::takeStone( int stoneNum )
{
	return 1 + (rand() % 3);
}

//******************************************************************************
//
//		UserPlayer�N���X
//
//******************************************************************************

// �f�X�g���N�^
UserPlayer::~UserPlayer()
{
	cout << "UserPlayer�i" << name << "�j�̃f�X�g���N�^���Ăяo����܂����I" << endl;
}

// ���ȏЉ�
void UserPlayer::intro()
{
	cout << "���O�F" << name << endl;
	cout << "�����F���Ȃ������삷��v���C���[�ł��B" << endl;
}

// ���΂̐���Ԃ�
int UserPlayer::takeStone( int stoneNum )
{
	cout << "�����܂����H�i1�`3�j";
	int	takeNum;
	cin >> takeNum;
	return takeNum;
}

//******************************************************************************
//
//		CompPlayer�N���X
//
//******************************************************************************

// �f�X�g���N�^
CompPlayer::~CompPlayer()
{
	cout << "CompPlayer�i" << name << "�j�̃f�X�g���N�^���Ăяo����܂����I" << endl;
}

// ���ȏЉ�
void CompPlayer::intro()
{
	cout << "���O�F" << name << endl;
	cout << "�����F�������������ł��B" << endl;
}

// ���΂̐���Ԃ�
int CompPlayer::takeStone( int stoneNum )
{
	switch (stoneNum) {
	case 1:
		return 1;
	case 2:
	case 3:
	case 4:
		return stoneNum - 1;
	case 6:
	case 7:
	case 8:
		return stoneNum - 5;
	default:
		return 1 + rand() % 3;
	}
}

//******************************************************************************
