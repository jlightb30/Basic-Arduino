#include <Servo.h>
#include <NewPing.h>
#define TRIGGER_PIN 12
#define ECHO_PIN 11
#define MAX_DISTANCE 200
NewPing myHC_SR04(TRIGGER_PIN, ECHO_PIN, MAX_DISTANCE);
Servo Speen;
int dist;
int rand;
int rand2;
void setup()
{
	Serial.begin(9600);
	Speen.attach(7);
}

void loop()
{
	rand = random(1, 90);
	rand2 = random(-1, -90);
	Serial.print(dist);
	dist = myHC_SR04.ping_cm();
	if (dist > 0 & dist < 1.5)
	{
		Speen.write(rand);

	}
	if (dist > 2)
	{
		Speen.write(rand2);
	}
}
