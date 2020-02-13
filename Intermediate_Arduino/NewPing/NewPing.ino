#include <NewPing.h>
#include <Servo.h>

 
#define TRIGGER_PIN 12
#define ECHO_PIN 11
#define MAX_DISTANCE 200
 int joemama;
 int dinnerhasbeenserved;
 Servo spin;
NewPing myHC_SR04(TRIGGER_PIN, ECHO_PIN, MAX_DISTANCE);
 
void setup() {
 Serial.begin(9600);
 spin.attach(7);
 spin.write(90);
 dinnerhasbeenserved = 90;
}
 
void loop() {
     Serial.println(myHC_SR04.ping_cm());
     joemama = myHC_SR04.ping_cm();
     delay(50); 
     if((joemama > 0)&&(joemama < 10)){
dinnerhasbeenserved ++;
spin.write(0);
     }
     if(joemama > 10){
dinnerhasbeenserved --;
spin.write(180);
     }
}