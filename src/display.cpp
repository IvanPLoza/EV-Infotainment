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
    display.setTextAlignment(TEXT_ALIGN_CENTER_BOTH);   //Align the text to center
    display.setFont(ArialMT_Plain_16);                  //Set the font
    display.drawString(64, 22,  WLC_MSG_FIRST);         //Print the school name
    display.setFont(ArialMT_Plain_10);                  //Set the font
    
    display.drawString(64, 42,  WLC_MSG_SECOND);        //Print the version

    display.display();

    delay(2000);
    //**************************************************
}

void displayUpdateRPM(uint16_t rpm){

    String rpmString;
    
    rpmString = "RPM: ";
    rpmString += String(rpm);

    display.setFont(ArialMT_Plain_16);          //Set the font for gear
    display.setTextAlignment(TEXT_ALIGN_LEFT);  //Center the text

    display.drawString(49, 10, rpmString);  //Display the battery percentage
}

void displayUpdateGearState(uint8_t gear){

    display.setFont(ArialMT_Plain_24);          //Set the font for gear
    display.setTextAlignment(TEXT_ALIGN_LEFT);  //Center the text

    switch(gear){

        case 0x00:

            display.drawString(15, 18, INFT1_MSG_GEAR_NEUTRAL); //Display NEUTRAL gear
        break;

        case 0x01:

            display.drawString(15, 18, INFT1_MSG_GEAR_FORWARD); //Display FORWARD gear
        break;

        case 0x02:

            display.drawString(15, 18, INFT1_MSG_GEAR_REVERSE); //Display REVERSE gear
        break;
    }
}

void displayUpdateBatteryLevel(uint8_t batteryLevel){

    String batteryString;

    batteryString = "BAT: ";
    batteryString += String(batteryLevel);

    display.setFont(ArialMT_Plain_16);          //Set the font for gear
    display.setTextAlignment(TEXT_ALIGN_LEFT);  //Center the text

    display.drawString(49, 38, batteryString);
}