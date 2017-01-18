/*
  Controlling a servo position using a potentiometer (variable resistor)
  by Michal Rinott <http://people.interaction-ivrea.it/m.rinott>

  modified on 8 Nov 2013
  by Scott Fitzgerald
  http://www.arduino.cc/en/Tutorial/Knob
*/

#include <Servo.h>

Servo myservo;  // create servo object to control a servo

int potpin = 0;  // analog pin used to connect the potentiometer
int val;    // variable to read the value from the analog pin

void setup() {
  myservo.attach(9);  // attaches the servo on pin 9 to the servo object
}

void loop() {
  myservo.write(0);

  for (int i = 0; i < 179; i++)
  {
    myservo.write(i);
    delay(30);
    if (i % 10 == 0)
    {
      delay(300);
    }
  }
  delay(2000);
  for (int i = 179; i > 0; i--)
  {
    myservo.write(i);
    delay(30);
    if (i % 10 == 0)
    {
      delay(300);
    }
  }

  


}

