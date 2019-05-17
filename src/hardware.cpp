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
    pinMode(GEAR_UP_BUTTON_PIN, INPUT);
    pinMode(GEAR_DOWN_BUTTON_PIN, INPUT);
    pinMode(2, INPUT);

    //Gear relays config
    pinMode(GEAR_RELAY1_PIN, OUTPUT);
    pinMode(GEAR_RELAY2_PIN, OUTPUT);

    //Begin serial
    Serial.begin(115200);
}

void changeGear(uint8_t gear){

    switch(gear){

        case 0x00:
            digitalWrite(GEAR_RELAY1_PIN, LOW);
            digitalWrite(GEAR_RELAY2_PIN, LOW);
        break;

        case 0x01:
            digitalWrite(GEAR_RELAY1_PIN, HIGH);
            digitalWrite(GEAR_RELAY2_PIN, LOW);
        break;

        case 0x02:
            digitalWrite(GEAR_RELAY1_PIN, HIGH);
            digitalWrite(GEAR_RELAY2_PIN, HIGH);
        break;
    }
}