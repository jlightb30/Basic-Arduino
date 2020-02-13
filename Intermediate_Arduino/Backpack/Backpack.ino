#include <Wire.h>
#include <LiquidCrystal_I2C.h>
LiquidCrystal_I2C lcd(0x27, 16, 2);
int bean = 0;
int buttonState;
int bp=0;
void setup()
{
	lcd.init();
	lcd.backlight();
	pinMode(7, INPUT);
}

void loop()
{
	buttonState = digitalRead(7);
	lcd.setCursor(0, 0);
	lcd.print("Hello World");
	lcd.print(bean);
	if ((buttonState == HIGH) && (bp==0))
	{
		bean++;
		bp=1;
	}
	if (buttonState == LOW)
	{
		bp=0;
	}
}
