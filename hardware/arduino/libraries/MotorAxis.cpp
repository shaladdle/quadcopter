#include <iostream>
#include "MotorAxis.h"

using namespace std;

MotorAxis::MotorAxis(int m1_pin, int m2_pin, float min) 
    : M1(m1_pin), M2(m2_pin), minSpeed(min) { }

void MotorAxis::Arm() {
    M1.Arm();
    M2.Arm();
}

// We assume the following equations apply:
// T (thrust) = m1 + m2
//    Note that this implies that the max speed is 2, since the motors
//    take speeds between 0 and 1
//
// R (ratio)  = m1/m2
//
// m1 and m2 are solved for by substitution of these two equations
void MotorAxis::Set(float T, float R) {
    float m1 = (T * R) / (R + 1);
    float m2 = T / (R + 1);

    cout << "m1, m2 = " << m1 << ", " << m2 << endl;

    M1.SetSpeed(m1);
    M2.SetSpeed(m2);
}
