//#include<ultrasonic.h>
//#include<light-sensor.h>
//#include<moisture-sensor.h>
//#include<ardu2ardu.h>
#include<stdio.h>
#define NUM_ELEM(x) (sizeof (x) / sizeof (*(x)))

// PINS
const int ultrasonicPins[4];
const int lightPins[4][2]={{1,2},
                    {3,4},
                    {5,6},
                    {7,8}};
const int ledPins[4]={9,10,11,12};
const int moisturePins[2];
const int ardu2arduPins[2];
int m=4;

// NUMBER OF ELEMENTS
// get the size of the array num elem rows * num elem columns
int nLight = NUM_ELEM(lightPins)*sizeof(lightPins[0]) / sizeof(lightPins[0][0]); 
int nMoisture = NUM_ELEM(lightPins); //get the size of the array
int nUltrasonic = NUM_ELEM(lightPins); //get the size of the array

// VALUE OF PINS
float lightPinVals[4][2]={{1.5,2.5},
                          {1,2},
                          {4.3,3.2},
                          {6.7,2.1}};
float moisturePinVals[2];
float ultrasonicPinVals[4];
int ledPinStates[4];
float *toPinVals;

// AVERAGE FOR LIGHT PINS
float avglightVals[4];

// TIMING
long previousMillis;
long interval = 1000;

void readAnalogPins(const int *toPins,float *toPinVals,int nElem){ 
    int i;
    for(i=0; i<nElem; i++)
    {
        //*(toPinVals+i)=(i+1)*2;
        printf("READPins: %d \n",*(toPins+i));
        printf("READPinsVALS: %f \n",*(toPinVals+i));
    };
};

void avgTwoPinVal(float *toPinVals,float *toAvePinVals, int nElem)
{
    int i;
    nElem=nElem/2;
    
    for(i=0; i < nElem ; i++)
    {
        *(toAvePinVals+i) = 0.5 * (*(toPinVals+2*i)+*(toPinVals+2*i+1));
        //printf("Count: %d \n",i);
        //printf("toPinVals: %f \n",*(toPinVals+i));
        //printf("val 1 = %f \n",*(toPinVals+2*i+1));
        //printf("val 2 = %f \n",*(toPinVals+2*i));
        //printf("toAvePinVals: %f\n\n",*(toAvePinVals+i));
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
    avgTwoPinVal(&lightPinVals[0][0],&avglightVals[0],nLight);
    printf("AVE LIGHT PINS: %f",avglightVals[0]);
	/*
	* Moisture
	*/

	/*
	* I2C
	*/
    return 0;
};
