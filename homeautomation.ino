int relayPin = 3;

void setup() {
  pinMode(relayPin, OUTPUT);
  digitalWrite(relayPin, HIGH); // Relay OFF initially

  Serial.begin(9600); // Use hardware Serial (pins 0 and 1)
}

void loop() {
  if (Serial.available()) {
    char cmd = Serial.read();

    if (cmd == '1') {
      digitalWrite(relayPin, LOW);  // Relay ON → LED ON
    } 
    else if (cmd == '0') {
      digitalWrite(relayPin, HIGH); // Relay OFF → LED OFF
    }
  }
}