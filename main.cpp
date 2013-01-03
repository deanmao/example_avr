#include <avr/io.h>
#include <Arduino.h>

int led = 13;

int __attribute__((noreturn)) main(void) {
  pinMode(led, OUTPUT);

  while(1) {
    digitalWrite(led, HIGH);   // turn the LED on (HIGH is the voltage level)
    delay(1000);               // wait for a second
    digitalWrite(led, LOW);    // turn the LED off by making the voltage LOW
    delay(1000);               // wait for a second
  }
}