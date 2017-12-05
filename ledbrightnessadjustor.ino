#include <ESP8266WiFi.h>


int val = 0;
int in = A0;
int led = 16;

void setup(){
  Serial.begin(9600);
  pinMode(led, OUTPUT);
}
void loop(){
  val = analogRead(in);
  float num = 3.3*(float)val/1023.00; 
  Serial.println(vol);  //prints time since program started
  analogWrite(led, val);
}