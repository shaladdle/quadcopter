#include <iostream>
#include "../libraries/MotorAxis.h"

using namespace std;

int main(int argc, char *argv[]) {
    MotorAxis axis(0, 1, 0.3);
    axis.Set(2, 100);
}
