#define TOUCH_SENSOR_1 2
#define TOUCH_SENSOR_2 3
#define TOUCH_SENSOR_3 4
#define TOUCH_SENSOR_4 5

#define BUZZER_PIN_1 6
#define BUZZER_PIN_2 7
#define BUZZER_PIN_3 8
#define BUZZER_PIN_4 9

#define LED_PIN_1 10
#define LED_PIN_2 11
#define LED_PIN_3 12
#define LED_PIN_4 13

void setup() {
  pinMode(TOUCH_SENSOR_1, INPUT);
  pinMode(TOUCH_SENSOR_2, INPUT);
  pinMode(TOUCH_SENSOR_3, INPUT);
  pinMode(TOUCH_SENSOR_4, INPUT);
  
  pinMode(BUZZER_PIN_1, OUTPUT);
  pinMode(BUZZER_PIN_2, OUTPUT);
  pinMode(BUZZER_PIN_3, OUTPUT);
  pinMode(BUZZER_PIN_4, OUTPUT);

  pinMode(LED_PIN_1, OUTPUT);
  pinMode(LED_PIN_2, OUTPUT);
  pinMode(LED_PIN_3, OUTPUT);
  pinMode(LED_PIN_4, OUTPUT);

  // Set initial LED states to ON
  digitalWrite(LED_PIN_1, HIGH);
  digitalWrite(LED_PIN_2, HIGH);
  digitalWrite(LED_PIN_3, HIGH);
  digitalWrite(LED_PIN_4, HIGH);
}

void loop() {
  if (digitalRead(TOUCH_SENSOR_1) == HIGH) {
    buzz(BUZZER_PIN_1, 2000, 10);
    toggleLED(LED_PIN_1);
    delay(150);
  }

  if (digitalRead(TOUCH_SENSOR_2) == HIGH) {
    buzz(BUZZER_PIN_2, 1000, 10);
    toggleLED(LED_PIN_2);
    delay(150);
  }

  if (digitalRead(TOUCH_SENSOR_3) == HIGH) {
    buzz(BUZZER_PIN_3, 2000, 1);
    toggleLED(LED_PIN_3);
    delay(150);
  }

  if (digitalRead(TOUCH_SENSOR_4) == HIGH) {
    buzz(BUZZER_PIN_4, 3000, 10);
    toggleLED(LED_PIN_4);
    delay(150);
  }
}

void buzz(int buzzerPin, int frequency, int duration) {
  tone(buzzerPin, frequency);
  delay(duration);
  noTone(buzzerPin);
}

void toggleLED(int ledPin) {
  digitalWrite(ledPin, !digitalRead(ledPin));  // Toggle the LED state
}
