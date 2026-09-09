#include <Wire.h>
#include <U8g2lib.h>
#include <Servo.h>

#define FLEX_SENSOR_PIN A0
#define SERVO_PIN 9
#define OLED_ADDRESS 0x3C

U8G2_SSD1306_128X32_UNIVISION_F_HW_I2C u8g2(U8G2_R0, /* reset=*/ U8X8_PIN_NONE);

Servo servo1;

void setup() {
  pinMode(FLEX_SENSOR_PIN, INPUT);
  servo1.attach(SERVO_PIN);
  u8g2.begin();
  Serial.begin(9600);
}

void loop() {
  int flexValue = analogRead(FLEX_SENSOR_PIN);
  int servoAngle = map(flexValue, 0, 1023, 0, 180);

  if (digitalRead(FLEX_SENSOR_PIN) == HIGH) {
    // Flex sensor triggered
    u8g2.clearBuffer();
    u8g2.setFont(u8g2_font_ncenB10_tr);
    u8g2.setCursor(0, 15);
    u8g2.print("Hanging in there");
    u8g2.setCursor(0, 30);
    u8g2.print(String(flexValue));
    u8g2.sendBuffer();
    servo1.write(servoAngle);
  } else {
    // Flex sensor not triggered
    u8g2.clearBuffer();
    u8g2.setFont(u8g2_font_ncenB10_tr);
    u8g2.setCursor(0, 15);
    u8g2.print("LOADED!");
    u8g2.setCursor(0, 30);
    u8g2.print(String(flexValue));
    u8g2.sendBuffer();
    delay(50);  // Adjust the delay for smoother text movement
  }

  // Print flex value to Serial Monitor
  Serial.println("Flex Value: " + String(flexValue));
}
