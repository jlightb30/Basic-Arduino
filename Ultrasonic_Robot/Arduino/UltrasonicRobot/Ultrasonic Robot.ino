#include <Servo.h>
#include <NewPing.h>
// hey stinky, Remember to keep the servos sitcker up
#define TRIGGER_PIN 12
#define ECHO_PIN 11
#define MAX_DISTANCE 200
NewPing myHC_SR04(TRIGGER_PIN, ECHO_PIN, MAX_DISTANCE);
Servo Left;
Servo Right;
int joemama;
void setup()
{
	Serial.begin(9600);
	Left.attach(7);
	Right.attach(8);
}

void loop()
{
	Serial.print(joemama);
	joemama = myHC_SR04.ping_cm();
	if (joemama > 10)
	{
		Left.write(90);
		Right.write(-90);
	}
	if (joemama < 10)
	{
		Left.write(-90);
		Right.write(-90);
	}
}
