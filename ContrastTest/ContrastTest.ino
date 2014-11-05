#include <ColorLCDShield.h>
#include <stdio.h>
#include <stdlib.h>


#define BACKGROUND  BLACK  // room for growth, adjust the background color according to daylight

LCDShield lcd;

void setup()
{  
  /* Initialize the LCD, set the contrast, clear the screen */
  lcd.init(EPSON);
  lcd.clear(GREEN);
  for(int i =0; i <60 ; i++)
  {
     lcd.contrast(-40 + i);
     lcd.setChar('c', 50, 50, WHITE, BACKGROUND);
     delay(500);
     
  }
  
}

void loop()
{
}

