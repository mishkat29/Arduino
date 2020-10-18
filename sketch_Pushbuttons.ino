/*
  Button

  Turns on and off a light emitting diode(LED) connected to digital pin 13,
  when pressing either of the two pushbutton attached to pin 2 or pin 3.

*/

// constants won't change. They're used here to set pin numbers:
/*
By Mishkat
Using Pushbuttons to switch a LED On/Off
*/


const int buttonPin1 = 2; // pushbutton pin2
const int buttonPin2 = 3; // pushbutton pin3
const int ledPin =  13;      // the number of the LED pin

// variables will change:
int buttonState1 = 0;         // variable for reading the pushbutton status
int buttonState2 = 0;         // variable for reading the pushbuttom status

void setup() {
  // initialize the LED pin as an output:
  pinMode(ledPin, OUTPUT);
  // initialize the pushbutton pin as an input:
  pinMode(buttonPin1, INPUT);
  pinMode(buttonPin2, INPUT);
}

void loop() {
  // read the state of the pushbutton value:
  buttonState1 = digitalRead(buttonPin1);
  buttonState2 = digitalRead(buttonPin2);

  // check if the pushbutton is pressed. If it is, the buttonState is HIGH:
  if (buttonState1 == HIGH) {
    // turn LED on:
    digitalWrite(ledPin, HIGH);
  } 
  else if (buttonState2 == HIGH) {
    // turn LED on:
    digitalWrite(ledPin, HIGH);
  }
  else {
    // turn LED off:
    digitalWrite(ledPin, LOW);
  }
}
