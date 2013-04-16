#ifndef IMH_h
#define IMH_h

#include "Arduino.h"

class RazorIMU {
    private:
        void read();
    public:
        RazorIMU();
        void GetEulerAngles(float *_roll, float *_pitch, float *_yaw);
};

#endif
