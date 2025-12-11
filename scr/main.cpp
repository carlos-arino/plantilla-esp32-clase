#include <Arduino.h>

void setup() {
  Serial.begin(115200);
  Serial.println("Hola Alumnos! El sistema funciona.");
  pinMode(2, OUTPUT);
}

void loop() {
  digitalWrite(2, HIGH);
  delay(1000);
  digitalWrite(2, LOW);
  delay(1000);
  Serial.println("Parpadeando...");
}