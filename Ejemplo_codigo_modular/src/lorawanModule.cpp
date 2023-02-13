// archivo lorawanModule.cpp
#include "lorawanModule.h"
#include "lightSensorModule.h"
#include <TTN_esp32.h>

const char *devEui = "YOUR_DEV_EUI";
const char *appEui = "YOUR_APP_EUI";
const char *appKey = "YOUR_APP_KEY";

TTN_esp32 ttn;
unsigned long previousMillis = 0;
const long interval = 60 * 1000; // Envío cada 60 segundos

void lorawanSetup() {
  ttn.begin();
}

void lorawanLoop() {
  unsigned long currentMillis = millis();

  if (currentMillis - previousMillis >= interval) {
    previousMillis = currentMillis;

    if (ttn.isJoined()) {
      int lightSensorValue = getLightSensorValue();
      ttn.sendBytes((uint8_t*)&lightSensorValue, sizeof(lightSensorValue));
    } else {
      ttn.join(devEui, appEui, appKey);
    }
  }
}