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

void setup()
{
  Serial.begin(9600);
  Keyboard.begin();
}

void loop()
{
  char key = keypad.getKey();

  if (!key){
    return;
  }
    
  switch (key) {
    case '1'://Select all occurencies of current selection
      Keyboard.press(KEY_LEFT_SHIFT);
      Keyboard.press(KEY_LEFT_CTRL);
      Keyboard.press('l');
      break;
    case '2'://Move line up
      Keyboard.press(KEY_LEFT_ALT);
      Keyboard.press(KEY_UP_ARROW);
      break;
    case '3':
      Keyboard.press(KEY_LEFT_SHIFT);
      Keyboard.press(KEY_LEFT_CTRL);
      Keyboard.press('a'); 
      break;
    case '4'://Delete current line
      Keyboard.press(KEY_LEFT_CTRL);
      Keyboard.press(KEY_LEFT_SHIFT);
      Keyboard.press('k');
      break;
    case '5':// Move line down
      Keyboard.press(KEY_LEFT_ALT);
      Keyboard.press(KEY_DOWN_ARROW);
      break;
    case '6'://Abre um terminal na pasta atual 
      Keyboard.press(KEY_LEFT_CTRL);
      Keyboard.press(KEY_LEFT_SHIFT);
      Keyboard.press('c'); 
      break;
    case '7'://Trigger sugestions
      Keyboard.press(KEY_LEFT_CTRL);
      Keyboard.press(' ');
      break;
    case '8'://Trigger parameter hints
      Keyboard.press(KEY_LEFT_CTRL);
      Keyboard.press(KEY_LEFT_SHIFT);
      Keyboard.press(' ');
      break;
    case '9'://Open Keyboard shorcuts
      Keyboard.press(KEY_LEFT_CTRL);
      Keyboard.press('k'); 
      Keyboard.press('s');
      break;
    case '0'://Close open editor 
      Keyboard.press(KEY_LEFT_CTRL);
      Keyboard.press('w'); 
      break;
    case '*'://Close VS Code 
      Keyboard.press(KEY_LEFT_CTRL);
      Keyboard.press('q');
      break;
    case '#'://Close folder
      Keyboard.press(KEY_LEFT_CTRL);
      Keyboard.press('k');
      Keyboard.release(KEY_LEFT_CTRL);
      Keyboard.press('f');
      break;
  }
  delay(50);
  Keyboard.releaseAll();
}

