#include <LiquidCrystal.h>

#define RS     12
#define RW     11
#define ENABLE 10
#define D4     5
#define D5     4
#define D6     3
#define D7     2


LiquidCrystal lcd(RS, RW, ENABLE, D4, D5, D6, D7);

byte heart[8] = {
  0b00000,
  0b01010,
  0b11111,
  0b11111,
  0b11111,
  0b01110,
  0b00100,
  0b00000
};

void setup()
{
  lcd.createChar(1, heart);
  lcd.begin(16, 2);
  lcd.setCursor(0, 0);
  lcd.write(1);
  lcd.write(1);
  lcd.write(1);
  lcd.print("  Te amo  ");
  lcd.write(1);
  lcd.write(1);
  lcd.write(1);
  lcd.setCursor(1, 1);
  lcd.print("Camila Stadnik");
}

void loop() { }


