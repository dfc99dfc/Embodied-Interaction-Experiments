#include <U8g2lib.h>
#include <Wire.h>

#define BUTTON_YES_PIN    2
#define BUTTON_NO_PIN     4
#define BUTTON_NEXT_PIN   3

#define OLED_RESET 5
U8G2_SSD1306_128X32_UNIVISION_F_HW_I2C u8g2(U8G2_R0, OLED_RESET);

const char* textList[] = {"TERRORIST", "VIRUS", "BOY", "GIRL", "SHE", "HE", "THEY", "RACIST", "GHOST", "INFERIOR", "OUTSIDER", "PEST", "NOBODY", "TRASH", "DRUNK", "ADDICT", "CRIMINAL", "MURDER", 
"SLUT", "MISOGYNY", "COWARD", "ROBOT", "ALIEN", "CYBORG"};
const int textListSize = 24;
int currentTextIndex = 0;

void setup() {
  pinMode(BUTTON_YES_PIN, INPUT_PULLUP);
  pinMode(BUTTON_NO_PIN, INPUT_PULLUP);
  pinMode(BUTTON_NEXT_PIN, INPUT_PULLUP);

  u8g2.begin();
  Serial.begin(9600);  // Initialize serial communication
}

void loop() {
  handleButtons();
  displayText();
}

void handleButtons() {
  if (digitalRead(BUTTON_YES_PIN) == LOW) {
    Serial.println("YES Button Pressed");
    // Add your Yes button logic here
    u8g2.clearBuffer();
    u8g2.setFont(u8g2_font_profont17_tf);
    delay(100);
    u8g2.setCursor(0, 17);
    u8g2.print("You don't");
    u8g2.setCursor(0, 32);
    u8g2.print("EVEN know me!");
    u8g2.sendBuffer();
    delay(2000);  // Display for 2 seconds
  }

  if (digitalRead(BUTTON_NO_PIN) == LOW) {
    Serial.println("NO Button Pressed");
    // Add your Yes button logic here
    u8g2.clearBuffer();
    u8g2.setFont(u8g2_font_profont17_tf);
    delay(100);
    u8g2.setCursor(0, 17);
    u8g2.print("You don't");
    u8g2.setCursor(0, 32);
    u8g2.print("know me.");
    u8g2.sendBuffer();
    delay(2000);  // Display for 2 seconds
  }

  if (digitalRead(BUTTON_NEXT_PIN) == LOW) {
    Serial.println("NEXT Button Pressed");
    // Add your Next button logic here
    currentTextIndex = (currentTextIndex + 1) % textListSize;  // Move to the next text
    delay(150);  // Debounce delay
  }
}

void displayText() {
  u8g2.clearBuffer();
  u8g2.setFont(u8g2_font_profont22_tf);
  u8g2.setCursor(0, 27);
  u8g2.print(textList[currentTextIndex]);
  u8g2.print("?");
  u8g2.sendBuffer();
}
