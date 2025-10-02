#include <Arduino.h>
#include <OneButton.h>

#define LED_PIN 5      
#define BUTTON_PIN 4   
OneButton button(BUTTON_PIN, true); 

bool ledState = false;      
bool blinkMode = false;      
unsigned long lastToggle = 0;

void toggleLED() {
  blinkMode = false;
  ledState = !ledState;
  digitalWrite(LED_PIN, ledState ? HIGH : LOW);
}
void setBlinkMode() {
  blinkMode = !blinkMode;
  if (!blinkMode) {
    digitalWrite(LED_PIN, ledState ? HIGH : LOW);
  }
}

void setup() {
  pinMode(LED_PIN, OUTPUT);
  pinMode(BUTTON_PIN, INPUT_PULLUP);
  button.attachClick(toggleLED);
  button.attachDoubleClick(setBlinkMode);
}
void loop() {
  button.tick();
  if (blinkMode) {
    if (millis() - lastToggle > 1000) {  
      lastToggle = millis();
      ledState = !ledState;
      digitalWrite(LED_PIN, ledState ? HIGH : LOW);
    }
  }
}
