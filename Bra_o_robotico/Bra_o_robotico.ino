#include <Servo.h>

#define joystick_X A0
#define joystick_Y A1
#define joystick2_X A2
#define joystick2_Y A3

Servo servoBase;
Servo servo1;
Servo servo2;
Servo servoGarra;

int pos = 0;    // variable to store the servo position

void setup() {
  servoBase.attach(3);  // attaches the servo on pin 9 to the servo object
  servoGarra.attach(5);
  servo1.attach(6);
  servo2.attach(9);

  servoBase.write(70);
  servoGarra.write(90);
  servo1.write(90);
  servo2.write(90);
}

void loop() {
  int base = analogRead(joystick_X);
  base = map(base, 0, 1023, 0, 180);
  servoBase.write(base);

  int Garra = analogRead(joystick_Y);
  Garra = map(Garra, 0, 1023, 90, 130);
  servoGarra.write(Garra);

  int serv1 = analogRead(joystick2_X);
  serv1 = map(serv1, 0, 1023, 50, 90);
  servo1.write(serv1);

  int serv2 = analogRead(joystick2_Y);
  serv2 = map(serv2, 0, 1023, 45, 135);
  servo2.write(serv2);

delay(150);
}
