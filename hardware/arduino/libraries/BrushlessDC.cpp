#include "BrushlessDC.h"

void delay(int time) { }

BrushlessDC::BrushlessDC(int _pin) : pin(_pin), speed(0) {
    servo.attach(_pin);
}

void BrushlessDC::Arm() {
    servo.write(BrushlessDC::ArmSpeed);
    delay(3000);
}

void BrushlessDC::SetSpeed(float new_speed) {
    speed = new_speed;

    int raw = BrushlessDC::MinSpeed;
    raw += (int)((float)BrushlessDC::Headroom * speed);

    if (raw > BrushlessDC::MaxSpeed)
        raw = BrushlessDC::MaxSpeed;

    servo.write(raw);
}
