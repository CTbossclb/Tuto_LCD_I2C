#include "Wire.h"
#include "LiquidCrystal_I2C.h"

LiquidCrystal_I2C lcd(0x27, 16, 2);

void setup() {
   lcd.init();
   lcd.backlight();
}

void loop() {

   lcd.setCursor(1, 0);
   lcd.print("ABONNE-TOI !");
  
   delay(300);
}