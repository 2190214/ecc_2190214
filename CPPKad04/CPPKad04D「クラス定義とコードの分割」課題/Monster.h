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
    Monster();
    // �����t���R���X�g���N�^
    Monster(string n, int h);
    // �f�X�g���N�^
    ~Monster();
    // �f�[�^�\��
    void showData();
    // �U������
    void walk();

    // ����
    void sleep();
};

// �����o�֐��̃R�[�h
Monster::Monster() :name("���ݒ�"), hp(0) {
    cout << "Monster�N���X�̃R���X�g���N�^���Ăяo����܂����I" << endl;
    //name = "���ݒ�";
    //hp = 0;
}