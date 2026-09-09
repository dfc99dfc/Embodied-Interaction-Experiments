#include <Servo.h>

const int pirPin = 7;   // PIR sensor signal pin
const int servoPin = 8; // Servo motor control pin
const int ledPin = 13;  // LED pin

Servo servo;

void setup() {
  pinMode(pirPin, INPUT);
  pinMode(ledPin, OUTPUT);
  servo.attach(servoPin);
  Serial.begin(9600);
}

void loop() {
  if (digitalRead(pirPin)) {
    // Motion detected
    Serial.println("Motion detected!");
    servo.write(0); // Set servo1 angle to 180 degrees
    digitalWrite(ledPin, HIGH);
  }
  else {
    Serial.println("Motion not detected.");
    servo.write(180); // Set servo1 angle to 0 degree
    digitalWrite(ledPin, LOW);
  }
  delay(100); // Wait for
}
