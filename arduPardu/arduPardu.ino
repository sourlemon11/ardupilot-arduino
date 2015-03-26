//#include<ultrasonic.h>
//#include<light-sensor.h>
//#include<moisture-sensor.h>
//#include<ardu2ardu.h>
        const int ultrasonicPins[]={0};
	const int lightPins[]={0};
	const int moisturePins[]={0};
	const int ardu2arduPins[]={0};
	int *p;

void setup(){
 	Serial.begin(9600); 
        
};

void loop()
{
	
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

int readAnalogPins(int pins)
{
	int output;
	for(int i=0;i<sizeof(pins)/sizeof(uint8_t);i++)
	{
		p=pins[i];
                print("%d",p);
		//return output=analogRead(p);
	};
};
