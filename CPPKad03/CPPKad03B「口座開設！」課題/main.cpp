//******************************************************************************
//
//
//		CPPKad03B�u�����J�݁I�v
//
//		�N���X�F
//		���@���F
//		�쐬���F
//
//
//******************************************************************************

#include <iostream>
#include <string>
using namespace std;

// �쐬���邱��
class Kouza {
private:
    int id;
    string name;
    int gold;

public:
    //�R���X�g���N�^
    Kouza()
    {
        cout << "Kouza �N���X�̃f�t�H���g�R���X�g���N�g���Ăяo����܂����I" << endl;
        id = 0;
        name = "���ݒ�";
        gold = 0;
    }

    //�����t���R���X�g���N�^
    Kouza(string n, int i, int g) {
        cout << "Kouza �N���X�̈����t���R���X�g���N�^���Ăяo����܂����I" << endl;
        name = n;
        id = i;
        gold = g;
    }

    //�f�X�g���N�^
    ~Kouza() {
        cout << "Kouza (" << name << ") �̃f�X�g���N�^���Ăяo����܂����I" << endl;
    }

    void setData(int i, string n, int g) {
        id = i;
        name = n;
        gold = g;
    }

    void showData() {
        cout << "�����ԍ�: " << id << endl;
        cout << "���`: " << name << endl;
        cout << "�����c��: " << gold << " �S�[���h" << endl;
    }
};

int main() {
    cout << "�̂ё��̌��������܂��I" << endl;
    Kouza nobita;
    nobita.showData();

    cout << endl;

    cout << "�̂ё��̌�������ݒ肵�܂�" << endl;
    nobita.setData(1234,"�̂ё�",0);
    nobita.showData();

    cout << endl;

    cout << "�X�l�v�̌��������܂��I" << endl;
    Kouza suneo("�X�l�v",5678,1000);
    suneo.showData();
    cout << endl;

    return 0;
}


//******************************************************************************
