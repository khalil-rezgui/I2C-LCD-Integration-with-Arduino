#include <Wire.h>
#include <LCD.h>
#include <LiquidCrystal_I2C.h>
LiquidCrystal_I2C lcd(0x20 ,2,1,0,4,5,6,7,3,POSITIVE);  //I2C address for PCF8574 in proteus
      
    void setup()
    { 
                      // set up the LCD's number of columns and rows
     lcd.begin(20, 4);                    
     lcd.backlight();
                     // set the cursor to column 0, line 1
                    // (note: line 1 is the second row, since counting begins with 0)
     lcd.setCursor(1,0);
     lcd.print("KHALIL REZGUI");
     lcd.setCursor(1,1);
     lcd.print("Engineering Student");
     lcd.setCursor(1,2);
     lcd.print("LCD 20x4 I2C TEST");
     lcd.setCursor(1,3);
     lcd.print("....................");   
    }
    void loop()
    {
      {delay(2000);
      lcd.clear();
      delay(1000);
      lcd.setCursor(1,0);
      lcd.print("Line 1");
      delay(500);
      lcd.setCursor(1,1);
      lcd.print("Line 2");
      delay(500);
      lcd.setCursor(1,2);
      lcd.print("Line 3");
      delay(500);
      lcd.setCursor(1,3);
      lcd.print("Line 4");
      delay(1000);
      lcd.setCursor(1,0);
      lcd.print("Line 1 TEST OK  ");
      lcd.setCursor(1,1);
      lcd.print("Line 2 TEST OK  ");
      lcd.setCursor(1,2);
      lcd.print("Line 3 TEST OK  ");
      lcd.setCursor(1,3);
      lcd.print("Line 4 TEST OK  ");
      delay(1000);
    }
    }
