#pragma once

#include <string>
using namespace std;

#include "Monster.h"

class Trainer
{
private:
	string			name;					// ���O
	Monster			*pm;					// �����Ă��郂���X�^�[
public:
	Trainer( string n );					// �����t���R���X�g���N�^				
	~Trainer();								// �f�X�g���N�^
	void intro();							// ���ȏЉ�֐�

	// �R�s�[�R���X�g���N�^




};
