/***************************************************************************
 * @name: Hardware header file
 * @brief:
 * @author: Ivan Pavao Lozancic ivanplozancic@gmail.com
 * ************************************************************************/

#include <main.h>
#include <display.h>

//Gear button configuration
#define GEAR_UP_BUTTON_PIN      0x02
#define GEAR_DOWN_BUTTON_PIN    0x00
#define GEAR_RELAY1_PIN         0x20 //32
#define GEAR_RELAY2_PIN         0x21 //33

//RoadTrip button configuration
#define ROADTRIP_BUTTON_PIN 0x04

void hardwareSetup();

void changeGear(uint8_t gear);