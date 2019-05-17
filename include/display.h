/***************************************************************************
 * @name: SSD1306 graphic display header file
 * @brief:
 * @author: Ivan Pavao Lozancic ivanplozancic@gmail.com
 * ************************************************************************/

#include <main.h>       //main header file

#include <Wire.h>       //I2C
#include <SSD1306.h>    //SSD1306 I2C OLED Display2

//SSD1306 configuration
#define SSD1306_I2C_ADRESS  0x3c
#define SSD1306_I2C_SCL     0x15
#define SSD1306_I2C_SDA     0x16

//Welcome screen messages
#define WLC_MSG_FIRST       "ETS SPLIT"
#define WLC_MSG_SECOND      "ver 1.1"

//First screen messages
#define INFT1_MSG_GEAR_NEUTRAL   "N"
#define INFT1_MSG_GEAR_FORWARD   "D"
#define INFT1_MSG_GEAR_REVERSE   "R"

extern SSD1306 display;

void displayInit();

void displayUpdateRPM(uint16_t rpm);
void displayUpdateGearState(uint8_t gear);
void displayUpdateBatteryLevel(uint8_t batteryLevel);