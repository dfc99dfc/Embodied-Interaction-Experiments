#include <Servo.h>

Servo myservo;  // Create a servo object to control the servo motor
int touchPin = 2;  // Define the touch sensor pin
int touchState = 0;  // Variable to store the touch sensor state
int angle = 0;  // Initial angle for the servo motor

void setup() {
  myservo.attach(9);  // Attach the servo motor to pin 9
  pinMode(touchPin, INPUT);  // Set touch sensor pin as input
}

void loop() {
  // Read the state of the touch sensor
  touchState = digitalRead(touchPin);

  // Check if touch sensor is activated
  if (touchState == HIGH) {
    // Move the servo motor to a specific angle (e.g., 90 degrees)
    angle = 180;
    myservo.write(angle);
    delay(100);  // Wait for 1 second
  } else {
    // Move the servo motor to another angle (e.g., 0 degrees)
    angle = 0;
    myservo.write(angle);
  }
}
