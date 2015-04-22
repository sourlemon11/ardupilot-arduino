//#include<ultrasonic.h>
//#include<light-sensor.h>
//#include<moisture-sensor.h>
//#include<ardu2ardu.h>
#include<stdio.h>
#include<Arduino.h>
#define NUM_ELEM(x) (sizeof (x) / sizeof (*(x)))

uint8_t ultrasonicPins[4];
uint8_t lightPins[2][4]={1,2,3,4,5,6,7,8};
uint8_t moisturePins[2];
uint8_t ardu2arduPins[2];
uint8_t *toPins;

// get the size of the array num elem rows * num elem columns
uint8_t nLight = NUM_ELEM(lightPins)*sizeof(lightPins[0]) / sizeof(lightPins[0][0]); 
uint8_t nMoisture = NUM_ELEM(lightPins); //get the size of the array
uint8_t nUltrasonic = NUM_ELEM(lightPins); //get the size of the array

float lightPinVals[2][4];
float avgPinVal[4];
float moisturePinVals[2];
float ultrasonicPinVals[4];

// read each Pin val w/pointers.
void readAnalogPins(uint8_t *toPins,float *toPinVals,int nElem)
{
    int i;
    for(i=0; i<nElem; i++)
    {
        *(toPinVals+i) = analogRead(*(toPins+i));
    };
};

// take the average between two pin values 
float * avgTwoPinVal(float pinVals[][m],int n, int m)
{
    int j;
    float avgPinVal[m];
    
    for(j=0; j < m ; i++)
    {
        avgPinVal[j] = 0.5 * ( pinVals[j][0]+pinVals[j][1]);
    };
};

void setup(){
    uint8_t i=1;
    //set all pins with pointers
    for(i=0; i < nLight; i++)
    {
        pinMode(*(*lightPins+i),INPUT);
    }; 
};

void loop()
{
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

	/*
	* Moisture
	*/

	/*
	* I2C
	*/
};

int main()
{
    int i;
    for( i=0; i < nLight; i++)
    {
        printf("LIGHTPIN:%d \n",*lightPins[i]);
    }; 
    return 0;
};
