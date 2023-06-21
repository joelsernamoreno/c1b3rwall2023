#include "hidkeyboard.h"
HIDkeyboard Keyboard;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(38400);
  Keyboard.begin();

  Keyboard.sendString("123456789\n");
  delay(1000);
  Keyboard.sendString("abcdefghijklmnopqrstuvwxyz\n");
  delay(1000);
  Keyboard.sendString("Hello World");
}

void loop() {
  // put your main code here, to run repeatedly:

}
