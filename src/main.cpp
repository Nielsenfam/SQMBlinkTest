#include <Arduino.h>

int brightness;
int fadeAmount = 3;

void setup()
{
  Serial.begin(9600);
  pinMode(LED_BUILTIN, OUTPUT);
}

void loop() {
  digitalWrite(LED_BUILTIN,1);
  delay(100);
  digitalWrite(LED_BUILTIN,0);
  delay(400);
}