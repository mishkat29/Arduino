/*
By Mishkat
Ultrasonic Distance Sensor 
*/

int trigPin=13;
int echoPin=11;
float targetDistance=6;
float pingTime;
float speedOfSound;
float speedOfSoundkmhr;
float speedOfSoundmhr;
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
speedOfSoundkmhr=91.44*speedOfSound;
speedOfSoundmhr=56.8182*speedOfSound;
Serial.print("Pingtime is ");
Serial.println(pingTime);
Serial.print("Speed of sound is ");
Serial.print(speedOfSoundkmhr);
Serial.println(" Kms per hour");
Serial.print("Speed of sound is ");
Serial.print(speedOfSoundmhr);
Serial.println(" miles per hour");

}
