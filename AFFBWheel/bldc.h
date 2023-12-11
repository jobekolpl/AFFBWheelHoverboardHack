#pragma once

#include <Arduino.h>
#include "config.h"
#include <digitalWriteFast.h>


#define HOVER_SERIAL_BAUD   115200     // [-] Baud rate for HoverSerial (used to communicate with the hoverboard)
#define START_FRAME         0xABCD       // [-] Start frme definition for reliable serial communication

void bldcSend(int16_t uSteer, int16_t uSpeed);
void bldcSetup();
