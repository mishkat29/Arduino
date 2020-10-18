/*
By Mishkat
Using Photoresistor to switch an LED On/Off
*/


const int ledpin = 8;
const int ldrpin = A1;

void setup() {

  Serial.begin(9600);
  pinMode (ledpin, OUTPUT);
  pinMode (ldrpin, INPUT);
}
void loop() {
  int ldrstatus = analogRead(ldrpin);
  if(ldrstatus <= 50){
    digitalWrite(ledpin, HIGH);
    Serial.println("LDR is DARK, LED is ON");
  }
  else {
    digitalWrite(ledpin, LOW);
    Serial.println("----------------------");
  }
  
  
}
