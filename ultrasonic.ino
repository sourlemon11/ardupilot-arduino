/*####################################################################
 FILE: ultrasonictheramin.ino
 VERSION: 1S0A
 PURPOSE: The magical ultrasonic Theramin annoyingly awesome!
 LICENSE: GPL v3 (http://www.gnu.org/licenses/gpl.html)

 GET UPDATES: https://www.virtuabotix.com/

 HISTORY:
 Joseph Dattilo (Virtuabotix LLC) - Version 1S0A (03/03/13)
 -first release.
#######################################################################*/

#include <Ultrasonic.h>
#include <Tone.h>
int myNote = 0;

//*****************CHANGE THIS STUFF*************
//*****************see what happens ;)***********
int myHighestNote=NOTE_G6;
int myLowestNote = NOTE_A4;

int myGreatestDistance = 30;
int myLowestDistance = 8;
//***********************************************

int myAudioRange = myHighestNote - myLowestNote;
int myWorkingRange = myGreatestDistance-myLowestDistance;

Tone notePlayer; //you may have to update your copy of the tone library for it to work on the new IDE



Ultrasonic ultrasonic(D2, D2, BUSA);

void setup()
{
  
	notePlayer.begin(BUSA.P2);
	
}

void loop()
{
  float inMsec;
  long microsec = ultrasonic.timing();

  inMsec = ultrasonic.convert(microsec, Ultrasonic::IN);
  
  if(inMsec >= myLowestDistance && inMsec <=myGreatestDistance)
  {
  inMsec = inMsec - 4;
  long myNote= (myWorkingRange/inMsec) * myAudioRange + myLowestNote;
  notePlayer.play(myNote);
  delay(50);
  }
  else
  {
    notePlayer.stop(); //if you want it to be even more annoying comment this line to get continues tones
  }
    
}

