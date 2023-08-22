//new commit
#include "SevSeg.h"
SevSeg sevseg; 
int analog_pin=A2;
void setup(){
    byte numDigits = 2;
    byte digitPins[] = {15,14};
    byte segmentPins[] = {6, 5, 2, 3, 4, 7, 8, 1};
    bool resistorsOnSegments = true;

    byte hardwareConfig = COMMON_CATHODE; 
    sevseg.begin(hardwareConfig, numDigits, digitPins, segmentPins, resistorsOnSegments);
    sevseg.setBrightness(100);
    
}
int i=0;
void loop(){
  int sensor=analogRead(analog_pin);
  int soc=(int)20*(5.0*sensor/1023);
        sevseg.setNumber(soc);
        sevseg.refreshDisplay();
        
        
                
}
