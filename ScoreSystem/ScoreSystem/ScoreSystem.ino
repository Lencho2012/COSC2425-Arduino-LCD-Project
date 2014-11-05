#include <ColorLCDShield.h>

LCDShield lcd;

int buttonPins[3] = {3, 4, 5};
int score = 0;
int win[11] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

void setup()
{
    lcd.init(EPSON);
    lcd.contrast(-25);
    lcd.clear(WHITE);
    
    for(int i = 0; i < 3; i++)
    {
        pinMode(buttonPins[i], INPUT);
        digitalWrite(buttonPins[i], HIGH);
    }
    
    char blob = score;
    //char *bloob = blob ; 
    
    //char *xScore = xString + 'X';  
  
    lcd.setRect(2, 25, 20, 110, 0, BLACK);
    lcd.setChar(blob, 2, 30, BLACK, WHITE); 
    //lcd.setStr(
    
}

void loop()
{
  /*  if(!digitalRead(buttonPins[0]);
    {
        
    }*/
  
}

/*void moveWaldo()
{
    
}
*/


