#include <SoftwareSerial.h>

#define rxPin 10
#define txPin 11

SoftwareSerial mySerial(rxPin, txPin); // RX, TX
char myChar ; 

void setup() {
  Serial.begin(9600);   
  mySerial.begin(9600);

  mySerial.write("Hello");
 
}

void loop(){
  while(mySerial.available()){
    myChar = mySerial.read();
    Serial.write(myChar);
  }
}
