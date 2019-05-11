/***************************************************************************
 * @name: SSD1306 graphic display source code
 * @brief:
 * @author: Ivan Pavao Lozancic ivanplozancic@gmail.com
 * ************************************************************************/

#include <display.h>

SSD1306  display(SSD1306_I2C_ADRESS, SSD1306_I2C_SCL, SSD1306_I2C_SDA);

void displayInit(){

    //Begin I2C with display
    display.init();

    display.clear();

    //************ PRINT THE WELCOME SCREEN ************
    //Align the text to center
    display.setTextAlignment(TEXT_ALIGN_CENTER_BOTH);

    //Set the font
    display.setFont(ArialMT_Plain_16); 

    //Print the school name
    display.drawString(64, 22,  WLC_MSG_FIRST);

    //Set the font
    display.setFont(ArialMT_Plain_10); 

    //Print the version
    display.drawString(64, 42,  WLC_MSG_SECOND);

    display.display();

    delay(2000);
    //**************************************************
}

void displayUpdateRPM(uint16_t rpm){

    String batteryString;
    
    batteryString = "RPM: ";
    batteryString += String(rpm);

    //Set the font for gear
    display.setFont(ArialMT_Plain_16);

    //Center the text
    display.setTextAlignment(TEXT_ALIGN_LEFT);

    display.drawString(49, 10, batteryString);
}

void displayUpdateGearState(uint8_t gear){

    //Set the font for gear
    display.setFont(ArialMT_Plain_24);

    //Center the text
    display.setTextAlignment(TEXT_ALIGN_LEFT);

    switch(gear){

        case 0x00:

            //Display NEUTRAL gear
            display.drawString(15, 18, INFT1_MSG_GEAR_NEUTRAL);
        break;

        case 0x01:

            //Display FORWARD gear
            display.drawString(15, 18, INFT1_MSG_GEAR_FORWARD);
        break;

        case 0x02:

            //Display REVERSE gear
            display.drawString(15, 18, INFT1_MSG_GEAR_REVERSE);
        break;
    }
}

void displayUpdateBatteryLevel(uint8_t batteryLevel){

    String batteryString;

    batteryString = "BAT: ";
    batteryString += String(batteryLevel);

    //Set the font for gear
    display.setFont(ArialMT_Plain_16);

    //Center the text
    display.setTextAlignment(TEXT_ALIGN_LEFT);

    display.drawString(49, 38, batteryString);
}