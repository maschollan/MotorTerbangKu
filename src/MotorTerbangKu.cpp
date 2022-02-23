#include "MotorTerbangKu.h"

byte pin_a;
byte pin_b;
byte pin_z;

void beginMotor(byte pina, byte pinb, byte pinz) {
    pin_a = pina;
    pin_b = pinb;
    pin_z = pinz;
  pinMode(pin_a, OUTPUT);
  pinMode(pin_b, OUTPUT);
  pinMode(pin_z, OUTPUT);
  digitalWrite(pin_a, LOW);
  digitalWrite(pin_b, LOW);
  digitalWrite(pin_z, LOW);
}

void runToUp() {
  digitalWrite(pin_a, HIGH);
  digitalWrite(pin_b, LOW);
}

void runToDown() {
  digitalWrite(pin_a, LOW);
  digitalWrite(pin_b, HIGH);
}

void setPWM(int pwm) {
  analogWrite(pin_z, pwm);
}