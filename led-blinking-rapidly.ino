
const int ledPin = 0;

void setup() {
 Serial.begin(115200);
 pinMode(ledPin, OUTPUT); 
}


void loop() {
  digitalWrite(0, HIGH);
  Serial.println("Led On");
  delay(100);

  digitalWrite(0, LOW);
  Serial.println("Led off");
  delay(100);
}
