#include "Arduino.h"
#include "Keyboard.h"
#include "Keypad.h"

const byte ROWS = 4;
const byte COLS = 3;

char keys[ROWS][COLS] = {
    {'1', '2', '3'},
    {'4', '5', '6'},
    {'7', '8', '9'},
    {'*', '0', '#'},
};

byte rowPins[ROWS] = {2, 3, 4, 5};
byte colPins[COLS] = {6, 7, 8};

Keypad keypad = Keypad(makeKeymap(keys), rowPins, colPins, ROWS, COLS);

void pressKey(char key);

void setup()
{
  Serial.begin(9600);
  Keyboard.begin();
}

void loop()
{
  char key = keypad.getKey();

  if (key)
  {
    //Serial.println(key);//debug
    switch (key)
    {
    case '1':
      Keyboard.press(KEY_LEFT_CTRL);
      Keyboard.press(KEY_LEFT_ALT);
      Keyboard.press('t');
      break;
    case '2':
      Keyboard.write('&');
      Keyboard.write('&');
      break;
    case '3':

      break;
    case '4':

      break;
    case '5':

      break;
    case '6':

      break;
    case '7':

      break;
    case '8':

      break;
    case '9':

      break;
    case '0':

      break;
    case '*':

      break;
    case '#':

      break;
    }
    delay(100);
    Keyboard.releaseAll();
  }
}

