/*
 * Light-Sensor.h - Library for managing the light sensor
 *
 **/
#ifndef Light_Sensor_h
#define Light_Sensor_h

#include "Arduino.h"

class Light_Sensor
{
	public:
		// Constructor
		Light_Sensor(uint8_t pins[]);
		//read the light for the given pin
		uint16_t readLight();
		//normalize the voltage output between 0 and 100
		uint8_t valueNormal(vMax,vMin);
	private:
		uint8_t _pins[];
}
