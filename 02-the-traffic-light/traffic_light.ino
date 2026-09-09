const int trigPin1 = 8;
const int echoPin1 = 9;
const int LED1Pin = 6;

const int trigPin2 = 10;
const int echoPin2 = 11;
const int LED2Pin = 7;

int ledState1 = LOW; // LOW is off, HIGH is on for LED1
int ledState2 = LOW; // LOW is off, HIGH is on for LED2

void setup() {
  pinMode(trigPin1, OUTPUT);
  pinMode(echoPin1, INPUT);
  pinMode(LED1Pin, OUTPUT);

  pinMode(trigPin2, OUTPUT);
  pinMode(echoPin2, INPUT);
  pinMode(LED2Pin, OUTPUT);

  Serial.begin(9600);
}

void loop() {
  // Ultrasonic Sensor 1
  long duration1, distance1;
  digitalWrite(trigPin1, LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin1, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin1, LOW);
  duration1 = pulseIn(echoPin1, HIGH);
  distance1 = duration1 * 0.034 / 2;

  // Ultrasonic Sensor 2
  long duration2, distance2;
  digitalWrite(trigPin2, LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin2, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin2, LOW);
  duration2 = pulseIn(echoPin2, HIGH);
  distance2 = duration2 * 0.034 / 2;

  Serial.print("Distance Sensor 1: ");
  Serial.print(distance1);
  Serial.println(" cm");

  Serial.print("Distance Sensor 2: ");
  Serial.print(distance2);
  Serial.println(" cm");

  // Perform logic for Sensor 1
  if (distance1 < 170) {
    // Your logic for LED1 here
    ledState1 = HIGH;
  } else {
    ledState1 = LOW;
  }

  // Perform logic for Sensor 2
  if (distance2 < 170) {
    // Your logic for LED2 here
    ledState2 = HIGH;
  } else {
    ledState2 = LOW;
  }

  // Check if both sensors are within 10cm
  if (distance1 < 10 && distance2 < 10) {
    // Keep the LED states the same
  }

  digitalWrite(LED1Pin, ledState1);
  digitalWrite(LED2Pin, ledState2);

  delay(500); // Adjust the delay as needed
}
