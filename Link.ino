#include <Arduino.h>

/*
  Turns on an LED on for one second, then off for one second, repeatedly.
  and prints Hello World in Serial monitor.
*/

void setup()
{
  Serial.begin(9600);

  // initialize the digital pin as an output.
  // Pin 13 has an LED connected on most Arduino boards:
  pinMode(13, OUTPUT);
}

void loop()
{
  Serial.println("Hello world!");


  digitalWrite(13, HIGH);   // set the LED on
  delay(1000);   // wait for a second

  digitalWrite(13, LOW);    // set the LED off
  delay(1000);              // wait for a second

}
