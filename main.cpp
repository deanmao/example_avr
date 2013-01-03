#include <avr/io.h>
#include <Arduino.h>

int light = 3;

int __attribute__((noreturn)) main(void) {
  pinMode(light, OUTPUT);

  while(1) {
    analogWrite(light, 128);
    delay(500);
    analogWrite(light, 0);
    delay(500);
  }
}