#include <Arduino.h>
#include <Display.h>

int number = 0;

Display display;

void nextDisplay()
{
  number = number + 1;
  if (number > 9)
  {
    number = 0;
  }
  display.show(number);
  delay(300);
}

void setup()
{
  display.begin();
  display.show(0);
}

void loop()
{
  delay(1000);
  nextDisplay();
}