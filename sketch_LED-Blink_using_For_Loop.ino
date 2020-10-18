/*
By Mishkat
Blinking LED using for loop for two different delay conditions
*/



int ledPin = 13;                 // LED connected to digital pin 13
int i = 0;

void setup(){
  pinMode(ledPin, OUTPUT);       // sets the digital pin as output
}

void loop()
{
  for(i=1;i <= 5 ;i++)
  {
   digitalWrite(led, HIGH);   // turn the LED on (HIGH is the voltage level)
   delay(500);               // wait for half a second
   digitalWrite(ledpin, LOW);    // turn the LED off by making the voltage LOW
   delay(500);               // wait for half a second
 }
  for(i=1;i <= 5 ;i++)
  {
   digitalWrite(led, HIGH);   // turn the LED on (HIGH is the voltage level)
   delay(2000);               // wait for two second
   digitalWrite(led, LOW);    // turn the LED off by making the voltage LOW
   delay(2000);               // wait for two second
 }
}
