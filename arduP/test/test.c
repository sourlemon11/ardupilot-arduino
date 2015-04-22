//#include<ultrasonic.h>
//#include<light-sensor.h>
//#include<moisture-sensor.h>
//#include<ardu2ardu.h>
#include<stdio.h>
#define NUM_ELEM(x) (sizeof (x) / sizeof (*(x)))

int ultrasonicPins[4];
int lightPins[2][4]={1,2,3,4,5,6,7,8};
int moisturePins[2];
int ardu2arduPins[2];
int *toPins;
int m=4;

// get the size of the array num elem rows * num elem columns
int nLight = NUM_ELEM(lightPins)*sizeof(lightPins[0]) / sizeof(lightPins[0][0]); 
int nMoisture = NUM_ELEM(lightPins); //get the size of the array
int nUltrasonic = NUM_ELEM(lightPins); //get the size of the array

float lightPinVals[2][4];
float moisturePinVals[2];
float ultrasonicPinVals[4];

//return pointer to array
void readAnalogPins(int *toPins,float *toPinVals,int nElem){ 
    int i;
    for(i=0; i<nElem; i++)
    {
        *(toPinVals+i)=(i+1)*2;
        printf("READPins: %d \n",*(toPins+i));
        printf("READPinsVALS: %f \n",*(toPinVals+i));
    };
};


int main()
{
    int i=1;
    //int *p=&lightPins[0][0];
    for(i=0; i < nLight; i++)
    {
        printf("LightPins pinMode: %d \n",*(*lightPins+i));
    }; 
    // 	Serial.begin(9600); 
    // Serial.println(SIZEOFPINS);
	//Serial.println("AHHHH");
	/*
	* Ultrasonic
	*/

	/*
	* Photovoltaic
	*/
    //toPins=&lightPins[0][0];
    //float *toLightPinVals=&lightPinVals[0][0];
    printf("size: %d\n",nLight); //check
    readAnalogPins(&lightPins[0][0],&lightPinVals[0][0],nLight);
    printf("AFTER FUNCTION READ PINS: %f\n",lightPinVals[0][0]);
    printf("AFTER FUNCTION READ PINS: %f\n",lightPinVals[0][1]);

	/*
	* Moisture
	*/

	/*
	* I2C
	*/
    return 0;
};
