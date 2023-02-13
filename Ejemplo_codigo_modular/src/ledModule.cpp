// archivo ledModule.cpp
#include "ledModule.h"

const int LED_PIN = 13;
bool ledState = false;

void ledSetup() {
  pinMode(LED_PIN, OUTPUT);
}

void ledLoop() {
  // No hace nada en este ejemplo
}

void toggleLed() {
  ledState = !ledState;
  digitalWrite(LED_PIN, ledState);
}