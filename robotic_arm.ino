#define S0 4
#define S1 5
#define S2 6
#define S3 7
#define sensorOut 8

#include <Servo.h>

Servo myservo;
Servo myservo2;
Servo myservo3;

int redPW = 0;
int greenPW = 0;
int bluePW = 0;

void setup() {
  myservo.attach(2);
  myservo2.attach(12);
  myservo3.attach(3);

  pinMode(S0, OUTPUT);
  pinMode(S1, OUTPUT);
  pinMode(S2, OUTPUT);
  pinMode(S3, OUTPUT);
  pinMode(9, INPUT);

  digitalWrite(S0, HIGH);
  digitalWrite(S1, LOW);

  pinMode(sensorOut, INPUT);
  pinMode(13, OUTPUT);
  digitalWrite(13, LOW);

  Serial.begin(9600);

  myservo.write(180);
  delay(2000);
  myservo2.write(60);
  delay(2000);
  myservo3.write(0);
  delay(2000);
}

void loop() {
  redPW = getRedPW();
  delay(200);
  greenPW = getGreenPW();
  delay(200);
  bluePW = getBluePW();
  delay(200);

  if ((bluePW < greenPW) && (bluePW < redPW)) {
    moveBlue();
  } else if ((greenPW < bluePW) && (greenPW < redPW)) {
    moveGreen();
  } else if ((redPW < bluePW) && (redPW < greenPW)) {
    moveRed();
  }
}

int getRedPW() {
  digitalWrite(S2, LOW);
  digitalWrite(S3, LOW);
  return pulseIn(sensorOut, LOW);
}

int getGreenPW() {
  digitalWrite(S2, HIGH);
  digitalWrite(S3, HIGH);
  return pulseIn(sensorOut, LOW);
}

int getBluePW() {
  digitalWrite(S2, LOW);
  digitalWrite(S3, HIGH);
  return pulseIn(sensorOut, LOW);
}

void moveBlue() {
  myservo3.write(0);
  delay(2000);
  myservo.write(90);
  delay(2000);
}

void moveGreen() {
  myservo3.write(0);
  delay(2000);
  myservo.write(180);
  delay(2000);
}

void moveRed() {
  myservo3.write(0);
  delay(2000);
  myservo.write(90);
  delay(2000);
}
