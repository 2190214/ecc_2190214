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
        cout << "引数付きコンストラクタ" << endl;
        fuel = f;
        speed = s;
        height = h;
        cout << "(fuel: " << fuel << ", speed: " << speed << ", height: " << height << ")" << endl;
        cout << endl;

        cout << "ロケットが作られた！" << endl;

    }

    ~Rocket() {
        cout << "ロケットが解体された！" << endl;
    }

    void showData();
    void useFuel();
    void move();
};