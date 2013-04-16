#include <Servo.h>

#include "Arduino.h"
#include "BrushlessDC.h"

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
    Serial.println(raw);
    servo.write(raw);
}
