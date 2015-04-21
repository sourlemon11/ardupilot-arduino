#include<stdio.h>
#include<stdlib.h>

int ultrasonicPins[4];
int lightPins[2][4];
int moisturePins[2];
int ardu2arduPins[2];

float lightPinVals[2][4];
float avgLightPinVals[4];
float moisturePinVals[2];
float ultrasonicPinVals[4];

float avgLight(float valLight[2])
{
    float avg=0.5*(valLight[1]+ (valLight[2]));
    return avg;
};

int main()
{
    lightPinVals[1][1]=2.3;
    lightPinVals[2][1]=2.5;
    avgLightPinVals[1]=avgLight(lightPinVals[2][1]);

    printf("= %d \n",*lightPinVals);
    printf("= %d \n",*(lightPinVals+1));
    printf("= %f \n",lightPinVals[1]);
    printf("avg vals = %f",avgLightPinVals[1]);
    
    //for(int i=0; i<2; i++)
    //{
    //    avgLightPinVals[1]=avgLight(lightPinVals[1][i]);
    //};
    return 0;
};
