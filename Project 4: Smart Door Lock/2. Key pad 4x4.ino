// C++ code
// LCD 16x2(I2C)
// Key pad 4x4
#include <LiquidCrystal_I2C.h>
#include <Keypad.h>

//------------------------------LCD Display------------------------------//

const int lcd_ADDRESS =0x27; // Set the LCD address, number of columns and rows
const int LCD_COLUMNS =16;
const int LCD_ROWS =2;
  // If you don't know your display address, run the I2C scanner sketch

LiquidCrystal_I2C lcd(lcd_ADDRESS,LCD_COLUMNS,LCD_ROWS);
//------------------------------keypad----------------------------------//
const byte ROWS = 4; // Number of rows on the keypad
const byte COLS = 4; // Number of columns on the keypad

// Define the keypad layout
char keys[ROWS][COLS] = {
  {'1','2','3','A'},
  {'4','5','6','B'},
  {'7','8','9','C'},
  {'*','0','#','D'}
};

// Connect keypad ROW pins to these Arduino pins:
byte rowPins[ROWS] = {9, 8, 7, 6};

// Connect keypad COL pins to these Arduino pins:
byte colPins[COLS] = {5, 4, 3, 2};

// Create a Keypad object
Keypad keypad = Keypad(makeKeymap(keys), rowPins, colPins, ROWS, COLS);


void setup()
{
  Serial.begin(9600);
  lcd.init(); 
  lcd.clear();
  lcd.backlight();

}
void loop()
{
  char key=keypad.getKey();
  if(key){
      lcd.clear();
      Serial.println(key);
      lcd.setCursor(0,0);
      lcd.println(key);
  }
}























