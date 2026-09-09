#define RCWL_PIN 7
#define TOUCH_SENSOR_PIN 8
#define LED_PIN 13

void setup() {
  pinMode(RCWL_PIN, INPUT);
  pinMode(TOUCH_SENSOR_PIN, INPUT);
  pinMode(LED_PIN, OUTPUT);

  Serial.begin(9600);
}

void loop() {
  int rcwlValue = digitalRead(RCWL_PIN);
  int touchValue = digitalRead(TOUCH_SENSOR_PIN);

  if (touchValue == HIGH) {
    // People detected, turn on the LED
    digitalWrite(LED_PIN, HIGH);
  } else {
    // No people detected, turn off the LED
    digitalWrite(LED_PIN, LOW);
  }

  if (rcwlValue == HIGH) {
    // Touch sensor touched, make the LED flash
    flashLED();
  }
}

void flashLED() {
  // Flash the LED with alternating fast and slow frequencies
  for (int i = 0; i < 3; i++) {
    digitalWrite(LED_PIN, HIGH);
    delay(10);  // Fast flash
    digitalWrite(LED_PIN, LOW);
    delay(10);
  }

  delay(500);  // Pause between fast and slow flashes

  for (int i = 0; i < 3; i++) {
    digitalWrite(LED_PIN, HIGH);
    delay(60);  // Slow flash
    digitalWrite(LED_PIN, LOW);
    delay(60);
  }
}
