#include <SoftwareSerial.h>

SoftwareSerial mySerial(10, 11);
char val;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(6, OUTPUT);
  pinMode(7, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  if (mySerial.available()){
    val= mySerial.read();
    Serial.println(val);

    if ( val == 'A' ){
        digitalWrite(7, HIGH);
        digitalWrite(6, LOW);
    }else if (val == 'B'){
        digitalWrite(7, LOW);
        digitalWrite(6, HIGH);
    }
  }
  

}
