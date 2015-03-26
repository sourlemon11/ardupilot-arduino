/*
 * Light_Sensor.cpp
 */

#include "Light_Sensor.h"

//Class:Constructor Light_Sensor, actual values used in main
Light_Sensor::Light_Sensor(const int pins[])
{
	_pins=pins;
}

//Now use functions of contructor inherited by class
Light_Sensor::readLight()
{
	for(int i=0;i<sizeof(_pins))
	{
		analogRead(_pins[i]);
	{
}
