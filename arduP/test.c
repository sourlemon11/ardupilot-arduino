#include<stdio.h>
#include<stdlib.h>

struct Pins{
     int ultrasonicPins[4];
     int lightPins[4][2];
     int moisturePins[2];
     int ardu2arduPins[2];
};

struct Values{
    float lightPinVals[4][2];
    float moisturePinVals[2];
    float ultrasonicPinVals[4];
};

float * readAnalogPins(int *pins,int n)
{
    float *pinVal=malloc(4 * sizeof(float) + 1);
    float l=3423.43;
    pinVal[0]=l;

    printf("THIS IS %d",*pins);

    return pinVal;
};

int main()
{
    struct Pins Pins1

    float *PP=readAnalogPins();
    return 0;
};
