#include <toneAC.h>

#define PIEZO_PIN 9
#define LED_PIN 13 
#define MOTION_SENSOR_PIN 2

void setup() {
  pinMode(PIEZO_PIN, OUTPUT);
  pinMode(LED_PIN, OUTPUT);
  pinMode(MOTION_SENSOR_PIN, INPUT);
}

void loop() {
  if (digitalRead(MOTION_SENSOR_PIN) == HIGH) {
    // Motion detected, play a tone with LED flash
    playNokiaTuneWithFlash();
    delay(1000);  // Pause to avoid continuous triggering
  }
}

void playNokiaTuneWithFlash() {
  // Define the notes and their durations for the Nokia tune
  int melody[] = {784, 698, 440, 494, 698, 660, 349, 392, 588, 524, 330, 394, 524};
  int noteDurations[] = {6, 6, 12, 12, 8, 8, 12, 12, 8, 8, 12, 12, 36};

  // Iterate over the notes and play the Nokia tune with LED flash
  for (int i = 0; i < sizeof(melody) / sizeof(melody[0]); i++) {
    toneAC(melody[i], noteDurations[i] * 200); // Play the note
    digitalWrite(LED_PIN, HIGH);              // Turn on the LED
    delay(noteDurations[i] * 20 * 1.1);        // Pause between notes
    digitalWrite(LED_PIN, LOW);               // Turn off the LED
    delay(80);  // A small delay for a short pause between LED on and off
  }
  noToneAC(); // Turn off the buzzer at the end
  delay(1000); // Pause before playing again
}
