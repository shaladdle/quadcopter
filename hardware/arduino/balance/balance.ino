#include <Servo.h>

#include "./BrushlessDC.h"
#include "./MotorAxis.h"
#include "./IMU.h"

#define M_A1_PIN 3
#define M_A2_PIN 5

#define M_B1_PIN 6
#define M_B2_PIN 9

MotorAxis A(M_A1_PIN, M_A2_PIN);
MotorAxis B(M_B1_PIN, M_B2_PIN);

RazorIMU imu;

void setup()
{ 
    Serial.begin(57600);
    while (Serial.available() <= 0);
    Serial.println("Arming motors");
    // Arm all motors
    A.Arm();
    B.Arm();
    
    Serial.println("Done arming, setting speeds");
    
    A.SetAndBalance(0.5);
    B.SetAndBalance(0.5);
    
    Serial.println("Done");
} 

void loop()
{
  /*
    float roll, pitch, yaw;
    imu.GetEulerAngles(&roll, &pitch, &yaw);

    // Do trig here to compute the right angles
    float angleA, angleB;
    angleA = yaw;
    angleB = yaw;

    A.SetAndBalance(angleA);
    B.SetAndBalance(angleB);
    */
} 
