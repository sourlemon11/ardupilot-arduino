//#include<ultrasonic.h>
//#include<light-sensor.h>
//#include<moisture-sensor.h>
//#include<ardu2ardu.h>
#include<stdio.h>
//#include"Arduino.h"

struct Pins{
    const int ultrasonicPins[4];
    const int lightPins[4][2];
    const int moisturePins[2];
    const int ardu2arduPins[2];
    int *pval;

};

struct Values{
    float lightPinVals[4][2];
    float moisturePinVals[2];
    float ultrasonicPinVals[4];
};

//return pointer to array
float * readAnalogPins(const int *pins,int n)
{
    
    for(int i=0;i<n;i++)
    {
        printf("pins: %d\n",pins[i]);
        pval=valueOfPins;
    };
};

//int getNumberofElements(int array[])
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
    int n = sizeof(lightPins)/sizeof(lightPins[0]); //get the size of the array
    printf("size: %d\n",n); //check

    readAnalogPins(lightPins,n,lightPinVals);// read the all the analog pins inside the array



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

