
#include <Wire.h> 
  
#include <LiquidCrystal_PCF8574.h>

LiquidCrystal_PCF8574 lcd(0x27);

byte smiley[8]={
  B00000,
  B10001,
   B00000, B00000, B10001, B0110, B00000,
};
void setup()
{int error;

  Serial.begin(115200);
  Serial.println("LCD...");

  while (! Serial);

  Serial.println("Dose: check for LCD");

  // See http://playground.arduino.cc/Main/I2cScanner
  Wire.begin();
  Wire.beginTransmission(0x27);
  error = Wire.endTransmission();
  Serial.print("Error: ");
  Serial.print(error);

  if (error == 0) {
    Serial.println(": LCD found.");

  } else {
    Serial.println(": LCD not found.");
  } // if

  lcd.begin(16, 2); // initialize the lcd
  
 
  lcd.createChar(1, smiley);
 lcd.print("Hi");
  
  lcd.write(byte(0));
  
}

void loop()
{
}
