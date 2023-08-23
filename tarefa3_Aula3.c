#include "Servo.h"

Servo meuservo;

int angulo= 0;
int sensorValue = 0;
int analogInPin = A0;

void setup() {
  meuservo.attach(9);
  Serial.begin(9600);
}

void loop() {
  sensorValue = analogRead(analogInPin);
  angulo = map(sensorValue, 0, 1023, 0, 180);
  meuservo.write(angulo);
  delay(15);
  Serial.println(angulo);
}