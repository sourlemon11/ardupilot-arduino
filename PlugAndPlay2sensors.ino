// Ultrasonic - Library for HR-SC04 Ultrasonic Ranging Module.
// Rev.4 (06/2012)
// J.Rodrigo ( http://www.jra.so )
// more info at http://www.ardublog.com
// Wiki: https://github.com/elrodri/Ultrasonic-HC-SR04/wiki/Plug-&-Play

#include <Ultrasonic.h>

Ultrasonic ultrasonic1(5,6); // (Trig PIN,Echo PIN)
Ultrasonic ultrasonic2(3,4);  //(trig and echo)
void setup() {
  Serial.begin(9600);
  
}

void loop()
{
  Serial.print(ultrasonic1.Ranging(CM)); // CM or INC
  Serial.println(" cm1" );
  Serial.print(ultrasonic2.Ranging(CM)); // CM or INC
  Serial.println(" cm2" );
  delay(1000);
}
