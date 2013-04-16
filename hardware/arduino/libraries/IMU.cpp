#include "Arduino.h"

#include "IMU.h"

RazorIMU::RazorIMU() {
    Serial.begin(57600);

    // Wait for values to start coming in
    while (Serial.read() != '!');
    while (Serial.read() != '\n');
}

void RazorIMU::GetEulerAngles(float *roll, float *pitch, float *yaw) {
    // Wait for 'G' in "!ANG"
    while (Serial.read() != 'G');

    // Read data
    while (Serial.read() != ',');
    *roll = Serial.parseFloat();

    while (Serial.read() != ',');
    *pitch = Serial.parseFloat();

    while (Serial.read() != ',');
    *yaw = Serial.parseFloat();

    // Make sure we read the newline (will this read off the next line?)
    while (Serial.read() != '\n');
}
