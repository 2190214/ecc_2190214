#pragma once

#include <string>
using namespace std;

// Monster�N���X�̒�`
class Monster
{
private:
	string	name;						// ���O
	int		num;						// �ԍ�

	static int	count;					// ���݂�����̐�
public:
	Monster(string n);					// �����t���R���X�g���N�^
	~Monster();							// �f�X�g���N�^
	void showData();					// �f�[�^�\��

	// �R�s�[�R���X�g���N�^



	static void countMonster();
};
