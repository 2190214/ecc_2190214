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
//#include "Monster.h"
#include <iostream>
#include <string>
using namespace std;

class Monster {
private:
    string name;
    int hp;

public:
    Monster();
    
    Monster(string n, int h);
    
    ~Monster();

    void showData();
    void walk();
    void sleep();
};

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
