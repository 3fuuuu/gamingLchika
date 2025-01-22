#include <Arduino.h>

const int LED = 25;
const int BLUE = 17;
const int RED = 18;
const int GREEN = 19;

void setup() {
  pinMode(LED, OUTPUT);
  pinMode(BLUE, OUTPUT);
  pinMode(RED, OUTPUT);
  pinMode(GREEN, OUTPUT);
}

void loop() {
  for(int r=0; r<256; r++) {
    for (int b=85; b<256; b++){
      for (int g=170; g<256; g++){
        if (r==255) {
          r=0;
        }
        if (b==255) {
          b=0;
        }
        if (g==255) {
          g=0;
        }
        analogWrite(RED, r);
        analogWrite(BLUE, b);
        analogWrite(GREEN, g);
        delay(100);
      }
  }
  }
}

