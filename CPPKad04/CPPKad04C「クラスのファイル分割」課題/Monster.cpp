#include "Monster.h"

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