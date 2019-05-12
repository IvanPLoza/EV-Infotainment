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

  display.clear();

  readGearButton();

  displayUpdateBatteryLevel(100);

  displayUpdateRPM(6000);

  display.display();

}