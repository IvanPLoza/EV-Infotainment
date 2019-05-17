/***************************************************************************
 * @name: Function buttons header file
 * @brief:
 * @author: Ivan Pavao Lozancic ivanplozancic@gmail.com
 * ************************************************************************/

#include <main.h> 

#include <hardware.h>

//Gear button configuration
#define GEAR_BUTTON_TIMER_DELAY 2000
#define GEAR_BUTTON_NEUTRAL     0x00
#define GEAR_BUTTON_FORWARD     0x01
#define GEAR_BUTTON_REVERSE     0x02

void readGearButton();
void readRoadTripButton();
