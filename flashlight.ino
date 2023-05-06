const int ledPinWhite = 16; // LED
const int buttonPin = 2;  // button

bool ledState = false;

void setup() {
  Serial.begin(115200);
  pinMode(ledPinWhite, OUTPUT);  // Set the LED pin as an output
  pinMode(buttonPin, INPUT);    // Set the button pin as an input
}

void loop() {
  int buttonState = digitalRead(buttonPin); // Read the state of the button

  if (buttonState == LOW) { // If the button is pressed
    if(!ledState) {
    digitalWrite(ledPinWhite, HIGH); // Turn on the LED
    ledState = true;
    } else {
      digitalWrite(ledPinWhite, LOW);
      ledState = false;
    }
    delay(1000); // adding a debounce so that the light can be toggled without any electric current error
  } 
}
