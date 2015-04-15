//#include<ultrasonic.h>
//#include<light-sensor.h>
//#include<moisture-sensor.h>
//#include<ardu2ardu.h>
#include<stdio.h>
#include<Arduino.h>

int ultrasonicPins[]={5,6,7,8};
int lightPins[]={1,2,3,4};
double lightPinVal[sizeof(lightPins)]={0};
int moisturePins[]={0};
int ardu2arduPins[]={0};

int SIZEOFPINS=sizeof(ultrasonicPins);
int *pval;

int readAnalogPins(int pins[],int n,int valueOfPin[])
{
    pval=valueOfPin[]
    for(int i=0;i<n;i++)
    {
        pval=analogRead(pins[i]);
    };
};

void setup(){
 	Serial.begin(9600); 
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

    int n = sizeof(lightPins)/sizeof(lightPins[0]); //get the size of the array

    readAnalogPins(lightPins,n);// read the all the analog pins inside the array


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
