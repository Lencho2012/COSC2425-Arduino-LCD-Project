#include <LCDSheild.h>
#include <stdlib.h>
#include <time.h>

LCDSheild lcd;
//int num = 0;
//int gone = 0; hit 130 and reset to 0; setRect again
void setup()
{
    lcd.init(EPSON);
    lcd.contrast(-30);
    lcd.clear(BLACK);
}

void loop()
{
  
}

void makeBlobs()
{
/*
	srand(time(NULL));
	
	num = rand() % 106; // Add 4 when setRect to avoid first 2 pixels on y axis
	printf("%d\n", num);
*/

    srand(time(NULL));
    lcd.setRect(10, 50, 30, 70, 1, BLACK);
    
}
