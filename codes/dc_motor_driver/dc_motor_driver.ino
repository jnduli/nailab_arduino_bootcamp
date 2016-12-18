void setup() {
  // put your setup code here, to run once:
  pinMode(12,OUTPUT);
  pinMode(13, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  //spin motor in one direction
  digitalWrite(12, HIGH);
  digitalWrite(13, LOW);
  delay(1000);

  //stop motor
  digitalWrite(12, LOW);
  digitalWrite(13, LOW);
  delay(1000);

  //spin motor in other direction
  digitalWrite(12, LOW);
  digitalWrite(13, HIGH);
  delay(1000);

  //stop motor
  digitalWrite(12, LOW);
  digitalWrite(13, LOW);
  delay(1000);

}
