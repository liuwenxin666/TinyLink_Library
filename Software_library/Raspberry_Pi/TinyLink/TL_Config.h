#ifndef TL_CONFIG_H
#define TL_CONFIG_H

#include "TL_Device_ID.h"

#define PLATFORM 4
#define BOARD 1003

#define SERIAL RPI_SERIAL
#define TIME RPI_TIME
#define TIMER RPI_TIMER

#define LED OUTLED
#define LED_DIGITAL_OUTPUT D17

#define LIGHT GROVE_LIGHT
#define LIGHT_ANALOG A0

#define TEMPERATURE DHT11
#define TEMPERATURE_DIGITAL_INPUT 2
#define TEMPERATURE_DIGITAL_OUTPUT 2

#define HUMIDITY DHT11
#define HUMIDITY_DIGITAL_INPUT 2
#define HUMIDITY_DIGITAL_OUTPUT 2

#define STORAGE RPI_SD

#define SOIL_HUMIDITY SOIL_MOISTURE_ANALOG
#define SOIL_HUMIDITY_ANALOG A2

#define GPS U_BLOX
#define GPS_UART_RX 10
#define GPS_UART_TX 8


#define PM25 SDS018
#define PM25_UART_RX 10
#define PM25_UART_TX 8

#define WIFI WIFI_USB

#define RELAY GROVE_RELAY
#define RELAY_DIGITAL_INPUT 3

#define VOICE VOICE_USB

#define DISPLAY GROVE_LCD_RGB

#endif
