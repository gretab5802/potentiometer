#include<Servo.h>
Servo servoOne;
int analogInPin = A0;
int potValue = 0;
int servoPin = 9;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  servoOne.attach(servoPin);
}

void loop() {
  // put your main code here, to run repeatedly:
  potValue = analogRead(analogInPin);
  int servoPos = map(potValue, 0, 1023, 0, 180);
  servoOne.write(servoPos);
  Serial.print("Potentiometer value is ");
  Serial.println(potValue);
}
