/***************************************************************************
 * @name: Hardware source code
 * @brief:
 * @author: Ivan Pavao Lozancic ivanplozancic@gmail.com
 * ************************************************************************/

#include <hardware.h>

void hardwareSetup(){

    //Init display
    displayInit();

    //Init buttons
    pinMode(GEAR_BUTTON_PIN, INPUT);
    pinMode(2, INPUT);

    //Begin serial
    Serial.begin(115200);
}