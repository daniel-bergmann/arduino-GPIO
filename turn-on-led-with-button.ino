const int ledPinWhite = 16; // LED
const int buttonPin = 2;  // button

void setup() {
  Serial.begin(115200);
  pinMode(ledPinWhite, OUTPUT);  // Set the LED pin as an output
  pinMode(buttonPin, INPUT);    // Set the button pin as an input
}

void loop() {
  int buttonState = digitalRead(buttonPin); // Read the state of the button
  if (buttonState == LOW) { // If the button is pressed
    digitalWrite(ledPinWhite, HIGH); // Turn on the LED
  } else { // If the button is not pressed
    digitalWrite(ledPinWhite, LOW); // Turn off the LED
  }
}
