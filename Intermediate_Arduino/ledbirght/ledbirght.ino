int i=10;   

void setup() {
pinMode(i,OUTPUT);
}

void loop() {
analogWrite(i,255);
delay(100);
analogWrite(i,150);
delay(100);
analogWrite(i,50);
delay(100);
analogWrite(i,10);
delay(100);
analogWrite(i,0);
delay(100);
}