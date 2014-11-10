#include <LCDSheild.h>
#include <stdlib.h>
#include <time.h>

LCDSheild lcd;
int yPos = 0;

void setup()
{
 	lcd.init(EPSON);
	lcd.contrast(-30);
	lcd.clear(BLACK);
}

void loop()
{
	for(int i = 0; i < 3; i++)
	{
		makeBlobs();
	}
}

void makeBlobs()
{
	srand(time(NULL));
	
	yPos = rand() % 102 + 5; // Add 4 when setRect to avoid first 2 pixels, Random numbers between 1 and 102
				// + 5 avoids first few pixels, no Blobs should reach over the 128thpixel
				// Blobs are 20x20 pixels, 

	for(int i = 1; i < 6; i++)
	{
		lcd.setRect(i * 5, yPos, i * 25, yPos + 20, 1, BLACK);
		delay(500);
	}
}
