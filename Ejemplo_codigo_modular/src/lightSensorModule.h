// archivo lightSensorModule.h
#ifndef LIGHT_SENSOR_MODULE_H
#define LIGHT_SENSOR_MODULE_H

#include <Arduino.h>

void lightSensorSetup();
void lightSensorLoop();
int getLightSensorValue();

#endif
