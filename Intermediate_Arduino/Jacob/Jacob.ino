#include "Arduino.h"
#define WLED      6
int j;

void setup()
{
	pinMode(WLED, OUTPUT);
	Serial.begin(9600);
}

void loop()
{
	analogWrite(WLED, 0);
	Serial.print("-_-");
	delay(1000);
	analogWrite(WLED,255);
	Serial.print("O_O");
	delay(1000);
}