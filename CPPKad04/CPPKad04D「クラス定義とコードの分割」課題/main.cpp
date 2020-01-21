//******************************************************************************
//
//
//		CPPKad04D�u�N���X��`�ƃR�[�h�̕����v
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
using namespace std;

// �N���X��`
class Monster
{
private:
	string		name;		// ���O
	int			hp;			// �̗�
public:
	// �R���X�g���N�^
	Monster()
	{
		cout << "Monster�N���X�̃R���X�g���N�^���Ăяo����܂����I" << endl;
		name = "���ݒ�";
		hp = 0;
	}
	// �����t���R���X�g���N�^
	Monster(string n, int h)
	{
		cout << "Monster�N���X�̃R���X�g���N�^���Ăяo����܂����I" << endl;
		name = n;
		hp = h;
	}
	// �f�X�g���N�^
	~Monster()
	{
		cout << "Monster�N���X�̃f�X�g���N�^���Ăяo����܂����I" << endl;
	}

    void showData();
    void walk();
    void sleep();

};

// �����o�֐��̃R�[�h

// �f�[�^�\��
void Monster::showData()
{
    cout << name << "�̗̑͂́A" << hp << "�ł��B" << endl;
}

// �U������
void Monster::walk()
{
    if (hp > 0) {
        cout << "�Ă��Ă��E�E�E" << endl;
        hp--;
    }
    else {
        cout << "���ĕ����Ȃ���`" << endl;
    }
}

// ����
void Monster::sleep()
{
    cout << "���������E�E�E";
    int recover = rand() % 3;
    if (recover > 0) {
        cout << "�̗͂�" << recover << "�񕜂���!" << endl;
        hp += recover;
    }
    else {
        cout << "�悭����Ȃ������I" << endl;
    }
}



//******************************************************************************
//
//
//							<<< main�֐� >>>
//
//
//******************************************************************************

int main()
{
	Monster		m("�s�J�`���E", 5);

	while (1) {
		m.showData();
		cout << "�������܂����H�i0�F�U������@1�F����@-1:�I������j";
		int cmd;
		cin >> cmd;
		if (cmd < 0) break;

		switch (cmd) {
		case 0:	m.walk();		break;			// �U������
		case 1:	m.sleep();		break;			// ����
		}
		cout << endl;
	}

	cout << endl;
	return 0;
}

//******************************************************************************
