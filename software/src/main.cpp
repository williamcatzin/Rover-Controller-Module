//Includes required to use Roboclaw library
#include "RoboClaw.h"

RoboClaw roboclaw(&Serial2, 10000);



#define ROBOCLAW1 0x80
#define ROBOCLAW2 0x81
#define ROBOCLAW3 0x82

void setup() {
  //Open roboclaw serial ports
  roboclaw.begin(38400);
}

void loop() {
  roboclaw.ForwardM1(0x80, 64); //start Motor1 forward at half speed
  delay(2000);
  roboclaw.ForwardM1(0x80, 0); //start Motor1 forward at half speed
  delay(2000);

  roboclaw.ForwardM1(0x81, 64); //start Motor1 forward at half speed
  delay(2000);
  roboclaw.ForwardM1(0x81, 0); //start Motor1 forward at half speed
  delay(2000);

  roboclaw.ForwardM1(0x82, 64); //start Motor1 forward at half speed
  delay(2000);
  roboclaw.ForwardM1(0x82, 0); //start Motor1 forward at half speed
  delay(2000);  
}
