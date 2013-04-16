#ifndef __BRUSHLESSDC_H__
#define __BRUSHLESSDC_H__

#include "../libtest/Servo.h"

void delay(int time);

class BrushlessDC {
    private:
        Servo servo;
        int pin;
        float speed;
    public:
        static const int ArmSpeed = 20;
        static const int Headroom = 120;
        static const int MinSpeed = ArmSpeed;
        static const int MaxSpeed = 160;
        BrushlessDC(int _pin);
        void Arm();
        void SetSpeed(float new_speed);
};

#endif
