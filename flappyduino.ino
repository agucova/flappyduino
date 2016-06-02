/*
  Flappy Bird (Use along with processing code)
  Made by: Agustín Covarrubias & Lucas Zuñiga 
  Date: 6/1/2016
  Distributed under the MIT License (see LICENSE file)
 */
const int buttonPin = 7;     // the number of the pushbutton pin
const int ledPin =  13;      // the number of the LED pin (Led is optional)!

int buttonState = 0;         // variable for reading the pushbutton status

void setup() {
  // initialize the LED pin as an output:
  pinMode(ledPin, OUTPUT);
  // initialize the pushbutton pin as an input:
  pinMode(buttonPin, INPUT);
  Serial.begin(9600);
}

void loop() {
  // read the state of the pushbutton value:
  buttonState = digitalRead(buttonPin);

  // check if the pushbutton is pressed.
  // if it is, the buttonState is HIGH:
  if (buttonState == HIGH) {
    // turn LED on:
    digitalWrite(ledPin, HIGH);
    // And... Send a "button" line on Serial (so processing can detect it).
    Serial.println("button");
    delay(250);
  } else {
    // turn LED off:
    digitalWrite(ledPin, LOW);
  }
}
