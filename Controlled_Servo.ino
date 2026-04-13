#include <Servo.h>
int x = A0;
Servo myservo; 

void setup()
{
  myservo.attach(4); //set servo control pin
  pinMode(A0, INPUT);
}

void loop()
{
  x=analogRead(A0); //read potentiometer value
  x=map(x, 0, 1023, 0, 180); //convert analog value to readabel servo value
  myservo.write(x); //set servo to new value
  delay(5);
}