#include "Rocket.h"

void Rocket::showData() {
    cout << "燃料 : " << fuel << endl;
    cout << "速度 : " << speed << endl;
    cout << "高度 : " << height << endl;
}

void Rocket::useFuel() {
    if (fuel > 0) {
        cout << "燃料を使った！" << endl;
        speed += 5;
        fuel -= 1;
        cout << endl;
    }
    else {
    cout << "燃料がない！" << endl;
    cout << endl;
    }
}

void Rocket::move() {
    cout << "移動します" << endl;
    height += speed;
    cout << endl;
}