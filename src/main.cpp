/***************************************************************************
 * @name: Main source code
 * @brief:
 * @author: Ivan Pavao Lozancic ivanplozancic@gmail.com
 * ************************************************************************/

#include<main.h>

#include<display.h>
#include<hardware.h>
#include<buttons.h>

void setup() {

  hardwareSetup();

}

void loop() {

  for(uint8_t i = 0; i <=255; i++){

  display.clear();

  //displayUpdateRPM(millis());
  readGearButton();

  displayUpdateBatteryLevel(i);

  displayUpdateRPM(i);

  display.display();

  }
}