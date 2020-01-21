//******************************************************************************
//
//
//		CPPKad03D�u�R���X�g���N�^�ƃf�X�g���N�^�v
//
//		�N���X�F
//		���@���F
//		�쐬���F
//
//
//******************************************************************************

// �w�b�_�t�@�C���̃C���N���[�h
#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
using namespace std;

//------< class >---------------------------------------------------------------

class Monster
{
private:
	string	name;
	int		hp;
	int		attack;
public:
	void showData()
	{
		cout << "���O�F" << name << "�i�̗́F" << hp << "�A�U���́F" << attack << "�j" << endl;
	}

	void setName(string n) { name = (n == "") ? "�Q���Q��" : n; }
	void setHP(int h) { hp = (h > 0) ? h : 1000; }
	void setAttack(int a) { attack = (a > 0) ? a : 1; }
	string getName() { return name; }
	int getAttack() { return attack; }

	// �R���X�g���N�^



	// �f�X�g���N�^



};

//******************************************************************************
//
//
//		main�֐�
//
//
//******************************************************************************

int main()
{
	srand((unsigned int)time(NULL));

	// m1�̐ݒ�
	cout << "�s�J�`���E�����ꂽ�I" << endl;

	Monster		m1;

	// ������m1�̃f�[�^��\�����Ă݂�

	cout << "�s�J�`���E�̃f�[�^��ݒ肵�܂��B" << endl;
	m1.setName("�s�J�`���E");
	m1.setHP(1 + rand() % 10);
	m1.setAttack(100 + rand() % 50);
	m1.showData();
	cout << endl;

	// m2�̐ݒ�
	cout << "�f�B�A���K�����ꂽ�I" << endl;

	Monster		m2;

	// ������m2�̃f�[�^��\�����Ă݂�

	cout << "�f�B�A���K�̃f�[�^��ݒ肵�܂��B" << endl;
	m2.setName("�f�B�A���K");
	m2.setHP(1000);
	m2.setAttack(1000);
	m2.showData();
	cout << endl;

	return 0;
}

//******************************************************************************
