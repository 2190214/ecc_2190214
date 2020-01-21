#include <iostream>
using namespace std;

#include "Sheep.h"

static char *nameData[] = {
	"�s�^�S���X",
	"�A���L���f�X",
	"�G���X�g�e�l�X",
	"���[�N���b�h",
	"�t�B�{�i�b�`",
	"�f�J���g",
	"�t�F���}�[",
	"�p�X�J��",
	"�I�C���[",
	"���v���X",
	"�t�[���G",
	"�K�E�X",
	"�h�E�����K��",
	"�u�[��",
	"���[�}��",
	"�|�A���J��",
	"���b�Z��",
	"�j���[�g��",
	"�e�C���[",

	"�P�v���[",
	"�K�����I",
	"�{�C��",
	"�t�b�N",
	"�z�C�w���X",
	"�x���k�C",
	"���O�����W��",
	"�t�@���f�[",
	"�W���[��",
	"�t�[�R�[",
	"�X�g�[�N�X",
	"�}�N�X�E�F��",
	"�}�b�n",
	"�����g�Q��",
	"�L�����[",
	"���U�t�H�[�h",
	"�A�C���V���^�C��",
};

#define NAME_MAX	(sizeof(nameData) / sizeof(char*))

int Sheep::rest = NAME_MAX;

// �R���X�g���N�^
Sheep::Sheep()
{
	// �������O���d�Ȃ�Ȃ��悤��
	int n = rand() % rest;
	name = nameData[n];
	rest--;
	nameData[n] = nameData[rest];

	nameData[rest] = name;
	if (rest == 0) rest = NAME_MAX;

	cout << name << "������Ă����I" << endl;
}

// �f�X�g���N�^
Sheep::~Sheep()
{
	//cout << name << "�͂ǂ����֍s�����I" << endl;
}

// ���ȏЉ��
void Sheep::intro()
{
	cout << name << "�u���F�`�I�v" << endl;
}
