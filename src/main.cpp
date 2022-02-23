#include "main.h"
#include <MotorTerbangKu.h>

void setup() {
  beginMotor(PIN_M1, PIN_M2, PIN_M3);
  setPWM(MIN_PWM);
}

void loop() {
  // Motor terbang ke atas secara perlahan
  runToUp();
  for(int i = 0; i < MAX_PWM; i++) {
    setPWM(i);
    delay(10);
  }

  // Motor terbang ke bawah secara perlahan
  runToDown();
  for(int i = MAX_PWM; i > 0; i--) {
    setPWM(i);
    delay(10);
  }
}