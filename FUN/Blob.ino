#include <LCDSheild.h>
#include <stdlib.h>
#include <time.h>

LCDSheild lcd;

void setup()
{
    lcd.init(EPSON);
    lcd.contrast(-30);
    lcd.clear(BLACK);
}

void loop()
{
  
}

void bolts()
{
    srand(time(NULL));
    lcd.setRect(10, 50, 30, 70, 1, BLACK);
    
}
