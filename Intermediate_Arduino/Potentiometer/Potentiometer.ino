#include "Arduino.h"


int val;




void setup(){
 pinMode(8, OUTPUT);
 pinMode(7, INPUT);
 Serial.begin(9600);
}

void loop(){	

	val = analogRead(7);
	Serial.print(val);
  analogWrite(8, val);
}