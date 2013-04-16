// Controlling a servo position using a potentiometer (variable resistor) 
// by Michal Rinott <http://people.interaction-ivrea.it/m.rinott> 

#include <Servo.h> 

int pins[4] = {3, 5, 6, 9};
Servo servos[4];  // create servo object to control a servo 
 
int potpin = 0;  // analog pin used to connect the potentiometer
int val;    // variable to read the value from the analog pin 
 
void setup() 
{ 
  for (int i = 0; i < 4; i++) {
    servos[i].attach(pins[i]);
    servos[i].write(20);
  }
    delay(3000);
  for (int i = 0; i < 4; i++) {
    servos[i].write(160);
  }
    delay(4000);
  for (int i = 0; i < 4; i++) {
    servos[i].write(20);
  }
} 
 
void loop() 
{                     // waits for the servo to get there 
} 
