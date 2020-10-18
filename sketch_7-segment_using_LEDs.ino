/*
By Mishkat
7 Segment display made using LEDs instead of BCD display
*/


void setup(){
Serial.begin(9600); 
Serial.println("Digit Displayed in 7 Segment Setup : "); 
  
 for (int DigitalPin = 7; DigitalPin <= 13; DigitalPin++) 
 {
  pinMode(DigitalPin, OUTPUT);
 }
}   
int x;
void loop() 
{
 
if(Serial.available()>0)  
{
  x=Serial.read();
switch (x) {
    case '1':   //display 1 in 7 Segment Setup
      Serial.println();
      Serial.write(x);
      digitalWrite(7, HIGH);
      digitalWrite(8, HIGH);
      digitalWrite(9, HIGH);
      digitalWrite(10, LOW);
      digitalWrite(11, LOW);
      digitalWrite(12, LOW);
      digitalWrite(13, LOW);
      break;
      
    case '2':   //display 2 in 7 Segment Setup
      Serial.println();
      Serial.write(x); 
      digitalWrite(7, HIGH);
      digitalWrite(8, HIGH);
      digitalWrite(9, LOW);
      digitalWrite(10, HIGH);
      digitalWrite(11, HIGH);
      digitalWrite(12, LOW);
      digitalWrite(13, HIGH);
      break;
    case '3':   //display 3 in 7 Segment Setup
      Serial.println();
      Serial.write(x);  
      digitalWrite(7, HIGH);
      digitalWrite(8, HIGH);
      digitalWrite(9, HIGH);
      digitalWrite(10, HIGH);
      digitalWrite(11, LOW);
      digitalWrite(12, LOW);
      digitalWrite(13, HIGH);
      break;
      
    case '4':   //display 4 in 7 Segment Setup
      Serial.println();
      Serial.write(x);
      digitalWrite(7, LOW);
      digitalWrite(8, HIGH);
      digitalWrite(9, HIGH);
      digitalWrite(10, LOW);
      digitalWrite(11, LOW);
      digitalWrite(12, HIGH);
      digitalWrite(13, HIGH);
      break;
      
    case '5':    //display 5 in 7 Segment Setup
      Serial.println();
      Serial.write(x);
      digitalWrite(7, HIGH);
      digitalWrite(8, LOW);
      digitalWrite(9, HIGH);
      digitalWrite(10, HIGH);
      digitalWrite(11, LOW);
      digitalWrite(12, HIGH);
      digitalWrite(13, HIGH);
      break;
      
      case '6':   //display 6 in 7 Segment Setup
      Serial.println();
      Serial.write(x);
      digitalWrite(7, HIGH);
      digitalWrite(8, LOW);
      digitalWrite(9, HIGH);
      digitalWrite(10, HIGH);
      digitalWrite(11, HIGH);
      digitalWrite(12, HIGH);
      digitalWrite(13, HIGH);
      break;
      
    case '7':   //display 7 in 7 Segment Setup
      Serial.println();
      Serial.write(x);
      digitalWrite(7, HIGH);
      digitalWrite(8, HIGH);
      digitalWrite(9, HIGH);
      digitalWrite(10, LOW);
      digitalWrite(11, LOW);
      digitalWrite(12, LOW);
      digitalWrite(13, LOW);
      break;
      
    case '8':   //display 8 in 7 Segment Setup
      Serial.println();
      Serial.write(x);
      digitalWrite(7, HIGH);
      digitalWrite(8, HIGH);
      digitalWrite(9, HIGH);
      digitalWrite(10, HIGH);
      digitalWrite(11, HIGH);
      digitalWrite(12, HIGH);
      digitalWrite(13, HIGH);
      break;
      
      case '9':   //display 9 in 7 Segment Setup
      Serial.println();
      Serial.write(x);
      digitalWrite(7, HIGH);
      digitalWrite(8, HIGH);
      digitalWrite(9, HIGH);
      digitalWrite(10, HIGH);
      digitalWrite(11, LOW);
      digitalWrite(12, HIGH);
      digitalWrite(13, HIGH);
      break;
      
      case '0':   //display 0 in 7 Segment Setup
      Serial.println();
      Serial.write(x);
      digitalWrite(7, HIGH);
      digitalWrite(8, HIGH);
      digitalWrite(9, HIGH);
      digitalWrite(10, HIGH);
      digitalWrite(11, HIGH);
      digitalWrite(12, HIGH);
      digitalWrite(13, LOW);
      break;
      
    default:
      Serial.println();
      Serial.println("No Digit is Displayed ! Please enter a valid digit from 0-9 !!");
      for (int DigitalPin = 7; DigitalPin <= 13; DigitalPin++)
      {
        digitalWrite(DigitalPin, LOW); 
      }
            }   
}   
}   
