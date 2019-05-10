/***************************************************************************
 * @name: Main source code
 * @brief:
 * @author: Ivan Pavao Lozancic ivanplozancic@gmail.com
 * ************************************************************************/

#include<main.h>

#include<display.h>
#include<hardware.h>

void setup() {

  hardwareSetup();

}

void loop() {

  display.clear();

  displayUpdateRPM(millis());
  
  display.display();

}