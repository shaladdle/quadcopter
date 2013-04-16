#ifndef __MYSERVO_H__
#define __MYSERVO_H__

class Servo {
    private:
        int _pin;
    public:
        void attach(int pin);
        void write(int pos);
};

#endif
