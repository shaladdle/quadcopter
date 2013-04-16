#include "Servo.h"

#include <iostream>

using namespace std;

void Servo::attach(int pin) {
    _pin = pin;
    cout << "attaching servo to pin " << pin << endl;
}

void Servo::write(int pos) {
    cout << "writing " << pos << " to servo " << _pin << endl;
}
