#include "Rocket.h"

void Rocket::showData() {
    cout << "�R�� : " << fuel << endl;
    cout << "���x : " << speed << endl;
    cout << "���x : " << height << endl;
}

void Rocket::useFuel() {
    if (fuel > 0) {
        cout << "�R�����g�����I" << endl;
        speed += 5;
        fuel -= 1;
        cout << endl;
    }
    else {
    cout << "�R�����Ȃ��I" << endl;
    cout << endl;
    }
}

void Rocket::move() {
    cout << "�ړ����܂�" << endl;
    height += speed;
    cout << endl;
}