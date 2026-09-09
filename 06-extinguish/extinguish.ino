#include <OneWire.h>
#include <DallasTemperature.h>

const int LED1_PIN = 11;        // Connect LED set 1 to digital pin 3
const int LED2_PIN = 9;        // Connect LED set 2 to digital pin 4
const int LED3_PIN = 5;        // Connect LED set 3 to digital pin 5
const int LED4_PIN = 6;        // Connect LED set 4 to digital pin 6
const int LED5_PIN = 3;        // Connect LED set 5 to digital pin 3

OneWire oneWire(10);  // Connect the DS18B20 to digital pin 10
DallasTemperature sensors(&oneWire);

void setup() {
  // Initialize pins
  pinMode(LED1_PIN, OUTPUT);
  pinMode(LED2_PIN, OUTPUT);
  pinMode(LED3_PIN, OUTPUT);
  pinMode(LED4_PIN, OUTPUT);
  pinMode(LED5_PIN, OUTPUT);

  // Initialize DS18B20 temperature sensor
  sensors.begin();

  // Initialize serial communication
  Serial.begin(9600);
}

void loop() {
  // Request temperature from DS18B20
  sensors.requestTemperatures();
  float temperature = sensors.getTempCByIndex(0);

  // Map temperature to LED brightness
  int brightness = map(temperature, 29, 35, 1, 255);      // Adjust these values based on testing

  // light the LED for each set
  lightLED(LED1_PIN, brightness);
  delay(map(brightness, 0, 255, 150, 0));

  lightLED(LED2_PIN, brightness);
  delay(map(brightness, 0, 255, 100, 0));

  lightLED(LED3_PIN, brightness);
  delay(map(brightness, 0, 255, 150, 0));

  lightLED(LED4_PIN, brightness);
  delay(map(brightness, 0, 255, 100, 0));

  lightLED(LED5_PIN, brightness);
  delay(map(brightness, 0, 255, 120, 0));

  // Print temperature to Serial Monitor for testing
  Serial.println(temperature);
  delay(10);  // Adjust the delay based on your needs
}

void lightLED(int pin, int brightness) {
  analogWrite(pin, brightness);
  delay(50);  // Adjust the delay for how long the LED stays on
  analogWrite(pin, 1);  // Turn off the LED
}
