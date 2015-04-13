//#include<ultrasonic.h>
//#include<light-sensor.h>
//#include<moisture-sensor.h>
//#include<ardu2ardu.h>
#include<stdio.h>
#include<Arduino.h>

int ultrasonicPins[]={5,6,7,8};
int lightPins[]={1,2,3,4};
int moisturePins[]={0};
int ardu2arduPins[]={0};

int SIZEOFPINS=sizeof(ultrasonicPins);


void setup(){
 	Serial.begin(9600); 
        // loop through all the arrays, and assign pins
        //for(int i=0;
        
};

void loop()
{
        Serial.println(SIZEOFPINS);
	Serial.println("AHHHH");
	/*
	* Ultrasonic
	*/

	/*
	* Photovoltaic
	*/


	/*
	* Moisture
	*/

	/*
	* I2C
	*/
};

void readAnalogPins(int *_pins)
{
  printf("pins: %d",_pins[1]);
};
