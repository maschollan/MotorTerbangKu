#ifndef __MotorTerbangKu_h
#define __MotorTerbangKu_h

#include <Arduino.h>

#define MAX_PWM 255
#define MIN_PWM 0
#define MOTOR_IS_START 1
#define MOTOR_IS_STOP 0
#define MOTOR_FLY_UP 0
#define MOTOR_FLY_DOWN 1
#define MOTOR_FLY_RIGHT 2
#define MOTOR_FLY_LEFT 3

/*
* beginMotor()
*
* ini digunakan untuk menginisialisasi motor terbangku
*/
void beginMotor(byte pina, byte pinb, byte pinz);


/*
* runToUp()
*
* ini digunakan untuk motor terbang ke atas
*/
void runToUp();

/*
* runToDown()
*
* ini digunakan untuk motor terbang ke bawah
*/
void runToDown();

/*
* setPWM(int pwm)
*
* ini digunakan untuk mengatur pwm motor terbangku
*/
void setPWM(int pwm);

#endif