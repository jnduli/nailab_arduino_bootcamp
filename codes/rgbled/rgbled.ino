int redpin = 9;
int greenpin = 10;
int bluepin = 11;
void setup() {
  // put your setup code here, to run once:
  pinMode(redpin, OUTPUT);
  pinMode(greenpin, OUTPUT);
  pinMode(bluepin, OUTPUT);
}
void loop() {
  // put your main code here, to run repeatedly:
  setColor(255, 0, 0);
  delay(200);
  setColor(0, 255, 0);
  delay(200);
  setColor(0, 0, 255);
  delay(200);
  setColor(120, 100, 190);
  delay(200);
}
void setColor(int red, int green, int blue)
{
  analogWrite(redpin, red);
  analogWrite(greenpin, green);
  analogWrite(bluepin, blue);  
}
