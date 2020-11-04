/*
By Mishkat
Ultrasonic Distance Sensor 
*/

int trigPin=13;
int echoPin=11;
float targetDistance=6;
float pingTime;
float speedOfSound;
float speedofSoundKhr;
void setup()
{
Serial.begin(9600);
pinMode(trigPin, OUTPUT);
pinMode(echoPin, INPUT);
}

void loop()
{
digitalWrite(trigPin, LOW);
delayMicroseconds(2000);
digitalWrite(trigPin, HIGH);
delayMicroseconds(20);
digitalWrite(trigPin, LOW);
  
pingTime=pulseIn(echoPin, HIGH);
speedOfSound=(2*targetDistance)/pingTime;
  
speedOfSound=(speedOfSound/63360);
speedOfSound=(speedOfSound*1000000);
speedOfSound=speedOfSound*3600;
Serial.print("The speed of sound is ");
Serial.print(speedOfSound);
Serial.println(" miles per hour");
Serial.print(speedofSoundKhr);
Serial.println(" Kilometer per hour");
delay(500);
}
}
