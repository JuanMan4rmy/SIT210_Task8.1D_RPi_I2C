// Include the Wire library for I2C communication with RPi
#include <Wire.h>

// LED on pin 13
const int led = 13; 

void setup() {
  // Join I2C bus as slave with address 8
  Wire.begin(0x8);
                 
  Wire.onReceive(receiveEvent);
  
  pinMode(led, OUTPUT);
  digitalWrite(led, LOW);
}

void receiveEvent(int execute) {
  while (Wire.available()) { 
    char r = Wire.read(); 
    digitalWrite(led, r);
  }
}
void loop() {
  delay(1000);
}
