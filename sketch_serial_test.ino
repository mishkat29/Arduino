/*
By Mishkat
Switching a LED On/Off using command entered through Serial monitor
*/


int led = 13;
void setup() {
  pinMode(led, OUTPUT);
  Serial.begin(9600); 
  }

int state = 0;
void loop() {
  if(Serial.available ()> 0){
    state = Serial.read();  // Reads the data from the serial port  
 }  
 if (state == '0')  
 { 
   digitalWrite(led, LOW); // Turn LED OFF 
   Serial.println("LED turned off"); // Prints a message showing LED is off
 } 
 if (state == '1')  
 { 
   digitalWrite(led, HIGH); // Turn LED ON
   Serial.println("LED turned on"); // Prints a message showing LED is on
 }
}
