#include<ultrasonic.h>
#include<light-sensor.h>
#include<moisture-sensor.h>
#include<ardu2ardu.h>

void setup(){
 	serial.begin(9600); 
	const uint8_t ultrasonicPins=[];
	const uint8_t lightPins=[];
	const uint8_t moisturePins=[];
	const uint8_t ardu2arduPins=[];
	int *p;
}

void loop()
{
	
	/*//////////////////////////////
	* Ultrasonic
	*///////////////////////////////

	/*//////////////////////////////
	* Photovoltaic
	*///////////////////////////////

	for(int i=0;i<sizeof(lightPins

	/*//////////////////////////////
	* Moistue
	*///////////////////////////////

	/*//////////////////////////////
	* I2C
	*///////////////////////////////
}

uint16_t readAnalogPins(int pins)
{
	uint16_t output;
	for(int i=0;i<sizeof(pins)/sizeof(uint8_t);i++)
	{
		p=pins[i];
		readAnalog(p);
	};
}
