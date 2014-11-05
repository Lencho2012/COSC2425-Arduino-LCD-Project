/**

Swaps the background color based on button presses

*/

#include <ColorLCDShield.h>

LCDShield lcd;

int buttonPins[3] = {3, 4, 5};

void setup()
{
    lcd.init(EPSON);
    lcd.contrast(-30);
    lcd.clear(WHITE);
    
    for(int i = 0; i < 3; i++)
    {
        pinMode(buttonPins[i], INPUT);
        digitalWrite(buttonPins[i], HIGH);
    }
}

void loop()
{
  VAMP();
}

void VAMP()// Removing the not from digitalRead if's will create a pretty cool wipe screen between the two colors
{
    if(!digitalRead(buttonPins[0])) // S1 button
    {
      lcd.clear(EMERALD);
    }
      
     if(!digitalRead(buttonPins[2])) // S3 button
     {
       lcd.clear(BLACK);
     }
}
