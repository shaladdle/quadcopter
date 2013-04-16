#ifndef MotorAxis_h
#define MotorAxis_h

#include "./BrushlessDC.h"

class MotorAxis {
    private:
        BrushlessDC M1;
        BrushlessDC M2;
        float minSpeed;
    public:
        MotorAxis(int m1_pin, int m2_pin, float min);
        void Set(float power, float ratio);
        void Arm();
};

#endif
