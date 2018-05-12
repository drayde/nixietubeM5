
#include <M5Stack.h>

extern const unsigned char d0[], d1[], d2[], d3[], d4[], d5[], d6[], d7[], d8[], d9[];
extern const unsigned long d0len, d1len, d2len, d3len, d4len, d5len, d6len, d7len, d8len, d9len;

int number = 0;

void setup() 
{
  M5.begin();
  M5.Lcd.fillScreen(TFT_BLACK);
  M5.Lcd.setBrightness(255);
}

void loop() 
{
  if (number>99)
    number = 0;
    
  showNumber(number);
  delay(1000);

  number++;
}

void showNumber(byte number)
{
  byte d1 = number / 10;
  byte d2 = number % 10;
  showDigit(d1, 14);
  showDigit(d2, 160);
}

void showDigit(byte digit, uint16_t xpos)
{
  switch (digit)
  {
    case 0: M5.Lcd.drawJpg(d0, d0len, xpos, 0); return;
    case 1: M5.Lcd.drawJpg(d1, d1len, xpos, 0); return;
    case 2: M5.Lcd.drawJpg(d2, d2len, xpos, 0); return;
    case 3: M5.Lcd.drawJpg(d3, d3len, xpos, 0); return;
    case 4: M5.Lcd.drawJpg(d4, d4len, xpos, 0); return;
    case 5: M5.Lcd.drawJpg(d5, d5len, xpos, 0); return;
    case 6: M5.Lcd.drawJpg(d6, d6len, xpos, 0); return;
    case 7: M5.Lcd.drawJpg(d7, d7len, xpos, 0); return;
    case 8: M5.Lcd.drawJpg(d8, d8len, xpos, 0); return;
    case 9: M5.Lcd.drawJpg(d9, d9len, xpos, 0); return;
  }
}

