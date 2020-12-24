#include <Servo.h>

#define IN_1 A0
#define IN_2 A1
#define IN_3 A2
#define IN_4 A3

#define OUT_1 0
#define OUT_2 1
#define OUT_3 2
#define OUT_4 3

#define MIN_LIGHT 80

void setup()
{
  pinMode(IN_1, INPUT);
  pinMode(IN_2, INPUT);
  pinMode(IN_3, INPUT);
  pinMode(IN_4, INPUT);

  pinMode(OUT_1, OUTPUT);
  pinMode(OUT_2, OUTPUT);
  pinMode(OUT_3, OUTPUT);
  pinMode(OUT_4, OUTPUT);
}

void loop()
{
  digitalWrite(OUT_1, analogRead(IN_1) <= MIN_LIGHT ? HIGH : LOW);
  digitalWrite(OUT_2, analogRead(IN_2) <= MIN_LIGHT ? HIGH : LOW);
  digitalWrite(OUT_3, analogRead(IN_3) <= MIN_LIGHT ? HIGH : LOW);
  digitalWrite(OUT_4, analogRead(IN_4) <= MIN_LIGHT ? HIGH : LOW);
}
