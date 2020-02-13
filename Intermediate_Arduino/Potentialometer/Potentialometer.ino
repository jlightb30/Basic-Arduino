#include <Wire.h>
#include <LiquidCrystal_I2C.h>
LiquidCrystal_I2C lcd(0x27, 16, 2);
int potPin = A3;
int val;
int brightness;
void setup()
{
	lcd.init();
	lcd.backlight();
}

void loop()
{
	val = analogRead(potPin);
	val = map(val, 0, 1023, 0, 11);
	analogWrite(10, val);
	lcd.setCursor(0, 0);
	lcd.print("Brightness");
	lcd.setCursor(0, 1);
	lcd.print(val);
	lcd.print("        ");
}
