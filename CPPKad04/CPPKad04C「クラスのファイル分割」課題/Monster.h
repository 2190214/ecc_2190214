#include <iostream>
#include <string>
using namespace std;

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