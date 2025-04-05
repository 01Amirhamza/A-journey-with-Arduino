// C++ code
// LCD 16x2(I2C)
#include <LiquidCrystal_I2C.h>
const int lcd_ADDRESS =0x27; // Set the LCD address, number of columns and rows
const int LCD_COLUMNS =16;
const int LCD_ROWS =2;
  // If you don't know your display address, run the I2C scanner sketch
LiquidCrystal_I2C lcd(lcd_ADDRESS,LCD_COLUMNS,LCD_ROWS); 

void setup()
{
  lcd.init(); 
  lcd.clear();
  lcd.backlight();
  lcd.setCursor(3,0);
  lcd.print("Hello");
  lcd.setCursor(6,1);
  lcd.print("world");
}
void loop()
{
  
}