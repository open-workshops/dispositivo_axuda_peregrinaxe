// archivo principal: main.ino
#include <Arduino.h>
#include "ledModule.h"
#include "lightSensorModule.h"
#include "lorawanModule.h"

void setup() {
  // Inicialización de los módulos
  ledSetup();
  lightSensorSetup();
  lorawanSetup();
}

void loop() {
  // Llamada a los módulos
  ledLoop();
  lightSensorLoop();
  lorawanLoop();
}