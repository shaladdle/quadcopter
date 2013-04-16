#ifndef BrushlessDC_h
#define BrushlessDC_h

#include "Arduino.h"
#include <Servo.h>

class BrushlessDC {
    private:
        Servo servo;
        int pin;
        float speed;
    public:
        static const int ArmSpeed = 20;
        static const int MinSpeed = ArmSpeed;
        static const int MaxSpeed = 100;
        static const int Headroom = 100;
        BrushlessDC(int _pin);
        void Arm();
        void SetSpeed(float new_speed);
};

#endif
