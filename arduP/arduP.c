//#include<ultrasonic.h>
//#include<light-sensor.h>
//#include<moisture-sensor.h>
//#include<ardu2ardu.h>
#include<stdio.h>
//#include"Arduino.h"

//enum allPins{
    int ultrasonicPins[]={5,6,7,8};
    int lightPins[]={1,2,3,4};
    int moisturePins[]={0};
    int ardu2arduPins[]={0};
//};


int readAnalogPins(int pins[],int n)
{
    printf("%d",sizeof(pins)/sizeof(int));
    for(int i=0;i<sizeof(pins)/sizeof(int);i++)
    {
        printf("pins: %d\n",pins[i]);
    };
};

//int getNumerofElements(int array[])
//{
//    int n=0; //indices
//    int i=0; //counter
//    while(n!=NULL)
//    {   
//        n=array[i]
//        i++;
//    };
//    return n;
//};
//
int main(int argc, char *argv[])
{
   // Serial.println(SIZEOFPINS);
	//Serial.println("AHHHH");
	/*
	* Ultrasonic
	*/

	/*
	* Photovoltaic
	*/
    int *p=lightPins;
    printf("%d\n",sizeof(lightPins)/sizeof(int));

    readAnalogPins(lightPins,4);//

	/*
	* Moisture
	*/

	/*
	* I2C
	*/
    return 0;
}

void setup(){
// 	Serial.begin(9600); 
        // loop through all the arrays, and assign pins
        //for(int i=0;
        
};

void loop()
{
   // Serial.println(SIZEOFPINS);
	//Serial.println("AHHHH");
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

