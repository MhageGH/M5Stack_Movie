#include <M5Stack.h>

uint16_t picture[150][200];

void setup() {
  M5.begin();
  File file = SD.open("/Movie.dat");
  while (file.available()) {
    file.read((uint8_t*)picture, 150 * 200 * 2);
    M5.Lcd.drawBitmap(60, 45, 200, 150, (uint8_t*)picture);
    delay(20);
  }
}

void loop() {
}
