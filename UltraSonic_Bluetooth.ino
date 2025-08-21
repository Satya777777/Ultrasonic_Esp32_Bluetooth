#include "BluetoothSerial.h"

BluetoothSerial SerialBT;

#define TRIG_PIN 25
#define ECHO_PIN 26

void setup() {
  Serial.begin(115200);
  SerialBT.begin("ESP32_BT"); 
  Serial.println("The device started, now you can pair it with Bluetooth!");

 
  pinMode(TRIG_PIN, OUTPUT);
  pinMode(ECHO_PIN, INPUT);

  digitalWrite(TRIG_PIN, LOW);
  delay(2000); 
}

void loop() {
  
  digitalWrite(TRIG_PIN, LOW);
  delayMicroseconds(2);
  digitalWrite(TRIG_PIN, HIGH);
  delayMicroseconds(10);
  digitalWrite(TRIG_PIN, LOW);

  long duration = pulseIn(ECHO_PIN, HIGH);
  float distance = (duration / 2.0) * 0.0344;

 
  Serial.print("Distance: ");
  Serial.print(distance);
  Serial.println(" cm");


  if (SerialBT.hasClient()) {
    SerialBT.print("Distance: ");
    SerialBT.print(distance);
    SerialBT.println(" cm");
  }

  delay(1000); 
}
