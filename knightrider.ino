void setup() {
  // put your setup code here, to run once:
  pinMode(13, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(9, OUTPUT);
}

void loop() {
 

  for (int i = 9; i <= 13; ++i) {
    digitalWrite(i, HIGH);
    delay(500); // Adjust delay as needed
    digitalWrite(i, LOW);
  }

  delay(1000); // Wait for 1000 milliseconds


  for (int i = 13; i >= 9; --i) {
    digitalWrite(i, HIGH);
    delay(500); // Adjust delay as needed
    digitalWrite(i, LOW);
  }

  delay(1000); // Wait for 1000 milliseconds
}
