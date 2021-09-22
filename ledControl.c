#include <stdio.h>
#include <unistd.h>
#include <wiringPi.h>

int RED_PIN = 0; 

int FIRST_BUTTON_PIN = 25; 
int SECOND_BUTTON_PIN = 27

int BUTTON_PAUSE = 200000;  // wait 0.2 seconds before looking at for another press

int mode = 0;
int main(void)
{
    wiringPiSetup(); 
    pinMode(RED_PIN,OUTPUT);
    pinMode(FIRST_BUTTON_PIN,INPUT);
    pinMode(SECOND_BUTTON_PIN, INPUT);
    for(;;)
    {

        if (digitalRead(FIRST_BUTTON_PIN) == 0) // pushed
        {
            mode = mode + 1;  // go to next mode
            if (mode > 4)
                mode = 0;
            usleep(BUTTON_PAUSE);
        }       

        switch (mode)
        {
        case 0:
            // turn off the lights
            digitalWrite(RED_PIN,LOW);
            break;

        case 1:
          // turn off the lights
            digitalWrite(RED_PIN,HIGH);
            break;

        case 2:

          // turn off the lights
            digitalWrite(RED_PIN,LOW);
            break;
        
        case 3:
        
          //turn both lights on
            digitalWrite(RED_PIN,HIGH);
            break;
        
        case 4:
        
          //alternating
            digitalWrite(RED_PIN,HIGH);
            sleep(1);

            digitalWrite(RED_PIN,LOW);
            sleep(1);
            
            break;

        }

    }
    return 0;
}
