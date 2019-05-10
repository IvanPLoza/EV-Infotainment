/***************************************************************************
 * @name: SSD1306 graphic display source code
 * @brief:
 * @author: Ivan Pavao Lozancic ivanplozancic@gmail.com
 * ************************************************************************/

#include <display.h>

SSD1306  display(0x3c, 21, 22);

void displayInit(){

    //Begin I2C with display
    display.init();

    display.clear();

    //************ PRINT THE WELCOME SCREEN ************
    //Align the text to center
    display.setTextAlignment(TEXT_ALIGN_LEFT);

    //Set the font
    display.setFont(ArialMT_Plain_10); 

    //Print the text
    display.drawString(32, 32,  "ETS SPLIT");
    display.drawString(32, 42,  "ver 1.1");

    display.display();

    delay(2000);
    //**************************************************
}

void displayUpdateRPM(uint32_t rpm){

    //Align the text to left
    display.setTextAlignment(TEXT_ALIGN_LEFT);

    display.drawString(0, 0,  String(rpm));
    
    display.drawString(0, 32, String(rpm));
}