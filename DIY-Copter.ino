#include<Servo.h>

#define ESC_PIN 3

int angle1;
int angle2;
int angle3;
int angle4;

Servo esc;
Servo servo1;
Servo servo2;
Servo servo3;
Servo servo4;

void setup() 
{
  esc.attach(ESC_PIN,  1000, 2000);
  esc.write(180);
  delay(5000);
  esc.write(0);
  delay(2000);
  esc.write(10);  
}

void loop() 
{
  servo1.write(angle1);
  servo2.write(angle2);
  servo3.write(angle3);
  servo4.write(angle4);
  delay(15);
}
