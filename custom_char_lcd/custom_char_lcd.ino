/*
LCD 16x2 dengan karakter kustom.
Diadaptasi dari http://www.arduino.cc/en/Tutorial/LiquidCrystal
& https://www.arduino.cc/en/Reference/LiquidCrystalCreateChar

Pin Out:
 * LCD RS pin to digital pin 12
 * LCD Enable pin to digital pin 11
 * LCD D4 pin to digital pin 5
 * LCD D5 pin to digital pin 4
 * LCD D6 pin to digital pin 3
 * LCD D7 pin to digital pin 2
 * LCD R/W pin to ground
 * 10K resistor:
 * ends to +5V and ground
 * wiper to LCD VO pin (pin 3)
 * Anode to 3.3V
 * Chatode to GND
*/

// Menyertakan pustaka LCD
#include <LiquidCrystal.h>

// membuat objek LCD bernama lcd dengan pengaturan pin
// sebagaimana pada keterangan
LiquidCrystal lcd(12, 11, 5, 4, 3, 2);

// membuat array byte dari karakter kustom
byte smiley[8] = {
  B00000,
  B10001,
  B00000,
  B00000,
  B10001,
  B01110,
  B00000,
};

void setup()
{
  //  membuat karakter kustom
  lcd.createChar(0, smiley);
  // mengaktifkan LCD dengan 16 kolom 2 baris
  lcd.begin(16, 2);
  
  // kolom pertama dan baris pertama pesan hello world
  lcd.setCursor(0, 0);
  lcd.print("hello, world!");
  
  // kolom pertama dan baris kedua smiley yg dibuat
  lcd.setCursor(0, 1);
  lcd.write(byte(0));
}

void loop()
{
}
