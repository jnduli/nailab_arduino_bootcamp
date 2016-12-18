void setup() {
  // put your setup code here, to run once:
  pinMode(2, INPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  if(digitalRead(2) == 0){
    Serial.println("Stop Blocking Me!!");
    delay(100);
  }else if(digitalRead(2) == 1){
    Serial.println("I can see my light but not you");
    delay(100);
  }

}
