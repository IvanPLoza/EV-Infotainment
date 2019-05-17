/***************************************************************************
 * @name: Function buttons source code
 * @brief:
 * @author: Ivan Pavao Lozancic ivanplozancic@gmail.com
 * ************************************************************************/

#include <buttons.h>

/*uint32_t previousTimeGearButton = 0;
bool previousStateGearButton = false;
uint8_t lastGear = GEAR_BUTTON_NEUTRAL;
bool reverseFlag = false;*/

uint8_t currentGear = 1;

void readGearButton(){

    // OLD GEAR CHANGING SYSTEM
    /*uint32_t currentTime;
    bool gearButtonState;

    //Get the time of the read
    currentTime = millis();

    //Read digital state of the buttons
    gearButtonState = digitalRead(GEAR_BUTTON_PIN);

    //Check for user gear input
    if(gearButtonState == true) {

        if(currentTime > previousTimeGearButton + GEAR_BUTTON_TIMER_DELAY && lastGear == GEAR_BUTTON_NEUTRAL){

           //REVERSE
           lastGear = GEAR_BUTTON_REVERSE;

           reverseFlag = true;
        }

        previousStateGearButton = true;
    }   
    else{

        if(previousStateGearButton == true){
            
            if(reverseFlag == false){

                //Change to forward
                if(lastGear == GEAR_BUTTON_NEUTRAL){

                    lastGear = GEAR_BUTTON_FORWARD;
                }

                //Change to neutral
                else if(lastGear == GEAR_BUTTON_FORWARD || lastGear == GEAR_BUTTON_REVERSE) {

                    lastGear = GEAR_BUTTON_NEUTRAL;
                }

            }
            else{

                lastGear = GEAR_BUTTON_REVERSE;

                reverseFlag = false;
            }
        }

        previousStateGearButton = false;

        previousTimeGearButton = currentTime;
    }
    
    //Display the gear
    displayUpdateGearState(lastGear);

    //Change the gear with relay
    changeGear(lastGear);*/

    uint32_t currentTime;
    bool upButtonState;
    bool downButtonState;

    upButtonState = digitalRead(GEAR_UP_BUTTON_PIN);
    downButtonState = digitalRead(GEAR_DOWN_BUTTON_PIN);

    currentTime = millis();

    if(GEAR_UP_BUTTON_PIN == true){

        //GEAR UP REQUESTED
        changeGear(currentGear++);
    }
    else if(GEAR_UP_BUTTON_PIN == true){

        changeGear(currentGear--);
    }

    displayUpdateGearState(currentGear);
}

void readRoadTripButton(){
    
}