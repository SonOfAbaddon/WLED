# 1 "C:\\Users\\Abaddon\\AppData\\Local\\Temp\\tmpby6jkwdo"
#include <Arduino.h>
# 1 "F:/downloads/ESP Programmierung/WLED/WLED/wled00/wled00.ino"
# 13 "F:/downloads/ESP Programmierung/WLED/WLED/wled00/wled00.ino"
#include "wled.h"
void setup();
void loop();
#line 15 "F:/downloads/ESP Programmierung/WLED/WLED/wled00/wled00.ino"
void setup() {
  WLED::instance().setup();
}

void loop() {
  WLED::instance().loop();
}