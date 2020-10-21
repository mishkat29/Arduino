/*
By Mishkat
Using Photoresistor, Servo motor and led (red and green)
A basic lock system for restrooms which climate-friendly
The door locks automatically through servo motor when light
is switched on, while a red led shows that it is occupied.
And it reverts back when light is switched off, the door opens 
and green led shows that its now vacant.
*/


#include<Servo.h>
int posopen = 90;
int posclose = 0;
int servopin = 9;
int servodelay = 50;
Servo doorhinge;
int ldrpin = A0;
int ledpinR = 8;
int ledpinG = 7;

void setup(){
  Serial.begin(9600);
  doorhinge.attach(servopin);
  pinMode(ldrpin, INPUT);
  pinMode (ledpinR, OUTPUT);
  pinMode (ledpinG, OUTPUT);
}
void loop(){
  int ldrstatus = analogRead(ldrpin);
  if(ldrstatus <= 50){
    doorhinge.write(posopen);
    digitalWrite(ledpinG, HIGH);
    digitalWrite(ledpinR, LOW);
    Serial.println("----VACANT----");
  }
  else {
    doorhinge.write(posclose);
    digitalWrite(ledpinR, HIGH);
    digitalWrite(ledpinG, LOW);
    Serial.println("-----OCCUPIED-----");
  }
} 
