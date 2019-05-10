/***************************************************************************
 * @name: SSD1306 graphic display header file
 * @brief:
 * @author: Ivan Pavao Lozancic ivanplozancic@gmail.com
 * ************************************************************************/

#include <main.h>       //main header file

#include <Wire.h>           //I2C
#include <SSD1306.h>    //SSD1306 I2C OLED Display2

#define SSD1306_SDA_PIN 21  // GPIO21 -> SDA
#define SSD1306_SCL_PIN 22  // GPIO22 -> SCL

extern SSD1306 display;

void displayInit();

void displayUpdateRPM(uint32_t rpm);