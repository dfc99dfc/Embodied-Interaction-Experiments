#include <Servo.h>

const int trigPin = 4;
const int echoPin = 5;
const int LED1Pin = 2;
const int LED2Pin = 3;
const int servo1Pin = 12;
const int servo2Pin = 13;

Servo servo1;
Servo servo2;

unsigned long previousMillis = 0;
const long interval = 500;
int led1State = 0; // 0 means LED1 is off, 1 means LED1 is on
int led2State = 0; // 0 means LED2 is off, 1 means LED2 is on
int lastDistance = 0; // Variable to store the last detected distance

void setup() {
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
  pinMode(LED1Pin, OUTPUT);
  pinMode(LED2Pin, OUTPUT);
  servo1.attach(servo1Pin);
  servo2.attach(servo2Pin);
  Serial.begin(9600);
}

void loop() {
  // Ultrasonic Sensor
  long duration, distance;
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);
  duration = pulseIn(echoPin, HIGH);
  distance = duration * 0.034 / 2;
  Serial.print("Distance: ");
  Serial.print(distance);
  Serial.print(" cm, ");

  // Check if the distance is within 100cm
  if (distance < 100) {
    // Check for small changes in distance
    if (abs(distance - lastDistance) <= 10) {
      // If the difference is within 10cm, keep the previous chance
      Serial.println("Chance stays the same");
    } else {
      // Generate a new chance if the difference exceeds 10cm
      int chance = random(1, 6); // Generate a random number between 1 and 5
      lastDistance = distance; // Update the last detected distance

      // Print the chance
      Serial.print("Chance: ");
      Serial.print(chance);
      Serial.print(", ");

      // LED and Servo Control
      if (chance <= 4) {
        // 80% chance
        digitalWrite(LED1Pin, HIGH);
        digitalWrite(LED2Pin, LOW);
        servo1.write(180); // Set servo1 angle to 180 degrees
        servo2.write(90);  // Set servo2 angle to 90 degrees
        led1State = 1;      // Set LED1 state to on
        led2State = 0;      // Reset LED2 state
        Serial.println("LED1 On");
      } else {
        // 20% chance
        digitalWrite(LED1Pin, LOW);
        digitalWrite(LED2Pin, HIGH);
        if (led2State == 0) {
          // If LED2 was off, activate it and set servo angles
          servo1.write(90);  // Set servo1 angle to 90 degrees
          servo2.write(180); // Set servo2 angle to 180 degrees
          led1State = 0;      // Reset LED1 state
          led2State = 1;      // Set LED2 state to on
          Serial.println("LED2 On");
        }
      }
    }
  } else {
    // Distance exceeds 100 cm, reset everything
    digitalWrite(LED1Pin, LOW);
    digitalWrite(LED2Pin, LOW);
    servo1.write(180); // Set servo1 angle to 180 degrees
    servo2.write(90);  // Set servo2 angle to 90 degrees
    led1State = 0;     // Reset LED1 state
    led2State = 0;     // Reset LED2 state
    Serial.println("LEDs Off");
  }

  delay(500); // Interval between each loop iteration
}
