#include <iostream>
#include <string>
using namespace std;

class Rocket
{
private:
    int fuel;
    int speed;
    int height;

public:
    Rocket(int f, int s, int h) {
        cout << "�����t���R���X�g���N�^" << endl;
        fuel = f;
        speed = s;
        height = h;
        cout << "(fuel: " << fuel << ", speed: " << speed << ", height: " << height << ")" << endl;
        cout << endl;

        cout << "���P�b�g�����ꂽ�I" << endl;

    }

    ~Rocket() {
        cout << "���P�b�g����̂��ꂽ�I" << endl;
    }

    void showData();
    void useFuel();
    void move();
};