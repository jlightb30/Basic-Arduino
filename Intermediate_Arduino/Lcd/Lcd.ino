#include "Arduino.h"
#include <LiquidCrystal.h>

int val;

void setup()
{
	
}

void loop()
{
	for(val = 1; val > 0; val++){
delay(1000);
LiquidCrystal lcd(7, 8, 9, 10, 11, 12);
lcd.begin(16, 2);
lcd.setCursor(0,1);
lcd.print("Hello World");
lcd.print(val);
}



}
