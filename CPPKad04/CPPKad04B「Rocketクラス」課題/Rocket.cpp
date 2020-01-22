#include "Rocket.h"

void Rocket::showData() {
    cout << "”R—¿ : " << fuel << endl;
    cout << "‘¬“x : " << speed << endl;
    cout << "‚“x : " << height << endl;
}

void Rocket::useFuel() {
    if (fuel > 0) {
        cout << "”R—¿‚ðŽg‚Á‚½I" << endl;
        speed += 5;
        fuel -= 1;
        cout << endl;
    }
    else {
    cout << "”R—¿‚ª‚È‚¢I" << endl;
    cout << endl;
    }
}

void Rocket::move() {
    cout << "ˆÚ“®‚µ‚Ü‚·" << endl;
    height += speed;
    cout << endl;
}