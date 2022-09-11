int buzzed;

// the setup function runs once when you press reset or power the board
void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(LED_BUILTIN, OUTPUT);
  for(int i = 1; i < 10; i++) pinMode(i, INPUT_PULLUP);
  Serial.begin(9600);
  buzzed = 0;
}

void reset() {
}

// the loop function runs over and over again forever
void loop() {
  for(int i = 1; i < 10; i++) {
    if(digitalRead(i) == HIGH) {
      buzzed = i;
      Serial.println(i);
      digitalWrite(LED_BUILTIN, HIGH);
      break;
    }
  }
  delay(100);
}
