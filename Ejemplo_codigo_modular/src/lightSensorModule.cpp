// archivo lightSensorModule.cpp
#include "lightSensorModule.h"
const int LIGHT_SENSOR_PIN = A0;

void lightSensorSetup() {
  pinMode(LIGHT_SENSOR_PIN, INPUT);
}

void lightSensorLoop() {
  // No hace nada en este ejemplo
}

int getLightSensorValue() {
  return analogRead(LIGHT_SENSOR_PIN);
}